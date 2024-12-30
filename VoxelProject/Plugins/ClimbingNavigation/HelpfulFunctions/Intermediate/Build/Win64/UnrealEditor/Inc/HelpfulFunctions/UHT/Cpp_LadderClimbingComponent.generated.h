// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cpp_LadderClimbingComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FCALS_ComponentAndTransform;
#ifdef HELPFULFUNCTIONS_Cpp_LadderClimbingComponent_generated_h
#error "Cpp_LadderClimbingComponent.generated.h already included, missing '#pragma once' in Cpp_LadderClimbingComponent.h"
#endif
#define HELPFULFUNCTIONS_Cpp_LadderClimbingComponent_generated_h

#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCALS_LadderAnimData_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<struct FCALS_LadderAnimData>();

#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual int32 ChooseMainPosesIndex_Implementation(FVector InitLocation, FRotator InitRotation); \
	virtual bool SetMainValues_Implementation(bool StartedLadderClimb, FCALS_ComponentAndTransform TargetPositionWS, AActor* LadderActor, UPrimitiveComponent* RungComp); \
	virtual bool GetMainValues_Implementation(bool& StartedLadderClimb, FCALS_ComponentAndTransform& TargetPositionWS, AActor*& LadderActor, UPrimitiveComponent*& RungComp); \
	virtual bool InitComponent_Implementation(); \
	virtual bool TryStartLadderClimbWhenHoldLedge_Implementation(FCALS_ComponentAndTransform TargetPositionWS, AActor* LadderActor, UPrimitiveComponent* RungComp); \
	virtual bool TryStartLadderClimb_Implementation(FCALS_ComponentAndTransform TargetPositionWS, AActor* LadderActor, UPrimitiveComponent* RungComp); \
	virtual bool TryFinishLadderClimb_Implementation(bool IgnoreCondition); \
	virtual bool CheckCanStartClimbLadderIteration_Implementation(bool CheckMainCondition, bool FromClimb, FVector InStartLocation, FVector InEndLocation, FRotator InRotation, int32 Iterations, FCALS_ComponentAndTransform& TargetCapPositionWS, AActor*& LadderActor, UPrimitiveComponent*& RungComp); \
	virtual bool CheckCanStartClimbLadder_Implementation(bool CheckMainCondition, bool Param2, FVector InLocation, FRotator InRotation, FCALS_ComponentAndTransform& TargetCapPositionWS, AActor*& LadderActor, UPrimitiveComponent*& RungComp); \
	DECLARE_FUNCTION(execChooseMainPosesIndex); \
	DECLARE_FUNCTION(execSetMainValues); \
	DECLARE_FUNCTION(execGetMainValues); \
	DECLARE_FUNCTION(execInitComponent); \
	DECLARE_FUNCTION(execTryStartLadderClimbWhenHoldLedge); \
	DECLARE_FUNCTION(execTryStartLadderClimb); \
	DECLARE_FUNCTION(execTryFinishLadderClimb); \
	DECLARE_FUNCTION(execCheckCanStartClimbLadderIteration); \
	DECLARE_FUNCTION(execCheckCanStartClimbLadder);


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_30_CALLBACK_WRAPPERS
#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCpp_LadderClimbingComponent(); \
	friend struct Z_Construct_UClass_UCpp_LadderClimbingComponent_Statics; \
public: \
	DECLARE_CLASS(UCpp_LadderClimbingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), NO_API) \
	DECLARE_SERIALIZER(UCpp_LadderClimbingComponent)


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCpp_LadderClimbingComponent(UCpp_LadderClimbingComponent&&); \
	UCpp_LadderClimbingComponent(const UCpp_LadderClimbingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCpp_LadderClimbingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCpp_LadderClimbingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCpp_LadderClimbingComponent) \
	NO_API virtual ~UCpp_LadderClimbingComponent();


#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_27_PROLOG
#define FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_30_CALLBACK_WRAPPERS \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_30_INCLASS_NO_PURE_DECLS \
	FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELPFULFUNCTIONS_API UClass* StaticClass<class UCpp_LadderClimbingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE___Projects_UE5_5_TestDoArmour_5_5_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_Cpp_LadderClimbingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
