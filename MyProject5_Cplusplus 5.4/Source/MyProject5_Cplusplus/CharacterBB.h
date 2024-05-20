// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputActionValue.h"
#include "GameFramework/Character.h"
#include "CharacterBB.generated.h"

UCLASS()
class MYPROJECT5_CPLUSPLUS_API ACharacterBB : public ACharacter
{
	GENERATED_BODY()
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite, meta=(AllowPrivateAccess = "true"))
	class UCameraComponent* CameraMan;


	
public:
	// Sets default values for this character's properties
	ACharacterBB();
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite)
	class USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere,BlueprintReadWrite)
	class USceneComponent* CamRoot;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, Category= "EnhancedInput")
	class UInputMappingContext* InputMappingContext;

	UPROPERTY(EditAnywhere, Category= "EnhancedInput")
	class UInputAction*  MoveAction;
	UPROPERTY(EditAnywhere, Category= "EnhancedInput")
	class UInputAction*  JumpAction;
	UPROPERTY(EditAnywhere, Category= "EnhancedInput")
	class UInputAction*  LookAction;
	UPROPERTY(EditAnywhere, Category= "EnhancedInput")
	class UInputAction*  RunAction;
	UPROPERTY(EditAnywhere, Category= "EnhancedInput")
	class UInputAction*  StopRunAction;
	UPROPERTY(EditAnywhere, Category= "EnhancedInput")
	class UInputAction*  FlyUpDownAction;
	UPROPERTY(EditAnywhere, Category= "EnhancedInput")
	class UInputAction*  StopFlyingAction;
	
	void MoveA(const FInputActionValue& InputActionValue);
	void LookA(const FInputActionValue& InputActionValue);
	void JumpA();
	void Run();
	void StopRun();
	void StopFlying();
	void FlyUpDown(const FInputActionValue& InputActionValue );
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
