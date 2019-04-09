// Fill out your copyright notice in the Description page of Project Settings.

#include "CPP_ScoreWidget.h"
#include "Practice_03GameMode.h"
#include "Practice_03Character.h" 
#include "ATurret.h"
#include "Kismet/GameplayStatics.h"


void UCPP_ScoreWidget::NativeConstruct()
{
	UpdateScreenHud();
		
	APractice_03GameMode* GMode = Cast<APractice_03GameMode>(GetWorld()->GetAuthGameMode());
		if (GMode)
	{
		GMode->UpdateHUD.AddUFunction(this, "UpdateScreenHud");
	}
	
	if (MessageText)
	{
		MessageText->SetText(FText::FromString("Turret destroy"));
		MessageText->SetVisibility(ESlateVisibility::Hidden);
	}
}

float UCPP_ScoreWidget::GetScore()
{
	APractice_03GameMode* GMode = Cast<APractice_03GameMode>(GetWorld()->GetAuthGameMode());
	if (GMode)
	{
		return GMode->GetScore();
	}
	
	return 0.0f;
}
/*
float UCPP_ScoreWidget::GetAmmo(ACharacter* OtherActor)
{
	APractice_03Character* Char = Cast<APractice_03Character>(OtherActor);
	if (Char)
	{
		return Char->GetAmmo();
	}
	return 0.0f;
}
*/
void UCPP_ScoreWidget::SetScoreText(float ScoreValue)
{
	if (ScoreText)
	{
		ScoreText->SetText(FText::FromString("Total score: " + FString::FromInt(ScoreValue)));
	}
}
/*
void UCPP_ScoreWidget::SetAmmoText(float AmmoValue)
{
	if (AmmoText)
	{
		AmmoText->SetText(FText::FromString("Ammo: " + FString::FromInt(AmmoValue)));
	}
}
*/
void UCPP_ScoreWidget::DieMessage()
{
	if (MessageText)
	{
		MessageText->SetVisibility(ESlateVisibility::Visible);
		FTimerHandle handle;
		GetWorld()->GetTimerManager().SetTimer(handle, [this] {
			MessageText->SetVisibility(ESlateVisibility::Hidden);
		}, 5, 1);

	}
}


void UCPP_ScoreWidget::UpdateScreenHud()
{
	SetScoreText(GetScore());
	//SetAmmoText(GetAmmo(APractice_03Character));
	DieMessage();
}


