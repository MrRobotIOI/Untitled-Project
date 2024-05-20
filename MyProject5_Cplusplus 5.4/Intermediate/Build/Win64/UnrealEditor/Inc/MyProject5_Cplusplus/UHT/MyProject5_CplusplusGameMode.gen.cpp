// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject5_Cplusplus/MyProject5_CplusplusGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProject5_CplusplusGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MYPROJECT5_CPLUSPLUS_API UClass* Z_Construct_UClass_AMyProject5_CplusplusGameMode();
MYPROJECT5_CPLUSPLUS_API UClass* Z_Construct_UClass_AMyProject5_CplusplusGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject5_Cplusplus();
// End Cross Module References

// Begin Class AMyProject5_CplusplusGameMode
void AMyProject5_CplusplusGameMode::StaticRegisterNativesAMyProject5_CplusplusGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyProject5_CplusplusGameMode);
UClass* Z_Construct_UClass_AMyProject5_CplusplusGameMode_NoRegister()
{
	return AMyProject5_CplusplusGameMode::StaticClass();
}
struct Z_Construct_UClass_AMyProject5_CplusplusGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyProject5_CplusplusGameMode.h" },
		{ "ModuleRelativePath", "MyProject5_CplusplusGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyProject5_CplusplusGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyProject5_CplusplusGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject5_Cplusplus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyProject5_CplusplusGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyProject5_CplusplusGameMode_Statics::ClassParams = {
	&AMyProject5_CplusplusGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyProject5_CplusplusGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyProject5_CplusplusGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyProject5_CplusplusGameMode()
{
	if (!Z_Registration_Info_UClass_AMyProject5_CplusplusGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyProject5_CplusplusGameMode.OuterSingleton, Z_Construct_UClass_AMyProject5_CplusplusGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyProject5_CplusplusGameMode.OuterSingleton;
}
template<> MYPROJECT5_CPLUSPLUS_API UClass* StaticClass<AMyProject5_CplusplusGameMode>()
{
	return AMyProject5_CplusplusGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProject5_CplusplusGameMode);
AMyProject5_CplusplusGameMode::~AMyProject5_CplusplusGameMode() {}
// End Class AMyProject5_CplusplusGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_MyProject5_Cplusplus_5_4_Source_MyProject5_Cplusplus_MyProject5_CplusplusGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyProject5_CplusplusGameMode, AMyProject5_CplusplusGameMode::StaticClass, TEXT("AMyProject5_CplusplusGameMode"), &Z_Registration_Info_UClass_AMyProject5_CplusplusGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyProject5_CplusplusGameMode), 414126983U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_MyProject5_Cplusplus_5_4_Source_MyProject5_Cplusplus_MyProject5_CplusplusGameMode_h_2813170493(TEXT("/Script/MyProject5_Cplusplus"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_MyProject5_Cplusplus_5_4_Source_MyProject5_Cplusplus_MyProject5_CplusplusGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_MyProject5_Cplusplus_5_4_Source_MyProject5_Cplusplus_MyProject5_CplusplusGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
