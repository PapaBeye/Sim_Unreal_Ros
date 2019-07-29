// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimNodeBase_generated_h
#error "AnimNodeBase.generated.h already included, missing '#pragma once' in AnimNodeBase.h"
#endif
#define ENGINE_AnimNodeBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h_607_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNode_Base_Statics; \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h_566_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FExposedValueHandler_Statics; \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h_479_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FExposedValueCopyRecord_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h_444_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComponentSpacePoseLink_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FPoseLinkBase Super;


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h_427_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseLink_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FPoseLinkBase Super;


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h_369_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseLinkBase_Statics; \
	static class UScriptStruct* StaticStruct();


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h


#define FOREACH_ENUM_ECOPYTYPE(op) \
	op(ECopyType::MemCopy) \
	op(ECopyType::BoolProperty) \
	op(ECopyType::StructProperty) \
	op(ECopyType::ObjectProperty) 
#define FOREACH_ENUM_EPOSTCOPYOPERATION(op) \
	op(EPostCopyOperation::None) \
	op(EPostCopyOperation::LogicalNegateBool) 
#define FOREACH_ENUM_EPINHIDINGMODE(op) \
	op(EPinHidingMode::NeverAsPin) \
	op(EPinHidingMode::PinHiddenByDefault) \
	op(EPinHidingMode::PinShownByDefault) \
	op(EPinHidingMode::AlwaysAsPin) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
