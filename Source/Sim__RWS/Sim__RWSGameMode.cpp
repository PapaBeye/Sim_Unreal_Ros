// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Sim__RWSGameMode.h"
#include "Sim__RWSCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASim__RWSGameMode::ASim__RWSGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
