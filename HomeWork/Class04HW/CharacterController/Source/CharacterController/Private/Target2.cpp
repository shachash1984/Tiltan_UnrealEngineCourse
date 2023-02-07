// Fill out your copyright notice in the Description page of Project Settings.


#include "Target2.h"
#include "CharacterController/CharacterController.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
ATarget2::ATarget2()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	if (!MeshComponent)
	{
		MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
		static ConstructorHelpers::FObjectFinder<UStaticMesh> Mesh(TEXT("'/Game/Meshes/SM_UE_Ball.SM_UE_Ball'"));
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
	UE_LOG(LogCharacterController, Log, TEXT("Ball Hit!"));
	Destroy();
}

