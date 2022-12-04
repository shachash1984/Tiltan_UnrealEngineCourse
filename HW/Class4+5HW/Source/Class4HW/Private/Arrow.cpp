// Fill out your copyright notice in the Description page of Project Settings.


#include "Arrow.h"
#include "Class4HW\Class4HW.h"

// Sets default values
AArrow::AArrow()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (!ArrowHead)
	{
		ArrowHead = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Head"));

		static ConstructorHelpers::FObjectFinder<UStaticMesh> ArrowHeadMesh(TEXT("'/Game/Meshes/SM_Cone.SM_Cone'"));

		if (ArrowHeadMesh.Succeeded())
		{
			ArrowHead->SetStaticMesh(ArrowHeadMesh.Object);
		}


	}

	RootComponent = ArrowHead;
	ArrowHead->SetWorldLocation(FVector::Zero());
	ArrowHead->SetWorldScale3D(FVector(0.1f, 0.1f, 0.2f));
	ArrowHead->SetSimulatePhysics(true);

	if (!ArrowBody)
	{
		ArrowBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));

		static ConstructorHelpers::FObjectFinder<UStaticMesh> ArrowBodyMesh(TEXT("'/Game/Meshes/SM_Cylinder.SM_Cylinder'"));

		if (ArrowBodyMesh.Succeeded())
		{
			ArrowBody->SetStaticMesh(ArrowBodyMesh.Object);
		}

	}

	ArrowBody->SetupAttachment(ArrowHead);
	ArrowBody->SetRelativeLocation(FVector(0.0f, 0.0f, -200.0f));
	ArrowBody->SetWorldScale3D(FVector(0.3f, 0.3f, 2.0f));
	ArrowBody->SetSimulatePhysics(false);

	static ConstructorHelpers::FObjectFinder<UMaterial> ArrowMaterial(TEXT("'/Game/Materials/M_Moss.M_Moss'"));
	if (ArrowMaterial.Succeeded())
	{
		ArrowHead->SetMaterial(0, ArrowMaterial.Object);
		ArrowBody->SetMaterial(0, ArrowMaterial.Object);
	}

}

// Called when the game starts or when spawned
void AArrow::BeginPlay()
{
	Super::BeginPlay();
	this->SetLifeSpan(5);
}

// Called every frame
void AArrow::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AArrow::Launch(FVector Direction, FRotator Rotation, float Speed)
{
	FRotator wantedRotation = FRotator(Rotation.Pitch + 270, Rotation.Yaw, 0);
	ArrowHead->SetWorldRotation(wantedRotation);
	ArrowHead->AddImpulse(Direction * Speed, NAME_None, true);
}

