// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"



#include "MyProject5_CplusplusCharacter.h"
#include "PlayerControllerBB.generated.h"
/**
 * 
 */
//Forward DEclaration
class ACharacterBB;
class UEnhancedInputComponent;


UCLASS(Abstract)
class APlayerControllerBBBase : public APlayerController
{
protected:
	//virtual void OnPossess(APawn* aPawn) override;
	void HandleJump();
	void HandleLook(const FInputActionValue& InputActionValue);
	void HandleMove(const FInputActionValue& InputActionValue);
//	virtual void OnUnPossess() override;

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="PLayer Input|Character Movement")
	TObjectPtr<UInputAction> ActionMove = nullptr;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly, Category = "PLayer Input|Character Movement")
	TObjectPtr<UInputAction> ActionLook = nullptr;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "PLayer Input|Character Movement")
	TObjectPtr<UInputAction> ActionJump = nullptr;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "PLayer Input|Character Movement")
	TObjectPtr<UInputMappingContext> InputMappingContext = nullptr;
protected:

private:
	UPROPERTY()
	UEnhancedInputComponent* EnhancedInputComponent = nullptr;

	UPROPERTY()
	ACharacterBB* PlayerCharacter = nullptr;

	UPROPERTY(VisibleAnywhere, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* CameraMan;
	
	GENERATED_BODY()
	
};
