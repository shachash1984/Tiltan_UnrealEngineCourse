// Fill out your copyright notice in the Description page of Project Settings.


#include "ThrowingRock.h"

// Sets default values
AThrowingRock::AThrowingRock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (!MeshComponent)
	{
		MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Rock"));

		static ConstructorHelpers::FObjectFinder<UStaticMesh> rock(TEXT("'/Game/Meshes/SM_Rock.SM_Rock'"));

		if (rock.Succeeded())
		{
			MeshComponent->SetStaticMesh(rock.Object);
		}

		RootComponent = MeshComponent;
		MeshComponent->SetRelativeLocation(FVector::ZeroVector);
		MeshComponent->SetRelativeScale3D(FVector(0.1f, 0.1f, 0.1f));
	}
	
	MeshComponent->SetSimulatePhysics(true);
}

// Called when the game starts or when spawned
void AThrowingRock::BeginPlay()
{
	Super::BeginPlay();
	this->SetLifeSpan(5.0f);
}

// Called every frame
void AThrowingRock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AThrowingRock::Launch(FVector Direction, FRotator Rotation, float Speed)
{
	const FRotator WantedRotation = FRotator(Rotation.Pitch + 270, Rotation.Yaw, 0.0);
	MeshComponent->SetWorldRotation(WantedRotation);
	MeshComponent->AddImpulse(Direction * Speed, NAME_None, true);
}

