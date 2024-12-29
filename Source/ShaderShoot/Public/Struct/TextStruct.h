// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TextStruct.generated.h"
/**
 * 
 */

USTRUCT(BlueprintType)
struct FTextStruct : public FTableRowBase
{
	GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TextStruct")
        int32 ID;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TextStruct")
        FString TextID;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TextStruct")
        FString JPText;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TextStruct")
        FString ENText;
};