// Fill out your copyright notice in the Description page of Project Settings.

#include "ATurret.h"

#include "Kismet/GameplayStatics.h"
#define print(text) if(GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5f, FColor::Red, text)

bool AATurret::Die(float Health)
{
	if (Health <= 0)
	{
		return true;
	}
	return false;
}

// Sets default values
AATurret::AATurret()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	/*
	MeshATurret = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	MeshATurret->SetupAttachment(GetRootComponent());
	MeshATurret->OnComponentHit.AddDynamic(this, &AATurret::OnComponentHit);
	*/

	TurretMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	TurretMesh->OnComponentHit.AddDynamic(this, &AATurret::OnComponentHit);

	RootComponent = TurretMesh;

	Health = 100.f;
	KillScore = 20.f;
}

void AATurret::OnComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	//print("Hit");
	//Health -= 10.f;
	
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL))
	{
		Health -= 10.f;
		UE_LOG(LogTemp, Warning, TEXT("Health is - %f"), Health);
		
		if (Die(Health))
		{
			this->Destroy();
			print("Died");
		}
	}

	
	
	
}

void AATurret::Destroyed()
{
	Super::Destroyed();
	if (OnTurretDestroy.IsBound())
	{
		OnTurretDestroy.Broadcast();
	}
}


// Called when the game starts or when spawned
void AATurret::BeginPlay()
{
	Super::BeginPlay();

}


// Called every frame
void AATurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

