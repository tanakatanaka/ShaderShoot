// Fill out your copyright notice in the Description page of Project Settings.


#include "DataManager.h"
#include "Engine/DataTable.h"

// Sets default values
void ADataManager::Setup()
{
    SetupTextDB();
}

void ADataManager::SetupTextDB()
{

    // Data Tableアセットを取得
    UDataTable* LoadedDataTable = Cast<UDataTable>(StaticLoadObject(UDataTable::StaticClass(), nullptr, TEXT("/Game/ThirdPerson/DataBase/DT_Text.DT_Text")));

    if (LoadedDataTable)
    {
        // DataTableの全行を取得
        static const FString ContextString(TEXT("GENERAL"));
        TArray<FTextStruct*> AllRows;
        LoadedDataTable->GetAllRows<FTextStruct>(ContextString, AllRows);
        TextParamList.Append(AllRows);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to load DataTable in BeginPlay! Check the path or DataTable settings."));
    }
}


FString ADataManager::GetTableText(EReasionState region, FString textID)
{
    FTextStruct* tmpTextParam = nullptr;

    for (FTextStruct* textParam : TextParamList)
    {
        if (textParam->TextID == textID)
        {
            tmpTextParam = textParam;
            break;
        }
    }

    if (tmpTextParam == nullptr)
    {
        return "";
    }

    switch (region)
    {
    case EReasionState::JP:
        return tmpTextParam->JPText;
        break;
    case EReasionState::EN:
        return tmpTextParam->ENText;
        break;
    }

    return "";
}

