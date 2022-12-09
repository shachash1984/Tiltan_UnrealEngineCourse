// Fill out your copyright notice in the Description page of Project Settings.


#include "Arrow.h"
#include "FirstCPPproject/FirstCPPproject.h"
#include "Target.h"
#include "Enemy.h"

// Sets default values
AArrow::AArrow()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	if (!ArrowHead) 
	{
		ArrowHead = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Head"));

		static ConstructorHelpers::FObjectFinder<UMaterial> Gold(TEXT("'/Game/Materials/M_Gold.M_Gold'"));
		static ConstructorHelpers::FObjectFinder<UStaticMesh> ArrowHeadMesh(TEXT("'/Game/Meshes/SM_Cone.SM_Cone'"));

		if (ArrowHeadMesh.Succeeded()) 
		{
			ArrowHead->SetStaticMesh(ArrowHeadMesh.Object);
		}

		if (Gold.Succeeded())
		{
			ArrowHead->SetMaterial(0, Gold.Object);
		}

		RootComponent = ArrowHead;
		ArrowHead->SetRelativeLocation(FVector::ZeroVector);
		ArrowHead->SetRelativeScale3D(FVector(0.1f,0.1f,0.2f));

		//Collision Logic
		//Enable collison for raycarts/triggers and for collisions (physics)
		ArrowHead->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

		//We Dont Want to collide with the player pawn
		ArrowHead->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);

		ArrowHead->SetNotifyRigidBodyCollision(true);

		FScriptDelegate CollisionDelegate;
		CollisionDelegate.BindUFunction(this, "OnCollision");
		ArrowHead->OnComponentHit.Add(CollisionDelegate);
		//ArrowHead->SetSimulatePhysics(true);
	}
	if (!ArrowBody) 
	{
		ArrowBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));

		static ConstructorHelpers::FObjectFinder<UMaterial> Wood(TEXT("'/Game/Materials/M_Wood.M_Wood'"));
		static ConstructorHelpers::FObjectFinder<UStaticMesh> ArrowBodyMesh(TEXT("'/Game/Meshes/SM_Cylinder.SM_Cylinder'"));

		if (ArrowBodyMesh.Succeeded())
		{
			ArrowBody->SetStaticMesh(ArrowBodyMesh.Object);
		}
		if (Wood.Succeeded())
		{
			ArrowBody->SetMaterial(0, Wood.Object);
		}
		
		ArrowBody->SetupAttachment(ArrowHead);
		ArrowBody->SetRelativeLocation(FVector(0.0f,0.0f,-101.0f));
		ArrowBody->SetRelativeScale3D(FVector(0.3f, 0.3f, 2.0f));
	}
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
			if (Target != nullptr)
			{
				UE_LOG(LogFirstCPPproject, Log, TEXT("Arrow Hit Target"));
				Target->OnHit();
			}
			AEnemy* Enemy = Cast<AEnemy>(OtherActor);
			if (Enemy != nullptr)
			{
				UE_LOG(LogFirstCPPproject, Log, TEXT("Arrow Hit Enemy"));
				Enemy->OnHit();
			}
		}
	}
}
//void AArrow::OnCollision(int value)


// Called every frame
void AArrow::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AArrow::Launch(FVector Direction, FRotator Rotation, float Speed) 
{
	const FRotator WantedRotation = FRotator(Rotation.Pitch + 270, Rotation.Yaw, 0.0);
	ArrowHead->SetWorldRotation(WantedRotation);
	ArrowHead->SetSimulatePhysics(true);
	ArrowHead->AddImpulse(Direction * Speed, NAME_None, true);
}

