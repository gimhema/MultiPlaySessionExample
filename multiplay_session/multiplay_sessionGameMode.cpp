// Copyright Epic Games, Inc. All Rights Reserved.

#include "multiplay_sessionGameMode.h"
#include "multiplay_sessionCharacter.h"
#include "UObject/ConstructorHelpers.h"

Amultiplay_sessionGameMode::Amultiplay_sessionGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
