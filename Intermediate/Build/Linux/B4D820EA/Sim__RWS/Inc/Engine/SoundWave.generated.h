// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundWave_generated_h
#error "SoundWave.generated.h already included, missing '#pragma once' in SoundWave.h"
#endif
#define ENGINE_SoundWave_generated_h

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_88_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStreamedAudioPlatformData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_135_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_135_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_135_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USoundWave, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_135_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundWave(); \
	friend struct Z_Construct_UClass_USoundWave_Statics; \
public: \
	DECLARE_CLASS(USoundWave, USoundBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundWave) \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_135_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_135_INCLASS \
private: \
	static void StaticRegisterNativesUSoundWave(); \
	friend struct Z_Construct_UClass_USoundWave_Statics; \
public: \
	DECLARE_CLASS(USoundWave, USoundBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundWave) \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_135_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_135_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundWave(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundWave) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundWave); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundWave); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundWave(USoundWave&&); \
	NO_API USoundWave(const USoundWave&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_135_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundWave(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundWave(USoundWave&&); \
	NO_API USoundWave(const USoundWave&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundWave); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundWave); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundWave)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_135_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SampleRate() { return STRUCT_OFFSET(USoundWave, SampleRate); } \
	FORCEINLINE static uint32 __PPO__Curves() { return STRUCT_OFFSET(USoundWave, Curves); } \
	FORCEINLINE static uint32 __PPO__InternalCurves() { return STRUCT_OFFSET(USoundWave, InternalCurves); }


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_132_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_135_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_135_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_135_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_135_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_135_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_135_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_135_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_135_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_135_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_135_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundWave."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h


#define FOREACH_ENUM_EDECOMPRESSIONTYPE(op) \
	op(DTYPE_Setup) \
	op(DTYPE_Invalid) \
	op(DTYPE_Preview) \
	op(DTYPE_Native) \
	op(DTYPE_RealTime) \
	op(DTYPE_Procedural) \
	op(DTYPE_Xenon) \
	op(DTYPE_Streaming) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
