// Fill out your copyright notice in the Description page of Project Settings.


#include "PlanetaryMovementComponent.h"
void UPlanetaryMovementComponent::UpdateGravityDirection(const FVector& NewGravityDir)
{
	SetGravityDirection(NewGravityDir);
	
}

bool UPlanetaryMovementComponent::FloorSweepTest(FHitResult& OutHit, const FVector& Start, const FVector& End,
	ECollisionChannel TraceChannel, const FCollisionShape& CollisionShape, const FCollisionQueryParams& Params,
	const FCollisionResponseParams& ResponseParam) const
{
	FVector Dir = (End - Start).GetSafeNormal();
	FVector EndLocation = (End-Start).Size() * Dir *1.2f +Start;
	
	DrawDebugLine(GetWorld(), Start, EndLocation, FColor::Green, false, -1, 0, 1.0f);
	return Super::FloorSweepTest(OutHit, Start, EndLocation, TraceChannel, CollisionShape, Params, ResponseParam);
}

