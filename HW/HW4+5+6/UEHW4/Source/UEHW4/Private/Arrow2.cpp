// Fill out your copyright notice in the Description page of Project Settings.


#include "Arrow2.h"
#include "UEHW4\UEHW4.h"
#include <Target.h>
#include <Target2.h>

// Sets default values
AArrow2::AArrow2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (!ArrowHead)
	{
		ArrowHead = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ArrowHead"));

		static ConstructorHelpers::FObjectFinder<UStaticMesh> ArrowHeadMesh(TEXT("'/Game/Meshed/SM_Cube.SM_Cube'"));

		if (ArrowHeadMesh.Succeeded())
		{
			ArrowHead->SetStaticMesh(ArrowHeadMesh.Object);
		}
	}
	RootComponent = ArrowHead;
	ArrowHead->SetRelativeLocation(FVector::ZeroVector);
	ArrowHead->SetWorldScale3D(FVector(0.1f, 0.1f, 0.2f));
	ArrowHead->SetSimulatePhysics(true);

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
void AArrow2::BeginPlay()
{
	Super::BeginPlay();
	this->SetLifeSpan(5.0f);
}

void AArrow2::OnCollision(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
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
void AArrow2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AArrow2::Launch(FVector Direction, FRotator Rotation, float Speed)
{
	const FRotator WantedRotation = FRotator(Rotation.Pitch = 270, Rotation.Yaw, 0.0);
	ArrowHead->SetWorldRotation(WantedRotation);
	ArrowHead->AddImpulse(Direction * Speed, NAME_None, true);

	UE_LOG(logHW4, Log, TEXT("PewPew2"));
}