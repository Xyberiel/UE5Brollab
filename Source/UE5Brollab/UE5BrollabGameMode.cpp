// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5BrollabGameMode.h"
#include "UE5BrollabCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5BrollabGameMode::AUE5BrollabGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
