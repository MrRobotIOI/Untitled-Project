// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject5_Cplusplus/PlayerControllerBB.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerControllerBB() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
MYPROJECT5_CPLUSPLUS_API UClass* Z_Construct_UClass_ACharacterBB_NoRegister();
MYPROJECT5_CPLUSPLUS_API UClass* Z_Construct_UClass_APlayerControllerBBBase();
MYPROJECT5_CPLUSPLUS_API UClass* Z_Construct_UClass_APlayerControllerBBBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject5_Cplusplus();
// End Cross Module References

// Begin Class APlayerControllerBBBase
void APlayerControllerBBBase::StaticRegisterNativesAPlayerControllerBBBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerControllerBBBase);
UClass* Z_Construct_UClass_APlayerControllerBBBase_NoRegister()
{
	return APlayerControllerBBBase::StaticClass();
}
struct Z_Construct_UClass_APlayerControllerBBBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PlayerControllerBB.h" },
		{ "ModuleRelativePath", "PlayerControllerBB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionMove_MetaData[] = {
		{ "Category", "PLayer Input|Character Movement" },
		{ "ModuleRelativePath", "PlayerControllerBB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionLook_MetaData[] = {
		{ "Category", "PLayer Input|Character Movement" },
		{ "ModuleRelativePath", "PlayerControllerBB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionJump_MetaData[] = {
		{ "Category", "PLayer Input|Character Movement" },
		{ "ModuleRelativePath", "PlayerControllerBB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "PLayer Input|Character Movement" },
		{ "ModuleRelativePath", "PlayerControllerBB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnhancedInputComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerControllerBB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "PlayerControllerBB.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraMan_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerControllerBBBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerControllerBB.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionMove;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionLook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionJump;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnhancedInputComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraMan;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerControllerBBBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerControllerBBBase_Statics::NewProp_ActionMove = { "ActionMove", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerControllerBBBase, ActionMove), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionMove_MetaData), NewProp_ActionMove_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerControllerBBBase_Statics::NewProp_ActionLook = { "ActionLook", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerControllerBBBase, ActionLook), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionLook_MetaData), NewProp_ActionLook_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerControllerBBBase_Statics::NewProp_ActionJump = { "ActionJump", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerControllerBBBase, ActionJump), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionJump_MetaData), NewProp_ActionJump_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerControllerBBBase_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerControllerBBBase, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerControllerBBBase_Statics::NewProp_EnhancedInputComponent = { "EnhancedInputComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerControllerBBBase, EnhancedInputComponent), Z_Construct_UClass_UEnhancedInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnhancedInputComponent_MetaData), NewProp_EnhancedInputComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerControllerBBBase_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerControllerBBBase, PlayerCharacter), Z_Construct_UClass_ACharacterBB_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCharacter_MetaData), NewProp_PlayerCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerControllerBBBase_Statics::NewProp_CameraMan = { "CameraMan", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerControllerBBBase, CameraMan), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraMan_MetaData), NewProp_CameraMan_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerControllerBBBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerControllerBBBase_Statics::NewProp_ActionMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerControllerBBBase_Statics::NewProp_ActionLook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerControllerBBBase_Statics::NewProp_ActionJump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerControllerBBBase_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerControllerBBBase_Statics::NewProp_EnhancedInputComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerControllerBBBase_Statics::NewProp_PlayerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerControllerBBBase_Statics::NewProp_CameraMan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerControllerBBBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerControllerBBBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject5_Cplusplus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerControllerBBBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerControllerBBBase_Statics::ClassParams = {
	&APlayerControllerBBBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APlayerControllerBBBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerControllerBBBase_Statics::PropPointers),
	0,
	0x008002A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerControllerBBBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerControllerBBBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerControllerBBBase()
{
	if (!Z_Registration_Info_UClass_APlayerControllerBBBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerControllerBBBase.OuterSingleton, Z_Construct_UClass_APlayerControllerBBBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerControllerBBBase.OuterSingleton;
}
template<> MYPROJECT5_CPLUSPLUS_API UClass* StaticClass<APlayerControllerBBBase>()
{
	return APlayerControllerBBBase::StaticClass();
}
APlayerControllerBBBase::APlayerControllerBBBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerControllerBBBase);
APlayerControllerBBBase::~APlayerControllerBBBase() {}
// End Class APlayerControllerBBBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_MyProject5_Cplusplus_5_4_Source_MyProject5_Cplusplus_PlayerControllerBB_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerControllerBBBase, APlayerControllerBBBase::StaticClass, TEXT("APlayerControllerBBBase"), &Z_Registration_Info_UClass_APlayerControllerBBBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerControllerBBBase), 647080303U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_MyProject5_Cplusplus_5_4_Source_MyProject5_Cplusplus_PlayerControllerBB_h_165673781(TEXT("/Script/MyProject5_Cplusplus"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_MyProject5_Cplusplus_5_4_Source_MyProject5_Cplusplus_PlayerControllerBB_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_MyProject5_Cplusplus_5_4_Source_MyProject5_Cplusplus_PlayerControllerBB_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
