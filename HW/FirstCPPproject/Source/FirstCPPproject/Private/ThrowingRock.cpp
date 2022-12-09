// Fill out your copyright notice in the Description page of Project Settings.


#include "ThrowingRock.h"
#include "FirstCPPproject/FirstCPPproject.h"
#include "Target.h"
#include "Enemy.h"

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

	//Collision Logic
		//Enable collison for raycarts/triggers and for collisions (physics)
	MeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

	//We Dont Want to collide with the player pawn
	MeshComponent->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);

	//
	MeshComponent->SetNotifyRigidBodyCollision(true);

	FScriptDelegate CollisionDelegate;
	CollisionDelegate.BindUFunction(this, "OnCollision");
	MeshComponent->OnComponentHit.Add(CollisionDelegate);

}

// Called when the game starts or when spawned
void AThrowingRock::BeginPlay()
{
	Super::BeginPlay();
	this->SetLifeSpan(5.0f);
}
void AThrowingRock::OnCollision(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor != nullptr)
	{
		if (OtherActor != this) 
		{
			ATarget* Target = Cast<ATarget>(OtherActor);
			if(Target != nullptr)
			{
				UE_LOG(LogFirstCPPproject, Log, TEXT("Rock Hit Target"));
				Target->OnHit();
			}
			AEnemy* Enemy = Cast<AEnemy>(OtherActor);
			if (Enemy != nullptr)
			{
				UE_LOG(LogFirstCPPproject, Log, TEXT("Rock Hit Enemy"));
				Enemy->OnHit();
			}
		}
	}
	
}
//void AThrowingRock::OnCollision(int value)



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

