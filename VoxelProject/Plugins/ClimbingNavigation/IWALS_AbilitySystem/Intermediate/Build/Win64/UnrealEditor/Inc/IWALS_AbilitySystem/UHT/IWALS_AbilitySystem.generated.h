// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IWALS_AbilitySystem.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IWALS_ABILITYSYSTEM_IWALS_AbilitySystem_generated_h
#error "IWALS_AbilitySystem.generated.h already included, missing '#pragma once' in IWALS_AbilitySystem.h"
#endif
#define IWALS_ABILITYSYSTEM_IWALS_AbilitySystem_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_IWALS_AbilitySystem_Source_IWALS_AbilitySystem_Public_IWALS_AbilitySystem_h


#define FOREACH_ENUM_EGASABILITYINPUTID(op) \
	op(EGASAbilityInputID::None) \
	op(EGASAbilityInputID::Confirm) \
	op(EGASAbilityInputID::Cancel) \
	op(EGASAbilityInputID::Apply) \
	op(EGASAbilityInputID::Interaction) 

enum class EGASAbilityInputID : uint8;
template<> struct TIsUEnumClass<EGASAbilityInputID> { enum { Value = true }; };
template<> IWALS_ABILITYSYSTEM_API UEnum* StaticEnum<EGASAbilityInputID>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
