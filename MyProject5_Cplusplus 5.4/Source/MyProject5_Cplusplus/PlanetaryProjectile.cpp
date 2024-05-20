// Fill out your copyright notice in the Description page of Project Settings.


#include "PlanetaryProjectile.h"


// Sets default values for this component's properties
UPlanetaryProjectile::UPlanetaryProjectile()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UPlanetaryProjectile::SetGravityDirection(const FVector& InNewGravityDir)
{

}
// Called when the game starts
void UPlanetaryProjectile::BeginPlay()
{
	Super::BeginPlay();
	
	// ...
	
}


// Called every frame
void UPlanetaryProjectile::TickComponent(float DeltaTime, ELevelTick TickType,
                                         FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

