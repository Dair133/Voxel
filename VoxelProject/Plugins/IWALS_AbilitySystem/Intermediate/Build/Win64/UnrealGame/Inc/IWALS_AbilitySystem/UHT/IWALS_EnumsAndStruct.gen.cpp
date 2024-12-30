// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWALS_AbilitySystem/Public/IWALS_EnumsAndStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIWALS_EnumsAndStruct() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	IWALS_ABILITYSYSTEM_API UEnum* Z_Construct_UEnum_IWALS_AbilitySystem_HipsDirectionC();
	IWALS_ABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FLeanAmoutC();
	IWALS_ABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTurnInPlaceAssetC();
	IWALS_ABILITYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FVelocityBlendC();
	UPackage* Z_Construct_UPackage__Script_IWALS_AbilitySystem();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_HipsDirectionC;
	static UEnum* HipsDirectionC_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_HipsDirectionC.OuterSingleton)
		{
			Z_Registration_Info_UEnum_HipsDirectionC.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IWALS_AbilitySystem_HipsDirectionC, (UObject*)Z_Construct_UPackage__Script_IWALS_AbilitySystem(), TEXT("HipsDirectionC"));
		}
		return Z_Registration_Info_UEnum_HipsDirectionC.OuterSingleton;
	}
	template<> IWALS_ABILITYSYSTEM_API UEnum* StaticEnum<HipsDirectionC>()
	{
		return HipsDirectionC_StaticEnum();
	}
	struct Z_Construct_UEnum_IWALS_AbilitySystem_HipsDirectionC_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_IWALS_AbilitySystem_HipsDirectionC_Statics::Enumerators[] = {
		{ "HipsDirectionC::F", (int64)HipsDirectionC::F },
		{ "HipsDirectionC::B", (int64)HipsDirectionC::B },
		{ "HipsDirectionC::RF", (int64)HipsDirectionC::RF },
		{ "HipsDirectionC::RB", (int64)HipsDirectionC::RB },
		{ "HipsDirectionC::LF", (int64)HipsDirectionC::LF },
		{ "HipsDirectionC::LB", (int64)HipsDirectionC::LB },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_IWALS_AbilitySystem_HipsDirectionC_Statics::Enum_MetaDataParams[] = {
		{ "B.Name", "HipsDirectionC::B" },
		{ "BlueprintType", "true" },
		{ "F.Name", "HipsDirectionC::F" },
		{ "LB.Name", "HipsDirectionC::LB" },
		{ "LF.Name", "HipsDirectionC::LF" },
		{ "ModuleRelativePath", "Public/IWALS_EnumsAndStruct.h" },
		{ "RB.Name", "HipsDirectionC::RB" },
		{ "RF.Name", "HipsDirectionC::RF" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IWALS_AbilitySystem_HipsDirectionC_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_IWALS_AbilitySystem,
		nullptr,
		"HipsDirectionC",
		"HipsDirectionC",
		Z_Construct_UEnum_IWALS_AbilitySystem_HipsDirectionC_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_IWALS_AbilitySystem_HipsDirectionC_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_IWALS_AbilitySystem_HipsDirectionC_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_IWALS_AbilitySystem_HipsDirectionC_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_IWALS_AbilitySystem_HipsDirectionC()
	{
		if (!Z_Registration_Info_UEnum_HipsDirectionC.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_HipsDirectionC.InnerSingleton, Z_Construct_UEnum_IWALS_AbilitySystem_HipsDirectionC_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_HipsDirectionC.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLeanAmoutC>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FLeanAmoutC cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeanAmoutC;
class UScriptStruct* FLeanAmoutC::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeanAmoutC.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeanAmoutC.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeanAmoutC, (UObject*)Z_Construct_UPackage__Script_IWALS_AbilitySystem(), TEXT("LeanAmoutC"));
	}
	return Z_Registration_Info_UScriptStruct_LeanAmoutC.OuterSingleton;
}
template<> IWALS_ABILITYSYSTEM_API UScriptStruct* StaticStruct<FLeanAmoutC>()
{
	return FLeanAmoutC::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLeanAmoutC_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LR_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeanAmoutC_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/IWALS_EnumsAndStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLeanAmoutC_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeanAmoutC>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeanAmoutC_Statics::NewProp_LR_MetaData[] = {
		{ "Category", "Lean" },
		{ "ModuleRelativePath", "Public/IWALS_EnumsAndStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeanAmoutC_Statics::NewProp_LR = { "LR", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLeanAmoutC, LR), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeanAmoutC_Statics::NewProp_LR_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeanAmoutC_Statics::NewProp_LR_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeanAmoutC_Statics::NewProp_FB_MetaData[] = {
		{ "Category", "Lean" },
		{ "ModuleRelativePath", "Public/IWALS_EnumsAndStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeanAmoutC_Statics::NewProp_FB = { "FB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLeanAmoutC, FB), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeanAmoutC_Statics::NewProp_FB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeanAmoutC_Statics::NewProp_FB_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeanAmoutC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeanAmoutC_Statics::NewProp_LR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeanAmoutC_Statics::NewProp_FB,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeanAmoutC_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IWALS_AbilitySystem,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"LeanAmoutC",
		sizeof(FLeanAmoutC),
		alignof(FLeanAmoutC),
		Z_Construct_UScriptStruct_FLeanAmoutC_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeanAmoutC_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLeanAmoutC_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeanAmoutC_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLeanAmoutC()
	{
		if (!Z_Registration_Info_UScriptStruct_LeanAmoutC.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeanAmoutC.InnerSingleton, Z_Construct_UScriptStruct_FLeanAmoutC_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LeanAmoutC.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVelocityBlendC>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FVelocityBlendC cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VelocityBlendC;
class UScriptStruct* FVelocityBlendC::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VelocityBlendC.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VelocityBlendC.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVelocityBlendC, (UObject*)Z_Construct_UPackage__Script_IWALS_AbilitySystem(), TEXT("VelocityBlendC"));
	}
	return Z_Registration_Info_UScriptStruct_VelocityBlendC.OuterSingleton;
}
template<> IWALS_ABILITYSYSTEM_API UScriptStruct* StaticStruct<FVelocityBlendC>()
{
	return FVelocityBlendC::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVelocityBlendC_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_F_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_F;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_L_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_L;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_R_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_R;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVelocityBlendC_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/IWALS_EnumsAndStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVelocityBlendC_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVelocityBlendC>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVelocityBlendC_Statics::NewProp_F_MetaData[] = {
		{ "Category", "Forward" },
		{ "ModuleRelativePath", "Public/IWALS_EnumsAndStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVelocityBlendC_Statics::NewProp_F = { "F", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVelocityBlendC, F), METADATA_PARAMS(Z_Construct_UScriptStruct_FVelocityBlendC_Statics::NewProp_F_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVelocityBlendC_Statics::NewProp_F_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVelocityBlendC_Statics::NewProp_B_MetaData[] = {
		{ "Category", "Backward" },
		{ "ModuleRelativePath", "Public/IWALS_EnumsAndStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVelocityBlendC_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVelocityBlendC, B), METADATA_PARAMS(Z_Construct_UScriptStruct_FVelocityBlendC_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVelocityBlendC_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVelocityBlendC_Statics::NewProp_L_MetaData[] = {
		{ "Category", "Left" },
		{ "ModuleRelativePath", "Public/IWALS_EnumsAndStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVelocityBlendC_Statics::NewProp_L = { "L", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVelocityBlendC, L), METADATA_PARAMS(Z_Construct_UScriptStruct_FVelocityBlendC_Statics::NewProp_L_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVelocityBlendC_Statics::NewProp_L_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVelocityBlendC_Statics::NewProp_R_MetaData[] = {
		{ "Category", "Right" },
		{ "ModuleRelativePath", "Public/IWALS_EnumsAndStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVelocityBlendC_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVelocityBlendC, R), METADATA_PARAMS(Z_Construct_UScriptStruct_FVelocityBlendC_Statics::NewProp_R_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVelocityBlendC_Statics::NewProp_R_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVelocityBlendC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVelocityBlendC_Statics::NewProp_F,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVelocityBlendC_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVelocityBlendC_Statics::NewProp_L,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVelocityBlendC_Statics::NewProp_R,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVelocityBlendC_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IWALS_AbilitySystem,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"VelocityBlendC",
		sizeof(FVelocityBlendC),
		alignof(FVelocityBlendC),
		Z_Construct_UScriptStruct_FVelocityBlendC_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVelocityBlendC_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVelocityBlendC_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVelocityBlendC_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVelocityBlendC()
	{
		if (!Z_Registration_Info_UScriptStruct_VelocityBlendC.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VelocityBlendC.InnerSingleton, Z_Construct_UScriptStruct_FVelocityBlendC_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VelocityBlendC.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTurnInPlaceAssetC>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FTurnInPlaceAssetC cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TurnInPlaceAssetC;
class UScriptStruct* FTurnInPlaceAssetC::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TurnInPlaceAssetC.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TurnInPlaceAssetC.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTurnInPlaceAssetC, (UObject*)Z_Construct_UPackage__Script_IWALS_AbilitySystem(), TEXT("TurnInPlaceAssetC"));
	}
	return Z_Registration_Info_UScriptStruct_TurnInPlaceAssetC.OuterSingleton;
}
template<> IWALS_ABILITYSYSTEM_API UScriptStruct* StaticStruct<FTurnInPlaceAssetC>()
{
	return FTurnInPlaceAssetC::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimatedAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimatedAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleTurnAngle_MetaData[];
#endif
		static void NewProp_ScaleTurnAngle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ScaleTurnAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/IWALS_EnumsAndStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTurnInPlaceAssetC>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_Animation_MetaData[] = {
		{ "Category", "Forward" },
		{ "ModuleRelativePath", "Public/IWALS_EnumsAndStruct.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTurnInPlaceAssetC, Animation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_Animation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_AnimatedAngle_MetaData[] = {
		{ "Category", "Backward" },
		{ "ModuleRelativePath", "Public/IWALS_EnumsAndStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_AnimatedAngle = { "AnimatedAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTurnInPlaceAssetC, AnimatedAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_AnimatedAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_AnimatedAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_SlotName_MetaData[] = {
		{ "Category", "Left" },
		{ "ModuleRelativePath", "Public/IWALS_EnumsAndStruct.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTurnInPlaceAssetC, SlotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_SlotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "Right" },
		{ "ModuleRelativePath", "Public/IWALS_EnumsAndStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTurnInPlaceAssetC, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_ScaleTurnAngle_MetaData[] = {
		{ "Category", "Right" },
		{ "ModuleRelativePath", "Public/IWALS_EnumsAndStruct.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_ScaleTurnAngle_SetBit(void* Obj)
	{
		((FTurnInPlaceAssetC*)Obj)->ScaleTurnAngle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_ScaleTurnAngle = { "ScaleTurnAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTurnInPlaceAssetC), &Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_ScaleTurnAngle_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_ScaleTurnAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_ScaleTurnAngle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_AnimatedAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewProp_ScaleTurnAngle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IWALS_AbilitySystem,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"TurnInPlaceAssetC",
		sizeof(FTurnInPlaceAssetC),
		alignof(FTurnInPlaceAssetC),
		Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTurnInPlaceAssetC()
	{
		if (!Z_Registration_Info_UScriptStruct_TurnInPlaceAssetC.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TurnInPlaceAssetC.InnerSingleton, Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TurnInPlaceAssetC.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_EnumsAndStruct_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_EnumsAndStruct_h_Statics::EnumInfo[] = {
		{ HipsDirectionC_StaticEnum, TEXT("HipsDirectionC"), &Z_Registration_Info_UEnum_HipsDirectionC, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 556858869U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_EnumsAndStruct_h_Statics::ScriptStructInfo[] = {
		{ FLeanAmoutC::StaticStruct, Z_Construct_UScriptStruct_FLeanAmoutC_Statics::NewStructOps, TEXT("LeanAmoutC"), &Z_Registration_Info_UScriptStruct_LeanAmoutC, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeanAmoutC), 3005483426U) },
		{ FVelocityBlendC::StaticStruct, Z_Construct_UScriptStruct_FVelocityBlendC_Statics::NewStructOps, TEXT("VelocityBlendC"), &Z_Registration_Info_UScriptStruct_VelocityBlendC, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVelocityBlendC), 197468859U) },
		{ FTurnInPlaceAssetC::StaticStruct, Z_Construct_UScriptStruct_FTurnInPlaceAssetC_Statics::NewStructOps, TEXT("TurnInPlaceAssetC"), &Z_Registration_Info_UScriptStruct_TurnInPlaceAssetC, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTurnInPlaceAssetC), 1016834863U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_EnumsAndStruct_h_3938668415(TEXT("/Script/IWALS_AbilitySystem"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_EnumsAndStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_EnumsAndStruct_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_EnumsAndStruct_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_EnumsAndStruct_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
