// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/ALS_BaseComponentsInterfaceCpp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeALS_BaseComponentsInterfaceCpp() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UALS_BaseComponentsInterfaceCpp();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UALS_BaseComponentsInterfaceCpp_NoRegister();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References

// Begin Interface UALS_BaseComponentsInterfaceCpp Function BPICpp_InputAimAction
struct ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputAimAction_Parms
{
	bool Hold;
	bool Start;
};
void IALS_BaseComponentsInterfaceCpp::BPICpp_InputAimAction(bool Hold, bool Start)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPICpp_InputAimAction instead.");
}
static FName NAME_UALS_BaseComponentsInterfaceCpp_BPICpp_InputAimAction = FName(TEXT("BPICpp_InputAimAction"));
void IALS_BaseComponentsInterfaceCpp::Execute_BPICpp_InputAimAction(UObject* O, bool Hold, bool Start)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UALS_BaseComponentsInterfaceCpp::StaticClass()));
	ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputAimAction_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UALS_BaseComponentsInterfaceCpp_BPICpp_InputAimAction);
	if (Func)
	{
		Parms.Hold=Hold;
		Parms.Start=Start;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IALS_BaseComponentsInterfaceCpp*)(O->GetNativeInterfaceAddress(UALS_BaseComponentsInterfaceCpp::StaticClass())))
	{
		I->BPICpp_InputAimAction_Implementation(Hold,Start);
	}
}
struct Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputAimAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inputs" },
		{ "ModuleRelativePath", "Public/ALS_BaseComponentsInterfaceCpp.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Hold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Hold;
	static void NewProp_Start_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Start;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputAimAction_Statics::NewProp_Hold_SetBit(void* Obj)
{
	((ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputAimAction_Parms*)Obj)->Hold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputAimAction_Statics::NewProp_Hold = { "Hold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputAimAction_Parms), &Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputAimAction_Statics::NewProp_Hold_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputAimAction_Statics::NewProp_Start_SetBit(void* Obj)
{
	((ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputAimAction_Parms*)Obj)->Start = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputAimAction_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputAimAction_Parms), &Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputAimAction_Statics::NewProp_Start_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputAimAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputAimAction_Statics::NewProp_Hold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputAimAction_Statics::NewProp_Start,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputAimAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputAimAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALS_BaseComponentsInterfaceCpp, nullptr, "BPICpp_InputAimAction", nullptr, nullptr, Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputAimAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputAimAction_Statics::PropPointers), sizeof(ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputAimAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputAimAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputAimAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputAimAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputAimAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputAimAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IALS_BaseComponentsInterfaceCpp::execBPICpp_InputAimAction)
{
	P_GET_UBOOL(Z_Param_Hold);
	P_GET_UBOOL(Z_Param_Start);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPICpp_InputAimAction_Implementation(Z_Param_Hold,Z_Param_Start);
	P_NATIVE_END;
}
// End Interface UALS_BaseComponentsInterfaceCpp Function BPICpp_InputAimAction

// Begin Interface UALS_BaseComponentsInterfaceCpp Function BPICpp_InputJumpAction
struct ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputJumpAction_Parms
{
	bool Hold;
	bool Start;
};
void IALS_BaseComponentsInterfaceCpp::BPICpp_InputJumpAction(bool Hold, bool Start)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPICpp_InputJumpAction instead.");
}
static FName NAME_UALS_BaseComponentsInterfaceCpp_BPICpp_InputJumpAction = FName(TEXT("BPICpp_InputJumpAction"));
void IALS_BaseComponentsInterfaceCpp::Execute_BPICpp_InputJumpAction(UObject* O, bool Hold, bool Start)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UALS_BaseComponentsInterfaceCpp::StaticClass()));
	ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputJumpAction_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UALS_BaseComponentsInterfaceCpp_BPICpp_InputJumpAction);
	if (Func)
	{
		Parms.Hold=Hold;
		Parms.Start=Start;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IALS_BaseComponentsInterfaceCpp*)(O->GetNativeInterfaceAddress(UALS_BaseComponentsInterfaceCpp::StaticClass())))
	{
		I->BPICpp_InputJumpAction_Implementation(Hold,Start);
	}
}
struct Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputJumpAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inputs" },
		{ "ModuleRelativePath", "Public/ALS_BaseComponentsInterfaceCpp.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Hold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Hold;
	static void NewProp_Start_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Start;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputJumpAction_Statics::NewProp_Hold_SetBit(void* Obj)
{
	((ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputJumpAction_Parms*)Obj)->Hold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputJumpAction_Statics::NewProp_Hold = { "Hold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputJumpAction_Parms), &Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputJumpAction_Statics::NewProp_Hold_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputJumpAction_Statics::NewProp_Start_SetBit(void* Obj)
{
	((ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputJumpAction_Parms*)Obj)->Start = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputJumpAction_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputJumpAction_Parms), &Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputJumpAction_Statics::NewProp_Start_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputJumpAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputJumpAction_Statics::NewProp_Hold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputJumpAction_Statics::NewProp_Start,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputJumpAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputJumpAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALS_BaseComponentsInterfaceCpp, nullptr, "BPICpp_InputJumpAction", nullptr, nullptr, Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputJumpAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputJumpAction_Statics::PropPointers), sizeof(ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputJumpAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputJumpAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputJumpAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputJumpAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputJumpAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputJumpAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IALS_BaseComponentsInterfaceCpp::execBPICpp_InputJumpAction)
{
	P_GET_UBOOL(Z_Param_Hold);
	P_GET_UBOOL(Z_Param_Start);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPICpp_InputJumpAction_Implementation(Z_Param_Hold,Z_Param_Start);
	P_NATIVE_END;
}
// End Interface UALS_BaseComponentsInterfaceCpp Function BPICpp_InputJumpAction

// Begin Interface UALS_BaseComponentsInterfaceCpp Function BPICpp_InputShotAction
struct ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputShotAction_Parms
{
	bool Hold;
	bool Start;
};
void IALS_BaseComponentsInterfaceCpp::BPICpp_InputShotAction(bool Hold, bool Start)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPICpp_InputShotAction instead.");
}
static FName NAME_UALS_BaseComponentsInterfaceCpp_BPICpp_InputShotAction = FName(TEXT("BPICpp_InputShotAction"));
void IALS_BaseComponentsInterfaceCpp::Execute_BPICpp_InputShotAction(UObject* O, bool Hold, bool Start)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UALS_BaseComponentsInterfaceCpp::StaticClass()));
	ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputShotAction_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UALS_BaseComponentsInterfaceCpp_BPICpp_InputShotAction);
	if (Func)
	{
		Parms.Hold=Hold;
		Parms.Start=Start;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IALS_BaseComponentsInterfaceCpp*)(O->GetNativeInterfaceAddress(UALS_BaseComponentsInterfaceCpp::StaticClass())))
	{
		I->BPICpp_InputShotAction_Implementation(Hold,Start);
	}
}
struct Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputShotAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inputs" },
		{ "ModuleRelativePath", "Public/ALS_BaseComponentsInterfaceCpp.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Hold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Hold;
	static void NewProp_Start_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Start;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputShotAction_Statics::NewProp_Hold_SetBit(void* Obj)
{
	((ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputShotAction_Parms*)Obj)->Hold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputShotAction_Statics::NewProp_Hold = { "Hold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputShotAction_Parms), &Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputShotAction_Statics::NewProp_Hold_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputShotAction_Statics::NewProp_Start_SetBit(void* Obj)
{
	((ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputShotAction_Parms*)Obj)->Start = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputShotAction_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputShotAction_Parms), &Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputShotAction_Statics::NewProp_Start_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputShotAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputShotAction_Statics::NewProp_Hold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputShotAction_Statics::NewProp_Start,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputShotAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputShotAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALS_BaseComponentsInterfaceCpp, nullptr, "BPICpp_InputShotAction", nullptr, nullptr, Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputShotAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputShotAction_Statics::PropPointers), sizeof(ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputShotAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputShotAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputShotAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputShotAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputShotAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputShotAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IALS_BaseComponentsInterfaceCpp::execBPICpp_InputShotAction)
{
	P_GET_UBOOL(Z_Param_Hold);
	P_GET_UBOOL(Z_Param_Start);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPICpp_InputShotAction_Implementation(Z_Param_Hold,Z_Param_Start);
	P_NATIVE_END;
}
// End Interface UALS_BaseComponentsInterfaceCpp Function BPICpp_InputShotAction

// Begin Interface UALS_BaseComponentsInterfaceCpp Function BPICpp_InputSprintAction
struct ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputSprintAction_Parms
{
	bool Hold;
	bool Start;
};
void IALS_BaseComponentsInterfaceCpp::BPICpp_InputSprintAction(bool Hold, bool Start)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPICpp_InputSprintAction instead.");
}
static FName NAME_UALS_BaseComponentsInterfaceCpp_BPICpp_InputSprintAction = FName(TEXT("BPICpp_InputSprintAction"));
void IALS_BaseComponentsInterfaceCpp::Execute_BPICpp_InputSprintAction(UObject* O, bool Hold, bool Start)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UALS_BaseComponentsInterfaceCpp::StaticClass()));
	ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputSprintAction_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UALS_BaseComponentsInterfaceCpp_BPICpp_InputSprintAction);
	if (Func)
	{
		Parms.Hold=Hold;
		Parms.Start=Start;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IALS_BaseComponentsInterfaceCpp*)(O->GetNativeInterfaceAddress(UALS_BaseComponentsInterfaceCpp::StaticClass())))
	{
		I->BPICpp_InputSprintAction_Implementation(Hold,Start);
	}
}
struct Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputSprintAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inputs" },
		{ "ModuleRelativePath", "Public/ALS_BaseComponentsInterfaceCpp.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Hold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Hold;
	static void NewProp_Start_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Start;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputSprintAction_Statics::NewProp_Hold_SetBit(void* Obj)
{
	((ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputSprintAction_Parms*)Obj)->Hold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputSprintAction_Statics::NewProp_Hold = { "Hold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputSprintAction_Parms), &Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputSprintAction_Statics::NewProp_Hold_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputSprintAction_Statics::NewProp_Start_SetBit(void* Obj)
{
	((ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputSprintAction_Parms*)Obj)->Start = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputSprintAction_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputSprintAction_Parms), &Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputSprintAction_Statics::NewProp_Start_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputSprintAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputSprintAction_Statics::NewProp_Hold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputSprintAction_Statics::NewProp_Start,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputSprintAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputSprintAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALS_BaseComponentsInterfaceCpp, nullptr, "BPICpp_InputSprintAction", nullptr, nullptr, Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputSprintAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputSprintAction_Statics::PropPointers), sizeof(ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputSprintAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputSprintAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputSprintAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputSprintAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputSprintAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputSprintAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IALS_BaseComponentsInterfaceCpp::execBPICpp_InputSprintAction)
{
	P_GET_UBOOL(Z_Param_Hold);
	P_GET_UBOOL(Z_Param_Start);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPICpp_InputSprintAction_Implementation(Z_Param_Hold,Z_Param_Start);
	P_NATIVE_END;
}
// End Interface UALS_BaseComponentsInterfaceCpp Function BPICpp_InputSprintAction

// Begin Interface UALS_BaseComponentsInterfaceCpp Function BPICpp_InputStanceAction
struct ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputStanceAction_Parms
{
	bool Hold;
	bool Start;
};
void IALS_BaseComponentsInterfaceCpp::BPICpp_InputStanceAction(bool Hold, bool Start)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPICpp_InputStanceAction instead.");
}
static FName NAME_UALS_BaseComponentsInterfaceCpp_BPICpp_InputStanceAction = FName(TEXT("BPICpp_InputStanceAction"));
void IALS_BaseComponentsInterfaceCpp::Execute_BPICpp_InputStanceAction(UObject* O, bool Hold, bool Start)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UALS_BaseComponentsInterfaceCpp::StaticClass()));
	ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputStanceAction_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UALS_BaseComponentsInterfaceCpp_BPICpp_InputStanceAction);
	if (Func)
	{
		Parms.Hold=Hold;
		Parms.Start=Start;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IALS_BaseComponentsInterfaceCpp*)(O->GetNativeInterfaceAddress(UALS_BaseComponentsInterfaceCpp::StaticClass())))
	{
		I->BPICpp_InputStanceAction_Implementation(Hold,Start);
	}
}
struct Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputStanceAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inputs" },
		{ "ModuleRelativePath", "Public/ALS_BaseComponentsInterfaceCpp.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Hold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Hold;
	static void NewProp_Start_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Start;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputStanceAction_Statics::NewProp_Hold_SetBit(void* Obj)
{
	((ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputStanceAction_Parms*)Obj)->Hold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputStanceAction_Statics::NewProp_Hold = { "Hold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputStanceAction_Parms), &Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputStanceAction_Statics::NewProp_Hold_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputStanceAction_Statics::NewProp_Start_SetBit(void* Obj)
{
	((ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputStanceAction_Parms*)Obj)->Start = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputStanceAction_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputStanceAction_Parms), &Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputStanceAction_Statics::NewProp_Start_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputStanceAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputStanceAction_Statics::NewProp_Hold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputStanceAction_Statics::NewProp_Start,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputStanceAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputStanceAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALS_BaseComponentsInterfaceCpp, nullptr, "BPICpp_InputStanceAction", nullptr, nullptr, Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputStanceAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputStanceAction_Statics::PropPointers), sizeof(ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputStanceAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputStanceAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputStanceAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputStanceAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputStanceAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputStanceAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IALS_BaseComponentsInterfaceCpp::execBPICpp_InputStanceAction)
{
	P_GET_UBOOL(Z_Param_Hold);
	P_GET_UBOOL(Z_Param_Start);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPICpp_InputStanceAction_Implementation(Z_Param_Hold,Z_Param_Start);
	P_NATIVE_END;
}
// End Interface UALS_BaseComponentsInterfaceCpp Function BPICpp_InputStanceAction

// Begin Interface UALS_BaseComponentsInterfaceCpp Function BPICpp_InputWalkAction
struct ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputWalkAction_Parms
{
	bool Hold;
	bool Start;
};
void IALS_BaseComponentsInterfaceCpp::BPICpp_InputWalkAction(bool Hold, bool Start)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPICpp_InputWalkAction instead.");
}
static FName NAME_UALS_BaseComponentsInterfaceCpp_BPICpp_InputWalkAction = FName(TEXT("BPICpp_InputWalkAction"));
void IALS_BaseComponentsInterfaceCpp::Execute_BPICpp_InputWalkAction(UObject* O, bool Hold, bool Start)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UALS_BaseComponentsInterfaceCpp::StaticClass()));
	ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputWalkAction_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UALS_BaseComponentsInterfaceCpp_BPICpp_InputWalkAction);
	if (Func)
	{
		Parms.Hold=Hold;
		Parms.Start=Start;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IALS_BaseComponentsInterfaceCpp*)(O->GetNativeInterfaceAddress(UALS_BaseComponentsInterfaceCpp::StaticClass())))
	{
		I->BPICpp_InputWalkAction_Implementation(Hold,Start);
	}
}
struct Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputWalkAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inputs" },
		{ "ModuleRelativePath", "Public/ALS_BaseComponentsInterfaceCpp.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Hold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Hold;
	static void NewProp_Start_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Start;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputWalkAction_Statics::NewProp_Hold_SetBit(void* Obj)
{
	((ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputWalkAction_Parms*)Obj)->Hold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputWalkAction_Statics::NewProp_Hold = { "Hold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputWalkAction_Parms), &Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputWalkAction_Statics::NewProp_Hold_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputWalkAction_Statics::NewProp_Start_SetBit(void* Obj)
{
	((ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputWalkAction_Parms*)Obj)->Start = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputWalkAction_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputWalkAction_Parms), &Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputWalkAction_Statics::NewProp_Start_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputWalkAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputWalkAction_Statics::NewProp_Hold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputWalkAction_Statics::NewProp_Start,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputWalkAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputWalkAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UALS_BaseComponentsInterfaceCpp, nullptr, "BPICpp_InputWalkAction", nullptr, nullptr, Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputWalkAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputWalkAction_Statics::PropPointers), sizeof(ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputWalkAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputWalkAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputWalkAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(ALS_BaseComponentsInterfaceCpp_eventBPICpp_InputWalkAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputWalkAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputWalkAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IALS_BaseComponentsInterfaceCpp::execBPICpp_InputWalkAction)
{
	P_GET_UBOOL(Z_Param_Hold);
	P_GET_UBOOL(Z_Param_Start);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPICpp_InputWalkAction_Implementation(Z_Param_Hold,Z_Param_Start);
	P_NATIVE_END;
}
// End Interface UALS_BaseComponentsInterfaceCpp Function BPICpp_InputWalkAction

// Begin Interface UALS_BaseComponentsInterfaceCpp
void UALS_BaseComponentsInterfaceCpp::StaticRegisterNativesUALS_BaseComponentsInterfaceCpp()
{
	UClass* Class = UALS_BaseComponentsInterfaceCpp::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BPICpp_InputAimAction", &IALS_BaseComponentsInterfaceCpp::execBPICpp_InputAimAction },
		{ "BPICpp_InputJumpAction", &IALS_BaseComponentsInterfaceCpp::execBPICpp_InputJumpAction },
		{ "BPICpp_InputShotAction", &IALS_BaseComponentsInterfaceCpp::execBPICpp_InputShotAction },
		{ "BPICpp_InputSprintAction", &IALS_BaseComponentsInterfaceCpp::execBPICpp_InputSprintAction },
		{ "BPICpp_InputStanceAction", &IALS_BaseComponentsInterfaceCpp::execBPICpp_InputStanceAction },
		{ "BPICpp_InputWalkAction", &IALS_BaseComponentsInterfaceCpp::execBPICpp_InputWalkAction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UALS_BaseComponentsInterfaceCpp);
UClass* Z_Construct_UClass_UALS_BaseComponentsInterfaceCpp_NoRegister()
{
	return UALS_BaseComponentsInterfaceCpp::StaticClass();
}
struct Z_Construct_UClass_UALS_BaseComponentsInterfaceCpp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ALS_BaseComponentsInterfaceCpp.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputAimAction, "BPICpp_InputAimAction" }, // 1706765972
		{ &Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputJumpAction, "BPICpp_InputJumpAction" }, // 2946824404
		{ &Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputShotAction, "BPICpp_InputShotAction" }, // 2473571352
		{ &Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputSprintAction, "BPICpp_InputSprintAction" }, // 945128303
		{ &Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputStanceAction, "BPICpp_InputStanceAction" }, // 2151726022
		{ &Z_Construct_UFunction_UALS_BaseComponentsInterfaceCpp_BPICpp_InputWalkAction, "BPICpp_InputWalkAction" }, // 1379314859
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IALS_BaseComponentsInterfaceCpp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UALS_BaseComponentsInterfaceCpp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UALS_BaseComponentsInterfaceCpp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UALS_BaseComponentsInterfaceCpp_Statics::ClassParams = {
	&UALS_BaseComponentsInterfaceCpp::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UALS_BaseComponentsInterfaceCpp_Statics::Class_MetaDataParams), Z_Construct_UClass_UALS_BaseComponentsInterfaceCpp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UALS_BaseComponentsInterfaceCpp()
{
	if (!Z_Registration_Info_UClass_UALS_BaseComponentsInterfaceCpp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UALS_BaseComponentsInterfaceCpp.OuterSingleton, Z_Construct_UClass_UALS_BaseComponentsInterfaceCpp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UALS_BaseComponentsInterfaceCpp.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UClass* StaticClass<UALS_BaseComponentsInterfaceCpp>()
{
	return UALS_BaseComponentsInterfaceCpp::StaticClass();
}
UALS_BaseComponentsInterfaceCpp::UALS_BaseComponentsInterfaceCpp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UALS_BaseComponentsInterfaceCpp);
UALS_BaseComponentsInterfaceCpp::~UALS_BaseComponentsInterfaceCpp() {}
// End Interface UALS_BaseComponentsInterfaceCpp

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseComponentsInterfaceCpp_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UALS_BaseComponentsInterfaceCpp, UALS_BaseComponentsInterfaceCpp::StaticClass, TEXT("UALS_BaseComponentsInterfaceCpp"), &Z_Registration_Info_UClass_UALS_BaseComponentsInterfaceCpp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UALS_BaseComponentsInterfaceCpp), 3718725506U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseComponentsInterfaceCpp_h_1156444044(TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseComponentsInterfaceCpp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5Projects_Voxel_VoxelProject_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_ALS_BaseComponentsInterfaceCpp_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
