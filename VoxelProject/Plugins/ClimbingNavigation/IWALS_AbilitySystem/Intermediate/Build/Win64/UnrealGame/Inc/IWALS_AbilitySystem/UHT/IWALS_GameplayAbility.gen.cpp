// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWALS_AbilitySystem/Public/IWALS_GameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIWALS_GameplayAbility() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UIWALS_AbilityInterface_NoRegister();
	IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UIWALS_GameplayAbility();
	IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UIWALS_GameplayAbility_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IWALS_AbilitySystem();
// End Cross Module References
	DEFINE_FUNCTION(UIWALS_GameplayAbility::execSendToCharacterSpecHandle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendToCharacterSpecHandle();
		P_NATIVE_END;
	}
	void UIWALS_GameplayAbility::StaticRegisterNativesUIWALS_GameplayAbility()
	{
		UClass* Class = UIWALS_GameplayAbility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SendToCharacterSpecHandle", &UIWALS_GameplayAbility::execSendToCharacterSpecHandle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIWALS_GameplayAbility_SendToCharacterSpecHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIWALS_GameplayAbility_SendToCharacterSpecHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "IWALS Ability System" },
		{ "DisplayName", "Send To Character Spec Handle" },
		{ "ModuleRelativePath", "Public/IWALS_GameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIWALS_GameplayAbility_SendToCharacterSpecHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIWALS_GameplayAbility, nullptr, "SendToCharacterSpecHandle", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIWALS_GameplayAbility_SendToCharacterSpecHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_GameplayAbility_SendToCharacterSpecHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIWALS_GameplayAbility_SendToCharacterSpecHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIWALS_GameplayAbility_SendToCharacterSpecHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIWALS_GameplayAbility);
	UClass* Z_Construct_UClass_UIWALS_GameplayAbility_NoRegister()
	{
		return UIWALS_GameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UIWALS_GameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIWALS_GameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_IWALS_AbilitySystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIWALS_GameplayAbility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIWALS_GameplayAbility_SendToCharacterSpecHandle, "SendToCharacterSpecHandle" }, // 2276101464
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_GameplayAbility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "IWALS_GameplayAbility.h" },
		{ "ModuleRelativePath", "Public/IWALS_GameplayAbility.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIWALS_GameplayAbility_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIWALS_AbilityInterface_NoRegister, (int32)VTABLE_OFFSET(UIWALS_GameplayAbility, IIWALS_AbilityInterface), false },  // 3609245830
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIWALS_GameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIWALS_GameplayAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIWALS_GameplayAbility_Statics::ClassParams = {
		&UIWALS_GameplayAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIWALS_GameplayAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_GameplayAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIWALS_GameplayAbility()
	{
		if (!Z_Registration_Info_UClass_UIWALS_GameplayAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIWALS_GameplayAbility.OuterSingleton, Z_Construct_UClass_UIWALS_GameplayAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIWALS_GameplayAbility.OuterSingleton;
	}
	template<> IWALS_ABILITYSYSTEM_API UClass* StaticClass<UIWALS_GameplayAbility>()
	{
		return UIWALS_GameplayAbility::StaticClass();
	}
	UIWALS_GameplayAbility::UIWALS_GameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIWALS_GameplayAbility);
	UIWALS_GameplayAbility::~UIWALS_GameplayAbility() {}
	struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIWALS_GameplayAbility, UIWALS_GameplayAbility::StaticClass, TEXT("UIWALS_GameplayAbility"), &Z_Registration_Info_UClass_UIWALS_GameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIWALS_GameplayAbility), 2911776159U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbility_h_3670159995(TEXT("/Script/IWALS_AbilitySystem"),
		Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
