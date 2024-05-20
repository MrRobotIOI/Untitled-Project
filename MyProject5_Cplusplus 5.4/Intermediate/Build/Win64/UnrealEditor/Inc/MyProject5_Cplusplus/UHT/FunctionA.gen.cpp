// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject5_Cplusplus/FunctionA.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFunctionA() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MYPROJECT5_CPLUSPLUS_API UClass* Z_Construct_UClass_UFunctionA();
MYPROJECT5_CPLUSPLUS_API UClass* Z_Construct_UClass_UFunctionA_NoRegister();
MYPROJECT5_CPLUSPLUS_API UScriptStruct* Z_Construct_UScriptStruct_FCalcAverages();
UPackage* Z_Construct_UPackage__Script_MyProject5_Cplusplus();
// End Cross Module References

// Begin ScriptStruct FCalcAverages
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CalcAverages;
class UScriptStruct* FCalcAverages::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CalcAverages.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CalcAverages.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCalcAverages, (UObject*)Z_Construct_UPackage__Script_MyProject5_Cplusplus(), TEXT("CalcAverages"));
	}
	return Z_Registration_Info_UScriptStruct_CalcAverages.OuterSingleton;
}
template<> MYPROJECT5_CPLUSPLUS_API UScriptStruct* StaticStruct<FCalcAverages>()
{
	return FCalcAverages::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCalcAverages_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "FunctionA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mean_MetaData[] = {
		{ "Category", "CalcAverages" },
		{ "ModuleRelativePath", "FunctionA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modal_MetaData[] = {
		{ "Category", "CalcAverages" },
		{ "ModuleRelativePath", "FunctionA.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Median_MetaData[] = {
		{ "Category", "CalcAverages" },
		{ "ModuleRelativePath", "FunctionA.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Mean;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Modal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Median;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCalcAverages>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCalcAverages_Statics::NewProp_Mean = { "Mean", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCalcAverages, Mean), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mean_MetaData), NewProp_Mean_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCalcAverages_Statics::NewProp_Modal = { "Modal", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCalcAverages, Modal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modal_MetaData), NewProp_Modal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCalcAverages_Statics::NewProp_Median = { "Median", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCalcAverages, Median), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Median_MetaData), NewProp_Median_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCalcAverages_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalcAverages_Statics::NewProp_Mean,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalcAverages_Statics::NewProp_Modal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCalcAverages_Statics::NewProp_Median,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCalcAverages_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCalcAverages_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject5_Cplusplus,
	nullptr,
	&NewStructOps,
	"CalcAverages",
	Z_Construct_UScriptStruct_FCalcAverages_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCalcAverages_Statics::PropPointers),
	sizeof(FCalcAverages),
	alignof(FCalcAverages),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCalcAverages_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCalcAverages_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCalcAverages()
{
	if (!Z_Registration_Info_UScriptStruct_CalcAverages.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CalcAverages.InnerSingleton, Z_Construct_UScriptStruct_FCalcAverages_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CalcAverages.InnerSingleton;
}
// End ScriptStruct FCalcAverages

// Begin Class UFunctionA Function CalculateAverages
struct Z_Construct_UFunction_UFunctionA_CalculateAverages_Statics
{
	struct FunctionA_eventCalculateAverages_Parms
	{
		TArray<int32> InValues;
		FCalcAverages ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FunctionA.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "does mean, median and mode" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValues_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFunctionA_CalculateAverages_Statics::NewProp_InValues_Inner = { "InValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFunctionA_CalculateAverages_Statics::NewProp_InValues = { "InValues", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionA_eventCalculateAverages_Parms, InValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValues_MetaData), NewProp_InValues_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFunctionA_CalculateAverages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionA_eventCalculateAverages_Parms, ReturnValue), Z_Construct_UScriptStruct_FCalcAverages, METADATA_PARAMS(0, nullptr) }; // 12784874
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFunctionA_CalculateAverages_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionA_CalculateAverages_Statics::NewProp_InValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionA_CalculateAverages_Statics::NewProp_InValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionA_CalculateAverages_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionA_CalculateAverages_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFunctionA_CalculateAverages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFunctionA, nullptr, "CalculateAverages", nullptr, nullptr, Z_Construct_UFunction_UFunctionA_CalculateAverages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionA_CalculateAverages_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFunctionA_CalculateAverages_Statics::FunctionA_eventCalculateAverages_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionA_CalculateAverages_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFunctionA_CalculateAverages_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFunctionA_CalculateAverages_Statics::FunctionA_eventCalculateAverages_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFunctionA_CalculateAverages()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFunctionA_CalculateAverages_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFunctionA::execCalculateAverages)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_InValues);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FCalcAverages*)Z_Param__Result=UFunctionA::CalculateAverages(Z_Param_Out_InValues);
	P_NATIVE_END;
}
// End Class UFunctionA Function CalculateAverages

// Begin Class UFunctionA Function GetAMessage
struct Z_Construct_UFunction_UFunctionA_GetAMessage_Statics
{
	struct FunctionA_eventGetAMessage_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FunctionA.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFunctionA_GetAMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionA_eventGetAMessage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFunctionA_GetAMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionA_GetAMessage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionA_GetAMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFunctionA_GetAMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFunctionA, nullptr, "GetAMessage", nullptr, nullptr, Z_Construct_UFunction_UFunctionA_GetAMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionA_GetAMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFunctionA_GetAMessage_Statics::FunctionA_eventGetAMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionA_GetAMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFunctionA_GetAMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFunctionA_GetAMessage_Statics::FunctionA_eventGetAMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFunctionA_GetAMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFunctionA_GetAMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFunctionA::execGetAMessage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UFunctionA::GetAMessage();
	P_NATIVE_END;
}
// End Class UFunctionA Function GetAMessage

// Begin Class UFunctionA Function GetMyPi
struct Z_Construct_UFunction_UFunctionA_GetMyPi_Statics
{
	struct FunctionA_eventGetMyPi_Parms
	{
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CompactNodeTitle", "\xcf\x80" },
		{ "ModuleRelativePath", "FunctionA.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "3.somethgingidunno..." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UFunctionA_GetMyPi_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionA_eventGetMyPi_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFunctionA_GetMyPi_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionA_GetMyPi_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionA_GetMyPi_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFunctionA_GetMyPi_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFunctionA, nullptr, "GetMyPi", nullptr, nullptr, Z_Construct_UFunction_UFunctionA_GetMyPi_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionA_GetMyPi_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFunctionA_GetMyPi_Statics::FunctionA_eventGetMyPi_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionA_GetMyPi_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFunctionA_GetMyPi_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFunctionA_GetMyPi_Statics::FunctionA_eventGetMyPi_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFunctionA_GetMyPi()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFunctionA_GetMyPi_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFunctionA::execGetMyPi)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=UFunctionA::GetMyPi();
	P_NATIVE_END;
}
// End Class UFunctionA Function GetMyPi

// Begin Class UFunctionA
void UFunctionA::StaticRegisterNativesUFunctionA()
{
	UClass* Class = UFunctionA::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateAverages", &UFunctionA::execCalculateAverages },
		{ "GetAMessage", &UFunctionA::execGetAMessage },
		{ "GetMyPi", &UFunctionA::execGetMyPi },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFunctionA);
UClass* Z_Construct_UClass_UFunctionA_NoRegister()
{
	return UFunctionA::StaticClass();
}
struct Z_Construct_UClass_UFunctionA_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FunctionA.h" },
		{ "ModuleRelativePath", "FunctionA.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFunctionA_CalculateAverages, "CalculateAverages" }, // 3425919663
		{ &Z_Construct_UFunction_UFunctionA_GetAMessage, "GetAMessage" }, // 2894859672
		{ &Z_Construct_UFunction_UFunctionA_GetMyPi, "GetMyPi" }, // 2309717843
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFunctionA>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFunctionA_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject5_Cplusplus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFunctionA_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFunctionA_Statics::ClassParams = {
	&UFunctionA::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFunctionA_Statics::Class_MetaDataParams), Z_Construct_UClass_UFunctionA_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFunctionA()
{
	if (!Z_Registration_Info_UClass_UFunctionA.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFunctionA.OuterSingleton, Z_Construct_UClass_UFunctionA_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFunctionA.OuterSingleton;
}
template<> MYPROJECT5_CPLUSPLUS_API UClass* StaticClass<UFunctionA>()
{
	return UFunctionA::StaticClass();
}
UFunctionA::UFunctionA(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFunctionA);
UFunctionA::~UFunctionA() {}
// End Class UFunctionA

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_MyProject5_Cplusplus_5_4_Source_MyProject5_Cplusplus_FunctionA_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCalcAverages::StaticStruct, Z_Construct_UScriptStruct_FCalcAverages_Statics::NewStructOps, TEXT("CalcAverages"), &Z_Registration_Info_UScriptStruct_CalcAverages, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCalcAverages), 12784874U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFunctionA, UFunctionA::StaticClass, TEXT("UFunctionA"), &Z_Registration_Info_UClass_UFunctionA, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFunctionA), 612698679U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_MyProject5_Cplusplus_5_4_Source_MyProject5_Cplusplus_FunctionA_h_96843428(TEXT("/Script/MyProject5_Cplusplus"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_MyProject5_Cplusplus_5_4_Source_MyProject5_Cplusplus_FunctionA_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_MyProject5_Cplusplus_5_4_Source_MyProject5_Cplusplus_FunctionA_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_MyProject5_Cplusplus_5_4_Source_MyProject5_Cplusplus_FunctionA_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_MyProject5_Cplusplus_5_4_Source_MyProject5_Cplusplus_FunctionA_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
