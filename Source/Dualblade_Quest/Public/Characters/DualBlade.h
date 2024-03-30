// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/Hero.h"
#include "DualBlade.generated.h"

UCLASS()
class DUALBLADE_QUEST_API ADualBlade : public AHero
{

	GENERATED_BODY()

public:

	// Set the default values for dualblade 
	ADualBlade();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Hold the pointer to the right blade skeletal mesh
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	TObjectPtr<UStaticMeshComponent> RightBlade;

	// Hold the pointer to the left blade skeletal mesh
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Combat")
	TObjectPtr<UStaticMeshComponent> LeftBlade;

protected:
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
};
