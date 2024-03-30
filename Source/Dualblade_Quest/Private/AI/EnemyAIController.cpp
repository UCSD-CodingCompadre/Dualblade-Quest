// Fill out your copyright notice in the Description page of Project Settings.


#include "./AI/EnemyAIController.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"


void AEnemyAIController::BeginPlay() 
{

    // Call the parent BeginPlay method
    Super::BeginPlay();

    // Set the mob Pawn
    MobPawn = GetPawn();

    // Check if we a have BehaviorTree
    if(AIMobBehaviorTree != nullptr)
    {

        // Run the BehaviorTree
        RunBehaviorTree(AIMobBehaviorTree);

        // Get the BlackboardComponent
        AIMobBlackBoard = GetBlackboardComponent();
    }
}

void AEnemyAIController::Tick(float DeltaSeconds)
{

    // Call the parent Tick method
    Super::Tick(DeltaSeconds);

    // Set the mob pawn
    MobPawn = GetPawn();

    // Check if we a have BehaviorTree
    if(AIMobBehaviorTree != nullptr && AIMobBlackBoard == nullptr)
    {

        // Get the BlackboardComponent
        AIMobBlackBoard = GetBlackboardComponent();
    }

    // Set the start location for the pawn in the BlackboardComponent
    if(AIMobBlackBoard != nullptr && MobPawn != nullptr) AIMobBlackBoard->SetValueAsVector(TEXT("AIPawnLocation"), MobPawn->GetActorLocation());
}