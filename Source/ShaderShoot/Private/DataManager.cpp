// Fill out your copyright notice in the Description page of Project Settings.


#include "DataManager.h"

// Sets default values
void ADataManager::Initialize()
{
    // Data Table�A�Z�b�g���擾
    UDataTable* LoadedDataTable = Cast<UDataTable>(StaticLoadObject(UDataTable::StaticClass(), nullptr, TEXT("/Game/StylishCombatKit/Struct/TextTable/DT_MenuText.DT_MenuText")));

    if (LoadedDataTable)
    {
        // DataTable�̑S�s���擾
        static const FString ContextString(TEXT("GENERAL"));
        TArray<FTextStruct*> AllRows;
        LoadedDataTable->GetAllRows<FTextStruct>(ContextString, AllRows);
        MenuTextParamList.Append(AllRows);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to load DataTable in BeginPlay! Check the path or DataTable settings."));
    }

}

