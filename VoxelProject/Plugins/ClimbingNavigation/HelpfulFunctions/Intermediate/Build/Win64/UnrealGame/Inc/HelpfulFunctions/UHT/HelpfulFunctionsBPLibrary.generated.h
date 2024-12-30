// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HelpfulFunctionsBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACharacter;
class UActorComponent;
class UAnimInstance;
class UAnimMontage;
class UAnimSequence;
class UAnimSequenceBase;
class UCharacterMovementComponent;
class UCurveFloat;
class UCurveVector;
class UObject;
class UPrimitiveComponent;
enum class CALS_IntputType : uint8;
struct FAnimPoseEvaluationConfig;
struct FCALS_ComponentAndTransform;
struct FCMC_SingleClimbPointC;
struct FHitResult;
struct FLinearColor;
struct FVelocityBlendCpp;
#ifdef HELPFULFUNCTIONS_HelpfulFunctionsBPLibrary_generated_h
#error "HelpfulFunctionsBPLibrary.generated.h already included, missing '#pragma once' in HelpfulFunctionsBPLibrary.h"
#endif
#define HELPFULFUNCTIONS_HelpfulFunctionsBPLibrary_generated_h

#define FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSingleClimbPoint_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct();


template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<struct FSingleClimbPoint>();

#define FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVelocityBlendCpp_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct();


template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<struct FVelocityBlendCpp>();

#define FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimPoseEvaluationConfig_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct();


template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<struct FAnimPoseEvaluationConfig>();

#define FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_111_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetClampedCurveValue); \
	DECLARE_FUNCTION(execBounceOutTimeFunction); \
	DECLARE_FUNCTION(execInterpolateBetweenPoints); \
	DECLARE_FUNCTION(execCreateComponentAndAddToActor); \
	DECLARE_FUNCTION(execTryMarkPackageDirty); \
	DECLARE_FUNCTION(execCheckFloorTypeC); \
	DECLARE_FUNCTION(execGetAnimSequenceFromMontage); \
	DECLARE_FUNCTION(execGetBonePositionAtTimeFromSeq); \
	DECLARE_FUNCTION(execVInterpToWithDelay); \
	DECLARE_FUNCTION(execSplineLerpOnPathPoints); \
	DECLARE_FUNCTION(execGetRootMotionValueAtTime); \
	DECLARE_FUNCTION(execGetCurveValueAtTime); \
	DECLARE_FUNCTION(execFindNearestCollisionByCylinder); \
	DECLARE_FUNCTION(execGetIsEnemyState); \
	DECLARE_FUNCTION(execAnimSlotIsActivatedByTaget); \
	DECLARE_FUNCTION(execAnimSlotIsActivated); \
	DECLARE_FUNCTION(execGetSafeFloatValue); \
	DECLARE_FUNCTION(execConvertLocalToWorldFastMatrix); \
	DECLARE_FUNCTION(execConvertWorldToLocalFastMatrix); \
	DECLARE_FUNCTION(execExecuteInterfaceInput); \
	DECLARE_FUNCTION(execAutocorrelation); \
	DECLARE_FUNCTION(execFFT); \
	DECLARE_FUNCTION(execFindBaseJumpAwayPosition); \
	DECLARE_FUNCTION(execIsNotHidingInFoliage); \
	DECLARE_FUNCTION(execRayCastSphereComplexRoomCheckFast); \
	DECLARE_FUNCTION(execRayCastSphereRoomCheckFast); \
	DECLARE_FUNCTION(execFixMovePointWhenIs); \
	DECLARE_FUNCTION(execClassToActorsArray); \
	DECLARE_FUNCTION(execGetNearFromActorsArray); \
	DECLARE_FUNCTION(execFindNearPointToWallSurface); \
	DECLARE_FUNCTION(execFindGapBySphereTrace); \
	DECLARE_FUNCTION(execWalkableLineTrace); \
	DECLARE_FUNCTION(execRotatedCapsuleTraceSingle); \
	DECLARE_FUNCTION(execSmoothCharacterRotation); \
	DECLARE_FUNCTION(execCalculateQuadrant); \
	DECLARE_FUNCTION(execAngleInRange); \
	DECLARE_FUNCTION(execUpdateRotationValues); \
	DECLARE_FUNCTION(execUpdateMovementValuesLod); \
	DECLARE_FUNCTION(execUpdateAimingValues); \
	DECLARE_FUNCTION(execUpdateMovementValues); \
	DECLARE_FUNCTION(execCalcVelocityBlendFast); \
	DECLARE_FUNCTION(execCalculateRelativeAcceleration); \
	DECLARE_FUNCTION(execCalculateDiagonalScale); \
	DECLARE_FUNCTION(execCalcFootsOffset); \
	DECLARE_FUNCTION(execClimbingLedgeValidP1); \
	DECLARE_FUNCTION(execTryFindLedgeLine); \
	DECLARE_FUNCTION(execFindLedgePointStructure); \
	DECLARE_FUNCTION(execClassToIgnore); \
	DECLARE_FUNCTION(execNormalToVector); \
	DECLARE_FUNCTION(execFindLedgePoint); \
	DECLARE_FUNCTION(execDistancePointToLine); \
	DECLARE_FUNCTION(execClimbingFootIK); \
	DECLARE_FUNCTION(execCapsuleHaveRoomWithIgnoreTransform); \
	DECLARE_FUNCTION(execCapsuleHaveRoomWithIgnore); \
	DECLARE_FUNCTION(execSlerpToFast); \
	DECLARE_FUNCTION(execSlerpFast); \
	DECLARE_FUNCTION(execGetAngleBetween); \
	DECLARE_FUNCTION(execBouceOutInterpFast); \
	DECLARE_FUNCTION(execElasticOutInterpFast); \
	DECLARE_FUNCTION(execForceDestroyComponent); \
	DECLARE_FUNCTION(execGetPlayerCapsuleStartLocation); \
	DECLARE_FUNCTION(execHelpfulFunctionsSampleFunction);


#define FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_111_INCLASS \
private: \
	static void StaticRegisterNativesUHelpfulFunctionsBPLibrary(); \
	friend struct Z_Construct_UClass_UHelpfulFunctionsBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UHelpfulFunctionsBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), NO_API) \
	DECLARE_SERIALIZER(UHelpfulFunctionsBPLibrary)


#define FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_111_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHelpfulFunctionsBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHelpfulFunctionsBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHelpfulFunctionsBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHelpfulFunctionsBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHelpfulFunctionsBPLibrary(UHelpfulFunctionsBPLibrary&&); \
	UHelpfulFunctionsBPLibrary(const UHelpfulFunctionsBPLibrary&); \
public: \
	NO_API virtual ~UHelpfulFunctionsBPLibrary();


#define FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_108_PROLOG
#define FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_111_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_111_RPC_WRAPPERS \
	FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_111_INCLASS \
	FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_111_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELPFULFUNCTIONS_API UClass* StaticClass<class UHelpfulFunctionsBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h


#define FOREACH_ENUM_EANIMBASEEVALTYPE(op) \
	op(EAnimBaseEvalType::Source) \
	op(EAnimBaseEvalType::Raw) \
	op(EAnimBaseEvalType::Compressed) 

enum class EAnimBaseEvalType : uint8;
template<> struct TIsUEnumClass<EAnimBaseEvalType> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<EAnimBaseEvalType>();

#define FOREACH_ENUM_CALS_INTPUTTYPE(op) \
	op(CALS_IntputType::JumpAction) \
	op(CALS_IntputType::WalkAction) \
	op(CALS_IntputType::SprintAction) \
	op(CALS_IntputType::AimAction) \
	op(CALS_IntputType::ShotAction) \
	op(CALS_IntputType::StanceAction) 

enum class CALS_IntputType : uint8;
template<> struct TIsUEnumClass<CALS_IntputType> { enum { Value = true }; };
template<> HELPFULFUNCTIONS_API UEnum* StaticEnum<CALS_IntputType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
