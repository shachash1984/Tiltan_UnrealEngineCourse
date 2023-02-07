// Fill out your copyright notice in the Description page of Project Settings.


#include "Spear.h"
#include "CharacterController/CharacterController.h"
#include <Target.h>
#include <Target2.h>

// Sets default values
ASpear::ASpear()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (!SpearHead)
	{
		SpearHead = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Head"));

		static ConstructorHelpers::FObjectFinder<UStaticMesh> SpearHeadMesh(TEXT("'/Game/Meshes/SM_Cone.SM_Cone'"));

		if (SpearHeadMesh.Succeeded())
		{
			SpearHead->SetStaticMesh(SpearHeadMesh.Object);
		}

	}
	RootComponent = SpearHead;
	SpearHead->SetRelativeLocation(FVector::ZeroVector);
	SpearHead->SetRelativeScale3D(FVector(0.1f, 0.1f, 0.2f));
	SpearHead->SetSimulatePhysics(true);
	if (!SpearBody)
	{
		SpearBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));

		static ConstructorHelpers::FObjectFinder<UStaticMesh> SpearBodyMesh(TEXT("'/Game/Meshes/SM_Cylinder.SM_Cylinder'"));

		if (SpearBodyMesh.Succeeded())
		{
			SpearBody->SetStaticMesh(SpearBodyMesh.Object);
		}
	}
	SpearBody->SetupAttachment(SpearHead);
	SpearBody->SetRelativeLocation(FVector(0, 0, -400));
	SpearBody->SetRelativeScale3D(FVector(0.3f, 0.3f, 8.0f));
	SpearBody->SetSimulatePhysics(false);

	static ConstructorHelpers::FObjectFinder<UMaterial> SpearHeadMaterial(TEXT("'/Game/Materials/M_Spear.M_Spear'"));
	static ConstructorHelpers::FObjectFinder<UMaterial> SpearBodyMaterial(TEXT("'/Game/Materials/M_Arrow.M_Arrow'"));
	if (SpearHeadMaterial.Succeeded() && SpearBodyMaterial.Succeeded())
	{
		SpearHead->SetMaterial(0, SpearHeadMaterial.Object);
		SpearBody->SetMaterial(0, SpearBodyMaterial.Object);
	}

	//collision
	SpearHead->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	SpearHead->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);
	SpearHead->SetNotifyRigidBodyCollision(true);

	FScriptDelegate CollisionDelegate;
	CollisionDelegate.BindUFunction(this, "OnCollision");
	SpearHead->OnComponentHit.Add(CollisionDelegate);
}

// Called when the game starts or when spawned
void ASpear::BeginPlay()
{
	Super::BeginPlay();
	this->SetLifeSpan(5);
}

// Called every frame
void ASpear::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpear::OnCollision(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor != nullptr)
	{
		if (OtherActor != this)
		{
			ATarget* Target = Cast<ATarget>(OtherActor);
			if (Target != nullptr)
			{
				UE_LOG(LogCharacterController, Log, TEXT("Collision"));
				Target->OnHit();
				Destroy();
			}
			ATarget2* Target2 = Cast<ATarget2>(OtherActor);
			if (Target2 != nullptr)
			{
				UE_LOG(LogCharacterController, Log, TEXT("Collision"));
				Target2->OnHit();
				Destroy();
			}
		}
	}
}

void ASpear::Launch(FVector Direction, FRotator Rotation, float Speed)
{
	const FRotator WantedRotation = FRotator(Rotation.Pitch + 270, Rotation.Yaw, 0);
	SpearHead->SetWorldRotation(WantedRotation);
	SpearBody->AddImpulse(Direction * Speed, NAME_None, true);
}

