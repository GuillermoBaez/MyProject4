// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "MyProject4.h"
#include "MyProject4GameMode.h"
#include "MyProject4Character.h"

AMyProject4GameMode::AMyProject4GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
