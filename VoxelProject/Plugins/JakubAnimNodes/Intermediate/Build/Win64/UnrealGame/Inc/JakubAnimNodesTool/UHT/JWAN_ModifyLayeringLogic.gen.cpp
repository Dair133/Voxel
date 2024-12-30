// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JakubAnimNodesTool/Public/JWAN_ModifyLayeringLogic.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/Engine/Classes/Animation/InputScaleBias.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJWAN_ModifyLayeringLogic() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimAlphaInputType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClamp();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
JAKUBANIMNODESTOOL_API UEnum* Z_Construct_UEnum_JakubAnimNodesTool_ELayeringCurvesName();
JAKUBANIMNODESTOOL_API UEnum* Z_Construct_UEnum_JakubAnimNodesTool_EModifyLayeringApplyMode();
JAKUBANIMNODESTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyLayering();
JAKUBANIMNODESTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FLayeringCurvesData();
UPackage* Z_Construct_UPackage__Script_JakubAnimNodesTool();
// End Cross Module References

// Begin Enum EModifyLayeringApplyMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModifyLayeringApplyMode;
static UEnum* EModifyLayeringApplyMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EModifyLayeringApplyMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EModifyLayeringApplyMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_JakubAnimNodesTool_EModifyLayeringApplyMode, (UObject*)Z_Construct_UPackage__Script_JakubAnimNodesTool(), TEXT("EModifyLayeringApplyMode"));
	}
	return Z_Registration_Info_UEnum_EModifyLayeringApplyMode.OuterSingleton;
}
template<> JAKUBANIMNODESTOOL_API UEnum* StaticEnum<EModifyLayeringApplyMode>()
{
	return EModifyLayeringApplyMode_StaticEnum();
}
struct Z_Construct_UEnum_JakubAnimNodesTool_EModifyLayeringApplyMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Add.Name", "EModifyLayeringApplyMode::Add" },
		{ "Blend.Name", "EModifyLayeringApplyMode::Blend" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
		{ "RemapCurve.Name", "EModifyLayeringApplyMode::RemapCurve" },
		{ "Scale.Name", "EModifyLayeringApplyMode::Scale" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EModifyLayeringApplyMode::Blend", (int64)EModifyLayeringApplyMode::Blend },
		{ "EModifyLayeringApplyMode::Add", (int64)EModifyLayeringApplyMode::Add },
		{ "EModifyLayeringApplyMode::Scale", (int64)EModifyLayeringApplyMode::Scale },
		{ "EModifyLayeringApplyMode::RemapCurve", (int64)EModifyLayeringApplyMode::RemapCurve },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_JakubAnimNodesTool_EModifyLayeringApplyMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_JakubAnimNodesTool,
	nullptr,
	"EModifyLayeringApplyMode",
	"EModifyLayeringApplyMode",
	Z_Construct_UEnum_JakubAnimNodesTool_EModifyLayeringApplyMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_JakubAnimNodesTool_EModifyLayeringApplyMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_JakubAnimNodesTool_EModifyLayeringApplyMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_JakubAnimNodesTool_EModifyLayeringApplyMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_JakubAnimNodesTool_EModifyLayeringApplyMode()
{
	if (!Z_Registration_Info_UEnum_EModifyLayeringApplyMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModifyLayeringApplyMode.InnerSingleton, Z_Construct_UEnum_JakubAnimNodesTool_EModifyLayeringApplyMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EModifyLayeringApplyMode.InnerSingleton;
}
// End Enum EModifyLayeringApplyMode

// Begin Enum ELayeringCurvesName
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELayeringCurvesName;
static UEnum* ELayeringCurvesName_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELayeringCurvesName.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELayeringCurvesName.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_JakubAnimNodesTool_ELayeringCurvesName, (UObject*)Z_Construct_UPackage__Script_JakubAnimNodesTool(), TEXT("ELayeringCurvesName"));
	}
	return Z_Registration_Info_UEnum_ELayeringCurvesName.OuterSingleton;
}
template<> JAKUBANIMNODESTOOL_API UEnum* StaticEnum<ELayeringCurvesName>()
{
	return ELayeringCurvesName_StaticEnum();
}
struct Z_Construct_UEnum_JakubAnimNodesTool_ELayeringCurvesName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
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
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_JakubAnimNodesTool_ELayeringCurvesName_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_JakubAnimNodesTool,
	nullptr,
	"ELayeringCurvesName",
	"ELayeringCurvesName",
	Z_Construct_UEnum_JakubAnimNodesTool_ELayeringCurvesName_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_JakubAnimNodesTool_ELayeringCurvesName_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_JakubAnimNodesTool_ELayeringCurvesName_Statics::Enum_MetaDataParams), Z_Construct_UEnum_JakubAnimNodesTool_ELayeringCurvesName_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_JakubAnimNodesTool_ELayeringCurvesName()
{
	if (!Z_Registration_Info_UEnum_ELayeringCurvesName.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELayeringCurvesName.InnerSingleton, Z_Construct_UEnum_JakubAnimNodesTool_ELayeringCurvesName_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELayeringCurvesName.InnerSingleton;
}
// End Enum ELayeringCurvesName

// Begin ScriptStruct FLayeringCurvesData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LayeringCurvesData;
class UScriptStruct* FLayeringCurvesData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LayeringCurvesData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LayeringCurvesData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLayeringCurvesData, (UObject*)Z_Construct_UPackage__Script_JakubAnimNodesTool(), TEXT("LayeringCurvesData"));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[] = {
		{ "Category", "LayeringCurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "LayeringCurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[] = {
		{ "Category", "LayeringCurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurveName_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLayeringCurvesData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::NewProp_CurveName_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeringCurvesData, CurveName), Z_Construct_UEnum_JakubAnimNodesTool_ELayeringCurvesName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveName_MetaData), NewProp_CurveName_MetaData) }; // 1336775193
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeringCurvesData, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::NewProp_BlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayeringCurvesData, BlendMode), Z_Construct_UEnum_JakubAnimNodesTool_EModifyLayeringApplyMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendMode_MetaData), NewProp_BlendMode_MetaData) }; // 2353445787
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::NewProp_CurveName_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::NewProp_CurveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::NewProp_BlendMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::NewProp_BlendMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JakubAnimNodesTool,
	nullptr,
	&NewStructOps,
	"LayeringCurvesData",
	Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::PropPointers),
	sizeof(FLayeringCurvesData),
	alignof(FLayeringCurvesData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLayeringCurvesData()
{
	if (!Z_Registration_Info_UScriptStruct_LayeringCurvesData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LayeringCurvesData.InnerSingleton, Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LayeringCurvesData.InnerSingleton;
}
// End ScriptStruct FLayeringCurvesData

// Begin ScriptStruct FAnimNode_ModifyLayering
static_assert(std::is_polymorphic<FAnimNode_ModifyLayering>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_ModifyLayering cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_ModifyLayering;
class UScriptStruct* FAnimNode_ModifyLayering::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_ModifyLayering.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_ModifyLayering.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ModifyLayering, (UObject*)Z_Construct_UPackage__Script_JakubAnimNodesTool(), TEXT("AnimNode_ModifyLayering"));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Easy way to modify curve values on a pose */" },
#endif
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Easy way to modify curve values on a pose" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurvesStructure_MetaData[] = {
		{ "Category", "ModifyLayering" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
		{ "PinHiddenByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplyMode_MetaData[] = {
		{ "Category", "ModifyLayering" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaInputType_MetaData[] = {
		{ "Category", "AlphaSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//From TwoWayBlend\n" },
#endif
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "From TwoWayBlend" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBias_MetaData[] = {
		{ "Category", "AlphaSettings" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
		{ "Category", "AlphaSettings" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaCurveName_MetaData[] = {
		{ "Category", "AlphaSettings" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBiasClamp_MetaData[] = {
		{ "Category", "AlphaSettings" },
		{ "ModuleRelativePath", "Public/JWAN_ModifyLayeringLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePose;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurvesStructure_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurvesStructure;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ApplyMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ApplyMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AlphaInputType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AlphaInputType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AlphaCurveName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBiasClamp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ModifyLayering>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_SourcePose = { "SourcePose", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ModifyLayering, SourcePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePose_MetaData), NewProp_SourcePose_MetaData) }; // 1074011079
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_CurvesStructure_Inner = { "CurvesStructure", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLayeringCurvesData, METADATA_PARAMS(0, nullptr) }; // 2624923413
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_CurvesStructure = { "CurvesStructure", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ModifyLayering, CurvesStructure), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurvesStructure_MetaData), NewProp_CurvesStructure_MetaData) }; // 2624923413
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_ApplyMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_ApplyMode = { "ApplyMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ModifyLayering, ApplyMode), Z_Construct_UEnum_JakubAnimNodesTool_EModifyLayeringApplyMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplyMode_MetaData), NewProp_ApplyMode_MetaData) }; // 2353445787
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_AlphaInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_AlphaInputType = { "AlphaInputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ModifyLayering, AlphaInputType), Z_Construct_UEnum_Engine_EAnimAlphaInputType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaInputType_MetaData), NewProp_AlphaInputType_MetaData) }; // 3333507802
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_AlphaScaleBias = { "AlphaScaleBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ModifyLayering, AlphaScaleBias), Z_Construct_UScriptStruct_FInputScaleBias, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaScaleBias_MetaData), NewProp_AlphaScaleBias_MetaData) }; // 3603290969
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ModifyLayering, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_AlphaCurveName = { "AlphaCurveName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ModifyLayering, AlphaCurveName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaCurveName_MetaData), NewProp_AlphaCurveName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewProp_AlphaScaleBiasClamp = { "AlphaScaleBiasClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimNode_ModifyLayering, AlphaScaleBiasClamp), Z_Construct_UScriptStruct_FInputScaleBiasClamp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaScaleBiasClamp_MetaData), NewProp_AlphaScaleBiasClamp_MetaData) }; // 1905782755
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
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JakubAnimNodesTool,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"AnimNode_ModifyLayering",
	Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::PropPointers),
	sizeof(FAnimNode_ModifyLayering),
	alignof(FAnimNode_ModifyLayering),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ModifyLayering()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_ModifyLayering.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_ModifyLayering.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_ModifyLayering.InnerSingleton;
}
// End ScriptStruct FAnimNode_ModifyLayering

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_ModifyLayeringLogic_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EModifyLayeringApplyMode_StaticEnum, TEXT("EModifyLayeringApplyMode"), &Z_Registration_Info_UEnum_EModifyLayeringApplyMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2353445787U) },
		{ ELayeringCurvesName_StaticEnum, TEXT("ELayeringCurvesName"), &Z_Registration_Info_UEnum_ELayeringCurvesName, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1336775193U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLayeringCurvesData::StaticStruct, Z_Construct_UScriptStruct_FLayeringCurvesData_Statics::NewStructOps, TEXT("LayeringCurvesData"), &Z_Registration_Info_UScriptStruct_LayeringCurvesData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLayeringCurvesData), 2624923413U) },
		{ FAnimNode_ModifyLayering::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_ModifyLayering_Statics::NewStructOps, TEXT("AnimNode_ModifyLayering"), &Z_Registration_Info_UScriptStruct_AnimNode_ModifyLayering, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_ModifyLayering), 572182339U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_ModifyLayeringLogic_h_661711574(TEXT("/Script/JakubAnimNodesTool"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_ModifyLayeringLogic_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_ModifyLayeringLogic_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_ModifyLayeringLogic_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_ModifyLayeringLogic_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
