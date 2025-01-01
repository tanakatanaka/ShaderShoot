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

bool APlayerInfo::CheckSP(int point)
{
	if (_sp + point < 0)
	{
		return false;
	}

	return true;
}

bool APlayerInfo::CheckHP(int point)
{
	if (_hp + point < 0)
	{
		return false;
	}

	return true;
}



