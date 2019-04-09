// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "ATurret.generated.h"

DECLARE_EVENT(AATurret, FOnTurretDestroy);

UCLASS()
class PRACTICE_03_API AATurret : public AActor
{
	GENERATED_BODY()
	
private:
	UFUNCTION()
	bool Die(float Health);

public:	
	// Sets default values for this actor's properties
	AATurret();

	UPROPERTY(EditAnywhere, Category = "ASettingsTurret")
		float KillScore;

	UPROPERTY(EditAnywhere, Category = "ASettingsTurret")
		float Health;
	
	UPROPERTY(VisibleDefaultsOnly, Category = "ASettingsTurret")
		UStaticMeshComponent * TurretMesh;
	
	

protected:
	virtual void BeginPlay() override;
	virtual void Destroyed() override;
	
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FOnTurretDestroy OnTurretDestroy;
	
	UFUNCTION()
	void OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	
};
