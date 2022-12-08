// Fill out your copyright notice in the Description page of Project Settings.


#include "Arrow2.h"

// Sets default values
AArrow2::AArrow2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (!Arrow)
	{
		Arrow = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Head"));

		static ConstructorHelpers::FObjectFinder<UStaticMesh> ArrowMesh(TEXT("'/Game/Meshes/SM_Lamp.SM_Lamp'"));

		if (ArrowMesh.Succeeded())
		{
			Arrow->SetStaticMesh(ArrowMesh.Object);
		}


	}

	RootComponent = Arrow;
	Arrow->SetWorldLocation(FVector::Zero());
	Arrow->SetWorldScale3D(FVector(0.1f, 0.1f, 0.2f));
	Arrow->SetSimulatePhysics(true);

}

// Called when the game starts or when spawned
void AArrow2::BeginPlay()
{
	Super::BeginPlay();
	this->SetLifeSpan(5);
}

// Called every frame
void AArrow2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AArrow2::Launch(FVector Direction, FRotator Rotation, float Speed)
{
	FRotator wantedRotation = FRotator(Rotation.Pitch + 270, Rotation.Yaw, 0);
	Arrow->SetWorldRotation(wantedRotation);
	Arrow->AddImpulse(Direction * Speed, NAME_None, true);
}

