// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "TextBlock.h"
#include "CPP_ScoreWidget.generated.h"

/**
 * 
 */
UCLASS()
class PRACTICE_03_API UCPP_ScoreWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:

	virtual void NativeConstruct() override;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	UTextBlock* ScoreText;
	
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	UTextBlock* AmmoText;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	UTextBlock* MessageText;

	UFUNCTION()
		void UpdateScreenHud();

	UFUNCTION()
	float GetScore();
	
	/*
	UFUNCTION()
	float GetAmmo(ACharacter* OtherActor);

	UFUNCTION()
	void SetAmmoText(float AmmoValue);
	
	*/
	UFUNCTION()
	void SetScoreText(float ScoreValue);
	
	UFUNCTION()
	void DieMessage();

	
};
