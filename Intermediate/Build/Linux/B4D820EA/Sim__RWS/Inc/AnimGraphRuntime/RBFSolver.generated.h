// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPHRUNTIME_RBFSolver_generated_h
#error "RBFSolver.generated.h already included, missing '#pragma once' in RBFSolver.h"
#endif
#define ANIMGRAPHRUNTIME_RBFSolver_generated_h

#define Engine_Source_Runtime_AnimGraphRuntime_Public_RBF_RBFSolver_h_111_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRBFParams_Statics; \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_AnimGraphRuntime_Public_RBF_RBFSolver_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRBFTarget_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRBFEntry Super;


#define Engine_Source_Runtime_AnimGraphRuntime_Public_RBF_RBFSolver_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRBFEntry_Statics; \
	static class UScriptStruct* StaticStruct();


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AnimGraphRuntime_Public_RBF_RBFSolver_h


#define FOREACH_ENUM_ERBFDISTANCEMETHOD(op) \
	op(ERBFDistanceMethod::Euclidean) \
	op(ERBFDistanceMethod::Quaternion) \
	op(ERBFDistanceMethod::SwingAngle) 
#define FOREACH_ENUM_ERBFFUNCTIONTYPE(op) \
	op(ERBFFunctionType::Gaussian) \
	op(ERBFFunctionType::Exponential) \
	op(ERBFFunctionType::Linear) \
	op(ERBFFunctionType::Cubic) \
	op(ERBFFunctionType::Quintic) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
