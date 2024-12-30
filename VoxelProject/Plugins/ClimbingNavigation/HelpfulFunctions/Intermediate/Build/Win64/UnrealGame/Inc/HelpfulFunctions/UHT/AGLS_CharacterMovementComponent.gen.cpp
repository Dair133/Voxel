// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/AGLS_CharacterMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGLS_CharacterMovementComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAGLS_CharacterMovementComponent();
HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UAGLS_CharacterMovementComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References

// Begin Class UAGLS_CharacterMovementComponent
void UAGLS_CharacterMovementComponent::StaticRegisterNativesUAGLS_CharacterMovementComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAGLS_CharacterMovementComponent);
UClass* Z_Construct_UClass_UAGLS_CharacterMovementComponent_NoRegister()
{
	return UAGLS_CharacterMovementComponent::StaticClass();
}
struct Z_Construct_UClass_UAGLS_CharacterMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AGLS_CharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/AGLS_CharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateCustomMovementPhysic_MetaData[] = {
		{ "Category", "Character Movement: Custom Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Specifies whether physical variables such as Velocity and Acceleration are to be calculated during the 'CustomMovement' state.Therefore, in this mode, \n// PoseSearch will be able to generate trajectories based on the change in the position of the capsule\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_CharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Specifies whether physical variables such as Velocity and Acceleration are to be calculated during the 'CustomMovement' state.Therefore, in this mode,\n PoseSearch will be able to generate trajectories based on the change in the position of the capsule" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyRootMotionForCustomMove_MetaData[] = {
		{ "Category", "Character Movement: Custom Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//(NOT FINISHED) It allows to set the capsule in motion in Custom Movement mode while Root Motion animation is playing\n" },
#endif
		{ "ModuleRelativePath", "Public/AGLS_CharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "(NOT FINISHED) It allows to set the capsule in motion in Custom Movement mode while Root Motion animation is playing" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_UpdateCustomMovementPhysic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UpdateCustomMovementPhysic;
	static void NewProp_bApplyRootMotionForCustomMove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyRootMotionForCustomMove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAGLS_CharacterMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAGLS_CharacterMovementComponent_Statics::NewProp_UpdateCustomMovementPhysic_SetBit(void* Obj)
{
	((UAGLS_CharacterMovementComponent*)Obj)->UpdateCustomMovementPhysic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGLS_CharacterMovementComponent_Statics::NewProp_UpdateCustomMovementPhysic = { "UpdateCustomMovementPhysic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAGLS_CharacterMovementComponent), &Z_Construct_UClass_UAGLS_CharacterMovementComponent_Statics::NewProp_UpdateCustomMovementPhysic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateCustomMovementPhysic_MetaData), NewProp_UpdateCustomMovementPhysic_MetaData) };
void Z_Construct_UClass_UAGLS_CharacterMovementComponent_Statics::NewProp_bApplyRootMotionForCustomMove_SetBit(void* Obj)
{
	((UAGLS_CharacterMovementComponent*)Obj)->bApplyRootMotionForCustomMove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAGLS_CharacterMovementComponent_Statics::NewProp_bApplyRootMotionForCustomMove = { "bApplyRootMotionForCustomMove", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAGLS_CharacterMovementComponent), &Z_Construct_UClass_UAGLS_CharacterMovementComponent_Statics::NewProp_bApplyRootMotionForCustomMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyRootMotionForCustomMove_MetaData), NewProp_bApplyRootMotionForCustomMove_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAGLS_CharacterMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_CharacterMovementComponent_Statics::NewProp_UpdateCustomMovementPhysic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAGLS_CharacterMovementComponent_Statics::NewProp_bApplyRootMotionForCustomMove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAGLS_CharacterMovementComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAGLS_CharacterMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAGLS_CharacterMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAGLS_CharacterMovementComponent_Statics::ClassParams = {
	&UAGLS_CharacterMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAGLS_CharacterMovementComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAGLS_CharacterMovementComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAGLS_CharacterMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAGLS_CharacterMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAGLS_CharacterMovementComponent()
{
	if (!Z_Registration_Info_UClass_UAGLS_CharacterMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAGLS_CharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UAGLS_CharacterMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAGLS_CharacterMovementComponent.OuterSingleton;
}
template<> HELPFULFUNCTIONS_API UClass* StaticClass<UAGLS_CharacterMovementComponent>()
{
	return UAGLS_CharacterMovementComponent::StaticClass();
}
UAGLS_CharacterMovementComponent::UAGLS_CharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAGLS_CharacterMovementComponent);
UAGLS_CharacterMovementComponent::~UAGLS_CharacterMovementComponent() {}
// End Class UAGLS_CharacterMovementComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_CharacterMovementComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAGLS_CharacterMovementComponent, UAGLS_CharacterMovementComponent::StaticClass, TEXT("UAGLS_CharacterMovementComponent"), &Z_Registration_Info_UClass_UAGLS_CharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAGLS_CharacterMovementComponent), 2533076363U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_CharacterMovementComponent_h_1840707164(TEXT("/Script/HelpfulFunctions"),
	Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_CharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_4_AGLS_v1_0__Experimental__Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_AGLS_CharacterMovementComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
