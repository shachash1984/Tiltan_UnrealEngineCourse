// Fill out your copyright notice in the Description page of Project Settings.


#include "Arrow.h"
#include "UEHW4\UEHW4.h"
#include <Target.h>
#include <Target2.h>

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

	//Collision Logic
	//Enable collision for raycasts/triggers and for collisions (physics)
	ArrowHead->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

	//We dont want to collide with the player
	ArrowHead->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

	//In order to recive collision events we need to notify the rigidbody
	ArrowHead->SetNotifyRigidBodyCollision(true);

	//GEnerate Hit event
	FScriptDelegate CollisionDelegate;
	CollisionDelegate.BindUFunction(this, "OnCollision");
	ArrowHead->OnComponentHit.Add(CollisionDelegate);
}

// Called when the game starts or when spawned
void AArrow::BeginPlay()
{
	Super::BeginPlay();
	this->SetLifeSpan(5.0f);
}

void AArrow::OnCollision(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor != nullptr)
	{
		if (OtherActor != this)
		{
			ATarget* Target = Cast<ATarget>(OtherActor);
			ATarget2* Target2 = Cast<ATarget2>(OtherActor);
			if (Target != nullptr)
			{
				UE_LOG(logHW4, Log, TEXT("Arrow Collision with target"));
				Target->OnHit();
				Destroy();
			}
			if (Target2 != nullptr)
			{
				UE_LOG(logHW4, Log, TEXT("Arrow Collision with target2"));
				Target2->OnHit();
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
	const FRotator WantedRotation = FRotator(Rotation.Pitch = 270, Rotation.Yaw, 0.0);
	ArrowHead->SetWorldRotation(WantedRotation);
	ArrowHead->AddImpulse(Direction * Speed, NAME_None, true);

	UE_LOG(logHW4, Log, TEXT("PewPew"));
}

