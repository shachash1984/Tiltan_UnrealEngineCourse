// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Arrow2.generated.h"

UCLASS()
class CLASS4HW_API AArrow2 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AArrow2();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
		virtual void OnCollision(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse
			, const FHitResult& Hit);

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* Arrow;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void Launch(FVector Direction, FRotator Rotation, float Speed);

};
