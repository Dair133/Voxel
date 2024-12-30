// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWALS_AbilitySystem/Public/IWALS_AnimLayersClassData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIWALS_AnimLayersClassData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UIWALS_AnimLayersClassData();
IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UIWALS_AnimLayersClassData_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWALS_AbilitySystem();
// End Cross Module References

// Begin Class UIWALS_AnimLayersClassData Function ApplyAnimsLayerForAnimInst
struct Z_Construct_UFunction_UIWALS_AnimLayersClassData_ApplyAnimsLayerForAnimInst_Statics
{
	struct IWALS_AnimLayersClassData_eventApplyAnimsLayerForAnimInst_Parms
	{
		ACharacter* TargetChar;
		FName OverlayTag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animation|Linked ANim Graphs" },
		{ "CPP_Default_OverlayTag", "OverlayLayer" },
		{ "CPP_Default_TargetChar", "None" },
		{ "DisplayName", "Apply Anims Layer For Anim Inst" },
		{ "ModuleRelativePath", "Public/IWALS_AnimLayersClassData.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetChar;
	static const UECodeGen_Private::FNamePropertyParams NewProp_OverlayTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIWALS_AnimLayersClassData_ApplyAnimsLayerForAnimInst_Statics::NewProp_TargetChar = { "TargetChar", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IWALS_AnimLayersClassData_eventApplyAnimsLayerForAnimInst_Parms, TargetChar), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIWALS_AnimLayersClassData_ApplyAnimsLayerForAnimInst_Statics::NewProp_OverlayTag = { "OverlayTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IWALS_AnimLayersClassData_eventApplyAnimsLayerForAnimInst_Parms, OverlayTag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIWALS_AnimLayersClassData_ApplyAnimsLayerForAnimInst_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIWALS_AnimLayersClassData_ApplyAnimsLayerForAnimInst_Statics::NewProp_TargetChar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIWALS_AnimLayersClassData_ApplyAnimsLayerForAnimInst_Statics::NewProp_OverlayTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_AnimLayersClassData_ApplyAnimsLayerForAnimInst_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIWALS_AnimLayersClassData_ApplyAnimsLayerForAnimInst_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIWALS_AnimLayersClassData, nullptr, "ApplyAnimsLayerForAnimInst", nullptr, nullptr, Z_Construct_UFunction_UIWALS_AnimLayersClassData_ApplyAnimsLayerForAnimInst_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_AnimLayersClassData_ApplyAnimsLayerForAnimInst_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIWALS_AnimLayersClassData_ApplyAnimsLayerForAnimInst_Statics::IWALS_AnimLayersClassData_eventApplyAnimsLayerForAnimInst_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_AnimLayersClassData_ApplyAnimsLayerForAnimInst_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIWALS_AnimLayersClassData_ApplyAnimsLayerForAnimInst_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIWALS_AnimLayersClassData_ApplyAnimsLayerForAnimInst_Statics::IWALS_AnimLayersClassData_eventApplyAnimsLayerForAnimInst_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIWALS_AnimLayersClassData_ApplyAnimsLayerForAnimInst()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIWALS_AnimLayersClassData_ApplyAnimsLayerForAnimInst_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIWALS_AnimLayersClassData::execApplyAnimsLayerForAnimInst)
{
	P_GET_OBJECT(ACharacter,Z_Param_TargetChar);
	P_GET_PROPERTY(FNameProperty,Z_Param_OverlayTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyAnimsLayerForAnimInst(Z_Param_TargetChar,Z_Param_OverlayTag);
	P_NATIVE_END;
}
// End Class UIWALS_AnimLayersClassData Function ApplyAnimsLayerForAnimInst

// Begin Class UIWALS_AnimLayersClassData
void UIWALS_AnimLayersClassData::StaticRegisterNativesUIWALS_AnimLayersClassData()
{
	UClass* Class = UIWALS_AnimLayersClassData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyAnimsLayerForAnimInst", &UIWALS_AnimLayersClassData::execApplyAnimsLayerForAnimInst },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIWALS_AnimLayersClassData);
UClass* Z_Construct_UClass_UIWALS_AnimLayersClassData_NoRegister()
{
	return UIWALS_AnimLayersClassData::StaticClass();
}
struct Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "IWALS_AnimLayersClassData.h" },
		{ "ModuleRelativePath", "Public/IWALS_AnimLayersClassData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayStatesFirstLayer_MetaData[] = {
		{ "Category", "OverlaySet" },
		{ "ModuleRelativePath", "Public/IWALS_AnimLayersClassData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayStatesSecondLayer_MetaData[] = {
		{ "Category", "OverlaySet" },
		{ "ModuleRelativePath", "Public/IWALS_AnimLayersClassData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayStatesThirdLayer_MetaData[] = {
		{ "Category", "OverlaySet" },
		{ "ModuleRelativePath", "Public/IWALS_AnimLayersClassData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_OverlayStatesFirstLayer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverlayStatesFirstLayer;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OverlayStatesSecondLayer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverlayStatesSecondLayer;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OverlayStatesThirdLayer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverlayStatesThirdLayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIWALS_AnimLayersClassData_ApplyAnimsLayerForAnimInst, "ApplyAnimsLayerForAnimInst" }, // 628990799
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIWALS_AnimLayersClassData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::NewProp_OverlayStatesFirstLayer_Inner = { "OverlayStatesFirstLayer", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::NewProp_OverlayStatesFirstLayer = { "OverlayStatesFirstLayer", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimLayersClassData, OverlayStatesFirstLayer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayStatesFirstLayer_MetaData), NewProp_OverlayStatesFirstLayer_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::NewProp_OverlayStatesSecondLayer_Inner = { "OverlayStatesSecondLayer", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::NewProp_OverlayStatesSecondLayer = { "OverlayStatesSecondLayer", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimLayersClassData, OverlayStatesSecondLayer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayStatesSecondLayer_MetaData), NewProp_OverlayStatesSecondLayer_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::NewProp_OverlayStatesThirdLayer_Inner = { "OverlayStatesThirdLayer", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::NewProp_OverlayStatesThirdLayer = { "OverlayStatesThirdLayer", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIWALS_AnimLayersClassData, OverlayStatesThirdLayer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayStatesThirdLayer_MetaData), NewProp_OverlayStatesThirdLayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::NewProp_OverlayStatesFirstLayer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::NewProp_OverlayStatesFirstLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::NewProp_OverlayStatesSecondLayer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::NewProp_OverlayStatesSecondLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::NewProp_OverlayStatesThirdLayer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::NewProp_OverlayStatesThirdLayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_IWALS_AbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::ClassParams = {
	&UIWALS_AnimLayersClassData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::Class_MetaDataParams), Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIWALS_AnimLayersClassData()
{
	if (!Z_Registration_Info_UClass_UIWALS_AnimLayersClassData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIWALS_AnimLayersClassData.OuterSingleton, Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIWALS_AnimLayersClassData.OuterSingleton;
}
template<> IWALS_ABILITYSYSTEM_API UClass* StaticClass<UIWALS_AnimLayersClassData>()
{
	return UIWALS_AnimLayersClassData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIWALS_AnimLayersClassData);
UIWALS_AnimLayersClassData::~UIWALS_AnimLayersClassData() {}
// End Class UIWALS_AnimLayersClassData

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AnimLayersClassData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIWALS_AnimLayersClassData, UIWALS_AnimLayersClassData::StaticClass, TEXT("UIWALS_AnimLayersClassData"), &Z_Registration_Info_UClass_UIWALS_AnimLayersClassData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIWALS_AnimLayersClassData), 2495165524U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AnimLayersClassData_h_2940054549(TEXT("/Script/IWALS_AbilitySystem"),
	Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AnimLayersClassData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AnimLayersClassData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
