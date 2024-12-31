// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerInfo.h"

// Sets default values
APlayerInfo::APlayerInfo()
{
	PrimaryActorTick.bCanEverTick = true;
}

void APlayerInfo::SetupBaseParam()
{
	_maxhp = 100;
	_maxsp = 100;

	_hp = _maxhp;
	_sp = _maxsp;
}

bool APlayerInfo::CheckSP(float point)
{
	if (_sp + point < 0)
	{
		return false;
	}

	return true;
}

bool APlayerInfo::CheckHP(float point)
{
	if (_hp + point < 0)
	{
		return false;
	}

	return true;
}



void APlayerInfo::UpdateHP(float hp)
{
	_hp = hp;
}

void APlayerInfo::UpdateSp(float sp)
{
	_sp = sp;
}

float APlayerInfo::GetHP()
{
	return _hp;
}

float APlayerInfo::GetSP()
{
	return _sp;
}



