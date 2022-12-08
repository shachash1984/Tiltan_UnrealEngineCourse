// Fill out your copyright notice in the Description page of Project Settings.


#include "Target2.h"
#include "UObject/ConstructorHelpers.h"
#include "UEHW4\UEHW4.h"



// Sets default values
ATarget2::ATarget2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent2"));

	if (!MeshComponent)
	{
		MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh2"));
		static ConstructorHelpers::FObjectFinder<UStaticMesh> Mesh(TEXT("'/Game/Meshed/SM_Chair.SM_Chair'"));
		if (Mesh.Succeeded())
		{
			MeshComponent->SetStaticMesh(Mesh.Object);
		}

		MeshComponent->SetupAttachment(RootComponent);
	}
}

// Called when the game starts or when spawned
void ATarget2::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ATarget2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ATarget2::OnHit()
{
	UE_LOG(logHW4, Log, TEXT("Chair hit!"));
	Destroy();
}