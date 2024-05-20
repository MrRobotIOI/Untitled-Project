// Fill out your copyright notice in the Description page of Project Settings.


#include "FunctionA.h"

FString UFunctionA::GetAMessage()
{
	return FString(TEXT("Pointless message"));

}

double UFunctionA::GetMyPi() {
	return Pi;
}

FCalcAverages UFunctionA::CalculateAverages(const TArray<int32>& InValues)
{
	TArray<int32> TmpArray = InValues;
	/*TArray<int32> TmpArray = InValues;
	TMap<int32, int32> ModalCount;

	float CalcMean = 0.0f;
	float CalcModal = 0.0f;
	float CalcMedian = 0.0f;
	float Sum = 0;
	const int32 COUNT = TmpArray.Num();


	if (COUNT == 0) return FCalcAverages(0.0f, .0f, 0.0f);

	TmpArray.Sort();

	for (int i = 0; i < COUNT; ++i)
	{
		Sum += TmpArray[i];

		if (ModalCount.Contains(TmpArray[i])) {
			ModalCount[TmpArray[i]]++;
		}

		else {
			ModalCount.Add(TmpArray[i], 1);
		}
	}

	CalcMean = Sum / static_cast<float>(COUNT);

	CalcMean = COUNT % 2 != 0 ? TmpArray[COUNT / 2] : static_cast<float>((TmpArray[(COUNT / 2) - 1] + TmpArray[COUNT / 2])) / 2;

	ModalCount.ValueSort([](int32 A, int32 B) {return A > B; });

	TArray<TPair<int32, int32>> Modals = ModalCount.Array();


	if (Modals[0].Value == 1)
	{
		CalcModal = CalcMean;
	}
	else {
		int32 ModalEntries = 1;
		int32 ModalSum = Modals[0].Key;


		for (int i = 0; i < Modals.Num(); ++i)
		{
			if (Modals[i].Value != Modals[0].Value)
				break;
			ModalSum += Modals[i].Key;
			ModalEntries++;
		}
		CalcModal = static_cast<float>(ModalSum) / static_cast<float>(ModalEntries);
			 
	}
	*/
	return FCalcAverages(TmpArray[0]/2, TmpArray[1] / 2, TmpArray[3] / 2);
}
