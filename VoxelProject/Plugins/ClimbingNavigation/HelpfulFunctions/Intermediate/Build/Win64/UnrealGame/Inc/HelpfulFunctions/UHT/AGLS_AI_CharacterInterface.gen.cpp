// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/AGLS_AI_CharacterInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGLS_AI_CharacterInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMovementMode();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAGLS_AI_CharacterInterface();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAGLS_AI_CharacterInterface_NoRegister();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_AGLS_LOD_State();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_Gait();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_GroundedMoveMode();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_MovementAction();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_RotationMode();
HELPFULFUNCTIONS_API UEnum* Z_Construct_UEnum_HelpfulFunctions_CALS_Stance();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References

// Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_CrouchOrUncrouch
struct AGLS_AI_CharacterInterface_eventBPI_AI_CrouchOrUncrouch_Parms
{
	CALS_Stance Stance;
};
void IAGLS_AI_CharacterInterface::BPI_AI_CrouchOrUncrouch(CALS_Stance Stance)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_CrouchOrUncrouch instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_CrouchOrUncrouch = FName(TEXT("BPI_AI_CrouchOrUncrouch"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_CrouchOrUncrouch(UObject* O, CALS_Stance Stance)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_CrouchOrUncrouch_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_CrouchOrUncrouch);
	if (Func)
	{
		Parms.Stance=Stance;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_CrouchOrUncrouch_Implementation(Stance);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CrouchOrUncrouch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Set" },
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Stance_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Stance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CrouchOrUncrouch_Statics::NewProp_Stance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CrouchOrUncrouch_Statics::NewProp_Stance = { "Stance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_CrouchOrUncrouch_Parms, Stance), Z_Construct_UEnum_HelpfulFunctions_CALS_Stance, METADATA_PARAMS(0, nullptr) }; // 87690985
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CrouchOrUncrouch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CrouchOrUncrouch_Statics::NewProp_Stance_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CrouchOrUncrouch_Statics::NewProp_Stance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CrouchOrUncrouch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CrouchOrUncrouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_CrouchOrUncrouch", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CrouchOrUncrouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CrouchOrUncrouch_Statics::PropPointers), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_CrouchOrUncrouch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CrouchOrUncrouch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CrouchOrUncrouch_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_CrouchOrUncrouch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CrouchOrUncrouch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CrouchOrUncrouch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_CrouchOrUncrouch)
{
	P_GET_ENUM(CALS_Stance,Z_Param_Stance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_CrouchOrUncrouch_Implementation(CALS_Stance(Z_Param_Stance));
	P_NATIVE_END;
}
// End Interface UAGLS_AI_CharacterInterface Function BPI_AI_CrouchOrUncrouch

// Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Get_CurrentActivatedTask
struct AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentActivatedTask_Parms
{
	UObject* Task;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Get_CurrentActivatedTask(UObject* Task)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Get_CurrentActivatedTask instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentActivatedTask = FName(TEXT("BPI_AI_Get_CurrentActivatedTask"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Get_CurrentActivatedTask(UObject* O, UObject* Task)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentActivatedTask_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentActivatedTask);
	if (Func)
	{
		Parms.Task=Task;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Get_CurrentActivatedTask_Implementation(Task);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentActivatedTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Get" },
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentActivatedTask_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentActivatedTask_Parms, Task), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentActivatedTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentActivatedTask_Statics::NewProp_Task,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentActivatedTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentActivatedTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Get_CurrentActivatedTask", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentActivatedTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentActivatedTask_Statics::PropPointers), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentActivatedTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentActivatedTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentActivatedTask_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentActivatedTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentActivatedTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentActivatedTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Get_CurrentActivatedTask)
{
	P_GET_OBJECT(UObject,Z_Param_Task);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Get_CurrentActivatedTask_Implementation(Z_Param_Task);
	P_NATIVE_END;
}
// End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Get_CurrentActivatedTask

// Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Get_CurrentStates
struct AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentStates_Parms
{
	TEnumAsByte<EMovementMode> PawnMovementMode;
	CALS_MovementState MovementState;
	CALS_MovementState PrevMovementState;
	CALS_MovementAction MovementAction;
	CALS_RotationMode RotationMode;
	CALS_Gait ActualGait;
	CALS_Stance ActualStance;
	CALS_OverlayState OverlayState;
	CALS_GroundedMoveMode GroundedMoveMode;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Get_CurrentStates(TEnumAsByte<EMovementMode>& PawnMovementMode, CALS_MovementState& MovementState, CALS_MovementState& PrevMovementState, CALS_MovementAction& MovementAction, CALS_RotationMode& RotationMode, CALS_Gait& ActualGait, CALS_Stance& ActualStance, CALS_OverlayState& OverlayState, CALS_GroundedMoveMode& GroundedMoveMode)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Get_CurrentStates instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates = FName(TEXT("BPI_AI_Get_CurrentStates"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Get_CurrentStates(UObject* O, TEnumAsByte<EMovementMode>& PawnMovementMode, CALS_MovementState& MovementState, CALS_MovementState& PrevMovementState, CALS_MovementAction& MovementAction, CALS_RotationMode& RotationMode, CALS_Gait& ActualGait, CALS_Stance& ActualStance, CALS_OverlayState& OverlayState, CALS_GroundedMoveMode& GroundedMoveMode)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentStates_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates);
	if (Func)
	{
		Parms.PawnMovementMode=PawnMovementMode;
		Parms.MovementState=MovementState;
		Parms.PrevMovementState=PrevMovementState;
		Parms.MovementAction=MovementAction;
		Parms.RotationMode=RotationMode;
		Parms.ActualGait=ActualGait;
		Parms.ActualStance=ActualStance;
		Parms.OverlayState=OverlayState;
		Parms.GroundedMoveMode=GroundedMoveMode;
		O->ProcessEvent(Func, &Parms);
		PawnMovementMode=Parms.PawnMovementMode;
		MovementState=Parms.MovementState;
		PrevMovementState=Parms.PrevMovementState;
		MovementAction=Parms.MovementAction;
		RotationMode=Parms.RotationMode;
		ActualGait=Parms.ActualGait;
		ActualStance=Parms.ActualStance;
		OverlayState=Parms.OverlayState;
		GroundedMoveMode=Parms.GroundedMoveMode;
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Get_CurrentStates_Implementation(PawnMovementMode,MovementState,PrevMovementState,MovementAction,RotationMode,ActualGait,ActualStance,OverlayState,GroundedMoveMode);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "BPI AI Character|Get" },
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PawnMovementMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MovementState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PrevMovementState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PrevMovementState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MovementAction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementAction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActualGait_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActualGait;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActualStance_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActualStance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OverlayState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OverlayState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GroundedMoveMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GroundedMoveMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_PawnMovementMode = { "PawnMovementMode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentStates_Parms, PawnMovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(0, nullptr) }; // 1967555749
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_MovementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_MovementState = { "MovementState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentStates_Parms, MovementState), Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState, METADATA_PARAMS(0, nullptr) }; // 3255268152
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_PrevMovementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_PrevMovementState = { "PrevMovementState", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentStates_Parms, PrevMovementState), Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState, METADATA_PARAMS(0, nullptr) }; // 3255268152
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_MovementAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_MovementAction = { "MovementAction", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentStates_Parms, MovementAction), Z_Construct_UEnum_HelpfulFunctions_CALS_MovementAction, METADATA_PARAMS(0, nullptr) }; // 3049088149
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_RotationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_RotationMode = { "RotationMode", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentStates_Parms, RotationMode), Z_Construct_UEnum_HelpfulFunctions_CALS_RotationMode, METADATA_PARAMS(0, nullptr) }; // 1340769226
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_ActualGait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_ActualGait = { "ActualGait", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentStates_Parms, ActualGait), Z_Construct_UEnum_HelpfulFunctions_CALS_Gait, METADATA_PARAMS(0, nullptr) }; // 1732279459
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_ActualStance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_ActualStance = { "ActualStance", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentStates_Parms, ActualStance), Z_Construct_UEnum_HelpfulFunctions_CALS_Stance, METADATA_PARAMS(0, nullptr) }; // 87690985
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_OverlayState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_OverlayState = { "OverlayState", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentStates_Parms, OverlayState), Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState, METADATA_PARAMS(0, nullptr) }; // 3098219672
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_GroundedMoveMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_GroundedMoveMode = { "GroundedMoveMode", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentStates_Parms, GroundedMoveMode), Z_Construct_UEnum_HelpfulFunctions_CALS_GroundedMoveMode, METADATA_PARAMS(0, nullptr) }; // 1562728553
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_PawnMovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_MovementState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_MovementState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_PrevMovementState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_PrevMovementState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_MovementAction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_MovementAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_RotationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_RotationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_ActualGait_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_ActualGait,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_ActualStance_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_ActualStance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_OverlayState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_OverlayState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_GroundedMoveMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::NewProp_GroundedMoveMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Get_CurrentStates", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::PropPointers), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentStates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Get_CurrentStates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Get_CurrentStates)
{
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_PawnMovementMode);
	P_GET_ENUM_REF(CALS_MovementState,Z_Param_Out_MovementState);
	P_GET_ENUM_REF(CALS_MovementState,Z_Param_Out_PrevMovementState);
	P_GET_ENUM_REF(CALS_MovementAction,Z_Param_Out_MovementAction);
	P_GET_ENUM_REF(CALS_RotationMode,Z_Param_Out_RotationMode);
	P_GET_ENUM_REF(CALS_Gait,Z_Param_Out_ActualGait);
	P_GET_ENUM_REF(CALS_Stance,Z_Param_Out_ActualStance);
	P_GET_ENUM_REF(CALS_OverlayState,Z_Param_Out_OverlayState);
	P_GET_ENUM_REF(CALS_GroundedMoveMode,Z_Param_Out_GroundedMoveMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Get_CurrentStates_Implementation((TEnumAsByte<EMovementMode>&)(Z_Param_Out_PawnMovementMode),(CALS_MovementState&)(Z_Param_Out_MovementState),(CALS_MovementState&)(Z_Param_Out_PrevMovementState),(CALS_MovementAction&)(Z_Param_Out_MovementAction),(CALS_RotationMode&)(Z_Param_Out_RotationMode),(CALS_Gait&)(Z_Param_Out_ActualGait),(CALS_Stance&)(Z_Param_Out_ActualStance),(CALS_OverlayState&)(Z_Param_Out_OverlayState),(CALS_GroundedMoveMode&)(Z_Param_Out_GroundedMoveMode));
	P_NATIVE_END;
}
// End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Get_CurrentStates

// Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Get_EssentialValues
struct AGLS_AI_CharacterInterface_eventBPI_AI_Get_EssentialValues_Parms
{
	FVector Velocity;
	FVector Acceleration;
	FVector MovementInput;
	bool IsMoving;
	bool HasMovementInput;
	float Speed;
	FRotator AimingRotation;
	float AimYawRate;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Get_EssentialValues(FVector& Velocity, FVector& Acceleration, FVector& MovementInput, bool& IsMoving, bool& HasMovementInput, float& Speed, FRotator& AimingRotation, float& AimYawRate)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Get_EssentialValues instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues = FName(TEXT("BPI_AI_Get_EssentialValues"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Get_EssentialValues(UObject* O, FVector& Velocity, FVector& Acceleration, FVector& MovementInput, bool& IsMoving, bool& HasMovementInput, float& Speed, FRotator& AimingRotation, float& AimYawRate)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Get_EssentialValues_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues);
	if (Func)
	{
		Parms.Velocity=Velocity;
		Parms.Acceleration=Acceleration;
		Parms.MovementInput=MovementInput;
		Parms.IsMoving=IsMoving;
		Parms.HasMovementInput=HasMovementInput;
		Parms.Speed=Speed;
		Parms.AimingRotation=AimingRotation;
		Parms.AimYawRate=AimYawRate;
		O->ProcessEvent(Func, &Parms);
		Velocity=Parms.Velocity;
		Acceleration=Parms.Acceleration;
		MovementInput=Parms.MovementInput;
		IsMoving=Parms.IsMoving;
		HasMovementInput=Parms.HasMovementInput;
		Speed=Parms.Speed;
		AimingRotation=Parms.AimingRotation;
		AimYawRate=Parms.AimYawRate;
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Get_EssentialValues_Implementation(Velocity,Acceleration,MovementInput,IsMoving,HasMovementInput,Speed,AimingRotation,AimYawRate);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "BPI AI Character|Get" },
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Acceleration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovementInput;
	static void NewProp_IsMoving_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMoving;
	static void NewProp_HasMovementInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasMovementInput;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AimingRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AimYawRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_EssentialValues_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_EssentialValues_Parms, Acceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_MovementInput = { "MovementInput", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_EssentialValues_Parms, MovementInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_IsMoving_SetBit(void* Obj)
{
	((AGLS_AI_CharacterInterface_eventBPI_AI_Get_EssentialValues_Parms*)Obj)->IsMoving = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_IsMoving = { "IsMoving", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Get_EssentialValues_Parms), &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_IsMoving_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_HasMovementInput_SetBit(void* Obj)
{
	((AGLS_AI_CharacterInterface_eventBPI_AI_Get_EssentialValues_Parms*)Obj)->HasMovementInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_HasMovementInput = { "HasMovementInput", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Get_EssentialValues_Parms), &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_HasMovementInput_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_EssentialValues_Parms, Speed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_AimingRotation = { "AimingRotation", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_EssentialValues_Parms, AimingRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_AimYawRate = { "AimYawRate", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_EssentialValues_Parms, AimYawRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_Acceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_MovementInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_IsMoving,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_HasMovementInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_AimingRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::NewProp_AimYawRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Get_EssentialValues", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::PropPointers), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Get_EssentialValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Get_EssentialValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Get_EssentialValues)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Velocity);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Acceleration);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_MovementInput);
	P_GET_UBOOL_REF(Z_Param_Out_IsMoving);
	P_GET_UBOOL_REF(Z_Param_Out_HasMovementInput);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Speed);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_AimingRotation);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AimYawRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Get_EssentialValues_Implementation(Z_Param_Out_Velocity,Z_Param_Out_Acceleration,Z_Param_Out_MovementInput,Z_Param_Out_IsMoving,Z_Param_Out_HasMovementInput,Z_Param_Out_Speed,Z_Param_Out_AimingRotation,Z_Param_Out_AimYawRate);
	P_NATIVE_END;
}
// End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Get_EssentialValues

// Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Get_LocomotionModeIndex
struct AGLS_AI_CharacterInterface_eventBPI_AI_Get_LocomotionModeIndex_Parms
{
	int32 LocomotionIndex;
	uint8 LocomotionByte;
	FName LocomotionName;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Get_LocomotionModeIndex(int32& LocomotionIndex, uint8& LocomotionByte, FName& LocomotionName)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Get_LocomotionModeIndex instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex = FName(TEXT("BPI_AI_Get_LocomotionModeIndex"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Get_LocomotionModeIndex(UObject* O, int32& LocomotionIndex, uint8& LocomotionByte, FName& LocomotionName)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Get_LocomotionModeIndex_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex);
	if (Func)
	{
		Parms.LocomotionIndex=LocomotionIndex;
		Parms.LocomotionByte=LocomotionByte;
		Parms.LocomotionName=LocomotionName;
		O->ProcessEvent(Func, &Parms);
		LocomotionIndex=Parms.LocomotionIndex;
		LocomotionByte=Parms.LocomotionByte;
		LocomotionName=Parms.LocomotionName;
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Get_LocomotionModeIndex_Implementation(LocomotionIndex,LocomotionByte,LocomotionName);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "BPI AI Character|Get" },
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocomotionIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LocomotionByte;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LocomotionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex_Statics::NewProp_LocomotionIndex = { "LocomotionIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_LocomotionModeIndex_Parms, LocomotionIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex_Statics::NewProp_LocomotionByte = { "LocomotionByte", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_LocomotionModeIndex_Parms, LocomotionByte), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex_Statics::NewProp_LocomotionName = { "LocomotionName", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_LocomotionModeIndex_Parms, LocomotionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex_Statics::NewProp_LocomotionIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex_Statics::NewProp_LocomotionByte,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex_Statics::NewProp_LocomotionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Get_LocomotionModeIndex", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex_Statics::PropPointers), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Get_LocomotionModeIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Get_LocomotionModeIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Get_LocomotionModeIndex)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_LocomotionIndex);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_LocomotionByte);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_LocomotionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Get_LocomotionModeIndex_Implementation(Z_Param_Out_LocomotionIndex,Z_Param_Out_LocomotionByte,Z_Param_Out_LocomotionName);
	P_NATIVE_END;
}
// End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Get_LocomotionModeIndex

// Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Get_LOD_State
struct AGLS_AI_CharacterInterface_eventBPI_AI_Get_LOD_State_Parms
{
	AGLS_LOD_State CurrentState;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Get_LOD_State(AGLS_LOD_State& CurrentState)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Get_LOD_State instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Get_LOD_State = FName(TEXT("BPI_AI_Get_LOD_State"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Get_LOD_State(UObject* O, AGLS_LOD_State& CurrentState)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Get_LOD_State_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Get_LOD_State);
	if (Func)
	{
		Parms.CurrentState=CurrentState;
		O->ProcessEvent(Func, &Parms);
		CurrentState=Parms.CurrentState;
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Get_LOD_State_Implementation(CurrentState);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LOD_State_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Get" },
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LOD_State_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LOD_State_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Get_LOD_State_Parms, CurrentState), Z_Construct_UEnum_HelpfulFunctions_AGLS_LOD_State, METADATA_PARAMS(0, nullptr) }; // 4107279616
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LOD_State_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LOD_State_Statics::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LOD_State_Statics::NewProp_CurrentState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LOD_State_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LOD_State_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Get_LOD_State", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LOD_State_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LOD_State_Statics::PropPointers), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Get_LOD_State_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LOD_State_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LOD_State_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Get_LOD_State_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LOD_State()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LOD_State_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Get_LOD_State)
{
	P_GET_ENUM_REF(AGLS_LOD_State,Z_Param_Out_CurrentState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Get_LOD_State_Implementation((AGLS_LOD_State&)(Z_Param_Out_CurrentState));
	P_NATIVE_END;
}
// End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Get_LOD_State

// Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Get_RotationLocked
struct AGLS_AI_CharacterInterface_eventBPI_AI_Get_RotationLocked_Parms
{
	bool RotationIsLocked;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Get_RotationLocked(bool& RotationIsLocked)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Get_RotationLocked instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Get_RotationLocked = FName(TEXT("BPI_AI_Get_RotationLocked"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Get_RotationLocked(UObject* O, bool& RotationIsLocked)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Get_RotationLocked_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Get_RotationLocked);
	if (Func)
	{
		Parms.RotationIsLocked=RotationIsLocked;
		O->ProcessEvent(Func, &Parms);
		RotationIsLocked=Parms.RotationIsLocked;
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Get_RotationLocked_Implementation(RotationIsLocked);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_RotationLocked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Get" },
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_RotationIsLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RotationIsLocked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_RotationLocked_Statics::NewProp_RotationIsLocked_SetBit(void* Obj)
{
	((AGLS_AI_CharacterInterface_eventBPI_AI_Get_RotationLocked_Parms*)Obj)->RotationIsLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_RotationLocked_Statics::NewProp_RotationIsLocked = { "RotationIsLocked", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Get_RotationLocked_Parms), &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_RotationLocked_Statics::NewProp_RotationIsLocked_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_RotationLocked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_RotationLocked_Statics::NewProp_RotationIsLocked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_RotationLocked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_RotationLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Get_RotationLocked", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_RotationLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_RotationLocked_Statics::PropPointers), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Get_RotationLocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_RotationLocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_RotationLocked_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Get_RotationLocked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_RotationLocked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_RotationLocked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Get_RotationLocked)
{
	P_GET_UBOOL_REF(Z_Param_Out_RotationIsLocked);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Get_RotationLocked_Implementation(Z_Param_Out_RotationIsLocked);
	P_NATIVE_END;
}
// End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Get_RotationLocked

// Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_GetPathFollowActor
struct AGLS_AI_CharacterInterface_eventBPI_AI_GetPathFollowActor_Parms
{
	AActor* PathActor;
};
void IAGLS_AI_CharacterInterface::BPI_AI_GetPathFollowActor(AActor*& PathActor) const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_GetPathFollowActor instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_GetPathFollowActor = FName(TEXT("BPI_AI_GetPathFollowActor"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_GetPathFollowActor(const UObject* O, AActor*& PathActor)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_GetPathFollowActor_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_GetPathFollowActor);
	if (Func)
	{
		Parms.PathActor=PathActor;
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		PathActor=Parms.PathActor;
	}
	else if (auto I = (const IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_GetPathFollowActor_Implementation(PathActor);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_GetPathFollowActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Get" },
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_GetPathFollowActor_Statics::NewProp_PathActor = { "PathActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_GetPathFollowActor_Parms, PathActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_GetPathFollowActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_GetPathFollowActor_Statics::NewProp_PathActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_GetPathFollowActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_GetPathFollowActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_GetPathFollowActor", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_GetPathFollowActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_GetPathFollowActor_Statics::PropPointers), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_GetPathFollowActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_GetPathFollowActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_GetPathFollowActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_GetPathFollowActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_GetPathFollowActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_GetPathFollowActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_GetPathFollowActor)
{
	P_GET_OBJECT_REF(AActor,Z_Param_Out_PathActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_GetPathFollowActor_Implementation(P_ARG_GC_BARRIER(Z_Param_Out_PathActor));
	P_NATIVE_END;
}
// End Interface UAGLS_AI_CharacterInterface Function BPI_AI_GetPathFollowActor

// Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_DesiredGait
struct AGLS_AI_CharacterInterface_eventBPI_AI_Set_DesiredGait_Parms
{
	CALS_Gait NewDesiredGait;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Set_DesiredGait(CALS_Gait NewDesiredGait)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Set_DesiredGait instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_DesiredGait = FName(TEXT("BPI_AI_Set_DesiredGait"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Set_DesiredGait(UObject* O, CALS_Gait NewDesiredGait)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Set_DesiredGait_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_DesiredGait);
	if (Func)
	{
		Parms.NewDesiredGait=NewDesiredGait;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Set_DesiredGait_Implementation(NewDesiredGait);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_DesiredGait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Set" },
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewDesiredGait_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewDesiredGait;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_DesiredGait_Statics::NewProp_NewDesiredGait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_DesiredGait_Statics::NewProp_NewDesiredGait = { "NewDesiredGait", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Set_DesiredGait_Parms, NewDesiredGait), Z_Construct_UEnum_HelpfulFunctions_CALS_Gait, METADATA_PARAMS(0, nullptr) }; // 1732279459
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_DesiredGait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_DesiredGait_Statics::NewProp_NewDesiredGait_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_DesiredGait_Statics::NewProp_NewDesiredGait,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_DesiredGait_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_DesiredGait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Set_DesiredGait", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_DesiredGait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_DesiredGait_Statics::PropPointers), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_DesiredGait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_DesiredGait_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_DesiredGait_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_DesiredGait_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_DesiredGait()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_DesiredGait_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Set_DesiredGait)
{
	P_GET_ENUM(CALS_Gait,Z_Param_NewDesiredGait);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Set_DesiredGait_Implementation(CALS_Gait(Z_Param_NewDesiredGait));
	P_NATIVE_END;
}
// End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_DesiredGait

// Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_EnableRagdoll
struct AGLS_AI_CharacterInterface_eventBPI_AI_Set_EnableRagdoll_Parms
{
	bool Enable;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Set_EnableRagdoll(bool Enable)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Set_EnableRagdoll instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_EnableRagdoll = FName(TEXT("BPI_AI_Set_EnableRagdoll"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Set_EnableRagdoll(UObject* O, bool Enable)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Set_EnableRagdoll_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_EnableRagdoll);
	if (Func)
	{
		Parms.Enable=Enable;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Set_EnableRagdoll_Implementation(Enable);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_EnableRagdoll_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Set" },
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Enable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_EnableRagdoll_Statics::NewProp_Enable_SetBit(void* Obj)
{
	((AGLS_AI_CharacterInterface_eventBPI_AI_Set_EnableRagdoll_Parms*)Obj)->Enable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_EnableRagdoll_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_EnableRagdoll_Parms), &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_EnableRagdoll_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_EnableRagdoll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_EnableRagdoll_Statics::NewProp_Enable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_EnableRagdoll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_EnableRagdoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Set_EnableRagdoll", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_EnableRagdoll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_EnableRagdoll_Statics::PropPointers), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_EnableRagdoll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_EnableRagdoll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_EnableRagdoll_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_EnableRagdoll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_EnableRagdoll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_EnableRagdoll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Set_EnableRagdoll)
{
	P_GET_UBOOL(Z_Param_Enable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Set_EnableRagdoll_Implementation(Z_Param_Enable);
	P_NATIVE_END;
}
// End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_EnableRagdoll

// Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_Gait
struct AGLS_AI_CharacterInterface_eventBPI_AI_Set_Gait_Parms
{
	CALS_Gait NewGait;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Set_Gait(CALS_Gait NewGait)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Set_Gait instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_Gait = FName(TEXT("BPI_AI_Set_Gait"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Set_Gait(UObject* O, CALS_Gait NewGait)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Set_Gait_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_Gait);
	if (Func)
	{
		Parms.NewGait=NewGait;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Set_Gait_Implementation(NewGait);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_Gait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Set" },
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewGait_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewGait;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_Gait_Statics::NewProp_NewGait_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_Gait_Statics::NewProp_NewGait = { "NewGait", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Set_Gait_Parms, NewGait), Z_Construct_UEnum_HelpfulFunctions_CALS_Gait, METADATA_PARAMS(0, nullptr) }; // 1732279459
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_Gait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_Gait_Statics::NewProp_NewGait_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_Gait_Statics::NewProp_NewGait,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_Gait_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_Gait_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Set_Gait", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_Gait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_Gait_Statics::PropPointers), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_Gait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_Gait_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_Gait_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_Gait_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_Gait()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_Gait_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Set_Gait)
{
	P_GET_ENUM(CALS_Gait,Z_Param_NewGait);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Set_Gait_Implementation(CALS_Gait(Z_Param_NewGait));
	P_NATIVE_END;
}
// End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_Gait

// Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_GrounedMoveMode
struct AGLS_AI_CharacterInterface_eventBPI_AI_Set_GrounedMoveMode_Parms
{
	CALS_GroundedMoveMode NewMode;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Set_GrounedMoveMode(CALS_GroundedMoveMode NewMode)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Set_GrounedMoveMode instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_GrounedMoveMode = FName(TEXT("BPI_AI_Set_GrounedMoveMode"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Set_GrounedMoveMode(UObject* O, CALS_GroundedMoveMode NewMode)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Set_GrounedMoveMode_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_GrounedMoveMode);
	if (Func)
	{
		Parms.NewMode=NewMode;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Set_GrounedMoveMode_Implementation(NewMode);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_GrounedMoveMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Set" },
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_GrounedMoveMode_Statics::NewProp_NewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_GrounedMoveMode_Statics::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Set_GrounedMoveMode_Parms, NewMode), Z_Construct_UEnum_HelpfulFunctions_CALS_GroundedMoveMode, METADATA_PARAMS(0, nullptr) }; // 1562728553
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_GrounedMoveMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_GrounedMoveMode_Statics::NewProp_NewMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_GrounedMoveMode_Statics::NewProp_NewMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_GrounedMoveMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_GrounedMoveMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Set_GrounedMoveMode", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_GrounedMoveMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_GrounedMoveMode_Statics::PropPointers), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_GrounedMoveMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_GrounedMoveMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_GrounedMoveMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_GrounedMoveMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_GrounedMoveMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_GrounedMoveMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Set_GrounedMoveMode)
{
	P_GET_ENUM(CALS_GroundedMoveMode,Z_Param_NewMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Set_GrounedMoveMode_Implementation(CALS_GroundedMoveMode(Z_Param_NewMode));
	P_NATIVE_END;
}
// End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_GrounedMoveMode

// Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_LockRotationUpdate
struct AGLS_AI_CharacterInterface_eventBPI_AI_Set_LockRotationUpdate_Parms
{
	bool LockUpdate;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Set_LockRotationUpdate(bool LockUpdate)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Set_LockRotationUpdate instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_LockRotationUpdate = FName(TEXT("BPI_AI_Set_LockRotationUpdate"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Set_LockRotationUpdate(UObject* O, bool LockUpdate)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Set_LockRotationUpdate_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_LockRotationUpdate);
	if (Func)
	{
		Parms.LockUpdate=LockUpdate;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Set_LockRotationUpdate_Implementation(LockUpdate);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_LockRotationUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Set" },
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_LockUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LockUpdate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_LockRotationUpdate_Statics::NewProp_LockUpdate_SetBit(void* Obj)
{
	((AGLS_AI_CharacterInterface_eventBPI_AI_Set_LockRotationUpdate_Parms*)Obj)->LockUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_LockRotationUpdate_Statics::NewProp_LockUpdate = { "LockUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_LockRotationUpdate_Parms), &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_LockRotationUpdate_Statics::NewProp_LockUpdate_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_LockRotationUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_LockRotationUpdate_Statics::NewProp_LockUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_LockRotationUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_LockRotationUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Set_LockRotationUpdate", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_LockRotationUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_LockRotationUpdate_Statics::PropPointers), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_LockRotationUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_LockRotationUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_LockRotationUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_LockRotationUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_LockRotationUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_LockRotationUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Set_LockRotationUpdate)
{
	P_GET_UBOOL(Z_Param_LockUpdate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Set_LockRotationUpdate_Implementation(Z_Param_LockUpdate);
	P_NATIVE_END;
}
// End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_LockRotationUpdate

// Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_MovementAction
struct AGLS_AI_CharacterInterface_eventBPI_AI_Set_MovementAction_Parms
{
	CALS_MovementAction NewAction;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Set_MovementAction(CALS_MovementAction NewAction)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Set_MovementAction instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementAction = FName(TEXT("BPI_AI_Set_MovementAction"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Set_MovementAction(UObject* O, CALS_MovementAction NewAction)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Set_MovementAction_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementAction);
	if (Func)
	{
		Parms.NewAction=NewAction;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Set_MovementAction_Implementation(NewAction);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Set" },
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewAction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementAction_Statics::NewProp_NewAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementAction_Statics::NewProp_NewAction = { "NewAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Set_MovementAction_Parms, NewAction), Z_Construct_UEnum_HelpfulFunctions_CALS_MovementAction, METADATA_PARAMS(0, nullptr) }; // 3049088149
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementAction_Statics::NewProp_NewAction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementAction_Statics::NewProp_NewAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Set_MovementAction", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementAction_Statics::PropPointers), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_MovementAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_MovementAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Set_MovementAction)
{
	P_GET_ENUM(CALS_MovementAction,Z_Param_NewAction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Set_MovementAction_Implementation(CALS_MovementAction(Z_Param_NewAction));
	P_NATIVE_END;
}
// End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_MovementAction

// Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_MovementSettingsByName
struct AGLS_AI_CharacterInterface_eventBPI_AI_Set_MovementSettingsByName_Parms
{
	FName KeyName;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Set_MovementSettingsByName(FName KeyName)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Set_MovementSettingsByName instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementSettingsByName = FName(TEXT("BPI_AI_Set_MovementSettingsByName"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Set_MovementSettingsByName(UObject* O, FName KeyName)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Set_MovementSettingsByName_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementSettingsByName);
	if (Func)
	{
		Parms.KeyName=KeyName;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Set_MovementSettingsByName_Implementation(KeyName);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementSettingsByName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Set" },
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementSettingsByName_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Set_MovementSettingsByName_Parms, KeyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementSettingsByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementSettingsByName_Statics::NewProp_KeyName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementSettingsByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementSettingsByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Set_MovementSettingsByName", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementSettingsByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementSettingsByName_Statics::PropPointers), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_MovementSettingsByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementSettingsByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementSettingsByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_MovementSettingsByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementSettingsByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementSettingsByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Set_MovementSettingsByName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_KeyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Set_MovementSettingsByName_Implementation(Z_Param_KeyName);
	P_NATIVE_END;
}
// End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_MovementSettingsByName

// Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_MovementState
struct AGLS_AI_CharacterInterface_eventBPI_AI_Set_MovementState_Parms
{
	CALS_MovementState NewState;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Set_MovementState(CALS_MovementState NewState)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Set_MovementState instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementState = FName(TEXT("BPI_AI_Set_MovementState"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Set_MovementState(UObject* O, CALS_MovementState NewState)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Set_MovementState_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementState);
	if (Func)
	{
		Parms.NewState=NewState;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Set_MovementState_Implementation(NewState);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Set" },
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Set_MovementState_Parms, NewState), Z_Construct_UEnum_HelpfulFunctions_CALS_MovementState, METADATA_PARAMS(0, nullptr) }; // 3255268152
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementState_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementState_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Set_MovementState", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementState_Statics::PropPointers), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_MovementState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementState_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_MovementState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Set_MovementState)
{
	P_GET_ENUM(CALS_MovementState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Set_MovementState_Implementation(CALS_MovementState(Z_Param_NewState));
	P_NATIVE_END;
}
// End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_MovementState

// Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_OverlayState
struct AGLS_AI_CharacterInterface_eventBPI_AI_Set_OverlayState_Parms
{
	CALS_OverlayState NewState;
	bool Forced;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Set_OverlayState(CALS_OverlayState NewState, bool Forced)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Set_OverlayState instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState = FName(TEXT("BPI_AI_Set_OverlayState"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Set_OverlayState(UObject* O, CALS_OverlayState NewState, bool Forced)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Set_OverlayState_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState);
	if (Func)
	{
		Parms.NewState=NewState;
		Parms.Forced=Forced;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Set_OverlayState_Implementation(NewState,Forced);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Set" },
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static void NewProp_Forced_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Forced;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Set_OverlayState_Parms, NewState), Z_Construct_UEnum_HelpfulFunctions_CALS_OverlayState, METADATA_PARAMS(0, nullptr) }; // 3098219672
void Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState_Statics::NewProp_Forced_SetBit(void* Obj)
{
	((AGLS_AI_CharacterInterface_eventBPI_AI_Set_OverlayState_Parms*)Obj)->Forced = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState_Statics::NewProp_Forced = { "Forced", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_OverlayState_Parms), &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState_Statics::NewProp_Forced_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState_Statics::NewProp_NewState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState_Statics::NewProp_Forced,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Set_OverlayState", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState_Statics::PropPointers), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_OverlayState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_OverlayState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Set_OverlayState)
{
	P_GET_ENUM(CALS_OverlayState,Z_Param_NewState);
	P_GET_UBOOL(Z_Param_Forced);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Set_OverlayState_Implementation(CALS_OverlayState(Z_Param_NewState),Z_Param_Forced);
	P_NATIVE_END;
}
// End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_OverlayState

// Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_RotationMode
struct AGLS_AI_CharacterInterface_eventBPI_AI_Set_RotationMode_Parms
{
	CALS_RotationMode NewMode;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Set_RotationMode(CALS_RotationMode NewMode)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Set_RotationMode instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_RotationMode = FName(TEXT("BPI_AI_Set_RotationMode"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Set_RotationMode(UObject* O, CALS_RotationMode NewMode)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Set_RotationMode_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_RotationMode);
	if (Func)
	{
		Parms.NewMode=NewMode;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Set_RotationMode_Implementation(NewMode);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_RotationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Set" },
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_RotationMode_Statics::NewProp_NewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_RotationMode_Statics::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Set_RotationMode_Parms, NewMode), Z_Construct_UEnum_HelpfulFunctions_CALS_RotationMode, METADATA_PARAMS(0, nullptr) }; // 1340769226
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_RotationMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_RotationMode_Statics::NewProp_NewMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_RotationMode_Statics::NewProp_NewMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_RotationMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_RotationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Set_RotationMode", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_RotationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_RotationMode_Statics::PropPointers), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_RotationMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_RotationMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_RotationMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_RotationMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_RotationMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_RotationMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Set_RotationMode)
{
	P_GET_ENUM(CALS_RotationMode,Z_Param_NewMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Set_RotationMode_Implementation(CALS_RotationMode(Z_Param_NewMode));
	P_NATIVE_END;
}
// End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_RotationMode

// Begin Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_StruckCharacter
struct AGLS_AI_CharacterInterface_eventBPI_AI_Set_StruckCharacter_Parms
{
	ACharacter* From;
	ACharacter* To;
	float Damage;
};
void IAGLS_AI_CharacterInterface::BPI_AI_Set_StruckCharacter(ACharacter* From, ACharacter* To, float Damage)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BPI_AI_Set_StruckCharacter instead.");
}
static FName NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter = FName(TEXT("BPI_AI_Set_StruckCharacter"));
void IAGLS_AI_CharacterInterface::Execute_BPI_AI_Set_StruckCharacter(UObject* O, ACharacter* From, ACharacter* To, float Damage)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UAGLS_AI_CharacterInterface::StaticClass()));
	AGLS_AI_CharacterInterface_eventBPI_AI_Set_StruckCharacter_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter);
	if (Func)
	{
		Parms.From=From;
		Parms.To=To;
		Parms.Damage=Damage;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IAGLS_AI_CharacterInterface*)(O->GetNativeInterfaceAddress(UAGLS_AI_CharacterInterface::StaticClass())))
	{
		I->BPI_AI_Set_StruckCharacter_Implementation(From,To,Damage);
	}
}
struct Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BPI AI Character|Set" },
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_From;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_To;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Set_StruckCharacter_Parms, From), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Set_StruckCharacter_Parms, To), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGLS_AI_CharacterInterface_eventBPI_AI_Set_StruckCharacter_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter_Statics::NewProp_From,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter_Statics::NewProp_To,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter_Statics::NewProp_Damage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAGLS_AI_CharacterInterface, nullptr, "BPI_AI_Set_StruckCharacter", nullptr, nullptr, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter_Statics::PropPointers), sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_StruckCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(AGLS_AI_CharacterInterface_eventBPI_AI_Set_StruckCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAGLS_AI_CharacterInterface::execBPI_AI_Set_StruckCharacter)
{
	P_GET_OBJECT(ACharacter,Z_Param_From);
	P_GET_OBJECT(ACharacter,Z_Param_To);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BPI_AI_Set_StruckCharacter_Implementation(Z_Param_From,Z_Param_To,Z_Param_Damage);
	P_NATIVE_END;
}
// End Interface UAGLS_AI_CharacterInterface Function BPI_AI_Set_StruckCharacter

// Begin Interface UAGLS_AI_CharacterInterface
void UAGLS_AI_CharacterInterface::StaticRegisterNativesUAGLS_AI_CharacterInterface()
{
	UClass* Class = UAGLS_AI_CharacterInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BPI_AI_CrouchOrUncrouch", &IAGLS_AI_CharacterInterface::execBPI_AI_CrouchOrUncrouch },
		{ "BPI_AI_Get_CurrentActivatedTask", &IAGLS_AI_CharacterInterface::execBPI_AI_Get_CurrentActivatedTask },
		{ "BPI_AI_Get_CurrentStates", &IAGLS_AI_CharacterInterface::execBPI_AI_Get_CurrentStates },
		{ "BPI_AI_Get_EssentialValues", &IAGLS_AI_CharacterInterface::execBPI_AI_Get_EssentialValues },
		{ "BPI_AI_Get_LocomotionModeIndex", &IAGLS_AI_CharacterInterface::execBPI_AI_Get_LocomotionModeIndex },
		{ "BPI_AI_Get_LOD_State", &IAGLS_AI_CharacterInterface::execBPI_AI_Get_LOD_State },
		{ "BPI_AI_Get_RotationLocked", &IAGLS_AI_CharacterInterface::execBPI_AI_Get_RotationLocked },
		{ "BPI_AI_GetPathFollowActor", &IAGLS_AI_CharacterInterface::execBPI_AI_GetPathFollowActor },
		{ "BPI_AI_Set_DesiredGait", &IAGLS_AI_CharacterInterface::execBPI_AI_Set_DesiredGait },
		{ "BPI_AI_Set_EnableRagdoll", &IAGLS_AI_CharacterInterface::execBPI_AI_Set_EnableRagdoll },
		{ "BPI_AI_Set_Gait", &IAGLS_AI_CharacterInterface::execBPI_AI_Set_Gait },
		{ "BPI_AI_Set_GrounedMoveMode", &IAGLS_AI_CharacterInterface::execBPI_AI_Set_GrounedMoveMode },
		{ "BPI_AI_Set_LockRotationUpdate", &IAGLS_AI_CharacterInterface::execBPI_AI_Set_LockRotationUpdate },
		{ "BPI_AI_Set_MovementAction", &IAGLS_AI_CharacterInterface::execBPI_AI_Set_MovementAction },
		{ "BPI_AI_Set_MovementSettingsByName", &IAGLS_AI_CharacterInterface::execBPI_AI_Set_MovementSettingsByName },
		{ "BPI_AI_Set_MovementState", &IAGLS_AI_CharacterInterface::execBPI_AI_Set_MovementState },
		{ "BPI_AI_Set_OverlayState", &IAGLS_AI_CharacterInterface::execBPI_AI_Set_OverlayState },
		{ "BPI_AI_Set_RotationMode", &IAGLS_AI_CharacterInterface::execBPI_AI_Set_RotationMode },
		{ "BPI_AI_Set_StruckCharacter", &IAGLS_AI_CharacterInterface::execBPI_AI_Set_StruckCharacter },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAGLS_AI_CharacterInterface);
UClass* Z_Construct_UClass_UAGLS_AI_CharacterInterface_NoRegister()
{
	return UAGLS_AI_CharacterInterface::StaticClass();
}
struct Z_Construct_UClass_UAGLS_AI_CharacterInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AGLS_AI_CharacterInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_CrouchOrUncrouch, "BPI_AI_CrouchOrUncrouch" }, // 1142572347
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentActivatedTask, "BPI_AI_Get_CurrentActivatedTask" }, // 3964307771
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_CurrentStates, "BPI_AI_Get_CurrentStates" }, // 3977362855
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_EssentialValues, "BPI_AI_Get_EssentialValues" }, // 3442635602
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LocomotionModeIndex, "BPI_AI_Get_LocomotionModeIndex" }, // 363760861
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_LOD_State, "BPI_AI_Get_LOD_State" }, // 1196910968
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Get_RotationLocked, "BPI_AI_Get_RotationLocked" }, // 898183316
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_GetPathFollowActor, "BPI_AI_GetPathFollowActor" }, // 2835610533
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_DesiredGait, "BPI_AI_Set_DesiredGait" }, // 3846993649
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_EnableRagdoll, "BPI_AI_Set_EnableRagdoll" }, // 3662507331
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_Gait, "BPI_AI_Set_Gait" }, // 2810272674
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_GrounedMoveMode, "BPI_AI_Set_GrounedMoveMode" }, // 2999353176
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_LockRotationUpdate, "BPI_AI_Set_LockRotationUpdate" }, // 717777399
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementAction, "BPI_AI_Set_MovementAction" }, // 142516111
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementSettingsByName, "BPI_AI_Set_MovementSettingsByName" }, // 1578070089
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_MovementState, "BPI_AI_Set_MovementState" }, // 2547773777
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_OverlayState, "BPI_AI_Set_OverlayState" }, // 1236635505
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_RotationMode, "BPI_AI_Set_RotationMode" }, // 2435077088
		{ &Z_Construct_UFunction_UAGLS_AI_CharacterInterface_BPI_AI_Set_StruckCharacter, "BPI_AI_Set_StruckCharacter" }, // 3520652918
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAGLS_AI_CharacterInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAGLS_AI_CharacterInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAGLS_AI_CharacterInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAGLS_AI_CharacterInterface_Statics::ClassParams = {
	&UAGLS_AI_CharacterInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAGLS_AI_CharacterInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UAGLS_AI_CharacterInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAGLS_AI_CharacterInterface()
{
	if (!Z_Registration_Info_UClass_UAGLS_AI_CharacterInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAGLS_AI_CharacterInterface.OuterSingleton, Z_Construct_UClass_UAGLS_AI_CharacterInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAGLS_AI_CharacterInterface.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UClass* StaticClass<UAGLS_AI_CharacterInterface>()
{
	return UAGLS_AI_CharacterInterface::StaticClass();
}
UAGLS_AI_CharacterInterface::UAGLS_AI_CharacterInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAGLS_AI_CharacterInterface);
UAGLS_AI_CharacterInterface::~UAGLS_AI_CharacterInterface() {}
// End Interface UAGLS_AI_CharacterInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_CharacterInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAGLS_AI_CharacterInterface, UAGLS_AI_CharacterInterface::StaticClass, TEXT("UAGLS_AI_CharacterInterface"), &Z_Registration_Info_UClass_UAGLS_AI_CharacterInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAGLS_AI_CharacterInterface), 3658165260U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_CharacterInterface_h_4176157734(TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_CharacterInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_AI_CharacterInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
