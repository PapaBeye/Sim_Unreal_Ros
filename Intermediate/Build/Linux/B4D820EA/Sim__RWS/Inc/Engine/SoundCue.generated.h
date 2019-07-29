// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundCue_generated_h
#error "SoundCue.generated.h already included, missing '#pragma once' in SoundCue.h"
#endif
#define ENGINE_SoundCue_generated_h

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundNodeEditorData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_79_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_79_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_79_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(USoundCue, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundCue(); \
	friend struct Z_Construct_UClass_USoundCue_Statics; \
public: \
	DECLARE_CLASS(USoundCue, USoundBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundCue) \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_79_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_79_INCLASS \
private: \
	static void StaticRegisterNativesUSoundCue(); \
	friend struct Z_Construct_UClass_USoundCue_Statics; \
public: \
	DECLARE_CLASS(USoundCue, USoundBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundCue) \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_79_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_79_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundCue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundCue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundCue); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundCue); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USoundCue(USoundCue&&); \
	ENGINE_API USoundCue(const USoundCue&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_79_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundCue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USoundCue(USoundCue&&); \
	ENGINE_API USoundCue(const USoundCue&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundCue); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundCue); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundCue)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_79_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SubtitlePriority() { return STRUCT_OFFSET(USoundCue, SubtitlePriority); }


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_76_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_79_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_79_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_79_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_79_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_79_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_79_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_79_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_79_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundCue."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
