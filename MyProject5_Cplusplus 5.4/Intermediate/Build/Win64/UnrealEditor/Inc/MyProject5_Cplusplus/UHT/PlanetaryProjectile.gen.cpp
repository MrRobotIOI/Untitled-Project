// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject5_Cplusplus/PlanetaryProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlanetaryProjectile() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent();
MYPROJECT5_CPLUSPLUS_API UClass* Z_Construct_UClass_UPlanetaryProjectile();
MYPROJECT5_CPLUSPLUS_API UClass* Z_Construct_UClass_UPlanetaryProjectile_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyProject5_Cplusplus();
// End Cross Module References

// Begin Class UPlanetaryProjectile
void UPlanetaryProjectile::StaticRegisterNativesUPlanetaryProjectile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlanetaryProjectile);
UClass* Z_Construct_UClass_UPlanetaryProjectile_NoRegister()
{
	return UPlanetaryProjectile::StaticClass();
}
struct Z_Construct_UClass_UPlanetaryProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlanetaryProjectile.h" },
		{ "ModuleRelativePath", "PlanetaryProjectile.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlanetaryProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlanetaryProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UProjectileMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MyProject5_Cplusplus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetaryProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlanetaryProjectile_Statics::ClassParams = {
	&UPlanetaryProjectile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlanetaryProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlanetaryProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlanetaryProjectile()
{
	if (!Z_Registration_Info_UClass_UPlanetaryProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlanetaryProjectile.OuterSingleton, Z_Construct_UClass_UPlanetaryProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlanetaryProjectile.OuterSingleton;
}
template<> MYPROJECT5_CPLUSPLUS_API UClass* StaticClass<UPlanetaryProjectile>()
{
	return UPlanetaryProjectile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlanetaryProjectile);
UPlanetaryProjectile::~UPlanetaryProjectile() {}
// End Class UPlanetaryProjectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_MyProject5_Cplusplus_5_4_Source_MyProject5_Cplusplus_PlanetaryProjectile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlanetaryProjectile, UPlanetaryProjectile::StaticClass, TEXT("UPlanetaryProjectile"), &Z_Registration_Info_UClass_UPlanetaryProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlanetaryProjectile), 3375636182U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_MyProject5_Cplusplus_5_4_Source_MyProject5_Cplusplus_PlanetaryProjectile_h_2134726563(TEXT("/Script/MyProject5_Cplusplus"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_MyProject5_Cplusplus_5_4_Source_MyProject5_Cplusplus_PlanetaryProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_MyProject5_Cplusplus_5_4_Source_MyProject5_Cplusplus_PlanetaryProjectile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
