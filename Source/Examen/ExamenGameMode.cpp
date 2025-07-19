// Copyright Epic Games, Inc. All Rights Reserved.

#include "ExamenGameMode.h"
#include "ExamenCharacter.h"
#include "UObject/ConstructorHelpers.h"

AExamenGameMode::AExamenGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
