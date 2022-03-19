// Copyright Epic Games, Inc. All Rights Reserved.

#include "spieleentGameMode.h"
#include "spieleentCharacter.h"
#include "UObject/ConstructorHelpers.h"

AspieleentGameMode::AspieleentGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
