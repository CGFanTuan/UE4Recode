// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "startupGameMode.h"
#include "startupCharacter.h"
#include "UObject/ConstructorHelpers.h"

AstartupGameMode::AstartupGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
