// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemySpawner.h"

// Sets default values
AEnemySpawner::AEnemySpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}


bool AEnemySpawner::IsSpawnTime(float deltatime)
{
	if (_totalTime <= 0)
	{
		_startTime = deltatime;
		_totalTime = _startTime;
		return false;
	}

	_totalTime = deltatime + _totalTime;

	if (_totalTime > 10.0)
	{
		_totalTime = 0;
		return true;
	}

	return false;
}


