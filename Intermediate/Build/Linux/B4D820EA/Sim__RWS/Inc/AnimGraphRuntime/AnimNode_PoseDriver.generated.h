// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPHRUNTIME_AnimNode_PoseDriver_generated_h
#error "AnimNode_PoseDriver.generated.h already included, missing '#pragma once' in AnimNode_PoseDriver.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_PoseDriver_generated_h

#define Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseDriver_h_118_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimNode_PoseHandler Super;


#define Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseDriver_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseDriverTarget_Statics; \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseDriver_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseDriverTransform_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct();


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseDriver_h


#define FOREACH_ENUM_EPOSEDRIVEROUTPUT(op) \
	op(EPoseDriverOutput::DrivePoses) \
	op(EPoseDriverOutput::DriveCurves) 
#define FOREACH_ENUM_EPOSEDRIVERSOURCE(op) \
	op(EPoseDriverSource::Rotation) \
	op(EPoseDriverSource::Translation) 
#define FOREACH_ENUM_EPOSEDRIVERTYPE(op) \
	op(EPoseDriverType::SwingAndTwist) \
	op(EPoseDriverType::SwingOnly) \
	op(EPoseDriverType::Translation) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
