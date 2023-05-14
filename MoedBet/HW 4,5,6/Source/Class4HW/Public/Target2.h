// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Target2.generated.h"

UCLASS()
class CLASS4HW_API ATarget2 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATarget2();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* meshComponent {nullptr};

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void OnHit();

};
