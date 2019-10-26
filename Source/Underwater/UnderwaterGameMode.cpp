// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "UnderwaterGameMode.h"
#include "UnderwaterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnderwaterGameMode::AUnderwaterGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
