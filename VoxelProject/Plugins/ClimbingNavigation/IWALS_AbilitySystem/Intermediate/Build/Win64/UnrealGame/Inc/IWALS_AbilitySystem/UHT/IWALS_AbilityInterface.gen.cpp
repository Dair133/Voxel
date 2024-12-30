// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWALS_AbilitySystem/Public/IWALS_AbilityInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIWALS_AbilityInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UIWALS_AbilityInterface();
	IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UIWALS_AbilityInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IWALS_AbilitySystem();
// End Cross Module References
	DEFINE_FUNCTION(IIWALS_AbilityInterface::execGASBPI_CallToCurrentActivatedAbility)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EventID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GASBPI_CallToCurrentActivatedAbility_Implementation(Z_Param_EventID);
		P_NATIVE_END;
	}
	struct IWALS_AbilityInterface_eventGASBPI_CallToCurrentActivatedAbility_Parms
	{
		int32 EventID;
	};
	void IIWALS_AbilityInterface::GASBPI_CallToCurrentActivatedAbility(int32 EventID)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GASBPI_CallToCurrentActivatedAbility instead.");
	}
	void UIWALS_AbilityInterface::StaticRegisterNativesUIWALS_AbilityInterface()
	{
		UClass* Class = UIWALS_AbilityInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GASBPI_CallToCurrentActivatedAbility", &IIWALS_AbilityInterface::execGASBPI_CallToCurrentActivatedAbility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIWALS_AbilityInterface_GASBPI_CallToCurrentActivatedAbility_Statics
	{
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_EventID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UIWALS_AbilityInterface_GASBPI_CallToCurrentActivatedAbility_Statics::NewProp_EventID = { "EventID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IWALS_AbilityInterface_eventGASBPI_CallToCurrentActivatedAbility_Parms, EventID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIWALS_AbilityInterface_GASBPI_CallToCurrentActivatedAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIWALS_AbilityInterface_GASBPI_CallToCurrentActivatedAbility_Statics::NewProp_EventID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIWALS_AbilityInterface_GASBPI_CallToCurrentActivatedAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "IWALS Ability System" },
		{ "ModuleRelativePath", "Public/IWALS_AbilityInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIWALS_AbilityInterface_GASBPI_CallToCurrentActivatedAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIWALS_AbilityInterface, nullptr, "GASBPI_CallToCurrentActivatedAbility", nullptr, nullptr, sizeof(IWALS_AbilityInterface_eventGASBPI_CallToCurrentActivatedAbility_Parms), Z_Construct_UFunction_UIWALS_AbilityInterface_GASBPI_CallToCurrentActivatedAbility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_AbilityInterface_GASBPI_CallToCurrentActivatedAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIWALS_AbilityInterface_GASBPI_CallToCurrentActivatedAbility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_AbilityInterface_GASBPI_CallToCurrentActivatedAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIWALS_AbilityInterface_GASBPI_CallToCurrentActivatedAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIWALS_AbilityInterface_GASBPI_CallToCurrentActivatedAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIWALS_AbilityInterface);
	UClass* Z_Construct_UClass_UIWALS_AbilityInterface_NoRegister()
	{
		return UIWALS_AbilityInterface::StaticClass();
	}
	struct Z_Construct_UClass_UIWALS_AbilityInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIWALS_AbilityInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_IWALS_AbilitySystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIWALS_AbilityInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIWALS_AbilityInterface_GASBPI_CallToCurrentActivatedAbility, "GASBPI_CallToCurrentActivatedAbility" }, // 394897993
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_AbilityInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IWALS_AbilityInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIWALS_AbilityInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIWALS_AbilityInterface>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UIWALS_AbilityInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_AbilityInterface_Statics::Class_MetaDataParams))
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
	struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIWALS_AbilityInterface, UIWALS_AbilityInterface::StaticClass, TEXT("UIWALS_AbilityInterface"), &Z_Registration_Info_UClass_UIWALS_AbilityInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIWALS_AbilityInterface), 3609245830U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_3222041836(TEXT("/Script/IWALS_AbilitySystem"),
		Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilityInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
