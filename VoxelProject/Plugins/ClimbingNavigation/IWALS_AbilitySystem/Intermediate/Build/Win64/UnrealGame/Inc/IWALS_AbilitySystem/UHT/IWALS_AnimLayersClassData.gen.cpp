// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWALS_AbilitySystem/Public/IWALS_AnimLayersClassData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIWALS_AnimLayersClassData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UIWALS_AnimLayersClassData();
	IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UIWALS_AnimLayersClassData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IWALS_AbilitySystem();
// End Cross Module References
	DEFINE_FUNCTION(UIWALS_AnimLayersClassData::execApplyAnimsLayerForAnimInst)
	{
		P_GET_OBJECT(ACharacter,Z_Param_TargetChar);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverlayTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyAnimsLayerForAnimInst(Z_Param_TargetChar,Z_Param_OverlayTag);
		P_NATIVE_END;
	}
	void UIWALS_AnimLayersClassData::StaticRegisterNativesUIWALS_AnimLayersClassData()
	{
		UClass* Class = UIWALS_AnimLayersClassData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyAnimsLayerForAnimInst", &UIWALS_AnimLayersClassData::execApplyAnimsLayerForAnimInst },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIWALS_AnimLayersClassData_ApplyAnimsLayerForAnimInst_Statics
	{
		struct IWALS_AnimLayersClassData_eventApplyAnimsLayerForAnimInst_Parms
		{
			ACharacter* TargetChar;
			FName OverlayTag;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetChar;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverlayTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIWALS_AnimLayersClassData_ApplyAnimsLayerForAnimInst_Statics::NewProp_TargetChar = { "TargetChar", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IWALS_AnimLayersClassData_eventApplyAnimsLayerForAnimInst_Parms, TargetChar), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIWALS_AnimLayersClassData_ApplyAnimsLayerForAnimInst_Statics::NewProp_OverlayTag = { "OverlayTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IWALS_AnimLayersClassData_eventApplyAnimsLayerForAnimInst_Parms, OverlayTag), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIWALS_AnimLayersClassData_ApplyAnimsLayerForAnimInst_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIWALS_AnimLayersClassData_ApplyAnimsLayerForAnimInst_Statics::NewProp_TargetChar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIWALS_AnimLayersClassData_ApplyAnimsLayerForAnimInst_Statics::NewProp_OverlayTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIWALS_AnimLayersClassData_ApplyAnimsLayerForAnimInst_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Linked ANim Graphs" },
		{ "CPP_Default_OverlayTag", "OverlayLayer" },
		{ "CPP_Default_TargetChar", "None" },
		{ "DisplayName", "Apply Anims Layer For Anim Inst" },
		{ "ModuleRelativePath", "Public/IWALS_AnimLayersClassData.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIWALS_AnimLayersClassData_ApplyAnimsLayerForAnimInst_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIWALS_AnimLayersClassData, nullptr, "ApplyAnimsLayerForAnimInst", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIWALS_AnimLayersClassData_ApplyAnimsLayerForAnimInst_Statics::IWALS_AnimLayersClassData_eventApplyAnimsLayerForAnimInst_Parms), Z_Construct_UFunction_UIWALS_AnimLayersClassData_ApplyAnimsLayerForAnimInst_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_AnimLayersClassData_ApplyAnimsLayerForAnimInst_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIWALS_AnimLayersClassData_ApplyAnimsLayerForAnimInst_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_AnimLayersClassData_ApplyAnimsLayerForAnimInst_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIWALS_AnimLayersClassData_ApplyAnimsLayerForAnimInst()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIWALS_AnimLayersClassData_ApplyAnimsLayerForAnimInst_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIWALS_AnimLayersClassData);
	UClass* Z_Construct_UClass_UIWALS_AnimLayersClassData_NoRegister()
	{
		return UIWALS_AnimLayersClassData::StaticClass();
	}
	struct Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_OverlayStatesFirstLayer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayStatesFirstLayer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverlayStatesFirstLayer;
		static const UECodeGen_Private::FClassPropertyParams NewProp_OverlayStatesSecondLayer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayStatesSecondLayer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverlayStatesSecondLayer;
		static const UECodeGen_Private::FClassPropertyParams NewProp_OverlayStatesThirdLayer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayStatesThirdLayer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverlayStatesThirdLayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_IWALS_AbilitySystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIWALS_AnimLayersClassData_ApplyAnimsLayerForAnimInst, "ApplyAnimsLayerForAnimInst" }, // 582004748
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "IWALS_AnimLayersClassData.h" },
		{ "ModuleRelativePath", "Public/IWALS_AnimLayersClassData.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::NewProp_OverlayStatesFirstLayer_Inner = { "OverlayStatesFirstLayer", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::NewProp_OverlayStatesFirstLayer_MetaData[] = {
		{ "Category", "OverlaySet" },
		{ "ModuleRelativePath", "Public/IWALS_AnimLayersClassData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::NewProp_OverlayStatesFirstLayer = { "OverlayStatesFirstLayer", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimLayersClassData, OverlayStatesFirstLayer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::NewProp_OverlayStatesFirstLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::NewProp_OverlayStatesFirstLayer_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::NewProp_OverlayStatesSecondLayer_Inner = { "OverlayStatesSecondLayer", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::NewProp_OverlayStatesSecondLayer_MetaData[] = {
		{ "Category", "OverlaySet" },
		{ "ModuleRelativePath", "Public/IWALS_AnimLayersClassData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::NewProp_OverlayStatesSecondLayer = { "OverlayStatesSecondLayer", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimLayersClassData, OverlayStatesSecondLayer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::NewProp_OverlayStatesSecondLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::NewProp_OverlayStatesSecondLayer_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::NewProp_OverlayStatesThirdLayer_Inner = { "OverlayStatesThirdLayer", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::NewProp_OverlayStatesThirdLayer_MetaData[] = {
		{ "Category", "OverlaySet" },
		{ "ModuleRelativePath", "Public/IWALS_AnimLayersClassData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::NewProp_OverlayStatesThirdLayer = { "OverlayStatesThirdLayer", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_AnimLayersClassData, OverlayStatesThirdLayer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::NewProp_OverlayStatesThirdLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::NewProp_OverlayStatesThirdLayer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::NewProp_OverlayStatesFirstLayer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::NewProp_OverlayStatesFirstLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::NewProp_OverlayStatesSecondLayer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::NewProp_OverlayStatesSecondLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::NewProp_OverlayStatesThirdLayer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::NewProp_OverlayStatesThirdLayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIWALS_AnimLayersClassData>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AnimLayersClassData_Statics::Class_MetaDataParams))
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
	struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AnimLayersClassData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AnimLayersClassData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIWALS_AnimLayersClassData, UIWALS_AnimLayersClassData::StaticClass, TEXT("UIWALS_AnimLayersClassData"), &Z_Registration_Info_UClass_UIWALS_AnimLayersClassData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIWALS_AnimLayersClassData), 4043750631U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AnimLayersClassData_h_2422305357(TEXT("/Script/IWALS_AbilitySystem"),
		Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AnimLayersClassData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AnimLayersClassData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
