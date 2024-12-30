// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilityTask_MovePawnByInput.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilityTask_MovePawnByInput;
class UGameplayAbility;
#ifdef IWALS_ABILITYSYSTEM_AbilityTask_MovePawnByInput_generated_h
#error "AbilityTask_MovePawnByInput.generated.h already included, missing '#pragma once' in AbilityTask_MovePawnByInput.h"
#endif
#define IWALS_ABILITYSYSTEM_AbilityTask_MovePawnByInput_generated_h

#define FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MovePawnByInput_h_12_DELEGATE \
IWALS_ABILITYSYSTEM_API void FOnDurningMove_DelegateWrapper(const FMulticastScriptDelegate& OnDurningMove, float Time);


#define FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MovePawnByInput_h_13_DELEGATE \
IWALS_ABILITYSYSTEM_API void FOnTargetLocationReached_DelegateWrapper(const FMulticastScriptDelegate& OnTargetLocationReached, float Time);


#define FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MovePawnByInput_h_14_DELEGATE \
IWALS_ABILITYSYSTEM_API void FOnFailed_DelegateWrapper(const FMulticastScriptDelegate& OnFailed, float Time);


#define FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MovePawnByInput_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMovePawnByInput);


#define FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MovePawnByInput_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilityTask_MovePawnByInput(); \
	friend struct Z_Construct_UClass_UAbilityTask_MovePawnByInput_Statics; \
public: \
	DECLARE_CLASS(UAbilityTask_MovePawnByInput, UAbilityTask, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IWALS_AbilitySystem"), NO_API) \
	DECLARE_SERIALIZER(UAbilityTask_MovePawnByInput)


#define FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MovePawnByInput_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilityTask_MovePawnByInput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAbilityTask_MovePawnByInput(UAbilityTask_MovePawnByInput&&); \
	UAbilityTask_MovePawnByInput(const UAbilityTask_MovePawnByInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilityTask_MovePawnByInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilityTask_MovePawnByInput); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilityTask_MovePawnByInput) \
	NO_API virtual ~UAbilityTask_MovePawnByInput();


#define FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MovePawnByInput_h_16_PROLOG
#define FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MovePawnByInput_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MovePawnByInput_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MovePawnByInput_h_19_INCLASS_NO_PURE_DECLS \
	FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MovePawnByInput_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IWALS_ABILITYSYSTEM_API UClass* StaticClass<class UAbilityTask_MovePawnByInput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_AbilityTask_MovePawnByInput_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
