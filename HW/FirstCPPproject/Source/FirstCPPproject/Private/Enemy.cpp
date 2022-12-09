// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"
#include "FirstCPPproject/FirstCPPproject.h"

// Sets default values
AEnemy::AEnemy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	if (!MeshComponent)
	{
		MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
		static ConstructorHelpers::FObjectFinder<UStaticMesh> Mesh(TEXT("'/Game/Meshes/SM_Statue.SM_Statue'"));
		static ConstructorHelpers::FObjectFinder<UMaterial> Robot(TEXT("'/Game/Materials/M_Green.M_Green'"));
		if (Mesh.Succeeded() && Robot.Succeeded())
		{
			MeshComponent->SetStaticMesh(Mesh.Object);
			MeshComponent->SetMaterial(0, Robot.Object);
		}
		MeshComponent->SetupAttachment(RootComponent);
		MeshComponent->SetRelativeScale3D(FVector(5.0f, 5.0f, 5.0f));
	}
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemy::OnHit() {

	UE_LOG(LogFirstCPPproject, Log, TEXT("Enemy Cries"));
	Destroy();
}

