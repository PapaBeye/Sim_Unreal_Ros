// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_World_generated_h
#error "World.generated.h already included, missing '#pragma once' in World.h"
#endif
#define ENGINE_World_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_World_h_575_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelCollection_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__GameState() { return STRUCT_OFFSET(FLevelCollection, GameState); } \
	FORCEINLINE static uint32 __PPO__NetDriver() { return STRUCT_OFFSET(FLevelCollection, NetDriver); } \
	FORCEINLINE static uint32 __PPO__DemoNetDriver() { return STRUCT_OFFSET(FLevelCollection, DemoNetDriver); } \
	FORCEINLINE static uint32 __PPO__PersistentLevel() { return STRUCT_OFFSET(FLevelCollection, PersistentLevel); } \
	FORCEINLINE static uint32 __PPO__Levels() { return STRUCT_OFFSET(FLevelCollection, Levels); }


#define Engine_Source_Runtime_Engine_Classes_Engine_World_h_427_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStartAsyncSimulationFunction_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


#define Engine_Source_Runtime_Engine_Classes_Engine_World_h_395_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEndPhysicsTickFunction_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


#define Engine_Source_Runtime_Engine_Classes_Engine_World_h_363_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStartPhysicsTickFunction_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


#define Engine_Source_Runtime_Engine_Classes_Engine_World_h_302_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelViewportInfo_Statics; \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Engine_World_h_735_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleTimelineScrubbed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleTimelineScrubbed(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_World_h_735_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleTimelineScrubbed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleTimelineScrubbed(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_World_h_735_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UWorld, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Engine_World_h_735_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorld(); \
	friend struct Z_Construct_UClass_UWorld_Statics; \
public: \
	DECLARE_CLASS(UWorld, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UWorld) \
	Engine_Source_Runtime_Engine_Classes_Engine_World_h_735_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_World_h_735_INCLASS \
private: \
	static void StaticRegisterNativesUWorld(); \
	friend struct Z_Construct_UClass_UWorld_Statics; \
public: \
	DECLARE_CLASS(UWorld, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UWorld) \
	Engine_Source_Runtime_Engine_Classes_Engine_World_h_735_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_World_h_735_STANDARD_CONSTRUCTORS \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorld) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorld); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorld); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWorld(UWorld&&); \
	NO_API UWorld(const UWorld&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_World_h_735_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWorld(UWorld&&); \
	NO_API UWorld(const UWorld&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorld); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorld); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorld)


#define Engine_Source_Runtime_Engine_Classes_Engine_World_h_735_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StreamingLevels() { return STRUCT_OFFSET(UWorld, StreamingLevels); } \
	FORCEINLINE static uint32 __PPO__StreamingLevelsToConsider() { return STRUCT_OFFSET(UWorld, StreamingLevelsToConsider); } \
	FORCEINLINE static uint32 __PPO__CurrentLevelPendingVisibility() { return STRUCT_OFFSET(UWorld, CurrentLevelPendingVisibility); } \
	FORCEINLINE static uint32 __PPO__CurrentLevelPendingInvisibility() { return STRUCT_OFFSET(UWorld, CurrentLevelPendingInvisibility); } \
	FORCEINLINE static uint32 __PPO__DefaultPhysicsVolume() { return STRUCT_OFFSET(UWorld, DefaultPhysicsVolume); } \
	FORCEINLINE static uint32 __PPO__NavigationSystem() { return STRUCT_OFFSET(UWorld, NavigationSystem); } \
	FORCEINLINE static uint32 __PPO__AuthorityGameMode() { return STRUCT_OFFSET(UWorld, AuthorityGameMode); } \
	FORCEINLINE static uint32 __PPO__GameState() { return STRUCT_OFFSET(UWorld, GameState); } \
	FORCEINLINE static uint32 __PPO__AISystem() { return STRUCT_OFFSET(UWorld, AISystem); } \
	FORCEINLINE static uint32 __PPO__AvoidanceManager() { return STRUCT_OFFSET(UWorld, AvoidanceManager); } \
	FORCEINLINE static uint32 __PPO__Levels() { return STRUCT_OFFSET(UWorld, Levels); } \
	FORCEINLINE static uint32 __PPO__LevelCollections() { return STRUCT_OFFSET(UWorld, LevelCollections); } \
	FORCEINLINE static uint32 __PPO__CurrentLevel() { return STRUCT_OFFSET(UWorld, CurrentLevel); } \
	FORCEINLINE static uint32 __PPO__OwningGameInstance() { return STRUCT_OFFSET(UWorld, OwningGameInstance); } \
	FORCEINLINE static uint32 __PPO__ParameterCollectionInstances() { return STRUCT_OFFSET(UWorld, ParameterCollectionInstances); } \
	FORCEINLINE static uint32 __PPO__CanvasForRenderingToTarget() { return STRUCT_OFFSET(UWorld, CanvasForRenderingToTarget); } \
	FORCEINLINE static uint32 __PPO__CanvasForDrawMaterialToRenderTarget() { return STRUCT_OFFSET(UWorld, CanvasForDrawMaterialToRenderTarget); } \
	FORCEINLINE static uint32 __PPO__PSCPool() { return STRUCT_OFFSET(UWorld, PSCPool); }


#define Engine_Source_Runtime_Engine_Classes_Engine_World_h_732_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_World_h_735_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_World_h_735_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_World_h_735_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_World_h_735_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_World_h_735_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_World_h_735_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_World_h_735_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_World_h_735_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_World_h_735_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_World_h_735_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class World."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_World_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
