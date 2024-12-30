// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWALS_AbilitySystem/Public/IWALS_AnimInstanceCpp.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "IWALS_AbilitySystem/Public/IWALS_EnumsAndStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIWALS_AnimInstanceCpp() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
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
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryMotionMaskC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondaryMotionMaskC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendOverlayWithCoverModeC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOverlayWithCoverModeC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandPredictionC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LandPredictionC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsHeldArrowC_MetaData[];
#endif
		static void NewProp_IsHeldArrowC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsHeldArrowC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddRecoilImpulseC_MetaData[];
#endif
		static void NewProp_AddRecoilImpulseC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AddRecoilImpulseC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayOverrideStateC_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_OverlayOverrideStateC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoverCrouchWithDirectionC_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CoverCrouchWithDirectionC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeAccelerationAmoutC_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeAccelerationAmoutC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootLock_L_AlphaC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FootLock_L_AlphaC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootLock_R_AlphaC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FootLock_R_AlphaC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CMC_FootsIK_AlphaC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CMC_FootsIK_AlphaC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootLock_L_LocationC_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootLock_L_LocationC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootLock_R_LocationC_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootLock_R_LocationC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootLock_L_RotationC_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootLock_L_RotationC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootLock_R_RotationC_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootLock_R_RotationC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootOffset_L_LocationC_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootOffset_L_LocationC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootOffset_R_LocationC_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootOffset_R_LocationC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootOffset_L_RotationC_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootOffset_L_RotationC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootOffset_R_RotationC_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootOffset_R_RotationC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PelvisOffsetC_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PelvisOffsetC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlailRateC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FlailRateC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpineRotationC_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpineRotationC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothedAimingRotationC_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SmoothedAimingRotationC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimingAngleC_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AimingAngleC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothedAimingAngleC_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SmoothedAimingAngleC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimSweepTimeC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimSweepTimeC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputYawOffsetTimeC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputYawOffsetTimeC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardYawTimeC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardYawTimeC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftYawTimeC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftYawTimeC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightYawTimeC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RightYawTimeC;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TrackedHipsDirectionC_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackedHipsDirectionC_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackedHipsDirectionC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShouldMoveC_MetaData[];
#endif
		static void NewProp_ShouldMoveC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldMoveC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotC_MetaData[];
#endif
		static void NewProp_PivotC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PivotC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotPlayingC_MetaData[];
#endif
		static void NewProp_PivotPlayingC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PivotPlayingC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayStopMovementTransitionC_MetaData[];
#endif
		static void NewProp_PlayStopMovementTransitionC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PlayStopMovementTransitionC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinishStopTransitionC_MetaData[];
#endif
		static void NewProp_FinishStopTransitionC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FinishStopTransitionC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateRateC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateRateC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationScaleC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationScaleC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiagonalScaleAmoutC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DiagonalScaleAmoutC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityBlend_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VelocityBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeanAmountC_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeanAmountC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FYawC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FYawC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BYawC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BYawC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LYawC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LYawC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RYawC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RYawC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpedC_MetaData[];
#endif
		static void NewProp_JumpedC_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_JumpedC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpPlayRateC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpPlayRateC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FallSpeedC_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FallSpeedC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_IWALS_AbilitySystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "IWALS_AnimInstanceCpp.h" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SecondaryMotionMaskC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "IWALS Anim Graph" },
		{ "Comment", "/* Zdefiniuj podstawowe zmienne, kt\xef\xbf\xbdre b\xef\xbf\xbd""d\xef\xbf\xbd potrzebne dla systemu Overlay States. \xef\xbf\xbd""eby nie odwo\xef\xbf\xbdywa\xef\xbf\xbd si\xef\xbf\xbd do klasy ALS_AnimBP przy pomocy Property Access utworzony zosta\xef\xbf\xbd w\xef\xbf\xbd""a\xef\xbf\xbdnie\n\x09""Anim Instance. W nim zdefiniowane s\xef\xbf\xbd potrzebne zmienne, wi\xef\xbf\xbd""c dzi\xef\xbf\xbdki temu odwo\xef\xbf\xbdywa\xef\xbf\xbd si\xef\xbf\xbd b\xef\xbf\xbd""dziemy w\xef\xbf\xbd""a\xef\xbf\xbdnie do tej klasy a nie ca\xef\xbf\xbd""ego ALS_AnimBP */" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
		{ "ToolTip", "Zdefiniuj podstawowe zmienne, kt\xef\xbf\xbdre b\xef\xbf\xbd""d\xef\xbf\xbd potrzebne dla systemu Overlay States. \xef\xbf\xbd""eby nie odwo\xef\xbf\xbdywa\xef\xbf\xbd si\xef\xbf\xbd do klasy ALS_AnimBP przy pomocy Property Access utworzony zosta\xef\xbf\xbd w\xef\xbf\xbd""a\xef\xbf\xbdnie\n      Anim Instance. W nim zdefiniowane s\xef\xbf\xbd potrzebne zmienne, wi\xef\xbf\xbd""c dzi\xef\xbf\xbdki temu odwo\xef\xbf\xbdywa\xef\xbf\xbd si\xef\xbf\xbd b\xef\xbf\xbd""dziemy w\xef\xbf\xbd""a\xef\xbf\xbdnie do tej klasy a nie ca\xef\xbf\xbd""ego ALS_AnimBP" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SecondaryMotionMaskC = { "SecondaryMotionMaskC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, SecondaryMotionMaskC), METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SecondaryMotionMaskC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SecondaryMotionMaskC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_BlendOverlayWithCoverModeC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "IWALS Anim Graph" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_BlendOverlayWithCoverModeC = { "BlendOverlayWithCoverModeC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, BlendOverlayWithCoverModeC), METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_BlendOverlayWithCoverModeC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_BlendOverlayWithCoverModeC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_LandPredictionC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "IWALS Anim Graph" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_LandPredictionC = { "LandPredictionC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, LandPredictionC), METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_LandPredictionC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_LandPredictionC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_IsHeldArrowC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "IWALS Anim Graph" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	void Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_IsHeldArrowC_SetBit(void* Obj)
	{
		((UIWALS_AnimInstanceCpp*)Obj)->IsHeldArrowC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_IsHeldArrowC = { "IsHeldArrowC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIWALS_AnimInstanceCpp), &Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_IsHeldArrowC_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_IsHeldArrowC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_IsHeldArrowC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AddRecoilImpulseC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "IWALS Anim Graph" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	void Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AddRecoilImpulseC_SetBit(void* Obj)
	{
		((UIWALS_AnimInstanceCpp*)Obj)->AddRecoilImpulseC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AddRecoilImpulseC = { "AddRecoilImpulseC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIWALS_AnimInstanceCpp), &Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AddRecoilImpulseC_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AddRecoilImpulseC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AddRecoilImpulseC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_OverlayOverrideStateC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "IWALS Anim Graph" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_OverlayOverrideStateC = { "OverlayOverrideStateC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, OverlayOverrideStateC), METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_OverlayOverrideStateC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_OverlayOverrideStateC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_CoverCrouchWithDirectionC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "IWALS Anim Graph" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_CoverCrouchWithDirectionC = { "CoverCrouchWithDirectionC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, CoverCrouchWithDirectionC), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_CoverCrouchWithDirectionC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_CoverCrouchWithDirectionC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RelativeAccelerationAmoutC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "IWALS Anim Graph" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RelativeAccelerationAmoutC = { "RelativeAccelerationAmoutC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, RelativeAccelerationAmoutC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RelativeAccelerationAmoutC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RelativeAccelerationAmoutC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_L_AlphaC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Foot IK" },
		{ "Comment", "//Foots IK Variables\n" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
		{ "ToolTip", "Foots IK Variables" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_L_AlphaC = { "FootLock_L_AlphaC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, FootLock_L_AlphaC), METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_L_AlphaC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_L_AlphaC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_R_AlphaC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_R_AlphaC = { "FootLock_R_AlphaC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, FootLock_R_AlphaC), METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_R_AlphaC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_R_AlphaC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_CMC_FootsIK_AlphaC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_CMC_FootsIK_AlphaC = { "CMC_FootsIK_AlphaC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, CMC_FootsIK_AlphaC), METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_CMC_FootsIK_AlphaC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_CMC_FootsIK_AlphaC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_L_LocationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_L_LocationC = { "FootLock_L_LocationC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, FootLock_L_LocationC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_L_LocationC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_L_LocationC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_R_LocationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_R_LocationC = { "FootLock_R_LocationC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, FootLock_R_LocationC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_R_LocationC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_R_LocationC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_L_RotationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_L_RotationC = { "FootLock_L_RotationC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, FootLock_L_RotationC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_L_RotationC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_L_RotationC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_R_RotationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_R_RotationC = { "FootLock_R_RotationC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, FootLock_R_RotationC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_R_RotationC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_R_RotationC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootOffset_L_LocationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootOffset_L_LocationC = { "FootOffset_L_LocationC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, FootOffset_L_LocationC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootOffset_L_LocationC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootOffset_L_LocationC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootOffset_R_LocationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootOffset_R_LocationC = { "FootOffset_R_LocationC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, FootOffset_R_LocationC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootOffset_R_LocationC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootOffset_R_LocationC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootOffset_L_RotationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootOffset_L_RotationC = { "FootOffset_L_RotationC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, FootOffset_L_RotationC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootOffset_L_RotationC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootOffset_L_RotationC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootOffset_R_RotationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootOffset_R_RotationC = { "FootOffset_R_RotationC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, FootOffset_R_RotationC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootOffset_R_RotationC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootOffset_R_RotationC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PelvisOffsetC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Foot IK" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PelvisOffsetC = { "PelvisOffsetC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, PelvisOffsetC), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PelvisOffsetC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PelvisOffsetC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FlailRateC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Ragdoll" },
		{ "Comment", "//Ragdoll\n" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
		{ "ToolTip", "Ragdoll" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FlailRateC = { "FlailRateC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, FlailRateC), METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FlailRateC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FlailRateC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SpineRotationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Aiming Values" },
		{ "Comment", "//Aiming\n" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
		{ "ToolTip", "Aiming" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SpineRotationC = { "SpineRotationC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, SpineRotationC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SpineRotationC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SpineRotationC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SmoothedAimingRotationC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Aiming Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SmoothedAimingRotationC = { "SmoothedAimingRotationC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, SmoothedAimingRotationC), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SmoothedAimingRotationC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SmoothedAimingRotationC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AimingAngleC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Aiming Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AimingAngleC = { "AimingAngleC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, AimingAngleC), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AimingAngleC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AimingAngleC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SmoothedAimingAngleC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Aiming Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SmoothedAimingAngleC = { "SmoothedAimingAngleC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, SmoothedAimingAngleC), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SmoothedAimingAngleC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SmoothedAimingAngleC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AimSweepTimeC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Aiming Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AimSweepTimeC = { "AimSweepTimeC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, AimSweepTimeC), METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AimSweepTimeC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AimSweepTimeC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_InputYawOffsetTimeC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Aiming Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_InputYawOffsetTimeC = { "InputYawOffsetTimeC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, InputYawOffsetTimeC), METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_InputYawOffsetTimeC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_InputYawOffsetTimeC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_ForwardYawTimeC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Aiming Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_ForwardYawTimeC = { "ForwardYawTimeC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, ForwardYawTimeC), METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_ForwardYawTimeC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_ForwardYawTimeC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_LeftYawTimeC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Aiming Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_LeftYawTimeC = { "LeftYawTimeC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, LeftYawTimeC), METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_LeftYawTimeC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_LeftYawTimeC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RightYawTimeC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Aiming Values" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RightYawTimeC = { "RightYawTimeC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, RightYawTimeC), METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RightYawTimeC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RightYawTimeC_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_TrackedHipsDirectionC_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_TrackedHipsDirectionC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
		{ "Comment", "//Anim Graph - Grounded\n" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
		{ "ToolTip", "Anim Graph - Grounded" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_TrackedHipsDirectionC = { "TrackedHipsDirectionC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, TrackedHipsDirectionC), Z_Construct_UEnum_IWALS_AbilitySystem_HipsDirectionC, METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_TrackedHipsDirectionC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_TrackedHipsDirectionC_MetaData)) }; // 556858869
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_ShouldMoveC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	void Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_ShouldMoveC_SetBit(void* Obj)
	{
		((UIWALS_AnimInstanceCpp*)Obj)->ShouldMoveC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_ShouldMoveC = { "ShouldMoveC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIWALS_AnimInstanceCpp), &Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_ShouldMoveC_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_ShouldMoveC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_ShouldMoveC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PivotC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	void Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PivotC_SetBit(void* Obj)
	{
		((UIWALS_AnimInstanceCpp*)Obj)->PivotC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PivotC = { "PivotC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIWALS_AnimInstanceCpp), &Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PivotC_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PivotC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PivotC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PivotPlayingC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	void Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PivotPlayingC_SetBit(void* Obj)
	{
		((UIWALS_AnimInstanceCpp*)Obj)->PivotPlayingC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PivotPlayingC = { "PivotPlayingC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIWALS_AnimInstanceCpp), &Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PivotPlayingC_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PivotPlayingC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PivotPlayingC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PlayStopMovementTransitionC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	void Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PlayStopMovementTransitionC_SetBit(void* Obj)
	{
		((UIWALS_AnimInstanceCpp*)Obj)->PlayStopMovementTransitionC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PlayStopMovementTransitionC = { "PlayStopMovementTransitionC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIWALS_AnimInstanceCpp), &Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PlayStopMovementTransitionC_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PlayStopMovementTransitionC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PlayStopMovementTransitionC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FinishStopTransitionC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	void Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FinishStopTransitionC_SetBit(void* Obj)
	{
		((UIWALS_AnimInstanceCpp*)Obj)->FinishStopTransitionC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FinishStopTransitionC = { "FinishStopTransitionC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIWALS_AnimInstanceCpp), &Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FinishStopTransitionC_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FinishStopTransitionC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FinishStopTransitionC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RotateRateC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RotateRateC = { "RotateRateC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, RotateRateC), METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RotateRateC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RotateRateC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RotationScaleC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RotationScaleC = { "RotationScaleC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, RotationScaleC), METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RotationScaleC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RotationScaleC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_DiagonalScaleAmoutC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_DiagonalScaleAmoutC = { "DiagonalScaleAmoutC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, DiagonalScaleAmoutC), METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_DiagonalScaleAmoutC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_DiagonalScaleAmoutC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_VelocityBlend_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_VelocityBlend = { "VelocityBlend", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, VelocityBlend), Z_Construct_UScriptStruct_FVelocityBlendC, METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_VelocityBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_VelocityBlend_MetaData)) }; // 197468859
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_LeanAmountC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_LeanAmountC = { "LeanAmountC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, LeanAmountC), Z_Construct_UScriptStruct_FLeanAmoutC, METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_LeanAmountC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_LeanAmountC_MetaData)) }; // 3005483426
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FYawC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FYawC = { "FYawC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, FYawC), METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FYawC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FYawC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_BYawC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_BYawC = { "BYawC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, BYawC), METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_BYawC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_BYawC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_LYawC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_LYawC = { "LYawC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, LYawC), METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_LYawC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_LYawC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RYawC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - Grounded" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RYawC = { "RYawC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, RYawC), METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RYawC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RYawC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_JumpedC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - In Air" },
		{ "Comment", "//Anim Graph - In Air\n" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
		{ "ToolTip", "Anim Graph - In Air" },
	};
#endif
	void Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_JumpedC_SetBit(void* Obj)
	{
		((UIWALS_AnimInstanceCpp*)Obj)->JumpedC = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_JumpedC = { "JumpedC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIWALS_AnimInstanceCpp), &Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_JumpedC_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_JumpedC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_JumpedC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_JumpPlayRateC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - In Air" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_JumpPlayRateC = { "JumpPlayRateC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, JumpPlayRateC), METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_JumpPlayRateC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_JumpPlayRateC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FallSpeedC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Anim Graph - In Air" },
		{ "ModuleRelativePath", "Public/IWALS_AnimInstanceCpp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FallSpeedC = { "FallSpeedC", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimInstanceCpp, FallSpeedC), METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FallSpeedC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FallSpeedC_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SecondaryMotionMaskC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_BlendOverlayWithCoverModeC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_LandPredictionC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_IsHeldArrowC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AddRecoilImpulseC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_OverlayOverrideStateC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_CoverCrouchWithDirectionC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RelativeAccelerationAmoutC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_L_AlphaC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_R_AlphaC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_CMC_FootsIK_AlphaC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_L_LocationC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_R_LocationC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_L_RotationC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootLock_R_RotationC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootOffset_L_LocationC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootOffset_R_LocationC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootOffset_L_RotationC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FootOffset_R_RotationC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PelvisOffsetC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FlailRateC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SpineRotationC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SmoothedAimingRotationC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AimingAngleC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_SmoothedAimingAngleC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_AimSweepTimeC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_InputYawOffsetTimeC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_ForwardYawTimeC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_LeftYawTimeC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RightYawTimeC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_TrackedHipsDirectionC_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_TrackedHipsDirectionC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_ShouldMoveC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PivotC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PivotPlayingC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_PlayStopMovementTransitionC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FinishStopTransitionC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RotateRateC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RotationScaleC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_DiagonalScaleAmoutC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_VelocityBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_LeanAmountC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FYawC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_BYawC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_LYawC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_RYawC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_JumpedC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_JumpPlayRateC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::NewProp_FallSpeedC,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIWALS_AnimInstanceCpp>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimInstanceCpp_Statics::Class_MetaDataParams))
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
	struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AnimInstanceCpp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AnimInstanceCpp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIWALS_AnimInstanceCpp, UIWALS_AnimInstanceCpp::StaticClass, TEXT("UIWALS_AnimInstanceCpp"), &Z_Registration_Info_UClass_UIWALS_AnimInstanceCpp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIWALS_AnimInstanceCpp), 929240249U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AnimInstanceCpp_h_2386115197(TEXT("/Script/IWALS_AbilitySystem"),
		Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AnimInstanceCpp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AnimInstanceCpp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
