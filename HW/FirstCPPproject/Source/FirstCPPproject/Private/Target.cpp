// Fill out your copyright notice in the Description page of Project Settings.


#include "Target.h"

// Sets default values
ATarget::ATarget()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	if (!MeshComponent) 
	{
		MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
		static ConstructorHelpers::FObjectFinder<UStaticMesh> Mesh(TEXT("'/Game/Meshes/SM_Statue.SM_Statue'"));
		static ConstructorHelpers::FObjectFinder<UMaterial> Robot(TEXT("'/Game/Materials/M_Robot.M_Robot'"));
		if (Mesh.Succeeded() && Robot.Succeeded()) 
		{
			MeshComponent->SetStaticMesh(Mesh.Object);
			MeshComponent->SetMaterial(0,Robot.Object);
		}
		MeshComponent->SetupAttachment(RootComponent);
		MeshComponent->SetRelativeScale3D(FVector(5.0f, 5.0f, 5.0f));
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

