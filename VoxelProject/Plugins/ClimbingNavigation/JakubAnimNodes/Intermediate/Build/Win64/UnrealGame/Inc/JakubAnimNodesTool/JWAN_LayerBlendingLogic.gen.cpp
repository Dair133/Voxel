// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JakubAnimNodesTool/Public/JWAN_LayerBlendingLogic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJWAN_LayerBlendingLogic() {}
// Cross Module References
	JAKUBANIMNODESTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FCurvesData();
	UPackage* Z_Construct_UPackage__Script_JakubAnimNodesTool();
	JAKUBANIMNODESTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FSlotsName();
	JAKUBANIMNODESTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CurvesData;
class UScriptStruct* FCurvesData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CurvesData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CurvesData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurvesData, Z_Construct_UPackage__Script_JakubAnimNodesTool(), TEXT("CurvesData"));
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pelvis_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Pelvis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spine_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Spine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpineAdd_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SpineAdd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Head_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Head;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadAdd_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_HeadAdd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Legs_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Legs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmL_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ArmL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmL_LS_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ArmL_LS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmL_Add_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ArmL_Add;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandL_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_HandL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmR_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ArmR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmR_LS_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ArmR_LS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmR_Add_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ArmR_Add;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandR_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_HandR;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurvesData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCurvesData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurvesData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_Pelvis_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_Pelvis = { "Pelvis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurvesData, Pelvis), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_Pelvis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_Pelvis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_Spine_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_Spine = { "Spine", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurvesData, Spine), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_Spine_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_Spine_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_SpineAdd_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_SpineAdd = { "SpineAdd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurvesData, SpineAdd), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_SpineAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_SpineAdd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_Head_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_Head = { "Head", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurvesData, Head), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_Head_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_Head_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_HeadAdd_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_HeadAdd = { "HeadAdd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurvesData, HeadAdd), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_HeadAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_HeadAdd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_Legs_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_Legs = { "Legs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurvesData, Legs), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_Legs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_Legs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_ArmL_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_ArmL = { "ArmL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurvesData, ArmL), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_ArmL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_ArmL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_ArmL_LS_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_ArmL_LS = { "ArmL_LS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurvesData, ArmL_LS), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_ArmL_LS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_ArmL_LS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_ArmL_Add_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_ArmL_Add = { "ArmL_Add", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurvesData, ArmL_Add), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_ArmL_Add_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_ArmL_Add_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_HandL_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_HandL = { "HandL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurvesData, HandL), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_HandL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_HandL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_ArmR_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_ArmR = { "ArmR", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurvesData, ArmR), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_ArmR_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_ArmR_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_ArmR_LS_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_ArmR_LS = { "ArmR_LS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurvesData, ArmR_LS), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_ArmR_LS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_ArmR_LS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_ArmR_Add_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_ArmR_Add = { "ArmR_Add", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurvesData, ArmR_Add), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_ArmR_Add_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_ArmR_Add_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_HandR_MetaData[] = {
		{ "Category", "CurvesData" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_HandR = { "HandR", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurvesData, HandR), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_HandR_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurvesData_Statics::NewProp_HandR_MetaData)) };
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
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurvesData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JakubAnimNodesTool,
		nullptr,
		&NewStructOps,
		"CurvesData",
		sizeof(FCurvesData),
		alignof(FCurvesData),
		Z_Construct_UScriptStruct_FCurvesData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurvesData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCurvesData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurvesData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCurvesData()
	{
		if (!Z_Registration_Info_UScriptStruct_CurvesData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CurvesData.InnerSingleton, Z_Construct_UScriptStruct_FCurvesData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CurvesData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SlotsName;
class UScriptStruct* FSlotsName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SlotsName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SlotsName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlotsName, Z_Construct_UPackage__Script_JakubAnimNodesTool(), TEXT("SlotsName"));
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Legs_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Legs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pelvis_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Pelvis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spine_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Spine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Head_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Head;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmL_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ArmL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmR_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ArmR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curves_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Curves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotsName_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSlotsName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlotsName>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_Legs_MetaData[] = {
		{ "Category", "SlotsName" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_Legs = { "Legs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlotsName, Legs), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_Legs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_Legs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_Pelvis_MetaData[] = {
		{ "Category", "SlotsName" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_Pelvis = { "Pelvis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlotsName, Pelvis), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_Pelvis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_Pelvis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_Spine_MetaData[] = {
		{ "Category", "SlotsName" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_Spine = { "Spine", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlotsName, Spine), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_Spine_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_Spine_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_Head_MetaData[] = {
		{ "Category", "SlotsName" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_Head = { "Head", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlotsName, Head), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_Head_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_Head_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_ArmL_MetaData[] = {
		{ "Category", "SlotsName" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_ArmL = { "ArmL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlotsName, ArmL), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_ArmL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_ArmL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_ArmR_MetaData[] = {
		{ "Category", "SlotsName" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_ArmR = { "ArmR", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlotsName, ArmR), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_ArmR_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_ArmR_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_Curves_MetaData[] = {
		{ "Category", "SlotsName" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_Curves = { "Curves", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlotsName, Curves), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_Curves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_Curves_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlotsName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_Legs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_Pelvis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_Spine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_Head,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_ArmL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_ArmR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlotsName_Statics::NewProp_Curves,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlotsName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JakubAnimNodesTool,
		nullptr,
		&NewStructOps,
		"SlotsName",
		sizeof(FSlotsName),
		alignof(FSlotsName),
		Z_Construct_UScriptStruct_FSlotsName_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotsName_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSlotsName_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlotsName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSlotsName()
	{
		if (!Z_Registration_Info_UScriptStruct_SlotsName.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SlotsName.InnerSingleton, Z_Construct_UScriptStruct_FSlotsName_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SlotsName.InnerSingleton;
	}

static_assert(std::is_polymorphic<FJWAN_LayerBlendingLogic>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FJWAN_LayerBlendingLogic cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JWAN_LayerBlendingLogic;
class UScriptStruct* FJWAN_LayerBlendingLogic::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JWAN_LayerBlendingLogic.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JWAN_LayerBlendingLogic.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic, Z_Construct_UPackage__Script_JakubAnimNodesTool(), TEXT("JWAN_LayerBlendingLogic"));
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseLayerInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseLayerInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayLayerInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OverlayLayerInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasePosesInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BasePosesInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurvesName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurvesName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllSlotsName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AllSlotsName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmL_MS_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmL_MS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArmR_MS_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArmR_MS;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJWAN_LayerBlendingLogic>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BaseLayerInput_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BaseLayerInput = { "BaseLayerInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, BaseLayerInput), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BaseLayerInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BaseLayerInput_MetaData)) }; // 2393943538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_OverlayLayerInput_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_OverlayLayerInput = { "OverlayLayerInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, OverlayLayerInput), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_OverlayLayerInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_OverlayLayerInput_MetaData)) }; // 2393943538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BasePosesInput_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BasePosesInput = { "BasePosesInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, BasePosesInput), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BasePosesInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BasePosesInput_MetaData)) }; // 2393943538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_CurvesName_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_CurvesName = { "CurvesName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, CurvesName), Z_Construct_UScriptStruct_FCurvesData, METADATA_PARAMS(Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_CurvesName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_CurvesName_MetaData)) }; // 784736005
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_AllSlotsName_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_AllSlotsName = { "AllSlotsName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, AllSlotsName), Z_Construct_UScriptStruct_FSlotsName, METADATA_PARAMS(Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_AllSlotsName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_AllSlotsName_MetaData)) }; // 4220542752
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_SlotName_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, SlotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_SlotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_ArmL_MS_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_ArmL_MS = { "ArmL_MS", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, ArmL_MS), METADATA_PARAMS(Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_ArmL_MS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_ArmL_MS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_ArmR_MS_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/JWAN_LayerBlendingLogic.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_ArmR_MS = { "ArmR_MS", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FJWAN_LayerBlendingLogic, ArmR_MS), METADATA_PARAMS(Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_ArmR_MS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_ArmR_MS_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BaseLayerInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_OverlayLayerInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_BasePosesInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_CurvesName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_AllSlotsName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_ArmL_MS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewProp_ArmR_MS,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JakubAnimNodesTool,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"JWAN_LayerBlendingLogic",
		sizeof(FJWAN_LayerBlendingLogic),
		alignof(FJWAN_LayerBlendingLogic),
		Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic()
	{
		if (!Z_Registration_Info_UScriptStruct_JWAN_LayerBlendingLogic.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JWAN_LayerBlendingLogic.InnerSingleton, Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_JWAN_LayerBlendingLogic.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PluginBuildingV2_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_LayerBlendingLogic_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginBuildingV2_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_LayerBlendingLogic_h_Statics::ScriptStructInfo[] = {
		{ FCurvesData::StaticStruct, Z_Construct_UScriptStruct_FCurvesData_Statics::NewStructOps, TEXT("CurvesData"), &Z_Registration_Info_UScriptStruct_CurvesData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCurvesData), 784736005U) },
		{ FSlotsName::StaticStruct, Z_Construct_UScriptStruct_FSlotsName_Statics::NewStructOps, TEXT("SlotsName"), &Z_Registration_Info_UScriptStruct_SlotsName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSlotsName), 4220542752U) },
		{ FJWAN_LayerBlendingLogic::StaticStruct, Z_Construct_UScriptStruct_FJWAN_LayerBlendingLogic_Statics::NewStructOps, TEXT("JWAN_LayerBlendingLogic"), &Z_Registration_Info_UScriptStruct_JWAN_LayerBlendingLogic, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJWAN_LayerBlendingLogic), 4238024419U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PluginBuildingV2_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_LayerBlendingLogic_h_4042480903(TEXT("/Script/JakubAnimNodesTool"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PluginBuildingV2_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_LayerBlendingLogic_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PluginBuildingV2_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_LayerBlendingLogic_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
