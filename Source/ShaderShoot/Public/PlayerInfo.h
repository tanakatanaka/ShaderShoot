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
	FORCEINLINE void UpdateHP(int hp) { _hp = hp; }
	
	UFUNCTION(BlueprintCallable)
	FORCEINLINE void UpdateSp(int sp) { _sp = sp; }

	UFUNCTION(BlueprintCallable)
	FORCEINLINE  int GetHP() { return _hp;}

	UFUNCTION(BlueprintCallable)
	FORCEINLINE int GetSP() { return _sp; }

	UFUNCTION(BlueprintCallable)
	FORCEINLINE  int GetMaxHP() { return _maxhp; }

	UFUNCTION(BlueprintCallable)
	FORCEINLINE int GetMaxSP() { return _maxsp; }

	UFUNCTION(BlueprintCallable)
	bool CheckSP(int point);

	UFUNCTION(BlueprintCallable)
	bool CheckHP(int point);

private:
	int _hp;
	int _sp;
	int _maxhp;
	int _maxsp;

};
