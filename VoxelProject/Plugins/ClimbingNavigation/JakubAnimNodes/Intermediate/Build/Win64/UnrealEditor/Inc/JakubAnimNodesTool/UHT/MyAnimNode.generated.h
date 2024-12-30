// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyAnimNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JAKUBANIMNODESTOOL_MyAnimNode_generated_h
#error "MyAnimNode.generated.h already included, missing '#pragma once' in MyAnimNode.h"
#endif
#define JAKUBANIMNODESTOOL_MyAnimNode_generated_h

#define FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_MyAnimNode_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_LayeredBone_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_Base Super;


template<> JAKUBANIMNODESTOOL_API UScriptStruct* StaticStruct<struct FAnimNode_LayeredBone>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE___Projects_UE5_5_AGLS_v1_0__Experimental__5_5_Plugins_JakubAnimNodes_Source_JakubAnimNodesTool_Public_MyAnimNode_h


#define FOREACH_ENUM_ELAYEREDBLENDMODE(op) \
	op(ELayeredBlendMode::BranchFilter) \
	op(ELayeredBlendMode::BlendMask) 

enum class ELayeredBlendMode : uint8;
template<> struct TIsUEnumClass<ELayeredBlendMode> { enum { Value = true }; };
template<> JAKUBANIMNODESTOOL_API UEnum* StaticEnum<ELayeredBlendMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
