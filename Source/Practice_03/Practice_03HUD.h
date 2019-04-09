// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UserWidget.h"
#include "Practice_03HUD.generated.h"

UCLASS()
class APractice_03HUD : public AHUD
{
	GENERATED_BODY()

public:
	APractice_03HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

	virtual void BeginPlay() override;
	
	
private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

	UPROPERTY(EditAnywhere, Category = "Widgets")
	TSubclassOf<UUserWidget> wMainWidget;

	UUserWidget* ScreenWidget;

};

