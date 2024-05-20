// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterBB.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
ACharacterBB::ACharacterBB()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CamRoot = CreateDefaultSubobject<USceneComponent>("CamRoot");
	
SpringArm = CreateDefaultSubobject<USpringArmComponent>("Spring Arm");
	CamRoot->SetupAttachment(RootComponent);
	//CamRoot->DetachFromParent();

	SpringArm->SetupAttachment(CamRoot);
	//SpringArm->bUsePawnControlRotation = true;
	
	CameraMan = CreateDefaultSubobject<UCameraComponent>("CameraMan");
	CameraMan->SetupAttachment(SpringArm);
	//CameraMan->bUsePawnControlRotation = true;

	bUseControllerRotationYaw = false;
	

	GetCharacterMovement()->bOrientRotationToMovement = true;
}

// Called when the game starts or when spawned
void ACharacterBB::BeginPlay()
{
	Super::BeginPlay();

	if(APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if(UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(InputMappingContext,0);
		}
	}
}





// Called to bind functionality to input
void ACharacterBB::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	if(UEnhancedInputComponent* Input = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		Input->BindAction(MoveAction,ETriggerEvent::Triggered,this, &ACharacterBB::MoveA);
	//	Input->BindAction(LookAction,ETriggerEvent::Triggered,this, &ACharacterBB::LookA);
		Input->BindAction(JumpAction,ETriggerEvent::Triggered,this, &ACharacterBB::JumpA);
		Input->BindAction(RunAction,ETriggerEvent::Triggered,this, &ACharacterBB::Run);
		Input->BindAction(StopRunAction,ETriggerEvent::Triggered,this, &ACharacterBB::StopRun);
		Input->BindAction(FlyUpDownAction,ETriggerEvent::Triggered,this, &ACharacterBB::FlyUpDown);
		Input->BindAction(StopFlyingAction,ETriggerEvent::Triggered,this, &ACharacterBB::StopFlying);

	}
}

void ACharacterBB::LookA(const FInputActionValue& InputActionValue)
{
	FVector2d InputVector = InputActionValue.Get<FVector2d>();
	if(IsValid(Controller))
	{
		
		//AddControllerYawInput(InputVector.X);
		
		//AddControllerPitchInput(InputVector.Y);
	}
}

void ACharacterBB::JumpA()
{
	Super::Jump();
}
void ACharacterBB::Run()
{
	
	if (GetCharacterMovement()->IsFlying())
	{
		GetCharacterMovement()->MaxFlySpeed= 1500;
	}
	else
	{
		GetCharacterMovement()->MaxWalkSpeed = 600;
	}
}
void ACharacterBB::StopRun()
{
	//GetCharacterMovement()->MaxWalkSpeed = 300;
}
void ACharacterBB::FlyUpDown(const FInputActionValue& InputActionValue)
{
	FVector2d InputVector = InputActionValue.Get<FVector2d>();
	if (GetCharacterMovement()->IsFlying())
	{
		AddMovementInput(GetActorUpVector(),InputVector.X);
	}
	else
	{
		GetCharacterMovement()->SetMovementMode(MOVE_Flying);
		AddMovementInput(GetActorUpVector(),InputVector.X);
	}
}
void ACharacterBB::StopFlying()
{
	GetCharacterMovement()->SetMovementMode(MOVE_Falling);
}
void ACharacterBB::MoveA(const FInputActionValue& InputActionValue)
{
	/*FVector2d InputVector = InputActionValue.Get<FVector2d>();
	if(IsValid(Controller))
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0,Rotation.Yaw,0);

		
		//GEngine->AddOnScreenDebugMessage(-1,20.f,FColor::Blue,FString::Printf(TEXT("%s"),*fwRoot->GetName()));
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

	
	
		AddMovementInput(ForwardDirection, InputVector.Y);
		AddMovementInput(RightDirection, InputVector.X);
	}
	*/
	
}
// Called every frame
void ACharacterBB::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}
