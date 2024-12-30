// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWALS_AbilitySystem/Public/IWALS_AnimInstanceCpp.h"
#include "IWALS_AbilitySystem/Public/IWALS_EnumsAndStruct.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIWALS_AnimInstanceCpp() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UIWALS_AnimInstanceCpp();
IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UIWALS_AnimInstanceCpp_NoRegister();
IWALS_ABILITYSYSTEM_API UEnum* Z_Construct_UEnum_IWALS_AbilitySystem_HipsDirectionC();
IWALS_ABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FLeanAmoutC();
IWALS_ABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FVelocityBlendC();
UPackage* Z_Construct_UPackage__Script_IWALS_AbilitySystem();
// End Cross Module References

// Begin Class UIWALS_AnimInstanceCpp
void UIWALS_AnimInstanceCpp::StaticRegisterNativesUIWALS_AnimInstanceCpp()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIWALS_AnimInstanceCpp);
UClass* Z_Construct_UClass_UIWALS_AnimInstanceCpp_NoRegister()
{
	return UIWALS_AnimInstanceCpp::StaticClass();
}
struct Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "IWALS_AnimInstanceCpp.h" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryMotionMaskC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "IWALS Anim Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Zdefiniuj podstawowe zmienne, kt\xef\xbf\xbdre b\xef\xbf\xbd""d\xef\xbf\xbd potrzebne dla systemu Overlay States. \xef\xbf\xbd""eby nie odwo\xef\xbf\xbdywa\xef\xbf\xbd si\xef\xbf\xbd do klasy ALS_AnimBP przy pomocy Property Access utworzony zosta\xef\xbf\xbd w\xef\xbf\xbd""a\xef\xbf\xbdnie\n\x09""Anim Instance. W nim zdefiniowane s\xef\xbf\xbd potrzebne zmienne, wi\xef\xbf\xbd""c dzi\xef\xbf\xbdki temu odwo\xef\xbf\xbdywa\xef\xbf\xbd si\xef\xbf\xbd b\xef\xbf\xbd""dziemy w\xef\xbf\xbd""a\xef\xbf\xbdnie do tej klasy a nie ca\xef\xbf\xbd""ego ALS_AnimBP */" },
#endif
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Zdefiniuj podstawowe zmienne, kt\xef\xbf\xbdre b\xef\xbf\xbd""d\xef\xbf\xbd potrzebne dla systemu Overlay States. \xef\xbf\xbd""eby nie odwo\xef\xbf\xbdywa\xef\xbf\xbd si\xef\xbf\xbd do klasy ALS_AnimBP przy pomocy Property Access utworzony zosta\xef\xbf\xbd w\xef\xbf\xbd""a\xef\xbf\xbdnie\n      Anim Instance. W nim zdefiniowane s\xef\xbf\xbd potrzebne zmienne, wi\xef\xbf\xbd""c dzi\xef\xbf\xbdki temu odwo\xef\xbf\xbdywa\xef\xbf\xbd si\xef\xbf\xbd b\xef\xbf\xbd""dziemy w\xef\xbf\xbd""a\xef\xbf\xbdnie do tej klasy a nie ca\xef\xbf\xbd""ego ALS_AnimBP" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendOverlayWithCoverModeC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "IWALS Anim Graph" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandPredictionC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "IWALS Anim Graph" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsHeldArrowC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "IWALS Anim Graph" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsHaveArrowsC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "IWALS Anim Graph" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddRecoilImpulseC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "IWALS Anim Graph" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayOverrideStateC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "IWALS Anim Graph" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatStateIndexC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "IWALS Anim Graph" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoverCrouchWithDirectionC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "IWALS Anim Graph" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeAccelerationAmoutC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "IWALS Anim Graph" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlailRateC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Ragdoll" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Ragdoll\n" },
#endif
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ragdoll" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpineRotationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Aiming Values" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Aiming\n" },
#endif
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Aiming" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothedAimingRotationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Aiming Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimingAngleC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Aiming Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothedAimingAngleC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Aiming Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimSweepTimeC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Aiming Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardYawTimeC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Aiming Values" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(BlueprintReadWrite, Category = \"Anim Graph - Aiming Values\", meta = (AllowPrivateAccess = \"True\"))\n//float InputYawOffsetTimeC = 0.0;\n" },
#endif
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(BlueprintReadWrite, Category = \"Anim Graph - Aiming Values\", meta = (AllowPrivateAccess = \"True\"))\nfloat InputYawOffsetTimeC = 0.0;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimPrepertiesCustomC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Aiming Values" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(BlueprintReadWrite, Category = \"Anim Graph - Aiming Values\", meta = (AllowPrivateAccess = \"True\"))\n//float RightYawTimeC = 0.0;\n" },
#endif
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(BlueprintReadWrite, Category = \"Anim Graph - Aiming Values\", meta = (AllowPrivateAccess = \"True\"))\nfloat RightYawTimeC = 0.0;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeckTransformFromSnapshot_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Aiming Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackedHipsDirectionC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Anim Graph - Grounded\n" },
#endif
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Anim Graph - Grounded" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShouldMoveC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotate_LC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(BlueprintReadWrite, Category = \"Anim Graph - Grounded\", meta = (AllowPrivateAccess = \"True\"))\n//bool FinishStopTransitionC = false;\n" },
#endif
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(BlueprintReadWrite, Category = \"Anim Graph - Grounded\", meta = (AllowPrivateAccess = \"True\"))\nbool FinishStopTransitionC = false;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotate_RC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateRateC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityBlend_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(BlueprintReadWrite, Category = \"Anim Graph - Grounded\", meta = (AllowPrivateAccess = \"True\"))\n//float DiagonalScaleAmoutC = 0.0;\n" },
#endif
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(BlueprintReadWrite, Category = \"Anim Graph - Grounded\", meta = (AllowPrivateAccess = \"True\"))\nfloat DiagonalScaleAmoutC = 0.0;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeanAmountC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootYawChangeSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(BlueprintReadWrite, Category = \"Anim Graph - Grounded\", meta = (AllowPrivateAccess = \"True\"))\n//float RYawC = 0.0;\n" },
#endif
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(BlueprintReadWrite, Category = \"Anim Graph - Grounded\", meta = (AllowPrivateAccess = \"True\"))\nfloat RYawC = 0.0;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpedC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - In Air" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Anim Graph - In Air\n" },
#endif
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Anim Graph - In Air" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpPlayRateC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - In Air" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallSpeedC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - In Air" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetRootBoneEnabledC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Motion Matching" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-------------------------------------------     For Motion Matching    ------------------------------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-------------------------------------------     For Motion Matching    ------------------------------------------------------" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsMovingC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickUpLootItemC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasMovementInputC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleCollidingC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JustLandedC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStairsC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterruptOnDatabaseC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Motion Matching" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsTurnInPlaceAimingC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FutureVelocityC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityLastFrameC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastNonZeroVelocityC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccelerationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandVelocityC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimingRotationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Essential Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterTransformC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Motion Matching" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootTransformC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Motion Matching" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionTransformC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Motion Matching" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FutureMovementAngleC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Motion Matching" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDatabaseTags_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Motion Matching" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondaryMotionMaskC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOverlayWithCoverModeC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LandPredictionC;
	static void NewProp_IsHeldArrowC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsHeldArrowC;
	static void NewProp_IsHaveArrowsC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsHaveArrowsC;
	static void NewProp_AddRecoilImpulseC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AddRecoilImpulseC;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OverlayOverrideStateC;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CombatStateIndexC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CoverCrouchWithDirectionC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeAccelerationAmoutC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FlailRateC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpineRotationC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SmoothedAimingRotationC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AimingAngleC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SmoothedAimingAngleC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimSweepTimeC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardYawTimeC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimPrepertiesCustomC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NeckTransformFromSnapshot;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackedHipsDirectionC_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackedHipsDirectionC;
	static void NewProp_ShouldMoveC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldMoveC;
	static void NewProp_Rotate_LC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Rotate_LC;
	static void NewProp_Rotate_RC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Rotate_RC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateRateC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VelocityBlend;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeanAmountC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RootYawChangeSpeed;
	static void NewProp_JumpedC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_JumpedC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpPlayRateC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FallSpeedC;
	static void NewProp_OffsetRootBoneEnabledC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OffsetRootBoneEnabledC;
	static void NewProp_IsMovingC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMovingC;
	static void NewProp_PickUpLootItemC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PickUpLootItemC;
	static void NewProp_HasMovementInputC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasMovementInputC;
	static void NewProp_CapsuleCollidingC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CapsuleCollidingC;
	static void NewProp_JustLandedC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_JustLandedC;
	static void NewProp_OnStairsC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OnStairsC;
	static void NewProp_InterruptOnDatabaseC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InterruptOnDatabaseC;
	static void NewProp_IsTurnInPlaceAimingC_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTurnInPlaceAimingC;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VelocityC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FutureVelocityC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VelocityLastFrameC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastNonZeroVelocityC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccelerationC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LandVelocityC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AimingRotationC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CharacterTransformC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootTransformC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionTransformC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FutureMovementAngleC;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentDatabaseTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentDatabaseTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIWALS_AnimInstanceCpp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SecondaryMotionMaskC = { "SecondaryMotionMaskC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, SecondaryMotionMaskC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondaryMotionMaskC_MetaData), NewProp_SecondaryMotionMaskC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_BlendOverlayWithCoverModeC = { "BlendOverlayWithCoverModeC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, BlendOverlayWithCoverModeC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendOverlayWithCoverModeC_MetaData), NewProp_BlendOverlayWithCoverModeC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_LandPredictionC = { "LandPredictionC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, LandPredictionC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandPredictionC_MetaData), NewProp_LandPredictionC_MetaData) };
void Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_IsHeldArrowC_SetBit(void* Obj)
{
	((UIWALS_AnimInstanceCpp*)Obj)->IsHeldArrowC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_IsHeldArrowC = { "IsHeldArrowC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWALS_AnimInstanceCpp), &Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_IsHeldArrowC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsHeldArrowC_MetaData), NewProp_IsHeldArrowC_MetaData) };
void Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_IsHaveArrowsC_SetBit(void* Obj)
{
	((UIWALS_AnimInstanceCpp*)Obj)->IsHaveArrowsC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_IsHaveArrowsC = { "IsHaveArrowsC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWALS_AnimInstanceCpp), &Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_IsHaveArrowsC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsHaveArrowsC_MetaData), NewProp_IsHaveArrowsC_MetaData) };
void Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AddRecoilImpulseC_SetBit(void* Obj)
{
	((UIWALS_AnimInstanceCpp*)Obj)->AddRecoilImpulseC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AddRecoilImpulseC = { "AddRecoilImpulseC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWALS_AnimInstanceCpp), &Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AddRecoilImpulseC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddRecoilImpulseC_MetaData), NewProp_AddRecoilImpulseC_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_OverlayOverrideStateC = { "OverlayOverrideStateC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, OverlayOverrideStateC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayOverrideStateC_MetaData), NewProp_OverlayOverrideStateC_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_CombatStateIndexC = { "CombatStateIndexC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, CombatStateIndexC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatStateIndexC_MetaData), NewProp_CombatStateIndexC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_CoverCrouchWithDirectionC = { "CoverCrouchWithDirectionC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, CoverCrouchWithDirectionC), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoverCrouchWithDirectionC_MetaData), NewProp_CoverCrouchWithDirectionC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RelativeAccelerationAmoutC = { "RelativeAccelerationAmoutC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, RelativeAccelerationAmoutC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeAccelerationAmoutC_MetaData), NewProp_RelativeAccelerationAmoutC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FlailRateC = { "FlailRateC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, FlailRateC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlailRateC_MetaData), NewProp_FlailRateC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SpineRotationC = { "SpineRotationC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, SpineRotationC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpineRotationC_MetaData), NewProp_SpineRotationC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SmoothedAimingRotationC = { "SmoothedAimingRotationC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, SmoothedAimingRotationC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothedAimingRotationC_MetaData), NewProp_SmoothedAimingRotationC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AimingAngleC = { "AimingAngleC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, AimingAngleC), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimingAngleC_MetaData), NewProp_AimingAngleC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SmoothedAimingAngleC = { "SmoothedAimingAngleC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, SmoothedAimingAngleC), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothedAimingAngleC_MetaData), NewProp_SmoothedAimingAngleC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AimSweepTimeC = { "AimSweepTimeC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, AimSweepTimeC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimSweepTimeC_MetaData), NewProp_AimSweepTimeC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_ForwardYawTimeC = { "ForwardYawTimeC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, ForwardYawTimeC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardYawTimeC_MetaData), NewProp_ForwardYawTimeC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AnimPrepertiesCustomC = { "AnimPrepertiesCustomC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, AnimPrepertiesCustomC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimPrepertiesCustomC_MetaData), NewProp_AnimPrepertiesCustomC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_NeckTransformFromSnapshot = { "NeckTransformFromSnapshot", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, NeckTransformFromSnapshot), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeckTransformFromSnapshot_MetaData), NewProp_NeckTransformFromSnapshot_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_TrackedHipsDirectionC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_TrackedHipsDirectionC = { "TrackedHipsDirectionC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, TrackedHipsDirectionC), Z_Construct_UEnum_IWALS_AbilitySystem_HipsDirectionC, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackedHipsDirectionC_MetaData), NewProp_TrackedHipsDirectionC_MetaData) }; // 747335142
void Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_ShouldMoveC_SetBit(void* Obj)
{
	((UIWALS_AnimInstanceCpp*)Obj)->ShouldMoveC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_ShouldMoveC = { "ShouldMoveC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWALS_AnimInstanceCpp), &Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_ShouldMoveC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShouldMoveC_MetaData), NewProp_ShouldMoveC_MetaData) };
void Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_Rotate_LC_SetBit(void* Obj)
{
	((UIWALS_AnimInstanceCpp*)Obj)->Rotate_LC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_Rotate_LC = { "Rotate_LC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWALS_AnimInstanceCpp), &Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_Rotate_LC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotate_LC_MetaData), NewProp_Rotate_LC_MetaData) };
void Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_Rotate_RC_SetBit(void* Obj)
{
	((UIWALS_AnimInstanceCpp*)Obj)->Rotate_RC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_Rotate_RC = { "Rotate_RC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWALS_AnimInstanceCpp), &Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_Rotate_RC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotate_RC_MetaData), NewProp_Rotate_RC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RotateRateC = { "RotateRateC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, RotateRateC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateRateC_MetaData), NewProp_RotateRateC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_VelocityBlend = { "VelocityBlend", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, VelocityBlend), Z_Construct_UScriptStruct_FVelocityBlendC, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityBlend_MetaData), NewProp_VelocityBlend_MetaData) }; // 2729506802
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_LeanAmountC = { "LeanAmountC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, LeanAmountC), Z_Construct_UScriptStruct_FLeanAmoutC, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeanAmountC_MetaData), NewProp_LeanAmountC_MetaData) }; // 397305209
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RootYawChangeSpeed = { "RootYawChangeSpeed", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, RootYawChangeSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootYawChangeSpeed_MetaData), NewProp_RootYawChangeSpeed_MetaData) };
void Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_JumpedC_SetBit(void* Obj)
{
	((UIWALS_AnimInstanceCpp*)Obj)->JumpedC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_JumpedC = { "JumpedC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWALS_AnimInstanceCpp), &Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_JumpedC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpedC_MetaData), NewProp_JumpedC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_JumpPlayRateC = { "JumpPlayRateC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, JumpPlayRateC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpPlayRateC_MetaData), NewProp_JumpPlayRateC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FallSpeedC = { "FallSpeedC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, FallSpeedC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallSpeedC_MetaData), NewProp_FallSpeedC_MetaData) };
void Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_OffsetRootBoneEnabledC_SetBit(void* Obj)
{
	((UIWALS_AnimInstanceCpp*)Obj)->OffsetRootBoneEnabledC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_OffsetRootBoneEnabledC = { "OffsetRootBoneEnabledC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWALS_AnimInstanceCpp), &Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_OffsetRootBoneEnabledC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetRootBoneEnabledC_MetaData), NewProp_OffsetRootBoneEnabledC_MetaData) };
void Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_IsMovingC_SetBit(void* Obj)
{
	((UIWALS_AnimInstanceCpp*)Obj)->IsMovingC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_IsMovingC = { "IsMovingC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWALS_AnimInstanceCpp), &Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_IsMovingC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsMovingC_MetaData), NewProp_IsMovingC_MetaData) };
void Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PickUpLootItemC_SetBit(void* Obj)
{
	((UIWALS_AnimInstanceCpp*)Obj)->PickUpLootItemC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PickUpLootItemC = { "PickUpLootItemC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWALS_AnimInstanceCpp), &Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PickUpLootItemC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickUpLootItemC_MetaData), NewProp_PickUpLootItemC_MetaData) };
void Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_HasMovementInputC_SetBit(void* Obj)
{
	((UIWALS_AnimInstanceCpp*)Obj)->HasMovementInputC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_HasMovementInputC = { "HasMovementInputC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWALS_AnimInstanceCpp), &Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_HasMovementInputC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasMovementInputC_MetaData), NewProp_HasMovementInputC_MetaData) };
void Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_CapsuleCollidingC_SetBit(void* Obj)
{
	((UIWALS_AnimInstanceCpp*)Obj)->CapsuleCollidingC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_CapsuleCollidingC = { "CapsuleCollidingC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWALS_AnimInstanceCpp), &Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_CapsuleCollidingC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleCollidingC_MetaData), NewProp_CapsuleCollidingC_MetaData) };
void Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_JustLandedC_SetBit(void* Obj)
{
	((UIWALS_AnimInstanceCpp*)Obj)->JustLandedC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_JustLandedC = { "JustLandedC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWALS_AnimInstanceCpp), &Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_JustLandedC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JustLandedC_MetaData), NewProp_JustLandedC_MetaData) };
void Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_OnStairsC_SetBit(void* Obj)
{
	((UIWALS_AnimInstanceCpp*)Obj)->OnStairsC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_OnStairsC = { "OnStairsC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWALS_AnimInstanceCpp), &Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_OnStairsC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStairsC_MetaData), NewProp_OnStairsC_MetaData) };
void Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_InterruptOnDatabaseC_SetBit(void* Obj)
{
	((UIWALS_AnimInstanceCpp*)Obj)->InterruptOnDatabaseC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_InterruptOnDatabaseC = { "InterruptOnDatabaseC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWALS_AnimInstanceCpp), &Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_InterruptOnDatabaseC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterruptOnDatabaseC_MetaData), NewProp_InterruptOnDatabaseC_MetaData) };
void Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_IsTurnInPlaceAimingC_SetBit(void* Obj)
{
	((UIWALS_AnimInstanceCpp*)Obj)->IsTurnInPlaceAimingC = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_IsTurnInPlaceAimingC = { "IsTurnInPlaceAimingC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIWALS_AnimInstanceCpp), &Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_IsTurnInPlaceAimingC_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsTurnInPlaceAimingC_MetaData), NewProp_IsTurnInPlaceAimingC_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SpeedC = { "SpeedC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, SpeedC), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedC_MetaData), NewProp_SpeedC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_VelocityC = { "VelocityC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, VelocityC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityC_MetaData), NewProp_VelocityC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FutureVelocityC = { "FutureVelocityC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, FutureVelocityC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FutureVelocityC_MetaData), NewProp_FutureVelocityC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_VelocityLastFrameC = { "VelocityLastFrameC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, VelocityLastFrameC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityLastFrameC_MetaData), NewProp_VelocityLastFrameC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_LastNonZeroVelocityC = { "LastNonZeroVelocityC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, LastNonZeroVelocityC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastNonZeroVelocityC_MetaData), NewProp_LastNonZeroVelocityC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AccelerationC = { "AccelerationC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, AccelerationC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccelerationC_MetaData), NewProp_AccelerationC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_LandVelocityC = { "LandVelocityC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, LandVelocityC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandVelocityC_MetaData), NewProp_LandVelocityC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AimingRotationC = { "AimingRotationC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, AimingRotationC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimingRotationC_MetaData), NewProp_AimingRotationC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_CharacterTransformC = { "CharacterTransformC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, CharacterTransformC), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterTransformC_MetaData), NewProp_CharacterTransformC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RootTransformC = { "RootTransformC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, RootTransformC), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootTransformC_MetaData), NewProp_RootTransformC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_InteractionTransformC = { "InteractionTransformC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, InteractionTransformC), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionTransformC_MetaData), NewProp_InteractionTransformC_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FutureMovementAngleC = { "FutureMovementAngleC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, FutureMovementAngleC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FutureMovementAngleC_MetaData), NewProp_FutureMovementAngleC_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_CurrentDatabaseTags_Inner = { "CurrentDatabaseTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_CurrentDatabaseTags = { "CurrentDatabaseTags", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, CurrentDatabaseTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDatabaseTags_MetaData), NewProp_CurrentDatabaseTags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SecondaryMotionMaskC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_BlendOverlayWithCoverModeC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_LandPredictionC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_IsHeldArrowC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_IsHaveArrowsC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AddRecoilImpulseC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_OverlayOverrideStateC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_CombatStateIndexC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_CoverCrouchWithDirectionC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RelativeAccelerationAmoutC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FlailRateC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SpineRotationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SmoothedAimingRotationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AimingAngleC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SmoothedAimingAngleC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AimSweepTimeC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_ForwardYawTimeC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AnimPrepertiesCustomC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_NeckTransformFromSnapshot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_TrackedHipsDirectionC_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_TrackedHipsDirectionC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_ShouldMoveC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_Rotate_LC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_Rotate_RC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RotateRateC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_VelocityBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_LeanAmountC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RootYawChangeSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_JumpedC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_JumpPlayRateC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FallSpeedC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_OffsetRootBoneEnabledC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_IsMovingC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PickUpLootItemC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_HasMovementInputC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_CapsuleCollidingC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_JustLandedC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_OnStairsC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_InterruptOnDatabaseC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_IsTurnInPlaceAimingC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SpeedC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_VelocityC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FutureVelocityC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_VelocityLastFrameC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_LastNonZeroVelocityC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AccelerationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_LandVelocityC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AimingRotationC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_CharacterTransformC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RootTransformC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_InteractionTransformC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FutureMovementAngleC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_CurrentDatabaseTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_CurrentDatabaseTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_IWALS_AbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::ClassParams = {
	&UIWALS_AnimInstanceCpp::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::Class_MetaDataParams), Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIWALS_AnimInstanceCpp()
{
	if (!Z_Registration_Info_UClass_UIWALS_AnimInstanceCpp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIWALS_AnimInstanceCpp.OuterSingleton, Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIWALS_AnimInstanceCpp.OuterSingleton;
}
template<> IWALS_ABILITYSYSTEM_API UClass* StaticClass<UIWALS_AnimInstanceCpp>()
{
	return UIWALS_AnimInstanceCpp::StaticClass();
}
UIWALS_AnimInstanceCpp::UIWALS_AnimInstanceCpp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIWALS_AnimInstanceCpp);
UIWALS_AnimInstanceCpp::~UIWALS_AnimInstanceCpp() {}
// End Class UIWALS_AnimInstanceCpp

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AnimInstanceCpp_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIWALS_AnimInstanceCpp, UIWALS_AnimInstanceCpp::StaticClass, TEXT("UIWALS_AnimInstanceCpp"), &Z_Registration_Info_UClass_UIWALS_AnimInstanceCpp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIWALS_AnimInstanceCpp), 1460128463U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AnimInstanceCpp_h_1454160787(TEXT("/Script/IWALS_AbilitySystem"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AnimInstanceCpp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AnimInstanceCpp_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
