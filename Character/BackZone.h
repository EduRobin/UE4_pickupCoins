// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BackZone.generated.h"

UCLASS()
class CHARACTER_API ABackZone : public AActor
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* StaticMeshComponent;
	
public:	
	// Sets default values for this actor's properties
	ABackZone();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
};
