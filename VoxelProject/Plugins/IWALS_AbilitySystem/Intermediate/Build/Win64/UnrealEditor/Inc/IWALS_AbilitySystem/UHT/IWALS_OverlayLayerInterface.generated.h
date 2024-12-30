// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IWALS_OverlayLayerInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IWALS_ABILITYSYSTEM_IWALS_OverlayLayerInterface_generated_h
#error "IWALS_OverlayLayerInterface.generated.h already included, missing '#pragma once' in IWALS_OverlayLayerInterface.h"
#endif
#define IWALS_ABILITYSYSTEM_IWALS_OverlayLayerInterface_generated_h

#define FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_OverlayLayerInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BPI_Get_OnUnequipFinished_Implementation(bool& Finished) {}; \
	virtual void BPI_Set_OnOverlayStateChangeInit_Implementation(int32 ActionIndex) {}; \
	virtual void BPI_Set_RequiredOverlayStateIndex_Implementation(int32 NewStateIndex) {}; \
	virtual void BPI_Set_OverlayHaveBlendOutState_Implementation(bool UseBlendState) {}; \
	virtual void BPI_Get_OverlayHaveBlendOutState_Implementation(bool& HaveState) {}; \
	DECLARE_FUNCTION(execBPI_Get_OnUnequipFinished); \
	DECLARE_FUNCTION(execBPI_Set_OnOverlayStateChangeInit); \
	DECLARE_FUNCTION(execBPI_Set_RequiredOverlayStateIndex); \
	DECLARE_FUNCTION(execBPI_Set_OverlayHaveBlendOutState); \
	DECLARE_FUNCTION(execBPI_Get_OverlayHaveBlendOutState);


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_OverlayLayerInterface_h_13_CALLBACK_WRAPPERS
#define FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_OverlayLayerInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IWALS_ABILITYSYSTEM_API UIWALS_OverlayLayerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIWALS_OverlayLayerInterface(UIWALS_OverlayLayerInterface&&); \
	UIWALS_OverlayLayerInterface(const UIWALS_OverlayLayerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IWALS_ABILITYSYSTEM_API, UIWALS_OverlayLayerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIWALS_OverlayLayerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIWALS_OverlayLayerInterface) \
	IWALS_ABILITYSYSTEM_API virtual ~UIWALS_OverlayLayerInterface();


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_OverlayLayerInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIWALS_OverlayLayerInterface(); \
	friend struct Z_Construct_UClass_UIWALS_OverlayLayerInterface_Statics; \
public: \
	DECLARE_CLASS(UIWALS_OverlayLayerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/IWALS_AbilitySystem"), IWALS_ABILITYSYSTEM_API) \
	DECLARE_SERIALIZER(UIWALS_OverlayLayerInterface)


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_OverlayLayerInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_OverlayLayerInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_OverlayLayerInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_OverlayLayerInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIWALS_OverlayLayerInterface() {} \
public: \
	typedef UIWALS_OverlayLayerInterface UClassType; \
	typedef IIWALS_OverlayLayerInterface ThisClass; \
	static void Execute_BPI_Get_OnUnequipFinished(UObject* O, bool& Finished); \
	static void Execute_BPI_Get_OverlayHaveBlendOutState(UObject* O, bool& HaveState); \
	static void Execute_BPI_Set_OnOverlayStateChangeInit(UObject* O, int32 ActionIndex); \
	static void Execute_BPI_Set_OverlayHaveBlendOutState(UObject* O, bool UseBlendState); \
	static void Execute_BPI_Set_RequiredOverlayStateIndex(UObject* O, int32 NewStateIndex); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_OverlayLayerInterface_h_10_PROLOG
#define FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_OverlayLayerInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_OverlayLayerInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_OverlayLayerInterface_h_13_CALLBACK_WRAPPERS \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_OverlayLayerInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IWALS_ABILITYSYSTEM_API UClass* StaticClass<class UIWALS_OverlayLayerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_OverlayLayerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
