// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Hero.generated.h"

UCLASS()
class DUALBLADE_QUEST_API AHero : public ACharacter
{

	GENERATED_BODY()

public:

	// Hold the hero name
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Hero Details")
	FString HeroName;

	// Hold the hero class name
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Hero Details")
	FString ClassName;

	// Sets default values for this character's properties
	AHero();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
protected:
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
};
