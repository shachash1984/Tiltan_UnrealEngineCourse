// Fill out your copyright notice in the Description page of Project Settings.


#include "Arrow.h"

// Sets default values
AArrow::AArrow()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (!ArrowHead)
	{
		ArrowHead = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Head"));

		static ConstructorHelpers::FObjectFinder<UStaticMesh> ArrowHeadMesh(TEXT("'/Game/Meshes/SM_Cone.SM_Cone'"));

		if (ArrowHeadMesh.Succeeded())
		{
			ArrowHead->SetStaticMesh(ArrowHeadMesh.Object);
		}

	}
}

// Called when the game starts or when spawned
void AArrow::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AArrow::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

