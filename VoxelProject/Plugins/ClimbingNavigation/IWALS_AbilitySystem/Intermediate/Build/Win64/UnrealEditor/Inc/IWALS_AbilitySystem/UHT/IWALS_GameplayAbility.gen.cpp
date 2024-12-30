// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWALS_AbilitySystem/Public/IWALS_GameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIWALS_GameplayAbility() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UIWALS_AbilityInterface_NoRegister();
IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UIWALS_GameplayAbility();
IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UIWALS_GameplayAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWALS_AbilitySystem();
// End Cross Module References

// Begin Class UIWALS_GameplayAbility Function SendToCharacterSpecHandle
struct Z_Construct_UFunction_UIWALS_GameplayAbility_SendToCharacterSpecHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "IWALS Ability System" },
		{ "DisplayName", "Send To Character Spec Handle" },
		{ "ModuleRelativePath", "Public/IWALS_GameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIWALS_GameplayAbility_SendToCharacterSpecHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIWALS_GameplayAbility, nullptr, "SendToCharacterSpecHandle", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_GameplayAbility_SendToCharacterSpecHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIWALS_GameplayAbility_SendToCharacterSpecHandle_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UIWALS_GameplayAbility_SendToCharacterSpecHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIWALS_GameplayAbility_SendToCharacterSpecHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIWALS_GameplayAbility::execSendToCharacterSpecHandle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendToCharacterSpecHandle();
	P_NATIVE_END;
}
// End Class UIWALS_GameplayAbility Function SendToCharacterSpecHandle

// Begin Class UIWALS_GameplayAbility
void UIWALS_GameplayAbility::StaticRegisterNativesUIWALS_GameplayAbility()
{
	UClass* Class = UIWALS_GameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SendToCharacterSpecHandle", &UIWALS_GameplayAbility::execSendToCharacterSpecHandle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIWALS_GameplayAbility);
UClass* Z_Construct_UClass_UIWALS_GameplayAbility_NoRegister()
{
	return UIWALS_GameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UIWALS_GameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "IWALS_GameplayAbility.h" },
		{ "ModuleRelativePath", "Public/IWALS_GameplayAbility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIWALS_GameplayAbility_SendToCharacterSpecHandle, "SendToCharacterSpecHandle" }, // 3250330836
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIWALS_GameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIWALS_GameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_IWALS_AbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_GameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIWALS_GameplayAbility_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIWALS_AbilityInterface_NoRegister, (int32)VTABLE_OFFSET(UIWALS_GameplayAbility, IIWALS_AbilityInterface), false },  // 1547127958
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_GameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UIWALS_GameplayAbility_Statics::Class_MetaDataParams)
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
// End Class UIWALS_GameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIWALS_GameplayAbility, UIWALS_GameplayAbility::StaticClass, TEXT("UIWALS_GameplayAbility"), &Z_Registration_Info_UClass_UIWALS_GameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIWALS_GameplayAbility), 732631313U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbility_h_2458361566(TEXT("/Script/IWALS_AbilitySystem"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_GameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
