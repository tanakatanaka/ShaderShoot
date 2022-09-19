// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShaderShootGameMode.h"
#include "ShaderShootCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShaderShootGameMode::AShaderShootGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
