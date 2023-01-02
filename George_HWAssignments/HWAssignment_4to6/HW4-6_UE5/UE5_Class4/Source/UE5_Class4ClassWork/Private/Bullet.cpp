// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet.h"
#include "UE5_Class4ClassWork/UE5_Class4ClassWork.h"
#include <TargetStatue.h>


// Sets default values
ABullet::ABullet()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (!BulletGFX)
	{
		BulletGFX = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Bullet"));
		static ConstructorHelpers::FObjectFinder<UStaticMesh> BulletGFXMesh(TEXT("StaticMesh'/Game/Meshes/Shape_Sphere.Shape_Sphere'"));

		if (BulletGFXMesh.Succeeded())
		{
			BulletGFX->SetStaticMesh(BulletGFXMesh.Object);
		}

	}

	RootComponent = BulletGFX;
	BulletGFX->SetRelativeLocation(FVector::ZeroVector);
	BulletGFX->SetRelativeScale3D(FVector(0.1, 0.1, 0.1));
	BulletGFX->SetSimulatePhysics(true);


	static ConstructorHelpers::FObjectFinder<UMaterial> BulletGFXMaterial(TEXT("Material'/Game/Materials/M_Metal_Steel.M_Metal_Steel'"));
	if (BulletGFXMaterial.Succeeded())
	{
		BulletGFX->SetMaterial(0, BulletGFXMaterial.Object);
	}


	// Collision Logic
	BulletGFX->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	BulletGFX->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);

	BulletGFX->SetNotifyRigidBodyCollision(true);

	// Generate Hit Event
	FScriptDelegate CollisionDelegate;
	CollisionDelegate.BindUFunction(this, "OnCollision");
	BulletGFX->OnComponentHit.Add(CollisionDelegate);
}

// Called when the game starts or when spawned
void ABullet::BeginPlay()
{
	Super::BeginPlay();
	
	this->SetLifeSpan(5);
}

void ABullet::OnCollision(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor != nullptr)
	{
		if (OtherActor != this)
		{
			ATargetStatue* Statue = Cast<ATargetStatue>(OtherActor);
			if (Statue != nullptr)
			{
				UE_LOG(LogUE5_Class4ClassWork, Log, TEXT("Bullet Collision!"));
				Statue->OnHit();
				Destroy();
			}
		}
	}

}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABullet::Launch(FVector Direction, FRotator Rotation, float Speed)
{
	UE_LOG(LogUE5_Class4ClassWork, Log, TEXT("Bullet Launched!"));
	const FRotator WantedRotation = FRotator(Rotation.Pitch + 270, Rotation.Yaw, 0);
	BulletGFX->SetWorldRotation(WantedRotation);
	BulletGFX->AddImpulse(Direction * Speed, NAME_None, true);
}

