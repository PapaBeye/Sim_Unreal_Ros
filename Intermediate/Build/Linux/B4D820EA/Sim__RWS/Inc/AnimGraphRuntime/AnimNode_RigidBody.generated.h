// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPHRUNTIME_AnimNode_RigidBody_generated_h
#error "AnimNode_RigidBody.generated.h already included, missing '#pragma once' in AnimNode_RigidBody.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_RigidBody_generated_h

#define Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RigidBody_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__bComponentSpaceSimulation_DEPRECATED() { return STRUCT_OFFSET(FAnimNode_RigidBody, bComponentSpaceSimulation_DEPRECATED); } \
	typedef FAnimNode_SkeletalControlBase Super;


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RigidBody_h


#define FOREACH_ENUM_ESIMULATIONSPACE(op) \
	op(ESimulationSpace::ComponentSpace) \
	op(ESimulationSpace::WorldSpace) \
	op(ESimulationSpace::BaseBoneSpace) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
