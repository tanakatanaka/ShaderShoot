// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "BreakStaticMeshActor.generated.h"

/**
 * 
 */
UCLASS()
class SHADERSHOOT_API ABreakStaticMeshActor : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:
	UPROPERTY(VisibleAnywhere, Category = "Stats")
		void Initialize();

	UPROPERTY(VisibleAnywhere, Category = "Stats")
		int Health;



};
