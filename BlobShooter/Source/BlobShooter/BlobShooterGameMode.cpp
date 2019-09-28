// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "BlobShooterGameMode.h"
#include "BlobShooterPawn.h"

ABlobShooterGameMode::ABlobShooterGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ABlobShooterPawn::StaticClass();
}

