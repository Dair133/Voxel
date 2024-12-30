// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IWALS_AbilityInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IWALS_ABILITYSYSTEM_IWALS_AbilityInterface_generated_h
#error "IWALS_AbilityInterface.generated.h already included, missing '#pragma once' in IWALS_AbilityInterface.h"
#endif
#define IWALS_ABILITYSYSTEM_IWALS_AbilityInterface_generated_h

#define FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_13_SPARSE_DATA
#define FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_13_RPC_WRAPPERS \
	virtual void GASBPI_CallToCurrentActivatedAbility_Implementation(int32 EventID) {}; \
 \
	DECLARE_FUNCTION(execGASBPI_CallToCurrentActivatedAbility);


#define FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void GASBPI_CallToCurrentActivatedAbility_Implementation(int32 EventID) {}; \
 \
	DECLARE_FUNCTION(execGASBPI_CallToCurrentActivatedAbility);


#define FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_13_ACCESSORS
#define FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_13_CALLBACK_WRAPPERS
#define FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IWALS_ABILITYSYSTEM_API UIWALS_AbilityInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIWALS_AbilityInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IWALS_ABILITYSYSTEM_API, UIWALS_AbilityInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIWALS_AbilityInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	IWALS_ABILITYSYSTEM_API UIWALS_AbilityInterface(UIWALS_AbilityInterface&&); \
	IWALS_ABILITYSYSTEM_API UIWALS_AbilityInterface(const UIWALS_AbilityInterface&); \
public: \
	IWALS_ABILITYSYSTEM_API virtual ~UIWALS_AbilityInterface();


#define FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IWALS_ABILITYSYSTEM_API UIWALS_AbilityInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	IWALS_ABILITYSYSTEM_API UIWALS_AbilityInterface(UIWALS_AbilityInterface&&); \
	IWALS_ABILITYSYSTEM_API UIWALS_AbilityInterface(const UIWALS_AbilityInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IWALS_ABILITYSYSTEM_API, UIWALS_AbilityInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIWALS_AbilityInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIWALS_AbilityInterface) \
	IWALS_ABILITYSYSTEM_API virtual ~UIWALS_AbilityInterface();


#define FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIWALS_AbilityInterface(); \
	friend struct Z_Construct_UClass_UIWALS_AbilityInterface_Statics; \
public: \
	DECLARE_CLASS(UIWALS_AbilityInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/IWALS_AbilitySystem"), IWALS_ABILITYSYSTEM_API) \
	DECLARE_SERIALIZER(UIWALS_AbilityInterface)


#define FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIWALS_AbilityInterface() {} \
public: \
	typedef UIWALS_AbilityInterface UClassType; \
	typedef IIWALS_AbilityInterface ThisClass; \
	static void Execute_GASBPI_CallToCurrentActivatedAbility(UObject* O, int32 EventID); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IIWALS_AbilityInterface() {} \
public: \
	typedef UIWALS_AbilityInterface UClassType; \
	typedef IIWALS_AbilityInterface ThisClass; \
	static void Execute_GASBPI_CallToCurrentActivatedAbility(UObject* O, int32 EventID); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_10_PROLOG
#define FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_13_SPARSE_DATA \
	FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_13_RPC_WRAPPERS \
	FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_13_ACCESSORS \
	FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_13_CALLBACK_WRAPPERS \
	FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_13_SPARSE_DATA \
	FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_13_ACCESSORS \
	FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_13_CALLBACK_WRAPPERS \
	FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IWALS_ABILITYSYSTEM_API UClass* StaticClass<class UIWALS_AbilityInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
