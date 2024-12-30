// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWALS_AbilitySystem/Public/IWALS_AbilityInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIWALS_AbilityInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UIWALS_AbilityInterface();
IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UIWALS_AbilityInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWALS_AbilitySystem();
// End Cross Module References

// Begin Interface UIWALS_AbilityInterface Function GASBPI_CallToCurrentActivatedAbility
struct IWALS_AbilityInterface_eventGASBPI_CallToCurrentActivatedAbility_Parms
{
	int32 EventID;
};
void IIWALS_AbilityInterface::GASBPI_CallToCurrentActivatedAbility(int32 EventID)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GASBPI_CallToCurrentActivatedAbility instead.");
}
static FName NAME_UIWALS_AbilityInterface_GASBPI_CallToCurrentActivatedAbility = FName(TEXT("GASBPI_CallToCurrentActivatedAbility"));
void IIWALS_AbilityInterface::Execute_GASBPI_CallToCurrentActivatedAbility(UObject* O, int32 EventID)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIWALS_AbilityInterface::StaticClass()));
	IWALS_AbilityInterface_eventGASBPI_CallToCurrentActivatedAbility_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIWALS_AbilityInterface_GASBPI_CallToCurrentActivatedAbility);
	if (Func)
	{
		Parms.EventID=EventID;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IIWALS_AbilityInterface*)(O->GetNativeInterfaceAddress(UIWALS_AbilityInterface::StaticClass())))
	{
		I->GASBPI_CallToCurrentActivatedAbility_Implementation(EventID);
	}
}
struct Z_Construct_UFunction_UIWALS_AbilityInterface_GASBPI_CallToCurrentActivatedAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "IWALS Ability System" },
		{ "ModuleRelativePath", "Public/IWALS_AbilityInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_EventID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIWALS_AbilityInterface_GASBPI_CallToCurrentActivatedAbility_Statics::NewProp_EventID = { "EventID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IWALS_AbilityInterface_eventGASBPI_CallToCurrentActivatedAbility_Parms, EventID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIWALS_AbilityInterface_GASBPI_CallToCurrentActivatedAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIWALS_AbilityInterface_GASBPI_CallToCurrentActivatedAbility_Statics::NewProp_EventID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_AbilityInterface_GASBPI_CallToCurrentActivatedAbility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIWALS_AbilityInterface_GASBPI_CallToCurrentActivatedAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIWALS_AbilityInterface, nullptr, "GASBPI_CallToCurrentActivatedAbility", nullptr, nullptr, Z_Construct_UFunction_UIWALS_AbilityInterface_GASBPI_CallToCurrentActivatedAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_AbilityInterface_GASBPI_CallToCurrentActivatedAbility_Statics::PropPointers), sizeof(IWALS_AbilityInterface_eventGASBPI_CallToCurrentActivatedAbility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_AbilityInterface_GASBPI_CallToCurrentActivatedAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIWALS_AbilityInterface_GASBPI_CallToCurrentActivatedAbility_Statics::Function_MetaDataParams) };
static_assert(sizeof(IWALS_AbilityInterface_eventGASBPI_CallToCurrentActivatedAbility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIWALS_AbilityInterface_GASBPI_CallToCurrentActivatedAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIWALS_AbilityInterface_GASBPI_CallToCurrentActivatedAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIWALS_AbilityInterface::execGASBPI_CallToCurrentActivatedAbility)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_EventID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GASBPI_CallToCurrentActivatedAbility_Implementation(Z_Param_EventID);
	P_NATIVE_END;
}
// End Interface UIWALS_AbilityInterface Function GASBPI_CallToCurrentActivatedAbility

// Begin Interface UIWALS_AbilityInterface
void UIWALS_AbilityInterface::StaticRegisterNativesUIWALS_AbilityInterface()
{
	UClass* Class = UIWALS_AbilityInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GASBPI_CallToCurrentActivatedAbility", &IIWALS_AbilityInterface::execGASBPI_CallToCurrentActivatedAbility },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIWALS_AbilityInterface);
UClass* Z_Construct_UClass_UIWALS_AbilityInterface_NoRegister()
{
	return UIWALS_AbilityInterface::StaticClass();
}
struct Z_Construct_UClass_UIWALS_AbilityInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IWALS_AbilityInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIWALS_AbilityInterface_GASBPI_CallToCurrentActivatedAbility, "GASBPI_CallToCurrentActivatedAbility" }, // 2562497459
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIWALS_AbilityInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIWALS_AbilityInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_IWALS_AbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AbilityInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIWALS_AbilityInterface_Statics::ClassParams = {
	&UIWALS_AbilityInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AbilityInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UIWALS_AbilityInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIWALS_AbilityInterface()
{
	if (!Z_Registration_Info_UClass_UIWALS_AbilityInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIWALS_AbilityInterface.OuterSingleton, Z_Construct_UClass_UIWALS_AbilityInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIWALS_AbilityInterface.OuterSingleton;
}
template<> IWALS_ABILITYSYSTEM_API UClass* StaticClass<UIWALS_AbilityInterface>()
{
	return UIWALS_AbilityInterface::StaticClass();
}
UIWALS_AbilityInterface::UIWALS_AbilityInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIWALS_AbilityInterface);
UIWALS_AbilityInterface::~UIWALS_AbilityInterface() {}
// End Interface UIWALS_AbilityInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIWALS_AbilityInterface, UIWALS_AbilityInterface::StaticClass, TEXT("UIWALS_AbilityInterface"), &Z_Registration_Info_UClass_UIWALS_AbilityInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIWALS_AbilityInterface), 1547127958U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_2328792307(TEXT("/Script/IWALS_AbilitySystem"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
