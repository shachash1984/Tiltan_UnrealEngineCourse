// Fill out your copyright notice in the Description page of Project Settings.


#include "Target2.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
ATarget2::ATarget2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	if (!meshComponent)
	{
		meshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
		static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("'/Game/Meshes/SM_Corner.SM_Corner'"));
		if (Mesh.Succeeded())
		{
			meshComponent->SetStaticMesh(Mesh.Object);
		}

		meshComponent->SetupAttachment(RootComponent);
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

