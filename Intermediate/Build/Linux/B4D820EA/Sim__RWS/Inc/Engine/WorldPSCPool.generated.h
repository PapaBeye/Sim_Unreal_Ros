// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_WorldPSCPool_generated_h
#error "WorldPSCPool.generated.h already included, missing '#pragma once' in WorldPSCPool.h"
#endif
#define ENGINE_WorldPSCPool_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_WorldPSCPool_h_106_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWorldPSCPool_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__WorldParticleSystemPools() { return STRUCT_OFFSET(FWorldPSCPool, WorldParticleSystemPools); }


#define Engine_Source_Runtime_Engine_Classes_Particles_WorldPSCPool_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPSCPool_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Particles_WorldPSCPool_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPSCPoolElem_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_WorldPSCPool_h


#define FOREACH_ENUM_EPSCPOOLMETHOD(op) \
	op(EPSCPoolMethod::None) \
	op(EPSCPoolMethod::AutoRelease) \
	op(EPSCPoolMethod::ManualRelease) \
	op(EPSCPoolMethod::ManualRelease_OnComplete) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
