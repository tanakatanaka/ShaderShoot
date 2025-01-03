// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerInfo.h"

// Sets default values
APlayerInfo::APlayerInfo()
{
	PrimaryActorTick.bCanEverTick = true;
	_startTime = 0;
	_totalTime = 0;
}

void APlayerInfo::SetupBaseParam()
{
	_maxhp = 100;
	_maxsp = 100;

	_hp = _maxhp;
	_sp = _maxsp;
}

void APlayerInfo::AutoRecoverSP(float deltatime)
{
	if (_hp <= 0)
	{
		return;
	}

	if (_totalTime <= 0)
	{
		_startTime = deltatime;
		_totalTime = _startTime;
		return;
	}

	_totalTime = deltatime + _totalTime;

	bool recoverFlag = false;

	if (_totalTime > 10.0)
	{
		_totalTime = 0;
		recoverFlag = true;
	}

	if (!recoverFlag)
	{
		return;
	}

	if (_sp + 10 > _maxsp)
	{
		UpdateSp(_maxsp);
	}
	else
	{
		UpdateSp(_sp + 10);
	}



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



