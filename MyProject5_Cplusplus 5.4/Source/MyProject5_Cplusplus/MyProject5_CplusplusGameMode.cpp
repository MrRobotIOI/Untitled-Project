// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyProject5_CplusplusGameMode.h"
#include "MyProject5_CplusplusCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyProject5_CplusplusGameMode::AMyProject5_CplusplusGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
