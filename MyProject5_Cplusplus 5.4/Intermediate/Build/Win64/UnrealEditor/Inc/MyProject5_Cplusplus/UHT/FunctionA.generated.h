// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FunctionA.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCalcAverages;
#ifdef MYPROJECT5_CPLUSPLUS_FunctionA_generated_h
#error "FunctionA.generated.h already included, missing '#pragma once' in FunctionA.h"
#endif
#define MYPROJECT5_CPLUSPLUS_FunctionA_generated_h

#define FID_Unreal_Projects_MyProject5_Cplusplus_5_4_Source_MyProject5_Cplusplus_FunctionA_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCalcAverages_Statics; \
	MYPROJECT5_CPLUSPLUS_API static class UScriptStruct* StaticStruct();


template<> MYPROJECT5_CPLUSPLUS_API UScriptStruct* StaticStruct<struct FCalcAverages>();

#define FID_Unreal_Projects_MyProject5_Cplusplus_5_4_Source_MyProject5_Cplusplus_FunctionA_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCalculateAverages); \
	DECLARE_FUNCTION(execGetMyPi); \
	DECLARE_FUNCTION(execGetAMessage);


#define FID_Unreal_Projects_MyProject5_Cplusplus_5_4_Source_MyProject5_Cplusplus_FunctionA_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFunctionA(); \
	friend struct Z_Construct_UClass_UFunctionA_Statics; \
public: \
	DECLARE_CLASS(UFunctionA, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject5_Cplusplus"), NO_API) \
	DECLARE_SERIALIZER(UFunctionA)


#define FID_Unreal_Projects_MyProject5_Cplusplus_5_4_Source_MyProject5_Cplusplus_FunctionA_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFunctionA(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFunctionA(UFunctionA&&); \
	UFunctionA(const UFunctionA&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFunctionA); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFunctionA); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFunctionA) \
	NO_API virtual ~UFunctionA();


#define FID_Unreal_Projects_MyProject5_Cplusplus_5_4_Source_MyProject5_Cplusplus_FunctionA_h_36_PROLOG
#define FID_Unreal_Projects_MyProject5_Cplusplus_5_4_Source_MyProject5_Cplusplus_FunctionA_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_MyProject5_Cplusplus_5_4_Source_MyProject5_Cplusplus_FunctionA_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_MyProject5_Cplusplus_5_4_Source_MyProject5_Cplusplus_FunctionA_h_52_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_MyProject5_Cplusplus_5_4_Source_MyProject5_Cplusplus_FunctionA_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT5_CPLUSPLUS_API UClass* StaticClass<class UFunctionA>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_MyProject5_Cplusplus_5_4_Source_MyProject5_Cplusplus_FunctionA_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
