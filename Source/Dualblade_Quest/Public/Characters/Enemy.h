// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Interface/EnemyInterface.h"
#include "Enemy.generated.h"

UCLASS()
class DUALBLADE_QUEST_API AEnemy : public ACharacter, public IEnemyInterface
{
	GENERATED_BODY()

public:

	// Sets default values for this character's properties
	AEnemy();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/*
	Highlight the actor using render customer depth
	@param none
	@return void
	*/
	virtual void HighlightActor() override;

	/*
	Unhighlight the actor using render custom depth
	@param none
	@return none
	*/
	virtual void UnHighlightActor() override;

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
