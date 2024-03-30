// Fill out your copyright notice in the Description page of Project Settings.


#include "./Characters/Enemy.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Dualblade_Quest/Dualblade_Quest.h"

// Sets default values
AEnemy::AEnemy()
{

 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set the collision channel visibility to block
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);

	// Set the character movement component to orient rotation to movement
	GetCharacterMovement()->bOrientRotationToMovement = true;

    // Set the character movement component to orient rotation to movement
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 400.0f, 0.0f);

	// Set the character movement component to constrain to a plane
	GetCharacterMovement()->bConstrainToPlane = true;

	// Set the character movement component to snap to a plane
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	// Set the component to not use the controller pitch
	bUseControllerRotationPitch = false;

	// Set the component to not use the controller roll
	bUseControllerRotationRoll = false;

	// Set the component to not use the controller yaw
	bUseControllerRotationYaw = false;
}



// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{

	Super::BeginPlay();
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AEnemy::HighlightActor()
{

	// Enable skeletal mesh render custom depth
    GetMesh()->SetRenderCustomDepth(true);

    // Set the depth stencil value
	GetMesh()->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);
}


void AEnemy::UnHighlightActor()
{

	 // Disable skeletal mesh render custom depth
    GetMesh()->SetRenderCustomDepth(false);
}
