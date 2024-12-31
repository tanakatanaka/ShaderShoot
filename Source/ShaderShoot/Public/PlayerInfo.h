// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayerInfo.generated.h"

UCLASS()
class SHADERSHOOT_API APlayerInfo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlayerInfo();

	UFUNCTION(BlueprintCallable)
	void SetupBaseParam();

	UFUNCTION(BlueprintCallable)
	void UpdateHP(float hp);
	UFUNCTION(BlueprintCallable)
	void UpdateSp(float sp);

	UFUNCTION(BlueprintCallable)
	float GetHP();
	UFUNCTION(BlueprintCallable)
	float GetSP();

	UFUNCTION(BlueprintCallable)
	bool CheckSP(float point);

	UFUNCTION(BlueprintCallable)
	bool CheckHP(float point);

private:
	float _hp;
	float _sp;
	float _maxhp;
	float _maxsp;

};
