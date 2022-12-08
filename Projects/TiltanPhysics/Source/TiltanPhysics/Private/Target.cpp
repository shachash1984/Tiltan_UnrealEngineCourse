// Fill out your copyright notice in the Description page of Project Settings.


#include "Target.h"

#include "UObject/ConstructorHelpers.h"
#include "TiltanPhysics/TiltanPhysics.h"

// Sets default values
ATarget::ATarget()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	if (!MeshComponent)
	{
		MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
		static ConstructorHelpers::FObjectFinder<UStaticMesh> Mesh(TEXT("'/Game/Meshes/SM_Rock.SM_Rock'"));
		if (Mesh.Succeeded())
		{
			MeshComponent->SetStaticMesh(Mesh.Object);
		}


		MeshComponent->SetupAttachment(RootComponent);
	}
}

// Called when the game starts or when spawned
void ATarget::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATarget::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATarget::OnHit()
{
	UE_LOG(LogTiltanPhysics, Log, TEXT("Rock hit!"));
	Destroy();
}

