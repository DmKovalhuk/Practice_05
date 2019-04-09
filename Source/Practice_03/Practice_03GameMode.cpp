// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Practice_03GameMode.h"
#include "Practice_03HUD.h"
#include "Practice_03Character.h"
#include "UObject/ConstructorHelpers.h"
#include "ATurret.h"
#include "Kismet/GameplayStatics.h"


void APractice_03GameMode::BeginPlay()
{
	TArray<AActor *> turretActors;
	UGameplayStatics::GetAllActorsOfClass(this, AATurret::StaticClass(), turretActors);
	for (AActor * turretActor : turretActors)
	{
		AATurret * turret = Cast<AATurret>(turretActor);
		if (turret)
		{
			turret->OnTurretDestroy.AddUFunction(this, "OnTurretDestroy");
		}
	}

}

void APractice_03GameMode::OnTurretDestroy()
{
	Score += 10;
	UE_LOG(LogTemp, Warning, TEXT("Score is - %f"), Score);
	if (UpdateHUD.IsBound())
	{
		UpdateHUD.Broadcast();
	}
}

APractice_03GameMode::APractice_03GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APractice_03HUD::StaticClass();
}
