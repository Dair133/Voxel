// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/TraversalInteractionInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTraversalInteractionInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UTraversalInteractionInterface();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UTraversalInteractionInterface_NoRegister();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_TraversalAction();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References

// Begin Interface UTraversalInteractionInterface Function BPI_Get_ControlTransform
struct TraversalInteractionInterface_eventBPI_Get_ControlTransform_Parms
{
	FTransform ReturnTransform;
};
void ITraversalInteractionInterface::BPI_Get_ControlTransform(FTransform& ReturnTransform)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_Get_ControlTransform instead.");
}
static FName NAME_UTraversalInteractionInterface_BPI_Get_ControlTransform = FName(TEXT("BPI_Get_ControlTransform"));
void ITraversalInteractionInterface::Execute_BPI_Get_ControlTransform(UObject* O, FTransform& ReturnTransform)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTraversalInteractionInterface::StaticClass()));
	TraversalInteractionInterface_eventBPI_Get_ControlTransform_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTraversalInteractionInterface_BPI_Get_ControlTransform);
	if (Func)
	{
		Parms.ReturnTransform=ReturnTransform;
		O->ProcessEvent(Func, &Parms);
		ReturnTransform=Parms.ReturnTransform;
	}
	else if (auto I = (ITraversalInteractionInterface*)(O->GetNativeInterfaceAddress(UTraversalInteractionInterface::StaticClass())))
	{
		I->BPI_Get_ControlTransform_Implementation(ReturnTransform);
	}
}
struct Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_ControlTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Traversal Interface" },
		{ "ModuleRelativePath", "Public/TraversalInteractionInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_ControlTransform_Statics::NewProp_ReturnTransform = { "ReturnTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TraversalInteractionInterface_eventBPI_Get_ControlTransform_Parms, ReturnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_ControlTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_ControlTransform_Statics::NewProp_ReturnTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_ControlTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_ControlTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTraversalInteractionInterface, nullptr, "BPI_Get_ControlTransform", nullptr, nullptr, Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_ControlTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_ControlTransform_Statics::PropPointers), sizeof(TraversalInteractionInterface_eventBPI_Get_ControlTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_ControlTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_ControlTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(TraversalInteractionInterface_eventBPI_Get_ControlTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_ControlTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_ControlTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITraversalInteractionInterface::execBPI_Get_ControlTransform)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_ReturnTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_Get_ControlTransform_Implementation(Z_Param_Out_ReturnTransform);
	P_NATIVE_END;
}
// End Interface UTraversalInteractionInterface Function BPI_Get_ControlTransform

// Begin Interface UTraversalInteractionInterface Function BPI_Get_InteractionTransform
struct TraversalInteractionInterface_eventBPI_Get_InteractionTransform_Parms
{
	FTransform ReturnTransform;
};
void ITraversalInteractionInterface::BPI_Get_InteractionTransform(FTransform& ReturnTransform)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_Get_InteractionTransform instead.");
}
static FName NAME_UTraversalInteractionInterface_BPI_Get_InteractionTransform = FName(TEXT("BPI_Get_InteractionTransform"));
void ITraversalInteractionInterface::Execute_BPI_Get_InteractionTransform(UObject* O, FTransform& ReturnTransform)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTraversalInteractionInterface::StaticClass()));
	TraversalInteractionInterface_eventBPI_Get_InteractionTransform_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTraversalInteractionInterface_BPI_Get_InteractionTransform);
	if (Func)
	{
		Parms.ReturnTransform=ReturnTransform;
		O->ProcessEvent(Func, &Parms);
		ReturnTransform=Parms.ReturnTransform;
	}
	else if (auto I = (ITraversalInteractionInterface*)(O->GetNativeInterfaceAddress(UTraversalInteractionInterface::StaticClass())))
	{
		I->BPI_Get_InteractionTransform_Implementation(ReturnTransform);
	}
}
struct Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_InteractionTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Traversal Interface" },
		{ "ModuleRelativePath", "Public/TraversalInteractionInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_InteractionTransform_Statics::NewProp_ReturnTransform = { "ReturnTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TraversalInteractionInterface_eventBPI_Get_InteractionTransform_Parms, ReturnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_InteractionTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_InteractionTransform_Statics::NewProp_ReturnTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_InteractionTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_InteractionTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTraversalInteractionInterface, nullptr, "BPI_Get_InteractionTransform", nullptr, nullptr, Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_InteractionTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_InteractionTransform_Statics::PropPointers), sizeof(TraversalInteractionInterface_eventBPI_Get_InteractionTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_InteractionTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_InteractionTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(TraversalInteractionInterface_eventBPI_Get_InteractionTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_InteractionTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_InteractionTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITraversalInteractionInterface::execBPI_Get_InteractionTransform)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_ReturnTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_Get_InteractionTransform_Implementation(Z_Param_Out_ReturnTransform);
	P_NATIVE_END;
}
// End Interface UTraversalInteractionInterface Function BPI_Get_InteractionTransform

// Begin Interface UTraversalInteractionInterface Function BPI_Get_RootTransform
struct TraversalInteractionInterface_eventBPI_Get_RootTransform_Parms
{
	FTransform ReturnTransform;
};
void ITraversalInteractionInterface::BPI_Get_RootTransform(FTransform& ReturnTransform)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_Get_RootTransform instead.");
}
static FName NAME_UTraversalInteractionInterface_BPI_Get_RootTransform = FName(TEXT("BPI_Get_RootTransform"));
void ITraversalInteractionInterface::Execute_BPI_Get_RootTransform(UObject* O, FTransform& ReturnTransform)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTraversalInteractionInterface::StaticClass()));
	TraversalInteractionInterface_eventBPI_Get_RootTransform_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTraversalInteractionInterface_BPI_Get_RootTransform);
	if (Func)
	{
		Parms.ReturnTransform=ReturnTransform;
		O->ProcessEvent(Func, &Parms);
		ReturnTransform=Parms.ReturnTransform;
	}
	else if (auto I = (ITraversalInteractionInterface*)(O->GetNativeInterfaceAddress(UTraversalInteractionInterface::StaticClass())))
	{
		I->BPI_Get_RootTransform_Implementation(ReturnTransform);
	}
}
struct Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_RootTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Traversal Interface" },
		{ "ModuleRelativePath", "Public/TraversalInteractionInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_RootTransform_Statics::NewProp_ReturnTransform = { "ReturnTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TraversalInteractionInterface_eventBPI_Get_RootTransform_Parms, ReturnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_RootTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_RootTransform_Statics::NewProp_ReturnTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_RootTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_RootTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTraversalInteractionInterface, nullptr, "BPI_Get_RootTransform", nullptr, nullptr, Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_RootTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_RootTransform_Statics::PropPointers), sizeof(TraversalInteractionInterface_eventBPI_Get_RootTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_RootTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_RootTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(TraversalInteractionInterface_eventBPI_Get_RootTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_RootTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_RootTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITraversalInteractionInterface::execBPI_Get_RootTransform)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_ReturnTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_Get_RootTransform_Implementation(Z_Param_Out_ReturnTransform);
	P_NATIVE_END;
}
// End Interface UTraversalInteractionInterface Function BPI_Get_RootTransform

// Begin Interface UTraversalInteractionInterface Function BPI_Get_StartedPredictableJump
struct TraversalInteractionInterface_eventBPI_Get_StartedPredictableJump_Parms
{
	bool StartedJump;
};
void ITraversalInteractionInterface::BPI_Get_StartedPredictableJump(bool& StartedJump)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_Get_StartedPredictableJump instead.");
}
static FName NAME_UTraversalInteractionInterface_BPI_Get_StartedPredictableJump = FName(TEXT("BPI_Get_StartedPredictableJump"));
void ITraversalInteractionInterface::Execute_BPI_Get_StartedPredictableJump(UObject* O, bool& StartedJump)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTraversalInteractionInterface::StaticClass()));
	TraversalInteractionInterface_eventBPI_Get_StartedPredictableJump_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTraversalInteractionInterface_BPI_Get_StartedPredictableJump);
	if (Func)
	{
		Parms.StartedJump=StartedJump;
		O->ProcessEvent(Func, &Parms);
		StartedJump=Parms.StartedJump;
	}
	else if (auto I = (ITraversalInteractionInterface*)(O->GetNativeInterfaceAddress(UTraversalInteractionInterface::StaticClass())))
	{
		I->BPI_Get_StartedPredictableJump_Implementation(StartedJump);
	}
}
struct Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_StartedPredictableJump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Traversal Interface" },
		{ "ModuleRelativePath", "Public/TraversalInteractionInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_StartedJump_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StartedJump;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_StartedPredictableJump_Statics::NewProp_StartedJump_SetBit(void* Obj)
{
	((TraversalInteractionInterface_eventBPI_Get_StartedPredictableJump_Parms*)Obj)->StartedJump = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_StartedPredictableJump_Statics::NewProp_StartedJump = { "StartedJump", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TraversalInteractionInterface_eventBPI_Get_StartedPredictableJump_Parms), &Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_StartedPredictableJump_Statics::NewProp_StartedJump_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_StartedPredictableJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_StartedPredictableJump_Statics::NewProp_StartedJump,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_StartedPredictableJump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_StartedPredictableJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTraversalInteractionInterface, nullptr, "BPI_Get_StartedPredictableJump", nullptr, nullptr, Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_StartedPredictableJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_StartedPredictableJump_Statics::PropPointers), sizeof(TraversalInteractionInterface_eventBPI_Get_StartedPredictableJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_StartedPredictableJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_StartedPredictableJump_Statics::Function_MetaDataParams) };
static_assert(sizeof(TraversalInteractionInterface_eventBPI_Get_StartedPredictableJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_StartedPredictableJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_StartedPredictableJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITraversalInteractionInterface::execBPI_Get_StartedPredictableJump)
{
	P_GET_UBOOL_REF(Z_Param_Out_StartedJump);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_Get_StartedPredictableJump_Implementation(Z_Param_Out_StartedJump);
	P_NATIVE_END;
}
// End Interface UTraversalInteractionInterface Function BPI_Get_StartedPredictableJump

// Begin Interface UTraversalInteractionInterface Function BPI_Get_StartedTraversalAction
struct TraversalInteractionInterface_eventBPI_Get_StartedTraversalAction_Parms
{
	bool ReturnStarted;
	CALS_TraversalAction ReturnActionState;
};
void ITraversalInteractionInterface::BPI_Get_StartedTraversalAction(bool& ReturnStarted, CALS_TraversalAction& ReturnActionState)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_Get_StartedTraversalAction instead.");
}
static FName NAME_UTraversalInteractionInterface_BPI_Get_StartedTraversalAction = FName(TEXT("BPI_Get_StartedTraversalAction"));
void ITraversalInteractionInterface::Execute_BPI_Get_StartedTraversalAction(UObject* O, bool& ReturnStarted, CALS_TraversalAction& ReturnActionState)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTraversalInteractionInterface::StaticClass()));
	TraversalInteractionInterface_eventBPI_Get_StartedTraversalAction_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTraversalInteractionInterface_BPI_Get_StartedTraversalAction);
	if (Func)
	{
		Parms.ReturnStarted=ReturnStarted;
		Parms.ReturnActionState=ReturnActionState;
		O->ProcessEvent(Func, &Parms);
		ReturnStarted=Parms.ReturnStarted;
		ReturnActionState=Parms.ReturnActionState;
	}
	else if (auto I = (ITraversalInteractionInterface*)(O->GetNativeInterfaceAddress(UTraversalInteractionInterface::StaticClass())))
	{
		I->BPI_Get_StartedTraversalAction_Implementation(ReturnStarted,ReturnActionState);
	}
}
struct Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_StartedTraversalAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Traversal Interface" },
		{ "ModuleRelativePath", "Public/TraversalInteractionInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnStarted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnStarted;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnActionState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnActionState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_StartedTraversalAction_Statics::NewProp_ReturnStarted_SetBit(void* Obj)
{
	((TraversalInteractionInterface_eventBPI_Get_StartedTraversalAction_Parms*)Obj)->ReturnStarted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_StartedTraversalAction_Statics::NewProp_ReturnStarted = { "ReturnStarted", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TraversalInteractionInterface_eventBPI_Get_StartedTraversalAction_Parms), &Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_StartedTraversalAction_Statics::NewProp_ReturnStarted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_StartedTraversalAction_Statics::NewProp_ReturnActionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_StartedTraversalAction_Statics::NewProp_ReturnActionState = { "ReturnActionState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TraversalInteractionInterface_eventBPI_Get_StartedTraversalAction_Parms, ReturnActionState), Z_Construct_UEnum_HelpfulFunctions_CALS_TraversalAction, METADATA_PARAMS(0, nullptr) }; // 2501583752
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_StartedTraversalAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_StartedTraversalAction_Statics::NewProp_ReturnStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_StartedTraversalAction_Statics::NewProp_ReturnActionState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_StartedTraversalAction_Statics::NewProp_ReturnActionState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_StartedTraversalAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_StartedTraversalAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTraversalInteractionInterface, nullptr, "BPI_Get_StartedTraversalAction", nullptr, nullptr, Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_StartedTraversalAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_StartedTraversalAction_Statics::PropPointers), sizeof(TraversalInteractionInterface_eventBPI_Get_StartedTraversalAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_StartedTraversalAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_StartedTraversalAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(TraversalInteractionInterface_eventBPI_Get_StartedTraversalAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_StartedTraversalAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_StartedTraversalAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITraversalInteractionInterface::execBPI_Get_StartedTraversalAction)
{
	P_GET_UBOOL_REF(Z_Param_Out_ReturnStarted);
	P_GET_ENUM_REF(CALS_TraversalAction,Z_Param_Out_ReturnActionState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_Get_StartedTraversalAction_Implementation(Z_Param_Out_ReturnStarted,(CALS_TraversalAction&)(Z_Param_Out_ReturnActionState));
	P_NATIVE_END;
}
// End Interface UTraversalInteractionInterface Function BPI_Get_StartedTraversalAction

// Begin Interface UTraversalInteractionInterface Function BPI_Set_InteractionTransform
struct TraversalInteractionInterface_eventBPI_Set_InteractionTransform_Parms
{
	FTransform NewTransform;
};
void ITraversalInteractionInterface::BPI_Set_InteractionTransform(FTransform NewTransform)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_Set_InteractionTransform instead.");
}
static FName NAME_UTraversalInteractionInterface_BPI_Set_InteractionTransform = FName(TEXT("BPI_Set_InteractionTransform"));
void ITraversalInteractionInterface::Execute_BPI_Set_InteractionTransform(UObject* O, FTransform NewTransform)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTraversalInteractionInterface::StaticClass()));
	TraversalInteractionInterface_eventBPI_Set_InteractionTransform_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTraversalInteractionInterface_BPI_Set_InteractionTransform);
	if (Func)
	{
		Parms.NewTransform=NewTransform;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ITraversalInteractionInterface*)(O->GetNativeInterfaceAddress(UTraversalInteractionInterface::StaticClass())))
	{
		I->BPI_Set_InteractionTransform_Implementation(NewTransform);
	}
}
struct Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_InteractionTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Traversal Interface" },
		{ "ModuleRelativePath", "Public/TraversalInteractionInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_InteractionTransform_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TraversalInteractionInterface_eventBPI_Set_InteractionTransform_Parms, NewTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_InteractionTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_InteractionTransform_Statics::NewProp_NewTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_InteractionTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_InteractionTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTraversalInteractionInterface, nullptr, "BPI_Set_InteractionTransform", nullptr, nullptr, Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_InteractionTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_InteractionTransform_Statics::PropPointers), sizeof(TraversalInteractionInterface_eventBPI_Set_InteractionTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_InteractionTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_InteractionTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(TraversalInteractionInterface_eventBPI_Set_InteractionTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_InteractionTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_InteractionTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITraversalInteractionInterface::execBPI_Set_InteractionTransform)
{
	P_GET_STRUCT(FTransform,Z_Param_NewTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_Set_InteractionTransform_Implementation(Z_Param_NewTransform);
	P_NATIVE_END;
}
// End Interface UTraversalInteractionInterface Function BPI_Set_InteractionTransform

// Begin Interface UTraversalInteractionInterface Function BPI_Set_PredictableJump
struct TraversalInteractionInterface_eventBPI_Set_PredictableJump_Parms
{
	bool StartedJump;
	bool Updated;
};
void ITraversalInteractionInterface::BPI_Set_PredictableJump(bool StartedJump, bool& Updated)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_Set_PredictableJump instead.");
}
static FName NAME_UTraversalInteractionInterface_BPI_Set_PredictableJump = FName(TEXT("BPI_Set_PredictableJump"));
void ITraversalInteractionInterface::Execute_BPI_Set_PredictableJump(UObject* O, bool StartedJump, bool& Updated)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTraversalInteractionInterface::StaticClass()));
	TraversalInteractionInterface_eventBPI_Set_PredictableJump_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTraversalInteractionInterface_BPI_Set_PredictableJump);
	if (Func)
	{
		Parms.StartedJump=StartedJump;
		Parms.Updated=Updated;
		O->ProcessEvent(Func, &Parms);
		Updated=Parms.Updated;
	}
	else if (auto I = (ITraversalInteractionInterface*)(O->GetNativeInterfaceAddress(UTraversalInteractionInterface::StaticClass())))
	{
		I->BPI_Set_PredictableJump_Implementation(StartedJump,Updated);
	}
}
struct Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_PredictableJump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Traversal Interface" },
		{ "ModuleRelativePath", "Public/TraversalInteractionInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_StartedJump_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StartedJump;
	static void NewProp_Updated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Updated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_PredictableJump_Statics::NewProp_StartedJump_SetBit(void* Obj)
{
	((TraversalInteractionInterface_eventBPI_Set_PredictableJump_Parms*)Obj)->StartedJump = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_PredictableJump_Statics::NewProp_StartedJump = { "StartedJump", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TraversalInteractionInterface_eventBPI_Set_PredictableJump_Parms), &Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_PredictableJump_Statics::NewProp_StartedJump_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_PredictableJump_Statics::NewProp_Updated_SetBit(void* Obj)
{
	((TraversalInteractionInterface_eventBPI_Set_PredictableJump_Parms*)Obj)->Updated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_PredictableJump_Statics::NewProp_Updated = { "Updated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TraversalInteractionInterface_eventBPI_Set_PredictableJump_Parms), &Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_PredictableJump_Statics::NewProp_Updated_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_PredictableJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_PredictableJump_Statics::NewProp_StartedJump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_PredictableJump_Statics::NewProp_Updated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_PredictableJump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_PredictableJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTraversalInteractionInterface, nullptr, "BPI_Set_PredictableJump", nullptr, nullptr, Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_PredictableJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_PredictableJump_Statics::PropPointers), sizeof(TraversalInteractionInterface_eventBPI_Set_PredictableJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_PredictableJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_PredictableJump_Statics::Function_MetaDataParams) };
static_assert(sizeof(TraversalInteractionInterface_eventBPI_Set_PredictableJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_PredictableJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_PredictableJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITraversalInteractionInterface::execBPI_Set_PredictableJump)
{
	P_GET_UBOOL(Z_Param_StartedJump);
	P_GET_UBOOL_REF(Z_Param_Out_Updated);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_Set_PredictableJump_Implementation(Z_Param_StartedJump,Z_Param_Out_Updated);
	P_NATIVE_END;
}
// End Interface UTraversalInteractionInterface Function BPI_Set_PredictableJump

// Begin Interface UTraversalInteractionInterface Function BPI_Set_TraversalAction
struct TraversalInteractionInterface_eventBPI_Set_TraversalAction_Parms
{
	bool StartedAction;
	CALS_TraversalAction StateAction;
	bool Updated;
};
void ITraversalInteractionInterface::BPI_Set_TraversalAction(bool StartedAction, CALS_TraversalAction StateAction, bool& Updated)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_Set_TraversalAction instead.");
}
static FName NAME_UTraversalInteractionInterface_BPI_Set_TraversalAction = FName(TEXT("BPI_Set_TraversalAction"));
void ITraversalInteractionInterface::Execute_BPI_Set_TraversalAction(UObject* O, bool StartedAction, CALS_TraversalAction StateAction, bool& Updated)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTraversalInteractionInterface::StaticClass()));
	TraversalInteractionInterface_eventBPI_Set_TraversalAction_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTraversalInteractionInterface_BPI_Set_TraversalAction);
	if (Func)
	{
		Parms.StartedAction=StartedAction;
		Parms.StateAction=StateAction;
		Parms.Updated=Updated;
		O->ProcessEvent(Func, &Parms);
		Updated=Parms.Updated;
	}
	else if (auto I = (ITraversalInteractionInterface*)(O->GetNativeInterfaceAddress(UTraversalInteractionInterface::StaticClass())))
	{
		I->BPI_Set_TraversalAction_Implementation(StartedAction,StateAction,Updated);
	}
}
struct Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_TraversalAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Traversal Interface" },
		{ "ModuleRelativePath", "Public/TraversalInteractionInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_StartedAction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StartedAction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StateAction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StateAction;
	static void NewProp_Updated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Updated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_TraversalAction_Statics::NewProp_StartedAction_SetBit(void* Obj)
{
	((TraversalInteractionInterface_eventBPI_Set_TraversalAction_Parms*)Obj)->StartedAction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_TraversalAction_Statics::NewProp_StartedAction = { "StartedAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TraversalInteractionInterface_eventBPI_Set_TraversalAction_Parms), &Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_TraversalAction_Statics::NewProp_StartedAction_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_TraversalAction_Statics::NewProp_StateAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_TraversalAction_Statics::NewProp_StateAction = { "StateAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TraversalInteractionInterface_eventBPI_Set_TraversalAction_Parms, StateAction), Z_Construct_UEnum_HelpfulFunctions_CALS_TraversalAction, METADATA_PARAMS(0, nullptr) }; // 2501583752
void Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_TraversalAction_Statics::NewProp_Updated_SetBit(void* Obj)
{
	((TraversalInteractionInterface_eventBPI_Set_TraversalAction_Parms*)Obj)->Updated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_TraversalAction_Statics::NewProp_Updated = { "Updated", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TraversalInteractionInterface_eventBPI_Set_TraversalAction_Parms), &Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_TraversalAction_Statics::NewProp_Updated_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_TraversalAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_TraversalAction_Statics::NewProp_StartedAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_TraversalAction_Statics::NewProp_StateAction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_TraversalAction_Statics::NewProp_StateAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_TraversalAction_Statics::NewProp_Updated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_TraversalAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_TraversalAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTraversalInteractionInterface, nullptr, "BPI_Set_TraversalAction", nullptr, nullptr, Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_TraversalAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_TraversalAction_Statics::PropPointers), sizeof(TraversalInteractionInterface_eventBPI_Set_TraversalAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_TraversalAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_TraversalAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(TraversalInteractionInterface_eventBPI_Set_TraversalAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_TraversalAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_TraversalAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITraversalInteractionInterface::execBPI_Set_TraversalAction)
{
	P_GET_UBOOL(Z_Param_StartedAction);
	P_GET_ENUM(CALS_TraversalAction,Z_Param_StateAction);
	P_GET_UBOOL_REF(Z_Param_Out_Updated);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_Set_TraversalAction_Implementation(Z_Param_StartedAction,CALS_TraversalAction(Z_Param_StateAction),Z_Param_Out_Updated);
	P_NATIVE_END;
}
// End Interface UTraversalInteractionInterface Function BPI_Set_TraversalAction

// Begin Interface UTraversalInteractionInterface
void UTraversalInteractionInterface::StaticRegisterNativesUTraversalInteractionInterface()
{
	UClass* Class = UTraversalInteractionInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BPI_Get_ControlTransform", &ITraversalInteractionInterface::execBPI_Get_ControlTransform },
		{ "BPI_Get_InteractionTransform", &ITraversalInteractionInterface::execBPI_Get_InteractionTransform },
		{ "BPI_Get_RootTransform", &ITraversalInteractionInterface::execBPI_Get_RootTransform },
		{ "BPI_Get_StartedPredictableJump", &ITraversalInteractionInterface::execBPI_Get_StartedPredictableJump },
		{ "BPI_Get_StartedTraversalAction", &ITraversalInteractionInterface::execBPI_Get_StartedTraversalAction },
		{ "BPI_Set_InteractionTransform", &ITraversalInteractionInterface::execBPI_Set_InteractionTransform },
		{ "BPI_Set_PredictableJump", &ITraversalInteractionInterface::execBPI_Set_PredictableJump },
		{ "BPI_Set_TraversalAction", &ITraversalInteractionInterface::execBPI_Set_TraversalAction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTraversalInteractionInterface);
UClass* Z_Construct_UClass_UTraversalInteractionInterface_NoRegister()
{
	return UTraversalInteractionInterface::StaticClass();
}
struct Z_Construct_UClass_UTraversalInteractionInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TraversalInteractionInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_ControlTransform, "BPI_Get_ControlTransform" }, // 2059862735
		{ &Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_InteractionTransform, "BPI_Get_InteractionTransform" }, // 224534187
		{ &Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_RootTransform, "BPI_Get_RootTransform" }, // 2628075200
		{ &Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_StartedPredictableJump, "BPI_Get_StartedPredictableJump" }, // 3647359064
		{ &Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Get_StartedTraversalAction, "BPI_Get_StartedTraversalAction" }, // 3694607563
		{ &Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_InteractionTransform, "BPI_Set_InteractionTransform" }, // 149444583
		{ &Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_PredictableJump, "BPI_Set_PredictableJump" }, // 2640944727
		{ &Z_Construct_UFunction_UTraversalInteractionInterface_BPI_Set_TraversalAction, "BPI_Set_TraversalAction" }, // 4136098228
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITraversalInteractionInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTraversalInteractionInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTraversalInteractionInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTraversalInteractionInterface_Statics::ClassParams = {
	&UTraversalInteractionInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTraversalInteractionInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UTraversalInteractionInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTraversalInteractionInterface()
{
	if (!Z_Registration_Info_UClass_UTraversalInteractionInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTraversalInteractionInterface.OuterSingleton, Z_Construct_UClass_UTraversalInteractionInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTraversalInteractionInterface.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UClass* StaticClass<UTraversalInteractionInterface>()
{
	return UTraversalInteractionInterface::StaticClass();
}
UTraversalInteractionInterface::UTraversalInteractionInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTraversalInteractionInterface);
UTraversalInteractionInterface::~UTraversalInteractionInterface() {}
// End Interface UTraversalInteractionInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_TraversalInteractionInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTraversalInteractionInterface, UTraversalInteractionInterface::StaticClass, TEXT("UTraversalInteractionInterface"), &Z_Registration_Info_UClass_UTraversalInteractionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTraversalInteractionInterface), 1523567110U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_TraversalInteractionInterface_h_3492656797(TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_TraversalInteractionInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_TraversalInteractionInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
