// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMATIONCORE_Constraint_generated_h
#error "Constraint.generated.h already included, missing '#pragma once' in Constraint.h"
#endif
#define ANIMATIONCORE_Constraint_generated_h

#define Engine_Source_Runtime_AnimationCore_Public_Constraint_h_653_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConstraintData_Statics; \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_AnimationCore_Public_Constraint_h_476_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConstraintDescriptor_Statics; \
	ANIMATIONCORE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_AnimationCore_Public_Constraint_h_431_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAimConstraintDescription_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FConstraintDescriptionEx Super;


#define Engine_Source_Runtime_AnimationCore_Public_Constraint_h_386_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTransformConstraintDescription_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FConstraintDescriptionEx Super;


#define Engine_Source_Runtime_AnimationCore_Public_Constraint_h_320_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConstraintDescriptionEx_Statics; \
	ANIMATIONCORE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_AnimationCore_Public_Constraint_h_260_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTransformConstraint_Statics; \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_AnimationCore_Public_Constraint_h_212_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConstraintOffset_Statics; \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_AnimationCore_Public_Constraint_h_157_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConstraintDescription_Statics; \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_AnimationCore_Public_Constraint_h_111_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTransformFilter_Statics; \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_AnimationCore_Public_Constraint_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFilterOptionPerAxis_Statics; \
	static class UScriptStruct* StaticStruct();


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AnimationCore_Public_Constraint_h


#define FOREACH_ENUM_ETRANSFORMCONSTRAINTTYPE(op) \
	op(ETransformConstraintType::Translation) \
	op(ETransformConstraintType::Rotation) \
	op(ETransformConstraintType::Scale) \
	op(ETransformConstraintType::Parent) 
#define FOREACH_ENUM_ECONSTRAINTTYPE(op) \
	op(EConstraintType::Transform) \
	op(EConstraintType::Aim) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
