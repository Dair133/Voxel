// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWALS_AbilitySystem/Public/IWALS_BaseAttributeSet.h"
#include "AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIWALS_BaseAttributeSet() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
	IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UIWALS_BaseAttributeSet();
	IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UIWALS_BaseAttributeSet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IWALS_AbilitySystem();
// End Cross Module References
	DEFINE_FUNCTION(UIWALS_BaseAttributeSet::execOnRep_Experience)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldExperience);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Experience(Z_Param_Out_OldExperience);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIWALS_BaseAttributeSet::execOnRep_AttackMultiply)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldAttackMultiply);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AttackMultiply(Z_Param_Out_OldAttackMultiply);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIWALS_BaseAttributeSet::execOnRep_Armor)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldArmor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Armor(Z_Param_Out_OldArmor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIWALS_BaseAttributeSet::execOnRep_Health)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_OldHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Health(Z_Param_Out_OldHealth);
		P_NATIVE_END;
	}
	void UIWALS_BaseAttributeSet::StaticRegisterNativesUIWALS_BaseAttributeSet()
	{
		UClass* Class = UIWALS_BaseAttributeSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_Armor", &UIWALS_BaseAttributeSet::execOnRep_Armor },
			{ "OnRep_AttackMultiply", &UIWALS_BaseAttributeSet::execOnRep_AttackMultiply },
			{ "OnRep_Experience", &UIWALS_BaseAttributeSet::execOnRep_Experience },
			{ "OnRep_Health", &UIWALS_BaseAttributeSet::execOnRep_Health },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Armor_Statics
	{
		struct IWALS_BaseAttributeSet_eventOnRep_Armor_Parms
		{
			FGameplayAttributeData OldArmor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldArmor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldArmor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Armor_Statics::NewProp_OldArmor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Armor_Statics::NewProp_OldArmor = { "OldArmor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IWALS_BaseAttributeSet_eventOnRep_Armor_Parms, OldArmor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Armor_Statics::NewProp_OldArmor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Armor_Statics::NewProp_OldArmor_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Armor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Armor_Statics::NewProp_OldArmor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Armor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IWALS_BaseAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Armor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIWALS_BaseAttributeSet, nullptr, "OnRep_Armor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Armor_Statics::IWALS_BaseAttributeSet_eventOnRep_Armor_Parms), Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Armor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Armor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Armor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Armor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Armor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Armor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_AttackMultiply_Statics
	{
		struct IWALS_BaseAttributeSet_eventOnRep_AttackMultiply_Parms
		{
			FGameplayAttributeData OldAttackMultiply;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldAttackMultiply_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldAttackMultiply;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_AttackMultiply_Statics::NewProp_OldAttackMultiply_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_AttackMultiply_Statics::NewProp_OldAttackMultiply = { "OldAttackMultiply", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IWALS_BaseAttributeSet_eventOnRep_AttackMultiply_Parms, OldAttackMultiply), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_AttackMultiply_Statics::NewProp_OldAttackMultiply_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_AttackMultiply_Statics::NewProp_OldAttackMultiply_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_AttackMultiply_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_AttackMultiply_Statics::NewProp_OldAttackMultiply,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_AttackMultiply_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IWALS_BaseAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_AttackMultiply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIWALS_BaseAttributeSet, nullptr, "OnRep_AttackMultiply", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_AttackMultiply_Statics::IWALS_BaseAttributeSet_eventOnRep_AttackMultiply_Parms), Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_AttackMultiply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_AttackMultiply_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_AttackMultiply_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_AttackMultiply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_AttackMultiply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_AttackMultiply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Experience_Statics
	{
		struct IWALS_BaseAttributeSet_eventOnRep_Experience_Parms
		{
			FGameplayAttributeData OldExperience;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldExperience_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldExperience;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Experience_Statics::NewProp_OldExperience_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Experience_Statics::NewProp_OldExperience = { "OldExperience", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IWALS_BaseAttributeSet_eventOnRep_Experience_Parms, OldExperience), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Experience_Statics::NewProp_OldExperience_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Experience_Statics::NewProp_OldExperience_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Experience_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Experience_Statics::NewProp_OldExperience,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Experience_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IWALS_BaseAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Experience_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIWALS_BaseAttributeSet, nullptr, "OnRep_Experience", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Experience_Statics::IWALS_BaseAttributeSet_eventOnRep_Experience_Parms), Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Experience_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Experience_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Experience_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Experience_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Experience()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Experience_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Health_Statics
	{
		struct IWALS_BaseAttributeSet_eventOnRep_Health_Parms
		{
			FGameplayAttributeData OldHealth;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Health_Statics::NewProp_OldHealth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Health_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IWALS_BaseAttributeSet_eventOnRep_Health_Parms, OldHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Health_Statics::NewProp_OldHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Health_Statics::NewProp_OldHealth_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Health_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Health_Statics::NewProp_OldHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Health_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IWALS_BaseAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIWALS_BaseAttributeSet, nullptr, "OnRep_Health", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Health_Statics::IWALS_BaseAttributeSet_eventOnRep_Health_Parms), Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Health_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Health_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Health_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Health_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Health()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Health_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIWALS_BaseAttributeSet);
	UClass* Z_Construct_UClass_UIWALS_BaseAttributeSet_NoRegister()
	{
		return UIWALS_BaseAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UIWALS_BaseAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Armor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackMultiply_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttackMultiply;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Experience_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Experience;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIWALS_BaseAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_IWALS_AbilitySystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIWALS_BaseAttributeSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Armor, "OnRep_Armor" }, // 1028188740
		{ &Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_AttackMultiply, "OnRep_AttackMultiply" }, // 1510517008
		{ &Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Experience, "OnRep_Experience" }, // 4041912514
		{ &Z_Construct_UFunction_UIWALS_BaseAttributeSet_OnRep_Health, "OnRep_Health" }, // 3237864415
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_BaseAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IWALS_BaseAttributeSet.h" },
		{ "ModuleRelativePath", "Public/IWALS_BaseAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_BaseAttributeSet_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "//ATTRIBUTE -> Health\n" },
		{ "ModuleRelativePath", "Public/IWALS_BaseAttributeSet.h" },
		{ "ToolTip", "ATTRIBUTE -> Health" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_BaseAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_BaseAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UIWALS_BaseAttributeSet_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_BaseAttributeSet_Statics::NewProp_Health_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_BaseAttributeSet_Statics::NewProp_Armor_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "//ATTRIBUTE -> Armor\n" },
		{ "ModuleRelativePath", "Public/IWALS_BaseAttributeSet.h" },
		{ "ToolTip", "ATTRIBUTE -> Armor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_BaseAttributeSet_Statics::NewProp_Armor = { "Armor", "OnRep_Armor", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_BaseAttributeSet, Armor), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UIWALS_BaseAttributeSet_Statics::NewProp_Armor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_BaseAttributeSet_Statics::NewProp_Armor_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_BaseAttributeSet_Statics::NewProp_AttackMultiply_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "//ATTRIBUTE -> AttackMultiply\n" },
		{ "ModuleRelativePath", "Public/IWALS_BaseAttributeSet.h" },
		{ "ToolTip", "ATTRIBUTE -> AttackMultiply" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_BaseAttributeSet_Statics::NewProp_AttackMultiply = { "AttackMultiply", "OnRep_AttackMultiply", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_BaseAttributeSet, AttackMultiply), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UIWALS_BaseAttributeSet_Statics::NewProp_AttackMultiply_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_BaseAttributeSet_Statics::NewProp_AttackMultiply_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIWALS_BaseAttributeSet_Statics::NewProp_Experience_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "//ATTRIBUTE -> Experience\n" },
		{ "ModuleRelativePath", "Public/IWALS_BaseAttributeSet.h" },
		{ "ToolTip", "ATTRIBUTE -> Experience" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIWALS_BaseAttributeSet_Statics::NewProp_Experience = { "Experience", "OnRep_Experience", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIWALS_BaseAttributeSet, Experience), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UIWALS_BaseAttributeSet_Statics::NewProp_Experience_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_BaseAttributeSet_Statics::NewProp_Experience_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIWALS_BaseAttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_BaseAttributeSet_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_BaseAttributeSet_Statics::NewProp_Armor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_BaseAttributeSet_Statics::NewProp_AttackMultiply,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIWALS_BaseAttributeSet_Statics::NewProp_Experience,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIWALS_BaseAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIWALS_BaseAttributeSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIWALS_BaseAttributeSet_Statics::ClassParams = {
		&UIWALS_BaseAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIWALS_BaseAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_BaseAttributeSet_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIWALS_BaseAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_BaseAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIWALS_BaseAttributeSet()
	{
		if (!Z_Registration_Info_UClass_UIWALS_BaseAttributeSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIWALS_BaseAttributeSet.OuterSingleton, Z_Construct_UClass_UIWALS_BaseAttributeSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIWALS_BaseAttributeSet.OuterSingleton;
	}
	template<> IWALS_ABILITYSYSTEM_API UClass* StaticClass<UIWALS_BaseAttributeSet>()
	{
		return UIWALS_BaseAttributeSet::StaticClass();
	}

	void UIWALS_BaseAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Health(TEXT("Health"));
		static const FName Name_Armor(TEXT("Armor"));
		static const FName Name_AttackMultiply(TEXT("AttackMultiply"));
		static const FName Name_Experience(TEXT("Experience"));

		const bool bIsValid = true
			&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
			&& Name_Armor == ClassReps[(int32)ENetFields_Private::Armor].Property->GetFName()
			&& Name_AttackMultiply == ClassReps[(int32)ENetFields_Private::AttackMultiply].Property->GetFName()
			&& Name_Experience == ClassReps[(int32)ENetFields_Private::Experience].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UIWALS_BaseAttributeSet"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIWALS_BaseAttributeSet);
	UIWALS_BaseAttributeSet::~UIWALS_BaseAttributeSet() {}
	struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_BaseAttributeSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_BaseAttributeSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIWALS_BaseAttributeSet, UIWALS_BaseAttributeSet::StaticClass, TEXT("UIWALS_BaseAttributeSet"), &Z_Registration_Info_UClass_UIWALS_BaseAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIWALS_BaseAttributeSet), 2370349069U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_BaseAttributeSet_h_2147751123(TEXT("/Script/IWALS_AbilitySystem"),
		Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_BaseAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS_GAS_Plugin_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_BaseAttributeSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
