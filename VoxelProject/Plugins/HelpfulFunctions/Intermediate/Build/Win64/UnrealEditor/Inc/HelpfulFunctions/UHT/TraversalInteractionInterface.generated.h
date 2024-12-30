// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TraversalInteractionInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class CALS_TraversalAction : uint8;
#ifdef HELPFULFUNCTIONS_TraversalInteractionInterface_generated_h
#error "TraversalInteractionInterface.generated.h already included, missing '#pragma once' in TraversalInteractionInterface.h"
#endif
#define HELPFULFUNCTIONS_TraversalInteractionInterface_generated_h

#define FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_TraversalInteractionInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BPI_Get_ControlTransform_Implementation(FTransform& ReturnTransform) {}; \
	virtual void BPI_Get_RootTransform_Implementation(FTransform& ReturnTransform) {}; \
	virtual void BPI_Get_StartedPredictableJump_Implementation(bool& StartedJump) {}; \
	virtual void BPI_Set_PredictableJump_Implementation(bool StartedJump, bool& Updated) {}; \
	virtual void BPI_Get_StartedTraversalAction_Implementation(bool& ReturnStarted, CALS_TraversalAction& ReturnActionState) {}; \
	virtual void BPI_Set_TraversalAction_Implementation(bool StartedAction, CALS_TraversalAction StateAction, bool& Updated) {}; \
	virtual void BPI_Get_InteractionTransform_Implementation(FTransform& ReturnTransform) {}; \
	virtual void BPI_Set_InteractionTransform_Implementation(FTransform NewTransform) {}; \
	DECLARE_FUNCTION(execBPI_Get_ControlTransform); \
	DECLARE_FUNCTION(execBPI_Get_RootTransform); \
	DECLARE_FUNCTION(execBPI_Get_StartedPredictableJump); \
	DECLARE_FUNCTION(execBPI_Set_PredictableJump); \
	DECLARE_FUNCTION(execBPI_Get_StartedTraversalAction); \
	DECLARE_FUNCTION(execBPI_Set_TraversalAction); \
	DECLARE_FUNCTION(execBPI_Get_InteractionTransform); \
	DECLARE_FUNCTION(execBPI_Set_InteractionTransform);


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_TraversalInteractionInterface_h_13_CALLBACK_WRAPPERS
#define FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_TraversalInteractionInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HELPFULFUNCTIONS_API UTraversalInteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTraversalInteractionInterface(UTraversalInteractionInterface&&); \
	UTraversalInteractionInterface(const UTraversalInteractionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HELPFULFUNCTIONS_API, UTraversalInteractionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTraversalInteractionInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTraversalInteractionInterface) \
	HELPFULFUNCTIONS_API virtual ~UTraversalInteractionInterface();


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_TraversalInteractionInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTraversalInteractionInterface(); \
	friend struct Z_Construct_UClass_UTraversalInteractionInterface_Statics; \
public: \
	DECLARE_CLASS(UTraversalInteractionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), HELPFULFUNCTIONS_API) \
	DECLARE_SERIALIZER(UTraversalInteractionInterface)


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_TraversalInteractionInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_TraversalInteractionInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_TraversalInteractionInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_TraversalInteractionInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITraversalInteractionInterface() {} \
public: \
	typedef UTraversalInteractionInterface UClassType; \
	typedef ITraversalInteractionInterface ThisClass; \
	static void Execute_BPI_Get_ControlTransform(UObject* O, FTransform& ReturnTransform); \
	static void Execute_BPI_Get_InteractionTransform(UObject* O, FTransform& ReturnTransform); \
	static void Execute_BPI_Get_RootTransform(UObject* O, FTransform& ReturnTransform); \
	static void Execute_BPI_Get_StartedPredictableJump(UObject* O, bool& StartedJump); \
	static void Execute_BPI_Get_StartedTraversalAction(UObject* O, bool& ReturnStarted, CALS_TraversalAction& ReturnActionState); \
	static void Execute_BPI_Set_InteractionTransform(UObject* O, FTransform NewTransform); \
	static void Execute_BPI_Set_PredictableJump(UObject* O, bool StartedJump, bool& Updated); \
	static void Execute_BPI_Set_TraversalAction(UObject* O, bool StartedAction, CALS_TraversalAction StateAction, bool& Updated); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_TraversalInteractionInterface_h_10_PROLOG
#define FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_TraversalInteractionInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_TraversalInteractionInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_TraversalInteractionInterface_h_13_CALLBACK_WRAPPERS \
	FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_TraversalInteractionInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELPFULFUNCTIONS_API UClass* StaticClass<class UTraversalInteractionInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_TraversalInteractionInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
