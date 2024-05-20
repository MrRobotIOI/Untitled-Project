// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FunctionA.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FCalcAverages {
	FCalcAverages() :
		Mean(.0f),
		Modal(.0f),
		Median(.0f) {};

	FCalcAverages(float Inmean, float InMode, float InMedian) :
		Mean(Inmean),
		Modal(InMode),
		Median(InMedian) {};


	UPROPERTY(BlueprintReadOnly)
	float Mean = .0f;

	UPROPERTY(BlueprintReadOnly)
	float Modal = .0f;

	UPROPERTY(BlueprintReadOnly)
	float Median = .0f;

	GENERATED_BODY()
};
UCLASS()
class MYPROJECT5_CPLUSPLUS_API UFunctionA : public UBlueprintFunctionLibrary
{
public:
	UFUNCTION(BlueprintCallable)
	static FString GetAMessage();

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (ToolTip = "3.somethgingidunno...", CompactNodeTitle = "π"))
	static double GetMyPi();

	UFUNCTION(BlueprintCallable, meta = (ToolTip = "does mean, median and mode"))
	static FCalcAverages CalculateAverages(const TArray<int32>& InValues);
protected:

private:
	static constexpr double Pi = 3.1415926535897932384626433832795;
	GENERATED_BODY()
	
};
