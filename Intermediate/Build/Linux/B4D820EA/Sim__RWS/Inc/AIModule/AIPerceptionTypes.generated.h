// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AIPerceptionTypes_generated_h
#error "AIPerceptionTypes.generated.h already included, missing '#pragma once' in AIPerceptionTypes.h"
#endif
#define AIMODULE_AIPerceptionTypes_generated_h

#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionTypes_h_207_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAISenseAffiliationFilter_Statics; \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionTypes_h_130_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAIStimulus_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__Age() { return STRUCT_OFFSET(FAIStimulus, Age); } \
	FORCEINLINE static uint32 __PPO__ExpirationAge() { return STRUCT_OFFSET(FAIStimulus, ExpirationAge); }


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_Perception_AIPerceptionTypes_h


#define FOREACH_ENUM_EAISENSENOTIFYTYPE(op) \
	op(EAISenseNotifyType::OnEveryPerception) \
	op(EAISenseNotifyType::OnPerceptionChange) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
