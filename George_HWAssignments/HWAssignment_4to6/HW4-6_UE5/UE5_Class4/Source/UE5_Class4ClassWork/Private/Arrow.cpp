// Fill out your copyright notice in the Description page of Project Settings.


#include "Arrow.h"
#include "UE5_Class4ClassWork/UE5_Class4ClassWork.h"
#include <Target.h>


// Sets default values
AArrow::AArrow()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (!ArrowHead)
	{
		ArrowHead = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Head"));
		static ConstructorHelpers::FObjectFinder<UStaticMesh> ArrowHeadMesh(TEXT("StaticMesh'/Game/Meshes/Shape_Cone.Shape_Cone'"));

		if (ArrowHeadMesh.Succeeded())
		{
			ArrowHead->SetStaticMesh(ArrowHeadMesh.Object);
		}

	}

	RootComponent = ArrowHead;
	ArrowHead->SetRelativeLocation(FVector::ZeroVector);
	ArrowHead->SetRelativeScale3D(FVector(0.1, 0.1, 0.2));
	ArrowHead->SetSimulatePhysics(true);

	if (!ArrowBody)
	{
		ArrowBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
		static ConstructorHelpers::FObjectFinder<UStaticMesh> ArrowBodyMesh(TEXT("StaticMesh'/Game/Meshes/Shape_Cylinder.Shape_Cylinder'"));

		if (ArrowBodyMesh.Succeeded())
		{
			ArrowBody->SetStaticMesh(ArrowBodyMesh.Object);
		}
	}

	ArrowBody->SetupAttachment(ArrowHead);
	ArrowBody->SetRelativeLocation(FVector(0, 0, -200));
	ArrowBody->SetRelativeScale3D(FVector(0.25, 0.25, 2));
	ArrowBody->SetSimulatePhysics(false);

	static ConstructorHelpers::FObjectFinder<UMaterial> ArrowHeadMaterial(TEXT("Material'/Game/Materials/M_Metal_Gold.M_Metal_Gold'"));
	static ConstructorHelpers::FObjectFinder<UMaterial> ArrowBodyMaterial(TEXT("Material'/Game/Materials/M_Wood_Oak.M_Wood_Oak'"));
	if (ArrowHeadMaterial.Succeeded() && ArrowBodyMaterial.Succeeded())
	{
		ArrowHead->SetMaterial(0, ArrowHeadMaterial.Object);
		ArrowBody->SetMaterial(0, ArrowBodyMaterial.Object);
	}


	// Collision Logic
	ArrowHead->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	ArrowHead->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);

	ArrowHead->SetNotifyRigidBodyCollision(true);

	// Generate Hit Event
	FScriptDelegate CollisionDelegate;
	CollisionDelegate.BindUFunction(this, "OnCollision");
	ArrowHead->OnComponentHit.Add(CollisionDelegate);
}

// Called when the game starts or when spawned
void AArrow::BeginPlay()
{
	Super::BeginPlay();

	this->SetLifeSpan(5);
}

void AArrow::OnCollision(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor != nullptr)
	{
		if (OtherActor != this)
		{
			ATarget* Target = Cast<ATarget>(OtherActor);
			if (Target != nullptr)
			{
				UE_LOG(LogUE5_Class4ClassWork, Log, TEXT("Arrow Collision!"));
				Target->OnHit();
				Destroy();
			}
		}
	}

}

// Called every frame
void AArrow::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AArrow::Launch(FVector Direction, FRotator Rotation, float Speed)
{
	UE_LOG(LogUE5_Class4ClassWork, Log, TEXT("Arrow Launched!"));
	const FRotator WantedRotation = FRotator(Rotation.Pitch + 270, Rotation.Yaw, 0);
	ArrowHead->SetWorldRotation(WantedRotation);
	ArrowHead->AddImpulse(Direction * Speed, NAME_None, true);
}

