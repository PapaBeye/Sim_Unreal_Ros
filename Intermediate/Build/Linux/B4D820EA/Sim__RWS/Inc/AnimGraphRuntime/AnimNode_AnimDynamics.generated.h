// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPHRUNTIME_AnimNode_AnimDynamics_generated_h
#error "AnimNode_AnimDynamics.generated.h already included, missing '#pragma once' in AnimNode_AnimDynamics.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_AnimDynamics_generated_h

#define Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_AnimDynamics_h_229_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_SkeletalControlBase Super;


#define Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_AnimDynamics_h_201_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_AnimDynamics_h_177_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_AnimDynamics_h_88_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct();


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_AnimDynamics_h


#define FOREACH_ENUM_ESPHERICALLIMITTYPE(op) \
	op(ESphericalLimitType::Inner) \
	op(ESphericalLimitType::Outer) 
#define FOREACH_ENUM_ANIMPHYSSIMSPACETYPE(op) \
	op(AnimPhysSimSpaceType::Component) \
	op(AnimPhysSimSpaceType::Actor) \
	op(AnimPhysSimSpaceType::World) \
	op(AnimPhysSimSpaceType::RootRelative) \
	op(AnimPhysSimSpaceType::BoneRelative) 
#define FOREACH_ENUM_ANIMPHYSLINEARCONSTRAINTTYPE(op) \
	op(AnimPhysLinearConstraintType::Free) \
	op(AnimPhysLinearConstraintType::Limited) 
#define FOREACH_ENUM_ANIMPHYSANGULARCONSTRAINTTYPE(op) \
	op(AnimPhysAngularConstraintType::Angular) \
	op(AnimPhysAngularConstraintType::Cone) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
