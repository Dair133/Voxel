// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JakubAnimNodesTool/Public/JWAN_PoseSnapShotLogic.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJWAN_PoseSnapShotLogic() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
JAKUBANIMNODESTOOL_API UScriptStruct* Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic();
UPackage* Z_Construct_UPackage__Script_JakubAnimNodesTool();
// End Cross Module References

// Begin ScriptStruct FJWAN_PoseSnapShotLogic
static_assert(std::is_polymorphic<FJWAN_PoseSnapShotLogic>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FJWAN_PoseSnapShotLogic cannot be polymorphic unless super FAnimNode_Base is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JWAN_PoseSnapShotLogic;
class UScriptStruct* FJWAN_PoseSnapShotLogic::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JWAN_PoseSnapShotLogic.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JWAN_PoseSnapShotLogic.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic, (UObject*)Z_Construct_UPackage__Script_JakubAnimNodesTool(), TEXT("JWAN_PoseSnapShotLogic"));
	}
	return Z_Registration_Info_UScriptStruct_JWAN_PoseSnapShotLogic.OuterSingleton;
}
template<> JAKUBANIMNODESTOOL_API UScriptStruct* StaticStruct<FJWAN_PoseSnapShotLogic>()
{
	return FJWAN_PoseSnapShotLogic::StaticStruct();
}
struct Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/JWAN_PoseSnapShotLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourcePose_MetaData[] = {
		{ "Category", "Links" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input pose link\n" },
#endif
		{ "ModuleRelativePath", "Public/JWAN_PoseSnapShotLogic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input pose link" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotName_MetaData[] = {
		{ "Category", "Snapshot" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* This information is currently not using */" },
#endif
		{ "ModuleRelativePath", "Public/JWAN_PoseSnapShotLogic.h" },
		{ "PinShownByDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This information is currently not using" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveBonesNameToPose_MetaData[] = {
		{ "Category", "Snapshot" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Chech this if you want to node save in PoseSnapshot bones name. Without this Eveluate saving only bone transforms */" },
#endif
		{ "ModuleRelativePath", "Public/JWAN_PoseSnapShotLogic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Chech this if you want to node save in PoseSnapshot bones name. Without this Eveluate saving only bone transforms" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePose;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SnapshotName;
	static void NewProp_SaveBonesNameToPose_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SaveBonesNameToPose;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJWAN_PoseSnapShotLogic>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::NewProp_SourcePose = { "SourcePose", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJWAN_PoseSnapShotLogic, SourcePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourcePose_MetaData), NewProp_SourcePose_MetaData) }; // 1074011079
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::NewProp_SnapshotName = { "SnapshotName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FJWAN_PoseSnapShotLogic, SnapshotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapshotName_MetaData), NewProp_SnapshotName_MetaData) };
void Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::NewProp_SaveBonesNameToPose_SetBit(void* Obj)
{
	((FJWAN_PoseSnapShotLogic*)Obj)->SaveBonesNameToPose = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::NewProp_SaveBonesNameToPose = { "SaveBonesNameToPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FJWAN_PoseSnapShotLogic), &Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::NewProp_SaveBonesNameToPose_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveBonesNameToPose_MetaData), NewProp_SaveBonesNameToPose_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::NewProp_SourcePose,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::NewProp_SnapshotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::NewProp_SaveBonesNameToPose,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_JakubAnimNodesTool,
	Z_Construct_UScriptStruct_FAnimNode_Base,
	&NewStructOps,
	"JWAN_PoseSnapShotLogic",
	Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::PropPointers),
	sizeof(FJWAN_PoseSnapShotLogic),
	alignof(FJWAN_PoseSnapShotLogic),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic()
{
	if (!Z_Registration_Info_UScriptStruct_JWAN_PoseSnapShotLogic.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JWAN_PoseSnapShotLogic.InnerSingleton, Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_JWAN_PoseSnapShotLogic.InnerSingleton;
}
// End ScriptStruct FJWAN_PoseSnapShotLogic

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_PoseSnapShotLogic_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FJWAN_PoseSnapShotLogic::StaticStruct, Z_Construct_UScriptStruct_FJWAN_PoseSnapShotLogic_Statics::NewStructOps, TEXT("JWAN_PoseSnapShotLogic"), &Z_Registration_Info_UScriptStruct_JWAN_PoseSnapShotLogic, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJWAN_PoseSnapShotLogic), 2634367398U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_PoseSnapShotLogic_h_2302154569(TEXT("/Script/JakubAnimNodesTool"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_PoseSnapShotLogic_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_JWAN_PoseSnapShotLogic_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
