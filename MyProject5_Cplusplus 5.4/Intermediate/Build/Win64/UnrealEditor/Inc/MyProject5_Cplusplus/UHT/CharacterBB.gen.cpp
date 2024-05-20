// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject5_Cplusplus/CharacterBB.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterBB() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
MYPROJECT5_CPLUSPLUS_API UClass* Z_Construct_UClass_ACharacterBB();
MYPROJECT5_CPLUSPLUS_API UClass* Z_Construct_UClass_ACharacterBB_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject5_Cplusplus();
// End Cross Module References

// Begin Class ACharacterBB
void ACharacterBB::StaticRegisterNativesACharacterBB()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACharacterBB);
UClass* Z_Construct_UClass_ACharacterBB_NoRegister()
{
	return ACharacterBB::StaticClass();
}
struct Z_Construct_UClass_ACharacterBB_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CharacterBB.h" },
		{ "ModuleRelativePath", "CharacterBB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraMan_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CharacterBB" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CharacterBB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "CharacterBB" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CharacterBB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CamRoot_MetaData[] = {
		{ "Category", "CharacterBB" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CharacterBB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "EnhancedInput" },
		{ "ModuleRelativePath", "CharacterBB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "EnhancedInput" },
		{ "ModuleRelativePath", "CharacterBB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "EnhancedInput" },
		{ "ModuleRelativePath", "CharacterBB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "EnhancedInput" },
		{ "ModuleRelativePath", "CharacterBB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunAction_MetaData[] = {
		{ "Category", "EnhancedInput" },
		{ "ModuleRelativePath", "CharacterBB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopRunAction_MetaData[] = {
		{ "Category", "EnhancedInput" },
		{ "ModuleRelativePath", "CharacterBB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlyUpDownAction_MetaData[] = {
		{ "Category", "EnhancedInput" },
		{ "ModuleRelativePath", "CharacterBB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopFlyingAction_MetaData[] = {
		{ "Category", "EnhancedInput" },
		{ "ModuleRelativePath", "CharacterBB.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraMan;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CamRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RunAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StopRunAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlyUpDownAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StopFlyingAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterBB>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterBB_Statics::NewProp_CameraMan = { "CameraMan", nullptr, (EPropertyFlags)0x00400000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBB, CameraMan), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraMan_MetaData), NewProp_CameraMan_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterBB_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBB, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterBB_Statics::NewProp_CamRoot = { "CamRoot", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBB, CamRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CamRoot_MetaData), NewProp_CamRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterBB_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBB, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterBB_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBB, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterBB_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBB, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterBB_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBB, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterBB_Statics::NewProp_RunAction = { "RunAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBB, RunAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunAction_MetaData), NewProp_RunAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterBB_Statics::NewProp_StopRunAction = { "StopRunAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBB, StopRunAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopRunAction_MetaData), NewProp_StopRunAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterBB_Statics::NewProp_FlyUpDownAction = { "FlyUpDownAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBB, FlyUpDownAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlyUpDownAction_MetaData), NewProp_FlyUpDownAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterBB_Statics::NewProp_StopFlyingAction = { "StopFlyingAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterBB, StopFlyingAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopFlyingAction_MetaData), NewProp_StopFlyingAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacterBB_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBB_Statics::NewProp_CameraMan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBB_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBB_Statics::NewProp_CamRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBB_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBB_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBB_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBB_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBB_Statics::NewProp_RunAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBB_Statics::NewProp_StopRunAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBB_Statics::NewProp_FlyUpDownAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterBB_Statics::NewProp_StopFlyingAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBB_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACharacterBB_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject5_Cplusplus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBB_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacterBB_Statics::ClassParams = {
	&ACharacterBB::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACharacterBB_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBB_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterBB_Statics::Class_MetaDataParams), Z_Construct_UClass_ACharacterBB_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACharacterBB()
{
	if (!Z_Registration_Info_UClass_ACharacterBB.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacterBB.OuterSingleton, Z_Construct_UClass_ACharacterBB_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACharacterBB.OuterSingleton;
}
template<> MYPROJECT5_CPLUSPLUS_API UClass* StaticClass<ACharacterBB>()
{
	return ACharacterBB::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterBB);
ACharacterBB::~ACharacterBB() {}
// End Class ACharacterBB

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_MyProject5_Cplusplus_5_4_Source_MyProject5_Cplusplus_CharacterBB_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACharacterBB, ACharacterBB::StaticClass, TEXT("ACharacterBB"), &Z_Registration_Info_UClass_ACharacterBB, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterBB), 1094619803U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_MyProject5_Cplusplus_5_4_Source_MyProject5_Cplusplus_CharacterBB_h_2393741710(TEXT("/Script/MyProject5_Cplusplus"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_MyProject5_Cplusplus_5_4_Source_MyProject5_Cplusplus_CharacterBB_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_MyProject5_Cplusplus_5_4_Source_MyProject5_Cplusplus_CharacterBB_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
