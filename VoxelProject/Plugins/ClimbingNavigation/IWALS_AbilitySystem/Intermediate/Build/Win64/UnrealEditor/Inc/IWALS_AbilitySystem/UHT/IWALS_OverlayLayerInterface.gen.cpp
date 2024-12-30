// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWALS_AbilitySystem/Public/IWALS_OverlayLayerInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIWALS_OverlayLayerInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UIWALS_OverlayLayerInterface();
IWALS_ABILITYSYSTEM_API UClass* Z_Construct_UClass_UIWALS_OverlayLayerInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_IWALS_AbilitySystem();
// End Cross Module References

// Begin Interface UIWALS_OverlayLayerInterface Function BPI_Get_OnUnequipFinished
struct IWALS_OverlayLayerInterface_eventBPI_Get_OnUnequipFinished_Parms
{
	bool Finished;
};
void IIWALS_OverlayLayerInterface::BPI_Get_OnUnequipFinished(bool& Finished)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_Get_OnUnequipFinished instead.");
}
static FName NAME_UIWALS_OverlayLayerInterface_BPI_Get_OnUnequipFinished = FName(TEXT("BPI_Get_OnUnequipFinished"));
void IIWALS_OverlayLayerInterface::Execute_BPI_Get_OnUnequipFinished(UObject* O, bool& Finished)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIWALS_OverlayLayerInterface::StaticClass()));
	IWALS_OverlayLayerInterface_eventBPI_Get_OnUnequipFinished_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIWALS_OverlayLayerInterface_BPI_Get_OnUnequipFinished);
	if (Func)
	{
		Parms.Finished=Finished;
		O->ProcessEvent(Func, &Parms);
		Finished=Parms.Finished;
	}
	else if (auto I = (IIWALS_OverlayLayerInterface*)(O->GetNativeInterfaceAddress(UIWALS_OverlayLayerInterface::StaticClass())))
	{
		I->BPI_Get_OnUnequipFinished_Implementation(Finished);
	}
}
struct Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Get_OnUnequipFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Overlay Layer Interface" },
		{ "ModuleRelativePath", "Public/IWALS_OverlayLayerInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Finished_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Finished;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Get_OnUnequipFinished_Statics::NewProp_Finished_SetBit(void* Obj)
{
	((IWALS_OverlayLayerInterface_eventBPI_Get_OnUnequipFinished_Parms*)Obj)->Finished = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Get_OnUnequipFinished_Statics::NewProp_Finished = { "Finished", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IWALS_OverlayLayerInterface_eventBPI_Get_OnUnequipFinished_Parms), &Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Get_OnUnequipFinished_Statics::NewProp_Finished_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Get_OnUnequipFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Get_OnUnequipFinished_Statics::NewProp_Finished,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Get_OnUnequipFinished_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Get_OnUnequipFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIWALS_OverlayLayerInterface, nullptr, "BPI_Get_OnUnequipFinished", nullptr, nullptr, Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Get_OnUnequipFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Get_OnUnequipFinished_Statics::PropPointers), sizeof(IWALS_OverlayLayerInterface_eventBPI_Get_OnUnequipFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Get_OnUnequipFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Get_OnUnequipFinished_Statics::Function_MetaDataParams) };
static_assert(sizeof(IWALS_OverlayLayerInterface_eventBPI_Get_OnUnequipFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Get_OnUnequipFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Get_OnUnequipFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIWALS_OverlayLayerInterface::execBPI_Get_OnUnequipFinished)
{
	P_GET_UBOOL_REF(Z_Param_Out_Finished);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_Get_OnUnequipFinished_Implementation(Z_Param_Out_Finished);
	P_NATIVE_END;
}
// End Interface UIWALS_OverlayLayerInterface Function BPI_Get_OnUnequipFinished

// Begin Interface UIWALS_OverlayLayerInterface Function BPI_Get_OverlayHaveBlendOutState
struct IWALS_OverlayLayerInterface_eventBPI_Get_OverlayHaveBlendOutState_Parms
{
	bool HaveState;
};
void IIWALS_OverlayLayerInterface::BPI_Get_OverlayHaveBlendOutState(bool& HaveState)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_Get_OverlayHaveBlendOutState instead.");
}
static FName NAME_UIWALS_OverlayLayerInterface_BPI_Get_OverlayHaveBlendOutState = FName(TEXT("BPI_Get_OverlayHaveBlendOutState"));
void IIWALS_OverlayLayerInterface::Execute_BPI_Get_OverlayHaveBlendOutState(UObject* O, bool& HaveState)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIWALS_OverlayLayerInterface::StaticClass()));
	IWALS_OverlayLayerInterface_eventBPI_Get_OverlayHaveBlendOutState_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIWALS_OverlayLayerInterface_BPI_Get_OverlayHaveBlendOutState);
	if (Func)
	{
		Parms.HaveState=HaveState;
		O->ProcessEvent(Func, &Parms);
		HaveState=Parms.HaveState;
	}
	else if (auto I = (IIWALS_OverlayLayerInterface*)(O->GetNativeInterfaceAddress(UIWALS_OverlayLayerInterface::StaticClass())))
	{
		I->BPI_Get_OverlayHaveBlendOutState_Implementation(HaveState);
	}
}
struct Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Get_OverlayHaveBlendOutState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Overlay Layer Interface" },
		{ "ModuleRelativePath", "Public/IWALS_OverlayLayerInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_HaveState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HaveState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Get_OverlayHaveBlendOutState_Statics::NewProp_HaveState_SetBit(void* Obj)
{
	((IWALS_OverlayLayerInterface_eventBPI_Get_OverlayHaveBlendOutState_Parms*)Obj)->HaveState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Get_OverlayHaveBlendOutState_Statics::NewProp_HaveState = { "HaveState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IWALS_OverlayLayerInterface_eventBPI_Get_OverlayHaveBlendOutState_Parms), &Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Get_OverlayHaveBlendOutState_Statics::NewProp_HaveState_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Get_OverlayHaveBlendOutState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Get_OverlayHaveBlendOutState_Statics::NewProp_HaveState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Get_OverlayHaveBlendOutState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Get_OverlayHaveBlendOutState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIWALS_OverlayLayerInterface, nullptr, "BPI_Get_OverlayHaveBlendOutState", nullptr, nullptr, Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Get_OverlayHaveBlendOutState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Get_OverlayHaveBlendOutState_Statics::PropPointers), sizeof(IWALS_OverlayLayerInterface_eventBPI_Get_OverlayHaveBlendOutState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Get_OverlayHaveBlendOutState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Get_OverlayHaveBlendOutState_Statics::Function_MetaDataParams) };
static_assert(sizeof(IWALS_OverlayLayerInterface_eventBPI_Get_OverlayHaveBlendOutState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Get_OverlayHaveBlendOutState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Get_OverlayHaveBlendOutState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIWALS_OverlayLayerInterface::execBPI_Get_OverlayHaveBlendOutState)
{
	P_GET_UBOOL_REF(Z_Param_Out_HaveState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_Get_OverlayHaveBlendOutState_Implementation(Z_Param_Out_HaveState);
	P_NATIVE_END;
}
// End Interface UIWALS_OverlayLayerInterface Function BPI_Get_OverlayHaveBlendOutState

// Begin Interface UIWALS_OverlayLayerInterface Function BPI_Set_OnOverlayStateChangeInit
struct IWALS_OverlayLayerInterface_eventBPI_Set_OnOverlayStateChangeInit_Parms
{
	int32 ActionIndex;
};
void IIWALS_OverlayLayerInterface::BPI_Set_OnOverlayStateChangeInit(int32 ActionIndex)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_Set_OnOverlayStateChangeInit instead.");
}
static FName NAME_UIWALS_OverlayLayerInterface_BPI_Set_OnOverlayStateChangeInit = FName(TEXT("BPI_Set_OnOverlayStateChangeInit"));
void IIWALS_OverlayLayerInterface::Execute_BPI_Set_OnOverlayStateChangeInit(UObject* O, int32 ActionIndex)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIWALS_OverlayLayerInterface::StaticClass()));
	IWALS_OverlayLayerInterface_eventBPI_Set_OnOverlayStateChangeInit_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIWALS_OverlayLayerInterface_BPI_Set_OnOverlayStateChangeInit);
	if (Func)
	{
		Parms.ActionIndex=ActionIndex;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IIWALS_OverlayLayerInterface*)(O->GetNativeInterfaceAddress(UIWALS_OverlayLayerInterface::StaticClass())))
	{
		I->BPI_Set_OnOverlayStateChangeInit_Implementation(ActionIndex);
	}
}
struct Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_OnOverlayStateChangeInit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Overlay Layer Interface" },
		{ "ModuleRelativePath", "Public/IWALS_OverlayLayerInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActionIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_OnOverlayStateChangeInit_Statics::NewProp_ActionIndex = { "ActionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IWALS_OverlayLayerInterface_eventBPI_Set_OnOverlayStateChangeInit_Parms, ActionIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_OnOverlayStateChangeInit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_OnOverlayStateChangeInit_Statics::NewProp_ActionIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_OnOverlayStateChangeInit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_OnOverlayStateChangeInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIWALS_OverlayLayerInterface, nullptr, "BPI_Set_OnOverlayStateChangeInit", nullptr, nullptr, Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_OnOverlayStateChangeInit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_OnOverlayStateChangeInit_Statics::PropPointers), sizeof(IWALS_OverlayLayerInterface_eventBPI_Set_OnOverlayStateChangeInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_OnOverlayStateChangeInit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_OnOverlayStateChangeInit_Statics::Function_MetaDataParams) };
static_assert(sizeof(IWALS_OverlayLayerInterface_eventBPI_Set_OnOverlayStateChangeInit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_OnOverlayStateChangeInit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_OnOverlayStateChangeInit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIWALS_OverlayLayerInterface::execBPI_Set_OnOverlayStateChangeInit)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ActionIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_Set_OnOverlayStateChangeInit_Implementation(Z_Param_ActionIndex);
	P_NATIVE_END;
}
// End Interface UIWALS_OverlayLayerInterface Function BPI_Set_OnOverlayStateChangeInit

// Begin Interface UIWALS_OverlayLayerInterface Function BPI_Set_OverlayHaveBlendOutState
struct IWALS_OverlayLayerInterface_eventBPI_Set_OverlayHaveBlendOutState_Parms
{
	bool UseBlendState;
};
void IIWALS_OverlayLayerInterface::BPI_Set_OverlayHaveBlendOutState(bool UseBlendState)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_Set_OverlayHaveBlendOutState instead.");
}
static FName NAME_UIWALS_OverlayLayerInterface_BPI_Set_OverlayHaveBlendOutState = FName(TEXT("BPI_Set_OverlayHaveBlendOutState"));
void IIWALS_OverlayLayerInterface::Execute_BPI_Set_OverlayHaveBlendOutState(UObject* O, bool UseBlendState)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIWALS_OverlayLayerInterface::StaticClass()));
	IWALS_OverlayLayerInterface_eventBPI_Set_OverlayHaveBlendOutState_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIWALS_OverlayLayerInterface_BPI_Set_OverlayHaveBlendOutState);
	if (Func)
	{
		Parms.UseBlendState=UseBlendState;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IIWALS_OverlayLayerInterface*)(O->GetNativeInterfaceAddress(UIWALS_OverlayLayerInterface::StaticClass())))
	{
		I->BPI_Set_OverlayHaveBlendOutState_Implementation(UseBlendState);
	}
}
struct Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_OverlayHaveBlendOutState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Overlay Layer Interface" },
		{ "ModuleRelativePath", "Public/IWALS_OverlayLayerInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_UseBlendState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseBlendState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_OverlayHaveBlendOutState_Statics::NewProp_UseBlendState_SetBit(void* Obj)
{
	((IWALS_OverlayLayerInterface_eventBPI_Set_OverlayHaveBlendOutState_Parms*)Obj)->UseBlendState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_OverlayHaveBlendOutState_Statics::NewProp_UseBlendState = { "UseBlendState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IWALS_OverlayLayerInterface_eventBPI_Set_OverlayHaveBlendOutState_Parms), &Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_OverlayHaveBlendOutState_Statics::NewProp_UseBlendState_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_OverlayHaveBlendOutState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_OverlayHaveBlendOutState_Statics::NewProp_UseBlendState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_OverlayHaveBlendOutState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_OverlayHaveBlendOutState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIWALS_OverlayLayerInterface, nullptr, "BPI_Set_OverlayHaveBlendOutState", nullptr, nullptr, Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_OverlayHaveBlendOutState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_OverlayHaveBlendOutState_Statics::PropPointers), sizeof(IWALS_OverlayLayerInterface_eventBPI_Set_OverlayHaveBlendOutState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_OverlayHaveBlendOutState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_OverlayHaveBlendOutState_Statics::Function_MetaDataParams) };
static_assert(sizeof(IWALS_OverlayLayerInterface_eventBPI_Set_OverlayHaveBlendOutState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_OverlayHaveBlendOutState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_OverlayHaveBlendOutState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIWALS_OverlayLayerInterface::execBPI_Set_OverlayHaveBlendOutState)
{
	P_GET_UBOOL(Z_Param_UseBlendState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_Set_OverlayHaveBlendOutState_Implementation(Z_Param_UseBlendState);
	P_NATIVE_END;
}
// End Interface UIWALS_OverlayLayerInterface Function BPI_Set_OverlayHaveBlendOutState

// Begin Interface UIWALS_OverlayLayerInterface Function BPI_Set_RequiredOverlayStateIndex
struct IWALS_OverlayLayerInterface_eventBPI_Set_RequiredOverlayStateIndex_Parms
{
	int32 NewStateIndex;
};
void IIWALS_OverlayLayerInterface::BPI_Set_RequiredOverlayStateIndex(int32 NewStateIndex)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_Set_RequiredOverlayStateIndex instead.");
}
static FName NAME_UIWALS_OverlayLayerInterface_BPI_Set_RequiredOverlayStateIndex = FName(TEXT("BPI_Set_RequiredOverlayStateIndex"));
void IIWALS_OverlayLayerInterface::Execute_BPI_Set_RequiredOverlayStateIndex(UObject* O, int32 NewStateIndex)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIWALS_OverlayLayerInterface::StaticClass()));
	IWALS_OverlayLayerInterface_eventBPI_Set_RequiredOverlayStateIndex_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIWALS_OverlayLayerInterface_BPI_Set_RequiredOverlayStateIndex);
	if (Func)
	{
		Parms.NewStateIndex=NewStateIndex;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IIWALS_OverlayLayerInterface*)(O->GetNativeInterfaceAddress(UIWALS_OverlayLayerInterface::StaticClass())))
	{
		I->BPI_Set_RequiredOverlayStateIndex_Implementation(NewStateIndex);
	}
}
struct Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_RequiredOverlayStateIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Overlay Layer Interface" },
		{ "ModuleRelativePath", "Public/IWALS_OverlayLayerInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewStateIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_RequiredOverlayStateIndex_Statics::NewProp_NewStateIndex = { "NewStateIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IWALS_OverlayLayerInterface_eventBPI_Set_RequiredOverlayStateIndex_Parms, NewStateIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_RequiredOverlayStateIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_RequiredOverlayStateIndex_Statics::NewProp_NewStateIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_RequiredOverlayStateIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_RequiredOverlayStateIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIWALS_OverlayLayerInterface, nullptr, "BPI_Set_RequiredOverlayStateIndex", nullptr, nullptr, Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_RequiredOverlayStateIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_RequiredOverlayStateIndex_Statics::PropPointers), sizeof(IWALS_OverlayLayerInterface_eventBPI_Set_RequiredOverlayStateIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_RequiredOverlayStateIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_RequiredOverlayStateIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(IWALS_OverlayLayerInterface_eventBPI_Set_RequiredOverlayStateIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_RequiredOverlayStateIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_RequiredOverlayStateIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IIWALS_OverlayLayerInterface::execBPI_Set_RequiredOverlayStateIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewStateIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_Set_RequiredOverlayStateIndex_Implementation(Z_Param_NewStateIndex);
	P_NATIVE_END;
}
// End Interface UIWALS_OverlayLayerInterface Function BPI_Set_RequiredOverlayStateIndex

// Begin Interface UIWALS_OverlayLayerInterface
void UIWALS_OverlayLayerInterface::StaticRegisterNativesUIWALS_OverlayLayerInterface()
{
	UClass* Class = UIWALS_OverlayLayerInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BPI_Get_OnUnequipFinished", &IIWALS_OverlayLayerInterface::execBPI_Get_OnUnequipFinished },
		{ "BPI_Get_OverlayHaveBlendOutState", &IIWALS_OverlayLayerInterface::execBPI_Get_OverlayHaveBlendOutState },
		{ "BPI_Set_OnOverlayStateChangeInit", &IIWALS_OverlayLayerInterface::execBPI_Set_OnOverlayStateChangeInit },
		{ "BPI_Set_OverlayHaveBlendOutState", &IIWALS_OverlayLayerInterface::execBPI_Set_OverlayHaveBlendOutState },
		{ "BPI_Set_RequiredOverlayStateIndex", &IIWALS_OverlayLayerInterface::execBPI_Set_RequiredOverlayStateIndex },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIWALS_OverlayLayerInterface);
UClass* Z_Construct_UClass_UIWALS_OverlayLayerInterface_NoRegister()
{
	return UIWALS_OverlayLayerInterface::StaticClass();
}
struct Z_Construct_UClass_UIWALS_OverlayLayerInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IWALS_OverlayLayerInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Get_OnUnequipFinished, "BPI_Get_OnUnequipFinished" }, // 1819157094
		{ &Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Get_OverlayHaveBlendOutState, "BPI_Get_OverlayHaveBlendOutState" }, // 669873391
		{ &Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_OnOverlayStateChangeInit, "BPI_Set_OnOverlayStateChangeInit" }, // 2624191889
		{ &Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_OverlayHaveBlendOutState, "BPI_Set_OverlayHaveBlendOutState" }, // 3336389139
		{ &Z_Construct_UFunction_UIWALS_OverlayLayerInterface_BPI_Set_RequiredOverlayStateIndex, "BPI_Set_RequiredOverlayStateIndex" }, // 2515075105
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIWALS_OverlayLayerInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIWALS_OverlayLayerInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_IWALS_AbilitySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_OverlayLayerInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIWALS_OverlayLayerInterface_Statics::ClassParams = {
	&UIWALS_OverlayLayerInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIWALS_OverlayLayerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UIWALS_OverlayLayerInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIWALS_OverlayLayerInterface()
{
	if (!Z_Registration_Info_UClass_UIWALS_OverlayLayerInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIWALS_OverlayLayerInterface.OuterSingleton, Z_Construct_UClass_UIWALS_OverlayLayerInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIWALS_OverlayLayerInterface.OuterSingleton;
}
template<> IWALS_ABILITYSYSTEM_API UClass* StaticClass<UIWALS_OverlayLayerInterface>()
{
	return UIWALS_OverlayLayerInterface::StaticClass();
}
UIWALS_OverlayLayerInterface::UIWALS_OverlayLayerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIWALS_OverlayLayerInterface);
UIWALS_OverlayLayerInterface::~UIWALS_OverlayLayerInterface() {}
// End Interface UIWALS_OverlayLayerInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_OverlayLayerInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIWALS_OverlayLayerInterface, UIWALS_OverlayLayerInterface::StaticClass, TEXT("UIWALS_OverlayLayerInterface"), &Z_Registration_Info_UClass_UIWALS_OverlayLayerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIWALS_OverlayLayerInterface), 901905554U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_OverlayLayerInterface_h_1972379610(TEXT("/Script/IWALS_AbilitySystem"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_OverlayLayerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_OverlayLayerInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
