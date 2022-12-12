// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Arrow.generated.h"

UCLASS()
class TILTANPHYSICS_API AArrow : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AArrow();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	virtual void OnCollision(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* ArrowHead;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* ArrowBody;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Launch(FVector Direction, FRotator Rotation, float Speed);

};
