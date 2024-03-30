// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/DualBlade.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ADualBlade::ADualBlade()
{
	
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    // Set the hero name
    HeroName = "Ryden";

    // Set the hero class
    ClassName = "Dualblade";

    // Create the USkeletMeshComponent for the right blade
	RightBlade = CreateDefaultSubobject<UStaticMeshComponent>("RightBlade");

    // Create the USkeletalMeshComponent for the left blade
    LeftBlade = CreateDefaultSubobject<UStaticMeshComponent>("LeftBlade");

    // Attach the right blade to the right blade socket
    RightBlade->SetupAttachment(GetMesh(), FName("RightBladeSocket"));

    // Attach the left blade to left blade socket
    LeftBlade->SetupAttachment(GetMesh(), FName("LeftBladeSocket"));

    // Disable collision for the right blade
    RightBlade->SetCollisionEnabled(ECollisionEnabled::NoCollision);

    // Disable collision for the left blade
    LeftBlade->SetCollisionEnabled(ECollisionEnabled::NoCollision);

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
void ADualBlade::BeginPlay() 
{
	Super::BeginPlay();
	
}

// Called every frame
void ADualBlade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ADualBlade::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

