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


TArray<FString> ADataManager::GetTableText(EReasionState region, FString textID)
{
    FTextStruct* tmpTextParam = nullptr;
    TArray<FString> tmpTextArray;

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
        tmpTextArray.Add("");
        tmpTextArray.Add("");
        return tmpTextArray;
    }


    switch (region)
    {
    case EReasionState::JP:
        tmpTextArray.Add(tmpTextParam->JPText);
        tmpTextArray.Add(tmpTextParam->JPText2);
        break;
        
    case EReasionState::EN:
         tmpTextArray.Add(tmpTextParam->ENText);
         tmpTextArray.Add(tmpTextParam->ENText2);
         break;
    }

    return tmpTextArray;
}

