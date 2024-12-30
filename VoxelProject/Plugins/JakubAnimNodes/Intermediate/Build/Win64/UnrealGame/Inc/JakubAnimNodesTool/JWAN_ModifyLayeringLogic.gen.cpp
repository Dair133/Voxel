// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JakubAnimNodesTool/Public/JWAN_ModifyLayeringLogic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJWAN_ModifyLayeringLogic() {}
// Cross Module References
	JAKUBANIMNODESTOOL_API UEnum* Z_Construct_UEnum_JakubAnimNodesTool_EModifyLayeringApplyMode();
	UPackage* Z_Construct_UPackage__Script_JakubAnimNodesTool();
	JAKUBANIMNODESTOOL_API UEnum* Z_Construct_UEnum_JakubAnimNodesTool_ELayeringCurvesName();
	JAKUBANIMNODESTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FLayeringCurvesData();
	JAKUBANIMNODESTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyLayering();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimAlphaInputType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClamp();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModifyLayeringApplyMode;
	static UEnum* EModifyLayeringApplyMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EModifyLayeringApplyMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EModifyLayeringApplyMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_JakubAnimNodesTool_EModifyLayeringApplyMode, Z_Construct_UPackage__Script_JakubAnimNodesTool(), TEXT("EModifyLayeringApplyMode"));
		}
		return Z_Registration_Info_UEnum_EModifyLayeringApplyMode.OuterSingleton;
	}
	template<> JAKUBANIMNODESTOOL_API UEnum* StaticEnum<EModifyLayeringApplyMode>()
	{
		return EModifyLayeringApplyMode_StaticEnum();
	}
	struct Z_Construct_UEnum_JakubAnimNodesTool_EModifyLayeringApplyMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_JakubAnimNodesTool_EModifyLayeringApplyMode_Statics::Enumerators[] = {
		{ "EModifyLayeringApplyMode::Blend", (int64)EModifyLayeringApplyMode::Blend },
		{ "EModifyLayeringApplyMode::Add", (int64)EModifyLayeringApplyMode::Add },
		{ "EModifyLayeringApplyMode::Scale", (int64)EModifyLayeringApplyMode::Scale },
		{ "EModifyLayeringApplyMode::RemapCurve", (int64)EModifyLayeringApplyMode::RemapCurve },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_JakubAnimNodesTool_EModifyLayeringApplyMode_Statics::Enum_MetaDataParams[] = {
		{ "Add.Name", "EModifyLayeringApplyMode::Add" },
		{ "Blend.Name", "EModifyLayeringApplyMode::Blend" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
		{ "RemapCurve.Name", "EModifyLayeringApplyMode::RemapCurve" },
		{ "Scale.Name", "EModifyLayeringApplyMode::Scale" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_JakubAnimNodesTool_EModifyLayeringApplyMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_JakubAnimNodesTool,
		nullptr,
		"EModifyLayeringApplyMode",
		"EModifyLayeringApplyMode",
		Z_Construct_UEnum_JakubAnimNodesTool_EModifyLayeringApplyMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_JakubAnimNodesTool_EModifyLayeringApplyMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_JakubAnimNodesTool_EModifyLayeringApplyMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_JakubAnimNodesTool_EModifyLayeringApplyMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_JakubAnimNodesTool_EModifyLayeringApplyMode()
	{
		if (!Z_Registration_Info_UEnum_EModifyLayeringApplyMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModifyLayeringApplyMode.InnerSingleton, Z_Construct_UEnum_JakubAnimNodesTool_EModifyLayeringApplyMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EModifyLayeringApplyMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELayeringCurvesName;
	static UEnum* ELayeringCurvesName_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELayeringCurvesName.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELayeringCurvesName.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_JakubAnimNodesTool_ELayeringCurvesName, Z_Construct_UPackage__Script_JakubAnimNodesTool(), TEXT("ELayeringCurvesName"));
		}
		return Z_Registration_Info_UEnum_ELayeringCurvesName.OuterSingleton;
	}
	template<> JAKUBANIMNODESTOOL_API UEnum* StaticEnum<ELayeringCurvesName>()
	{
		return ELayeringCurvesName_StaticEnum();
	}
	struct Z_Construct_UEnum_JakubAnimNodesTool_ELayeringCurvesName_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_JakubAnimNodesTool_ELayeringCurvesName_Statics::Enumerators[] = {
		{ "ELayeringCurvesName::Layering_Legs", (int64)ELayeringCurvesName::Layering_Legs },
		{ "ELayeringCurvesName::Layering_Pelvis", (int64)ELayeringCurvesName::Layering_Pelvis },
		{ "ELayeringCurvesName::Layering_Spine", (int64)ELayeringCurvesName::Layering_Spine },
		{ "ELayeringCurvesName::Layering_Spine_Add", (int64)ELayeringCurvesName::Layering_Spine_Add },
		{ "ELayeringCurvesName::Layering_Arm_L", (int64)ELayeringCurvesName::Layering_Arm_L },
		{ "ELayeringCurvesName::Layering_Arm_L_Add", (int64)ELayeringCurvesName::Layering_Arm_L_Add },
		{ "ELayeringCurvesName::Layering_Arm_L_LS", (int64)ELayeringCurvesName::Layering_Arm_L_LS },
		{ "ELayeringCurvesName::Layering_Hand_L", (int64)ELayeringCurvesName::Layering_Hand_L },
		{ "ELayeringCurvesName::Layering_Arm_R", (int64)ELayeringCurvesName::Layering_Arm_R },
		{ "ELayeringCurvesName::Layering_Arm_R_Add", (int64)ELayeringCurvesName::Layering_Arm_R_Add },
		{ "ELayeringCurvesName::Layering_Arm_R_LS", (int64)ELayeringCurvesName::Layering_Arm_R_LS },
		{ "ELayeringCurvesName::Layering_Hand_R", (int64)ELayeringCurvesName::Layering_Hand_R },
		{ "ELayeringCurvesName::Layering_Head", (int64)ELayeringCurvesName::Layering_Head },
		{ "ELayeringCurvesName::Layering_Head_Add", (int64)ELayeringCurvesName::Layering_Head_Add },
		{ "ELayeringCurvesName::Enable_HandIK_L", (int64)ELayeringCurvesName::Enable_HandIK_L },
		{ "ELayeringCurvesName::Enable_HandIK_R", (int64)ELayeringCurvesName::Enable_HandIK_R },
		{ "ELayeringCurvesName::Enable_SpineRotation", (int64)ELayeringCurvesName::Enable_SpineRotation },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_JakubAnimNodesTool_ELayeringCurvesName_Statics::Enum_MetaDataParams[] = {
		{ "Enable_HandIK_L.Name", "ELayeringCurvesName::Enable_HandIK_L" },
		{ "Enable_HandIK_R.Name", "ELayeringCurvesName::Enable_HandIK_R" },
		{ "Enable_SpineRotation.Name", "ELayeringCurvesName::Enable_SpineRotation" },
		{ "Layering_Arm_L.Name", "ELayeringCurvesName::Layering_Arm_L" },
		{ "Layering_Arm_L_Add.Name", "ELayeringCurvesName::Layering_Arm_L_Add" },
		{ "Layering_Arm_L_LS.Name", "ELayeringCurvesName::Layering_Arm_L_LS" },
		{ "Layering_Arm_R.Name", "ELayeringCurvesName::Layering_Arm_R" },
		{ "Layering_Arm_R_Add.Name", "ELayeringCurvesName::Layering_Arm_R_Add" },
		{ "Layering_Arm_R_LS.Name", "ELayeringCurvesName::Layering_Arm_R_LS" },
		{ "Layering_Hand_L.Name", "ELayeringCurvesName::Layering_Hand_L" },
		{ "Layering_Hand_R.Name", "ELayeringCurvesName::Layering_Hand_R" },
		{ "Layering_Head.Name", "ELayeringCurvesName::Layering_Head" },
		{ "Layering_Head_Add.Name", "ELayeringCurvesName::Layering_Head_Add" },
		{ "Layering_Legs.Name", "ELayeringCurvesName::Layering_Legs" },
		{ "Layering_Pelvis.Name", "ELayeringCurvesName::Layering_Pelvis" },
		{ "Layering_Spine.Name", "ELayeringCurvesName::Layering_Spine" },
		{ "Layering_Spine_Add.Name", "ELayeringCurvesName::Layering_Spine_Add" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_JakubAnimNodesTool_ELayeringCurvesName_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_JakubAnimNodesTool,
		nullptr,
		"ELayeringCurvesName",
		"ELayeringCurvesName",
		Z_Construct_UEnum_JakubAnimNodesTool_ELayeringCurvesName_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_JakubAnimNodesTool_ELayeringCurvesName_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_JakubAnimNodesTool_ELayeringCurvesName_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_JakubAnimNodesTool_ELayeringCurvesName_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_JakubAnimNodesTool_ELayeringCurvesName()
	{
		if (!Z_Registration_Info_UEnum_ELayeringCurvesName.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELayeringCurvesName.InnerSingleton, Z_Construct_UEnum_JakubAnimNodesTool_ELayeringCurvesName_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELayeringCurvesName.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LayeringCurvesData;
class UScriptStruct* FLayeringCurvesData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LayeringCurvesData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LayeringCurvesData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLayeringCurvesData, Z_Construct_UPackage__Script_JakubAnimNodesTool(), TEXT("LayeringCurvesData"));
	}
	return Z_Registration_Info_UScriptStruct_LayeringCurvesData.OuterSingleton;
}
template<> JAKUBANIMNODESTOOL_API UScriptStruct* StaticStruct<FLayeringCurvesData>()
{
	return FLayeringCurvesData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLayeringCurvesData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurveName_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLayeringCurvesData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::NewProp_CurveName_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::NewProp_CurveName_MetaData[] = {
		{ "Category", "LayeringCurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLayeringCurvesData, CurveName), Z_Construct_UEnum_JakubAnimNodesTool_ELayeringCurvesName, METADATA_PARAMS(Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::NewProp_CurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::NewProp_CurveName_MetaData)) }; // 2570987902
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "LayeringCurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLayeringCurvesData, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::NewProp_BlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::NewProp_BlendMode_MetaData[] = {
		{ "Category", "LayeringCurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLayeringCurvesData, BlendMode), Z_Construct_UEnum_JakubAnimNodesTool_EModifyLayeringApplyMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::NewProp_BlendMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::NewProp_BlendMode_MetaData)) }; // 2059410406
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::NewProp_CurveName_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::NewProp_CurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::NewProp_BlendMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::NewProp_BlendMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JakubAnimNodesTool,
		nullptr,
		&NewStructOps,
		"LayeringCurvesData",
		sizeof(FLayeringCurvesData),
		alignof(FLayeringCurvesData),
		Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLayeringCurvesData()
	{
		if (!Z_Registration_Info_UScriptStruct_LayeringCurvesData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LayeringCurvesData.InnerSingleton, Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LayeringCurvesData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_ModifyLayering>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_ModifyLayering cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_ModifyLayering;
class UScriptStruct* FAnimNode_ModifyLayering::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_ModifyLayering.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_ModifyLayering.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ModifyLayering, Z_Construct_UPackage__Script_JakubAnimNodesTool(), TEXT("AnimNode_ModifyLayering"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_ModifyLayering.OuterSingleton;
}
template<> JAKUBANIMNODESTOOL_API UScriptStruct* StaticStruct<FAnimNode_ModifyLayering>()
{
	return FAnimNode_ModifyLayering::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcePose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePose;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurvesStructure_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurvesStructure_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurvesStructure;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ApplyMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplyMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ApplyMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AlphaInputType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaInputType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AlphaInputType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBias_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaCurveName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AlphaCurveName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBiasClamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBiasClamp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Easy way to modify curve values on a pose */" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
		{ "ToolTip", "Easy way to modify curve values on a pose" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ModifyLayering>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_SourcePose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_SourcePose = { "SourcePose", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ModifyLayering, SourcePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_SourcePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_SourcePose_MetaData)) }; // 2393943538
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_CurvesStructure_Inner = { "CurvesStructure", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLayeringCurvesData, METADATA_PARAMS(nullptr, 0) }; // 870590760
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_CurvesStructure_MetaData[] = {
		{ "Category", "ModifyLayering" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_CurvesStructure = { "CurvesStructure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ModifyLayering, CurvesStructure), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_CurvesStructure_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_CurvesStructure_MetaData)) }; // 870590760
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_ApplyMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_ApplyMode_MetaData[] = {
		{ "Category", "ModifyLayering" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_ApplyMode = { "ApplyMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ModifyLayering, ApplyMode), Z_Construct_UEnum_JakubAnimNodesTool_EModifyLayeringApplyMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_ApplyMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_ApplyMode_MetaData)) }; // 2059410406
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_AlphaInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_AlphaInputType_MetaData[] = {
		{ "Category", "AlphaSettings" },
		{ "Comment", "//From TwoWayBlend\n" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
		{ "ToolTip", "From TwoWayBlend" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_AlphaInputType = { "AlphaInputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ModifyLayering, AlphaInputType), Z_Construct_UEnum_Engine_EAnimAlphaInputType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_AlphaInputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_AlphaInputType_MetaData)) }; // 1572332242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_AlphaScaleBias_MetaData[] = {
		{ "Category", "AlphaSettings" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_AlphaScaleBias = { "AlphaScaleBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ModifyLayering, AlphaScaleBias), Z_Construct_UScriptStruct_FInputScaleBias, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_AlphaScaleBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_AlphaScaleBias_MetaData)) }; // 215402335
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "AlphaSettings" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ModifyLayering, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_AlphaCurveName_MetaData[] = {
		{ "Category", "AlphaSettings" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_AlphaCurveName = { "AlphaCurveName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ModifyLayering, AlphaCurveName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_AlphaCurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_AlphaCurveName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_AlphaScaleBiasClamp_MetaData[] = {
		{ "Category", "AlphaSettings" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_AlphaScaleBiasClamp = { "AlphaScaleBiasClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_ModifyLayering, AlphaScaleBiasClamp), Z_Construct_UScriptStruct_FInputScaleBiasClamp, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_AlphaScaleBiasClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_AlphaScaleBiasClamp_MetaData)) }; // 3749118956
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_SourcePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_CurvesStructure_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_CurvesStructure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_ApplyMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_ApplyMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_AlphaInputType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_AlphaInputType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_AlphaScaleBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_AlphaCurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_AlphaScaleBiasClamp,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JakubAnimNodesTool,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_ModifyLayering",
		sizeof(FAnimNode_ModifyLayering),
		alignof(FAnimNode_ModifyLayering),
		Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyLayering()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_ModifyLayering.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_ModifyLayering.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_ModifyLayering.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PluginBuildingV2_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_ModifyLayeringLogic_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginBuildingV2_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_ModifyLayeringLogic_h_Statics::EnumInfo[] = {
		{ EModifyLayeringApplyMode_StaticEnum, TEXT("EModifyLayeringApplyMode"), &Z_Registration_Info_UEnum_EModifyLayeringApplyMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2059410406U) },
		{ ELayeringCurvesName_StaticEnum, TEXT("ELayeringCurvesName"), &Z_Registration_Info_UEnum_ELayeringCurvesName, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2570987902U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginBuildingV2_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_ModifyLayeringLogic_h_Statics::ScriptStructInfo[] = {
		{ FLayeringCurvesData::StaticStruct, Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::NewStructOps, TEXT("LayeringCurvesData"), &Z_Registration_Info_UScriptStruct_LayeringCurvesData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLayeringCurvesData), 870590760U) },
		{ FAnimNode_ModifyLayering::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewStructOps, TEXT("AnimNode_ModifyLayering"), &Z_Registration_Info_UScriptStruct_AnimNode_ModifyLayering, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_ModifyLayering), 1101442701U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginBuildingV2_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_ModifyLayeringLogic_h_627757863(TEXT("/Script/JakubAnimNodesTool"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PluginBuildingV2_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_ModifyLayeringLogic_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginBuildingV2_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_ModifyLayeringLogic_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_PluginBuildingV2_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_ModifyLayeringLogic_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginBuildingV2_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_ModifyLayeringLogic_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
