// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYTAGS_GameplayTagsManager_generated_h
#error "GameplayTagsManager.generated.h already included, missing '#pragma once' in GameplayTagsManager.h"
#endif
#define GAMEPLAYTAGS_GameplayTagsManager_generated_h

#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_141_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTagNode_Statics; \
	GAMEPLAYTAGS_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_88_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTagSource_Statics; \
	GAMEPLAYTAGS_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRestrictedGameplayTagTableRow_Statics; \
	GAMEPLAYTAGS_API static class UScriptStruct* StaticStruct(); \
	typedef FGameplayTagTableRow Super;


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTagTableRow_Statics; \
	GAMEPLAYTAGS_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_271_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_271_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_271_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayTagsManager(); \
	friend struct Z_Construct_UClass_UGameplayTagsManager_Statics; \
public: \
	DECLARE_CLASS(UGameplayTagsManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UGameplayTagsManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_271_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayTagsManager(); \
	friend struct Z_Construct_UClass_UGameplayTagsManager_Statics; \
public: \
	DECLARE_CLASS(UGameplayTagsManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UGameplayTagsManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_271_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayTagsManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTagsManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTagsManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTagsManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayTagsManager(UGameplayTagsManager&&); \
	NO_API UGameplayTagsManager(const UGameplayTagsManager&); \
public:


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_271_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayTagsManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayTagsManager(UGameplayTagsManager&&); \
	NO_API UGameplayTagsManager(const UGameplayTagsManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTagsManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTagsManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTagsManager)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_271_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TagSources() { return STRUCT_OFFSET(UGameplayTagsManager, TagSources); } \
	FORCEINLINE static uint32 __PPO__RestrictedGameplayTagTables() { return STRUCT_OFFSET(UGameplayTagsManager, RestrictedGameplayTagTables); } \
	FORCEINLINE static uint32 __PPO__GameplayTagTables() { return STRUCT_OFFSET(UGameplayTagsManager, GameplayTagTables); }


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_268_PROLOG
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_271_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_271_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_271_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_271_INCLASS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_271_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_271_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_271_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_271_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_271_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h_271_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameplayTagsManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsManager_h


#define FOREACH_ENUM_EGAMEPLAYTAGSELECTIONTYPE(op) \
	op(EGameplayTagSelectionType::None) \
	op(EGameplayTagSelectionType::NonRestrictedOnly) \
	op(EGameplayTagSelectionType::RestrictedOnly) \
	op(EGameplayTagSelectionType::All) 
#define FOREACH_ENUM_EGAMEPLAYTAGSOURCETYPE(op) \
	op(EGameplayTagSourceType::Native) \
	op(EGameplayTagSourceType::DefaultTagList) \
	op(EGameplayTagSourceType::TagList) \
	op(EGameplayTagSourceType::RestrictedTagList) \
	op(EGameplayTagSourceType::DataTable) \
	op(EGameplayTagSourceType::Invalid) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
