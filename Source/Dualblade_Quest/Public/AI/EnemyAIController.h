// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyAIController.generated.h"

/**
 * 
 */
UCLASS()
class DUALBLADE_QUEST_API AEnemyAIController : public AAIController
{

	GENERATED_BODY()

public:

	// Override the Tick method
	virtual void Tick(float DeltaSeconds) override;

	// Hold the mob Pawn
	UPROPERTY(BlueprintReadWrite, Category = "Blueprint Tools")
	APawn* MobPawn;

protected:

	// Override the BeginPlay method
	virtual void BeginPlay() override;

private:

	// Hold the BehaviorTree for the AIControllter
	UPROPERTY(EditDefaultsOnly, Category = "AI Tools")
	class UBehaviorTree* AIMobBehaviorTree;

	// Hold the BlackboardComponent for the AIController
	UPROPERTY(VisibleAnywhere, Category = "AI Tools")
	class UBlackboardComponent* AIMobBlackBoard;
	
};
