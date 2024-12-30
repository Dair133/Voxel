// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JakubAnimNodesTool/Public/JWAN_LayerBlendingLogic.h"
#include "Runtime/Engine/Classes/Animation/AnimData/BoneMaskFilter.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJWAN_LayerBlendingLogic() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputBlendPose();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
JAKUBANIMNODESTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FCurvesData();
JAKUBANIMNODESTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic();
JAKUBANIMNODESTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FSlotsName();
UPackage* Z_Construct_UPackage__Script_JakubAnimNodesTool();
// End Cross Module References

// Begin ScriptStruct FCurvesData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CurvesData;
class UScriptStruct* FCurvesData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CurvesData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CurvesData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurvesData, (UObject*)Z_Construct_UPackage__Script_JakubAnimNodesTool(), TEXT("CurvesData"));
	}
	return Z_Registration_Info_UScriptStruct_CurvesData.OuterSingleton;
}
template<> JAKUBANIMNODESTOOL_API UScriptStruct* StaticStruct<FCurvesData>()
{
	return FCurvesData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCurvesData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pelvis_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spine_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpineAdd_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Head_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeadAdd_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Legs_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmL_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmL_LS_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmL_Add_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandL_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmR_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmR_LS_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmR_Add_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandR_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Pelvis;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Spine;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpineAdd;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Head;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HeadAdd;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Legs;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ArmL;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ArmL_LS;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ArmL_Add;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HandL;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ArmR;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ArmR_LS;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ArmR_Add;
	static const UECodeGen_Private::FNamePropertyParams NewProp_HandR;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurvesData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_Pelvis = { "Pelvis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurvesData, Pelvis), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pelvis_MetaData), NewProp_Pelvis_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_Spine = { "Spine", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurvesData, Spine), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spine_MetaData), NewProp_Spine_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_SpineAdd = { "SpineAdd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurvesData, SpineAdd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpineAdd_MetaData), NewProp_SpineAdd_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_Head = { "Head", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurvesData, Head), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Head_MetaData), NewProp_Head_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_HeadAdd = { "HeadAdd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurvesData, HeadAdd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeadAdd_MetaData), NewProp_HeadAdd_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_Legs = { "Legs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurvesData, Legs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Legs_MetaData), NewProp_Legs_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_ArmL = { "ArmL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurvesData, ArmL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmL_MetaData), NewProp_ArmL_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_ArmL_LS = { "ArmL_LS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurvesData, ArmL_LS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmL_LS_MetaData), NewProp_ArmL_LS_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_ArmL_Add = { "ArmL_Add", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurvesData, ArmL_Add), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmL_Add_MetaData), NewProp_ArmL_Add_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_HandL = { "HandL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurvesData, HandL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandL_MetaData), NewProp_HandL_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_ArmR = { "ArmR", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurvesData, ArmR), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmR_MetaData), NewProp_ArmR_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_ArmR_LS = { "ArmR_LS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurvesData, ArmR_LS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmR_LS_MetaData), NewProp_ArmR_LS_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_ArmR_Add = { "ArmR_Add", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurvesData, ArmR_Add), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmR_Add_MetaData), NewProp_ArmR_Add_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_HandR = { "HandR", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurvesData, HandR), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandR_MetaData), NewProp_HandR_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurvesData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_Pelvis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_Spine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_SpineAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_Head,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_HeadAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_Legs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_ArmL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_ArmL_LS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_ArmL_Add,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_HandL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_ArmR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_ArmR_LS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_ArmR_Add,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_HandR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurvesData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurvesData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JakubAnimNodesTool,
	nullptr,
	&NewStructOps,
	"CurvesData",
	Z_Construct_UScriptStruct_FCurvesData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurvesData_Statics::PropPointers),
	sizeof(FCurvesData),
	alignof(FCurvesData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurvesData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCurvesData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCurvesData()
{
	if (!Z_Registration_Info_UScriptStruct_CurvesData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CurvesData.InnerSingleton, Z_Construct_UScriptStruct_FCurvesData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CurvesData.InnerSingleton;
}
// End ScriptStruct FCurvesData

// Begin ScriptStruct FSlotsName
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SlotsName;
class UScriptStruct* FSlotsName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SlotsName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SlotsName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlotsName, (UObject*)Z_Construct_UPackage__Script_JakubAnimNodesTool(), TEXT("SlotsName"));
	}
	return Z_Registration_Info_UScriptStruct_SlotsName.OuterSingleton;
}
template<> JAKUBANIMNODESTOOL_API UScriptStruct* StaticStruct<FSlotsName>()
{
	return FSlotsName::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSlotsName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Legs_MetaData[] = {
		{ "Category", "SlotsName" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pelvis_MetaData[] = {
		{ "Category", "SlotsName" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spine_MetaData[] = {
		{ "Category", "SlotsName" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Head_MetaData[] = {
		{ "Category", "SlotsName" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmL_MetaData[] = {
		{ "Category", "SlotsName" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmR_MetaData[] = {
		{ "Category", "SlotsName" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Curves_MetaData[] = {
		{ "Category", "SlotsName" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Legs;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Pelvis;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Spine;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Head;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ArmL;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ArmR;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Curves;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlotsName>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_Legs = { "Legs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlotsName, Legs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Legs_MetaData), NewProp_Legs_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_Pelvis = { "Pelvis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlotsName, Pelvis), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pelvis_MetaData), NewProp_Pelvis_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_Spine = { "Spine", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlotsName, Spine), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spine_MetaData), NewProp_Spine_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_Head = { "Head", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlotsName, Head), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Head_MetaData), NewProp_Head_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_ArmL = { "ArmL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlotsName, ArmL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmL_MetaData), NewProp_ArmL_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_ArmR = { "ArmR", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlotsName, ArmR), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmR_MetaData), NewProp_ArmR_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_Curves = { "Curves", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlotsName, Curves), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Curves_MetaData), NewProp_Curves_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlotsName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_Legs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_Pelvis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_Spine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_Head,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_ArmL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_ArmR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_Curves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotsName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlotsName_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JakubAnimNodesTool,
	nullptr,
	&NewStructOps,
	"SlotsName",
	Z_Construct_UScriptStruct_FSlotsName_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotsName_Statics::PropPointers),
	sizeof(FSlotsName),
	alignof(FSlotsName),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotsName_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSlotsName_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSlotsName()
{
	if (!Z_Registration_Info_UScriptStruct_SlotsName.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SlotsName.InnerSingleton, Z_Construct_UScriptStruct_FSlotsName_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SlotsName.InnerSingleton;
}
// End ScriptStruct FSlotsName

// Begin ScriptStruct FJWAN_LayerBlendingLogic
static_assert(std::is_polymorphic<FJWAN_LayerBlendingLogic>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FJWAN_LayerBlendingLogic cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JWAN_LayerBlendingLogic;
class UScriptStruct* FJWAN_LayerBlendingLogic::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JWAN_LayerBlendingLogic.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JWAN_LayerBlendingLogic.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic, (UObject*)Z_Construct_UPackage__Script_JakubAnimNodesTool(), TEXT("JWAN_LayerBlendingLogic"));
	}
	return Z_Registration_Info_UScriptStruct_JWAN_LayerBlendingLogic.OuterSingleton;
}
template<> JAKUBANIMNODESTOOL_API UScriptStruct* StaticStruct<FJWAN_LayerBlendingLogic>()
{
	return FJWAN_LayerBlendingLogic::StaticStruct();
}
struct Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseLayerInput_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayLayerInput_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasePosesInput_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurvesName_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllSlotsName_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmL_MS_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmR_MS_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
		{ "PinShownByDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendFilterPelvis_MetaData[] = {
		{ "Category", "BlendingLayers" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendFilterSpine_MetaData[] = {
		{ "Category", "BlendingLayers" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendFilterHead_MetaData[] = {
		{ "Category", "BlendingLayers" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendFilterArmL_MetaData[] = {
		{ "Category", "BlendingLayers" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendFilterArmR_MetaData[] = {
		{ "Category", "BlendingLayers" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendFilterHandL_MetaData[] = {
		{ "Category", "BlendingLayers" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendFilterHandR_MetaData[] = {
		{ "Category", "BlendingLayers" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendFilterCurves_MetaData[] = {
		{ "Category", "BlendingLayers" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseLayerInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverlayLayerInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BasePosesInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurvesName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AllSlotsName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmL_MS;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmR_MS;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendFilterPelvis_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendFilterPelvis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendFilterSpine_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendFilterSpine;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendFilterHead_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendFilterHead;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendFilterArmL_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendFilterArmL;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendFilterArmR_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendFilterArmR;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendFilterHandL_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendFilterHandL;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendFilterHandR_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendFilterHandR;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendFilterCurves_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendFilterCurves;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJWAN_LayerBlendingLogic>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BaseLayerInput = { "BaseLayerInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, BaseLayerInput), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseLayerInput_MetaData), NewProp_BaseLayerInput_MetaData) }; // 1074011079
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_OverlayLayerInput = { "OverlayLayerInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, OverlayLayerInput), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayLayerInput_MetaData), NewProp_OverlayLayerInput_MetaData) }; // 1074011079
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BasePosesInput = { "BasePosesInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, BasePosesInput), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasePosesInput_MetaData), NewProp_BasePosesInput_MetaData) }; // 1074011079
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_CurvesName = { "CurvesName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, CurvesName), Z_Construct_UScriptStruct_FCurvesData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurvesName_MetaData), NewProp_CurvesName_MetaData) }; // 3854232653
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_AllSlotsName = { "AllSlotsName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, AllSlotsName), Z_Construct_UScriptStruct_FSlotsName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllSlotsName_MetaData), NewProp_AllSlotsName_MetaData) }; // 4280565765
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_ArmL_MS = { "ArmL_MS", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, ArmL_MS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmL_MS_MetaData), NewProp_ArmL_MS_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_ArmR_MS = { "ArmR_MS", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, ArmR_MS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmR_MS_MetaData), NewProp_ArmR_MS_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BlendFilterPelvis_Inner = { "BlendFilterPelvis", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputBlendPose, METADATA_PARAMS(0, nullptr) }; // 235181659
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BlendFilterPelvis = { "BlendFilterPelvis", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, BlendFilterPelvis), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendFilterPelvis_MetaData), NewProp_BlendFilterPelvis_MetaData) }; // 235181659
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BlendFilterSpine_Inner = { "BlendFilterSpine", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputBlendPose, METADATA_PARAMS(0, nullptr) }; // 235181659
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BlendFilterSpine = { "BlendFilterSpine", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, BlendFilterSpine), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendFilterSpine_MetaData), NewProp_BlendFilterSpine_MetaData) }; // 235181659
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BlendFilterHead_Inner = { "BlendFilterHead", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputBlendPose, METADATA_PARAMS(0, nullptr) }; // 235181659
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BlendFilterHead = { "BlendFilterHead", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, BlendFilterHead), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendFilterHead_MetaData), NewProp_BlendFilterHead_MetaData) }; // 235181659
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BlendFilterArmL_Inner = { "BlendFilterArmL", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputBlendPose, METADATA_PARAMS(0, nullptr) }; // 235181659
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BlendFilterArmL = { "BlendFilterArmL", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, BlendFilterArmL), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendFilterArmL_MetaData), NewProp_BlendFilterArmL_MetaData) }; // 235181659
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BlendFilterArmR_Inner = { "BlendFilterArmR", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputBlendPose, METADATA_PARAMS(0, nullptr) }; // 235181659
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BlendFilterArmR = { "BlendFilterArmR", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, BlendFilterArmR), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendFilterArmR_MetaData), NewProp_BlendFilterArmR_MetaData) }; // 235181659
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BlendFilterHandL_Inner = { "BlendFilterHandL", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputBlendPose, METADATA_PARAMS(0, nullptr) }; // 235181659
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BlendFilterHandL = { "BlendFilterHandL", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, BlendFilterHandL), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendFilterHandL_MetaData), NewProp_BlendFilterHandL_MetaData) }; // 235181659
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BlendFilterHandR_Inner = { "BlendFilterHandR", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputBlendPose, METADATA_PARAMS(0, nullptr) }; // 235181659
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BlendFilterHandR = { "BlendFilterHandR", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, BlendFilterHandR), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendFilterHandR_MetaData), NewProp_BlendFilterHandR_MetaData) }; // 235181659
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BlendFilterCurves_Inner = { "BlendFilterCurves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputBlendPose, METADATA_PARAMS(0, nullptr) }; // 235181659
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BlendFilterCurves = { "BlendFilterCurves", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, BlendFilterCurves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendFilterCurves_MetaData), NewProp_BlendFilterCurves_MetaData) }; // 235181659
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BaseLayerInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_OverlayLayerInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BasePosesInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_CurvesName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_AllSlotsName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_ArmL_MS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_ArmR_MS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BlendFilterPelvis_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BlendFilterPelvis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BlendFilterSpine_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BlendFilterSpine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BlendFilterHead_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BlendFilterHead,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BlendFilterArmL_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BlendFilterArmL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BlendFilterArmR_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BlendFilterArmR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BlendFilterHandL_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BlendFilterHandL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BlendFilterHandR_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BlendFilterHandR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BlendFilterCurves_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BlendFilterCurves,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JakubAnimNodesTool,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"JWAN_LayerBlendingLogic",
	Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::PropPointers),
	sizeof(FJWAN_LayerBlendingLogic),
	alignof(FJWAN_LayerBlendingLogic),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic()
{
	if (!Z_Registration_Info_UScriptStruct_JWAN_LayerBlendingLogic.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JWAN_LayerBlendingLogic.InnerSingleton, Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_JWAN_LayerBlendingLogic.InnerSingleton;
}
// End ScriptStruct FJWAN_LayerBlendingLogic

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_LayerBlendingLogic_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCurvesData::StaticStruct, Z_Construct_UScriptStruct_FCurvesData_Statics::NewStructOps, TEXT("CurvesData"), &Z_Registration_Info_UScriptStruct_CurvesData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCurvesData), 3854232653U) },
		{ FSlotsName::StaticStruct, Z_Construct_UScriptStruct_FSlotsName_Statics::NewStructOps, TEXT("SlotsName"), &Z_Registration_Info_UScriptStruct_SlotsName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSlotsName), 4280565765U) },
		{ FJWAN_LayerBlendingLogic::StaticStruct, Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewStructOps, TEXT("JWAN_LayerBlendingLogic"), &Z_Registration_Info_UScriptStruct_JWAN_LayerBlendingLogic, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJWAN_LayerBlendingLogic), 797385779U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_LayerBlendingLogic_h_3139122092(TEXT("/Script/JakubAnimNodesTool"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_LayerBlendingLogic_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_LayerBlendingLogic_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
