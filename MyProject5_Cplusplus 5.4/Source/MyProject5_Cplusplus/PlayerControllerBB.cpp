// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerControllerBB.h"

#include "CharacterBB.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"

/*void APlayerControllerBBBase::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);

	PlayerCharacter = Cast<ACharacterBB>(aPawn);
	checkf(PlayerCharacter, TEXT("APLayerControllerBBBase derived classes should only posses its derived classes"));


	EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent);
	checkf(EnhancedInputComponent, TEXT("Unable to get reference to the EnhancedInputComponent"));

	UEnhancedInputLocalPlayerSubsystem* InputSubsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	checkf(InputSubsystem, TEXT("Unable to get a reference to the EnhancedInputLocalPlayerSubsystem"));

	checkf(InputMappingContext, TEXT("InputMappingContext not specified"));
	InputSubsystem->ClearAllMappings();
	InputSubsystem->AddMappingContext(InputMappingContext,0);
		
	if(ActionMove)
		EnhancedInputComponent->BindAction(ActionMove, ETriggerEvent::Triggered, this, &APlayerControllerBBBase::HandleMove);

	if(ActionLook)
		EnhancedInputComponent->BindAction(ActionLook, ETriggerEvent::Triggered, this, &APlayerControllerBBBase::HandleLook);

	if(ActionJump)
		EnhancedInputComponent->BindAction(ActionJump, ETriggerEvent::Triggered, this, &APlayerControllerBBBase::HandleJump);
		
	
}

void APlayerControllerBBBase::HandleJump()
{
	if(PlayerCharacter)
	{
		PlayerCharacter->UnCrouch();
		PlayerCharacter->Jump();
	}
}

void APlayerControllerBBBase::HandleLook(const FInputActionValue& InputActionValue)
{
	const FVector2d LookAxisVector = InputActionValue.Get<FVector2d>();

	AddYawInput(LookAxisVector.X);
	AddPitchInput(LookAxisVector.Y);
}

void APlayerControllerBBBase::HandleMove(const FInputActionValue& InputActionValue)
{
	const FVector2d MovementVector = InputActionValue.Get<FVector2d>();


	PlayerCharacter->AddMovementInput(PlayerCharacter-> GetActorForwardVector(), MovementVector.Y);
	PlayerCharacter->AddMovementInput(PlayerCharacter-> GetActorRightVector(), MovementVector.X);
		
	
}

void APlayerControllerBBBase::OnUnPossess()
{
	//EnhancedInputComponent->ClearActionBindings();
	
	Super::OnUnPossess();
}
*/