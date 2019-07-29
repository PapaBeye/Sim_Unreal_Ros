// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_RichCurve_generated_h
#error "RichCurve.generated.h already included, missing '#pragma once' in RichCurve.h"
#endif
#define ENGINE_RichCurve_generated_h

#define Engine_Source_Runtime_Engine_Classes_Curves_RichCurve_h_196_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRichCurve_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FIndexedCurve Super;


#define Engine_Source_Runtime_Engine_Classes_Curves_RichCurve_h_80_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRichCurveKey_Statics; \
	static class UScriptStruct* StaticStruct();


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Curves_RichCurve_h


#define FOREACH_ENUM_ERICHCURVEEXTRAPOLATION(op) \
	op(RCCE_Cycle) \
	op(RCCE_CycleWithOffset) \
	op(RCCE_Oscillate) \
	op(RCCE_Linear) \
	op(RCCE_Constant) \
	op(RCCE_None) 
#define FOREACH_ENUM_ERICHCURVETANGENTWEIGHTMODE(op) \
	op(RCTWM_WeightedNone) \
	op(RCTWM_WeightedArrive) \
	op(RCTWM_WeightedLeave) \
	op(RCTWM_WeightedBoth) 
#define FOREACH_ENUM_ERICHCURVETANGENTMODE(op) \
	op(RCTM_Auto) \
	op(RCTM_User) \
	op(RCTM_Break) \
	op(RCTM_None) 
#define FOREACH_ENUM_ERICHCURVEINTERPMODE(op) \
	op(RCIM_Linear) \
	op(RCIM_Constant) \
	op(RCIM_Cubic) \
	op(RCIM_None) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
