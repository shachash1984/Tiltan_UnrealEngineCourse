// Fill out your copyright notice in the Description page of Project Settings.


#include "Arrow.h"
#include "UEHW4\UEHW4.h"

// Sets default values
AArrow::AArrow()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (!ArrowHead)
	{
		ArrowHead = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ArrowHead"));

		static ConstructorHelpers::FObjectFinder<UStaticMesh> ArrowHeadMesh(TEXT("'/Game/Meshed/SM_Cone.SM_Cone'"));

		if (ArrowHeadMesh.Succeeded())
		{
			ArrowHead->SetStaticMesh(ArrowHeadMesh.Object);
		}
	}
		RootComponent = ArrowHead;
		ArrowHead->SetRelativeLocation(FVector::ZeroVector);
		ArrowHead->SetWorldScale3D(FVector(0.1f, 0.1f, 0.2f));
		ArrowHead->SetSimulatePhysics(true);
	
	if (!ArrowBody)
	{
		ArrowBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ArrowBody"));

		static ConstructorHelpers::FObjectFinder<UStaticMesh> ArrowBodyMesh(TEXT("'/Game/Meshed/SM_Cylinder.SM_Cylinder'"));

		if (ArrowBodyMesh.Succeeded())
		{
			ArrowBody->SetStaticMesh(ArrowBodyMesh.Object);
		}
	}
	ArrowBody->SetupAttachment(ArrowHead);
	ArrowBody->SetRelativeLocation(FVector(0.0f, 0.0f, -30.0f));
	ArrowBody->SetWorldScale3D(FVector(0.3f, 0.3f, 0.3f));
	ArrowBody->SetSimulatePhysics(false);
}

// Called when the game starts or when spawned
void AArrow::BeginPlay()
{
	Super::BeginPlay();
	this->SetLifeSpan(5.0f);
}

void AArrow::OnCollision(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	UE_LOG(LogTemp, Warning, TEXT("Collision"));
}

// Called every frame
void AArrow::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AArrow::Launch(FVector Direction, FRotator Rotation, float Speed)
{
	const FRotator WantedRotation = FRotator(Rotation.Pitch = 270, Rotation.Yaw, 0.0);
	ArrowHead->SetWorldRotation(WantedRotation);
	ArrowHead->AddImpulse(Direction * Speed, NAME_None, true);

	UE_LOG(logHW4, Log, TEXT("PewPew"));
}

