// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Struct/TextStruct.h"
#include "DataManager.generated.h"

UCLASS()
class SHADERSHOOT_API ADataManager : public AActor
{
	GENERATED_BODY()
	
public:	
	UFUNCTION(BlueprintCallable)
	void Setup();

	UFUNCTION(BlueprintCallable)
	TArray<FString> GetTableText(EReasionState region, FString textID);

private:
	void SetupTextDB();

	TArray<FTextStruct*> TextParamList;

};
