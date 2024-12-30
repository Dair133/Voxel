// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IWALS_GameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IWALS_ABILITYSYSTEM_IWALS_GameplayAbility_generated_h
#error "IWALS_GameplayAbility.generated.h already included, missing '#pragma once' in IWALS_GameplayAbility.h"
#endif
#define IWALS_ABILITYSYSTEM_IWALS_GameplayAbility_generated_h

#define FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbility_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSendToCharacterSpecHandle);


#define FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbility_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIWALS_GameplayAbility(); \
	friend struct Z_Construct_UClass_UIWALS_GameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UIWALS_GameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IWALS_AbilitySystem"), NO_API) \
	DECLARE_SERIALIZER(UIWALS_GameplayAbility) \
	virtual UObject* _getUObject() const override { return const_cast<UIWALS_GameplayAbility*>(this); }


#define FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbility_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIWALS_GameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIWALS_GameplayAbility(UIWALS_GameplayAbility&&); \
	UIWALS_GameplayAbility(const UIWALS_GameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIWALS_GameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIWALS_GameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIWALS_GameplayAbility) \
	NO_API virtual ~UIWALS_GameplayAbility();


#define FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbility_h_14_PROLOG
#define FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbility_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbility_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbility_h_17_INCLASS_NO_PURE_DECLS \
	FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbility_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IWALS_ABILITYSYSTEM_API UClass* StaticClass<class UIWALS_GameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
