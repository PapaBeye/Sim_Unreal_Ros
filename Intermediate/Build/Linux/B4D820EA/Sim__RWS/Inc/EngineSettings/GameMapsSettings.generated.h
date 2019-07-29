// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINESETTINGS_GameMapsSettings_generated_h
#error "GameMapsSettings.generated.h already included, missing '#pragma once' in GameMapsSettings.h"
#endif
#define ENGINESETTINGS_GameMapsSettings_generated_h

#define Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameModeName_Statics; \
	ENGINESETTINGS_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h_61_RPC_WRAPPERS
#define Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h_61_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameMapsSettings(); \
	friend struct Z_Construct_UClass_UGameMapsSettings_Statics; \
public: \
	DECLARE_CLASS(UGameMapsSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EngineSettings"), NO_API) \
	DECLARE_SERIALIZER(UGameMapsSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h_61_INCLASS \
private: \
	static void StaticRegisterNativesUGameMapsSettings(); \
	friend struct Z_Construct_UClass_UGameMapsSettings_Statics; \
public: \
	DECLARE_CLASS(UGameMapsSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EngineSettings"), NO_API) \
	DECLARE_SERIALIZER(UGameMapsSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameMapsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameMapsSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameMapsSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameMapsSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameMapsSettings(UGameMapsSettings&&); \
	NO_API UGameMapsSettings(const UGameMapsSettings&); \
public:


#define Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameMapsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameMapsSettings(UGameMapsSettings&&); \
	NO_API UGameMapsSettings(const UGameMapsSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameMapsSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameMapsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameMapsSettings)


#define Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h_61_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GameDefaultMap() { return STRUCT_OFFSET(UGameMapsSettings, GameDefaultMap); } \
	FORCEINLINE static uint32 __PPO__ServerDefaultMap() { return STRUCT_OFFSET(UGameMapsSettings, ServerDefaultMap); } \
	FORCEINLINE static uint32 __PPO__GlobalDefaultGameMode() { return STRUCT_OFFSET(UGameMapsSettings, GlobalDefaultGameMode); } \
	FORCEINLINE static uint32 __PPO__GlobalDefaultServerGameMode() { return STRUCT_OFFSET(UGameMapsSettings, GlobalDefaultServerGameMode); } \
	FORCEINLINE static uint32 __PPO__GameModeMapPrefixes() { return STRUCT_OFFSET(UGameMapsSettings, GameModeMapPrefixes); } \
	FORCEINLINE static uint32 __PPO__GameModeClassAliases() { return STRUCT_OFFSET(UGameMapsSettings, GameModeClassAliases); }


#define Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h_57_PROLOG
#define Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h_61_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h_61_RPC_WRAPPERS \
	Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h_61_INCLASS \
	Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h_61_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h_61_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h_61_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameMapsSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_EngineSettings_Classes_GameMapsSettings_h


#define FOREACH_ENUM_EFOURPLAYERSPLITSCREENTYPE(op) \
	op(EFourPlayerSplitScreenType::Grid) \
	op(EFourPlayerSplitScreenType::Vertical) 
#define FOREACH_ENUM_ETHREEPLAYERSPLITSCREENTYPE(op) \
	op(EThreePlayerSplitScreenType::FavorTop) \
	op(EThreePlayerSplitScreenType::FavorBottom) \
	op(EThreePlayerSplitScreenType::Vertical) 
#define FOREACH_ENUM_ETWOPLAYERSPLITSCREENTYPE(op) \
	op(ETwoPlayerSplitScreenType::Horizontal) \
	op(ETwoPlayerSplitScreenType::Vertical) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
