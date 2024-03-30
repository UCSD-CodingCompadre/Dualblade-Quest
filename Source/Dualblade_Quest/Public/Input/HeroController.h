// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "HeroController.generated.h"

class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

/**
 * 
 */
UCLASS()
class DUALBLADE_QUEST_API AHeroController : public APlayerController
{
	GENERATED_BODY()
	
public:

	// Default constructor
	AHeroController();

protected:

	/*
	Handles setting up the enchaned input subsystem and input mode data
	@param none
	@return void
	*/
	virtual void BeginPlay() override;

	/*
	Sets up the input component for the controller
	@param none
	@return void
	*/
	virtual void SetupInputComponent() override;

private:

	// Hold the controller owner
	APawn* ControllerOwner;

	// Hold the mapping context
	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputMappingContext> PlayerContext;

	// Hold the input action for the WASD movement
	UPROPERTY(EditAnywhere, Category = "Input")
	TObjectPtr<UInputAction> MoveAction;

	/*
	Handles the move input action
	@param FInputActionValue InputActionValue the value passed into the action
	@return void
	*/
	void HandleWASDMovement(const FInputActionValue& InputActionValue);
	
	/*
	Handles the character look in the local x axis
	@param FInputActionValue& InputActionValue the value that determines 
	the direction
	@return void
	*/
	void HandleCharacterLookLocalX(const FInputActionValue& InputActionValue);

	/*
	Handles the character look in the local y axis
	@param FInputActionValue& InputActionValue the value that determines
	the direction
	@return void
	*/
	void HandleCharacterLookLocalY(const FInputActionValue& InputActionValue);
};
