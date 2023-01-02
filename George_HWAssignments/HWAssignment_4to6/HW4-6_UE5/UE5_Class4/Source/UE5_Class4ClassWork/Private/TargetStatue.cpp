// Fill out your copyright notice in the Description page of Project Settings.


#include "TargetStatue.h"
#include "UE5_Class4ClassWork/UE5_Class4ClassWork.h"

// Sets default values
ATargetStatue::ATargetStatue()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	if (!MeshComponent)
	{
		MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
		static ConstructorHelpers::FObjectFinder<UStaticMesh> Mesh(TEXT("StaticMesh'/Game/Meshes/SM_Statue.SM_Statue'"));
		if (Mesh.Succeeded())
		{
			MeshComponent->SetStaticMesh(Mesh.Object);
		}
		MeshComponent->SetupAttachment(RootComponent);
	}
}

// Called when the game starts or when spawned
void ATargetStatue::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATargetStatue::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATargetStatue::OnHit()
{
	UE_LOG(LogUE5_Class4ClassWork, Log, TEXT("Statue Hit!"));
	Destroy();
}