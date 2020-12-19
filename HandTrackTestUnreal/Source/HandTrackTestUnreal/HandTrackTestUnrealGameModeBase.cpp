// Copyright Epic Games, Inc. All Rights Reserved.


#include "HandTrackTestUnrealGameModeBase.h"
#include <cstdio>
void AHandTrackTestUnrealGameModeBase::StartPlay()
{
	Super::StartPlay();
	printf("\a");
	check(GEngine != nullptr);

	// Display a debug message for five seconds. 
	// The -1 "Key" value argument prevents the message from being updated or refreshed.
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World, this is FPSGameMode!"));

}