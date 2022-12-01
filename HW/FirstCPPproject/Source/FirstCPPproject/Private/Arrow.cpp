// Fill out your copyright notice in the Description page of Project Settings.


#include "Arrow.h"

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

		RootComponent = ArrowHead;
		ArrowHead->SetRelativeLocation(FVector::ZeroVector);
		ArrowHead->SetRelativeScale3D(FVector(0.1f,0.1f,0.2f));
	}
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
	ArrowBody->SetRelativeLocation(FVector(0.0f,0.0f,-100.0f));
	ArrowBody->SetRelativeScale3D(FVector(0.3f, 0.3f, 2.0f));
	ArrowHead->SetSimulatePhysics(true);

	static ConstructorHelpers::FObjectFinder<UMaterial> Gold(TEXT("'/Game/Materials/M_Gold.M_Gold'"));
	static ConstructorHelpers::FObjectFinder<UMaterial> Wood(TEXT("'/Game/Materials/M_Wood.M_Wood'"));
		if (Gold.Succeeded() && Wood.Succeeded())
		{
			ArrowHead->SetMaterial(0, Gold.Object);
			ArrowBody->SetMaterial(0, Wood.Object);
		}
}

// Called when the game starts or when spawned
void AArrow::BeginPlay()
{
	Super::BeginPlay();
	this->SetLifeSpan(5.0f);
}

// Called every frame
void AArrow::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AArrow::Launch(FVector Direction, FRotator Rotation, float Speed) 
{
	const FRotator WantedRotation = FRotator(Rotation.Pitch + 270, Rotation.Yaw, 0.0);
	ArrowHead->SetWorldRotation(WantedRotation);
	ArrowHead->AddImpulse(Direction * Speed, NAME_None, true);
}

