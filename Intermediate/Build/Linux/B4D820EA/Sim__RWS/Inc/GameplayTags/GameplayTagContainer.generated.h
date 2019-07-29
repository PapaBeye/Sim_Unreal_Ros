// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYTAGS_GameplayTagContainer_generated_h
#error "GameplayTagContainer.generated.h already included, missing '#pragma once' in GameplayTagContainer.h"
#endif
#define GAMEPLAYTAGS_GameplayTagContainer_generated_h

#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_964_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTagQuery_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__TokenStreamVersion() { return STRUCT_OFFSET(FGameplayTagQuery, TokenStreamVersion); } \
	FORCEINLINE static uint32 __PPO__TagDictionary() { return STRUCT_OFFSET(FGameplayTagQuery, TagDictionary); } \
	FORCEINLINE static uint32 __PPO__QueryTokenStream() { return STRUCT_OFFSET(FGameplayTagQuery, QueryTokenStream); } \
	FORCEINLINE static uint32 __PPO__UserDescription() { return STRUCT_OFFSET(FGameplayTagQuery, UserDescription); } \
	FORCEINLINE static uint32 __PPO__AutoDescription() { return STRUCT_OFFSET(FGameplayTagQuery, AutoDescription); }


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_909_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper_Statics; \
	GAMEPLAYTAGS_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_886_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTagReferenceHelper_Statics; \
	GAMEPLAYTAGS_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_268_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTagContainer_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__GameplayTags() { return STRUCT_OFFSET(FGameplayTagContainer, GameplayTags); } \
	FORCEINLINE static uint32 __PPO__ParentTags() { return STRUCT_OFFSET(FGameplayTagContainer, ParentTags); }


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTag_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__TagName() { return STRUCT_OFFSET(FGameplayTag, TagName); }


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1178_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1178_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1178_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQuery(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQuery_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQuery, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQuery)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1178_INCLASS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQuery(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQuery_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQuery, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQuery)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1178_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQuery(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQuery) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQuery); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQuery); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQuery(UEditableGameplayTagQuery&&); \
	NO_API UEditableGameplayTagQuery(const UEditableGameplayTagQuery&); \
public:


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1178_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQuery(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQuery(UEditableGameplayTagQuery&&); \
	NO_API UEditableGameplayTagQuery(const UEditableGameplayTagQuery&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQuery); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQuery); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQuery)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1178_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TagQueryExportText_Helper() { return STRUCT_OFFSET(UEditableGameplayTagQuery, TagQueryExportText_Helper); }


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1175_PROLOG
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1178_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1178_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1178_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1178_INCLASS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1178_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1178_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1178_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1178_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1178_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1178_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1209_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1209_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1209_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1209_INCLASS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1209_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression(UEditableGameplayTagQueryExpression&&); \
	NO_API UEditableGameplayTagQueryExpression(const UEditableGameplayTagQueryExpression&); \
public:


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1209_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression(UEditableGameplayTagQueryExpression&&); \
	NO_API UEditableGameplayTagQueryExpression(const UEditableGameplayTagQueryExpression&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1209_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1206_PROLOG
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1209_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1209_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1209_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1209_INCLASS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1209_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1209_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1209_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1209_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1209_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1209_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1225_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1225_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1225_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_AnyTagsMatch(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression_AnyTagsMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_AnyTagsMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1225_INCLASS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_AnyTagsMatch(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression_AnyTagsMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_AnyTagsMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1225_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_AnyTagsMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_AnyTagsMatch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_AnyTagsMatch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_AnyTagsMatch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression_AnyTagsMatch(UEditableGameplayTagQueryExpression_AnyTagsMatch&&); \
	NO_API UEditableGameplayTagQueryExpression_AnyTagsMatch(const UEditableGameplayTagQueryExpression_AnyTagsMatch&); \
public:


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1225_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_AnyTagsMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression_AnyTagsMatch(UEditableGameplayTagQueryExpression_AnyTagsMatch&&); \
	NO_API UEditableGameplayTagQueryExpression_AnyTagsMatch(const UEditableGameplayTagQueryExpression_AnyTagsMatch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_AnyTagsMatch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_AnyTagsMatch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_AnyTagsMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1225_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1222_PROLOG
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1225_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1225_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1225_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1225_INCLASS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1225_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1225_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1225_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1225_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1225_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1225_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1238_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1238_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1238_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_AllTagsMatch(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression_AllTagsMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_AllTagsMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1238_INCLASS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_AllTagsMatch(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression_AllTagsMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_AllTagsMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1238_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_AllTagsMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_AllTagsMatch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_AllTagsMatch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_AllTagsMatch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression_AllTagsMatch(UEditableGameplayTagQueryExpression_AllTagsMatch&&); \
	NO_API UEditableGameplayTagQueryExpression_AllTagsMatch(const UEditableGameplayTagQueryExpression_AllTagsMatch&); \
public:


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1238_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_AllTagsMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression_AllTagsMatch(UEditableGameplayTagQueryExpression_AllTagsMatch&&); \
	NO_API UEditableGameplayTagQueryExpression_AllTagsMatch(const UEditableGameplayTagQueryExpression_AllTagsMatch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_AllTagsMatch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_AllTagsMatch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_AllTagsMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1238_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1235_PROLOG
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1238_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1238_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1238_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1238_INCLASS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1238_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1238_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1238_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1238_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1238_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1238_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1251_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1251_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1251_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_NoTagsMatch(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression_NoTagsMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_NoTagsMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1251_INCLASS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_NoTagsMatch(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression_NoTagsMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_NoTagsMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1251_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_NoTagsMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_NoTagsMatch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_NoTagsMatch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_NoTagsMatch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression_NoTagsMatch(UEditableGameplayTagQueryExpression_NoTagsMatch&&); \
	NO_API UEditableGameplayTagQueryExpression_NoTagsMatch(const UEditableGameplayTagQueryExpression_NoTagsMatch&); \
public:


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1251_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_NoTagsMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression_NoTagsMatch(UEditableGameplayTagQueryExpression_NoTagsMatch&&); \
	NO_API UEditableGameplayTagQueryExpression_NoTagsMatch(const UEditableGameplayTagQueryExpression_NoTagsMatch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_NoTagsMatch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_NoTagsMatch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_NoTagsMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1251_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1248_PROLOG
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1251_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1251_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1251_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1251_INCLASS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1251_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1251_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1251_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1251_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1251_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1251_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1264_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1264_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1264_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_AnyExprMatch(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression_AnyExprMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_AnyExprMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1264_INCLASS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_AnyExprMatch(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression_AnyExprMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_AnyExprMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1264_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_AnyExprMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_AnyExprMatch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_AnyExprMatch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_AnyExprMatch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression_AnyExprMatch(UEditableGameplayTagQueryExpression_AnyExprMatch&&); \
	NO_API UEditableGameplayTagQueryExpression_AnyExprMatch(const UEditableGameplayTagQueryExpression_AnyExprMatch&); \
public:


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1264_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_AnyExprMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression_AnyExprMatch(UEditableGameplayTagQueryExpression_AnyExprMatch&&); \
	NO_API UEditableGameplayTagQueryExpression_AnyExprMatch(const UEditableGameplayTagQueryExpression_AnyExprMatch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_AnyExprMatch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_AnyExprMatch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_AnyExprMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1264_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1261_PROLOG
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1264_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1264_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1264_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1264_INCLASS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1264_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1264_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1264_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1264_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1264_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1264_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1277_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1277_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1277_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_AllExprMatch(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression_AllExprMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_AllExprMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1277_INCLASS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_AllExprMatch(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression_AllExprMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_AllExprMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1277_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_AllExprMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_AllExprMatch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_AllExprMatch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_AllExprMatch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression_AllExprMatch(UEditableGameplayTagQueryExpression_AllExprMatch&&); \
	NO_API UEditableGameplayTagQueryExpression_AllExprMatch(const UEditableGameplayTagQueryExpression_AllExprMatch&); \
public:


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1277_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_AllExprMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression_AllExprMatch(UEditableGameplayTagQueryExpression_AllExprMatch&&); \
	NO_API UEditableGameplayTagQueryExpression_AllExprMatch(const UEditableGameplayTagQueryExpression_AllExprMatch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_AllExprMatch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_AllExprMatch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_AllExprMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1277_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1274_PROLOG
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1277_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1277_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1277_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1277_INCLASS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1277_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1277_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1277_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1277_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1277_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1277_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1290_RPC_WRAPPERS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1290_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1290_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_NoExprMatch(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression_NoExprMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_NoExprMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1290_INCLASS \
private: \
	static void StaticRegisterNativesUEditableGameplayTagQueryExpression_NoExprMatch(); \
	friend struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics; \
public: \
	DECLARE_CLASS(UEditableGameplayTagQueryExpression_NoExprMatch, UEditableGameplayTagQueryExpression, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameplayTags"), NO_API) \
	DECLARE_SERIALIZER(UEditableGameplayTagQueryExpression_NoExprMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1290_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_NoExprMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_NoExprMatch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_NoExprMatch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_NoExprMatch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression_NoExprMatch(UEditableGameplayTagQueryExpression_NoExprMatch&&); \
	NO_API UEditableGameplayTagQueryExpression_NoExprMatch(const UEditableGameplayTagQueryExpression_NoExprMatch&); \
public:


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1290_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditableGameplayTagQueryExpression_NoExprMatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEditableGameplayTagQueryExpression_NoExprMatch(UEditableGameplayTagQueryExpression_NoExprMatch&&); \
	NO_API UEditableGameplayTagQueryExpression_NoExprMatch(const UEditableGameplayTagQueryExpression_NoExprMatch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditableGameplayTagQueryExpression_NoExprMatch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditableGameplayTagQueryExpression_NoExprMatch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditableGameplayTagQueryExpression_NoExprMatch)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1290_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1287_PROLOG
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1290_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1290_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1290_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1290_INCLASS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1290_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1290_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1290_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1290_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1290_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_1290_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h


#define FOREACH_ENUM_EGAMEPLAYTAGQUERYEXPRTYPE(op) \
	op(EGameplayTagQueryExprType::Undefined) \
	op(EGameplayTagQueryExprType::AnyTagsMatch) \
	op(EGameplayTagQueryExprType::AllTagsMatch) \
	op(EGameplayTagQueryExprType::NoTagsMatch) \
	op(EGameplayTagQueryExprType::AnyExprMatch) \
	op(EGameplayTagQueryExprType::AllExprMatch) \
	op(EGameplayTagQueryExprType::NoExprMatch) 
#define FOREACH_ENUM_EGAMEPLAYCONTAINERMATCHTYPE(op) \
	op(EGameplayContainerMatchType::Any) \
	op(EGameplayContainerMatchType::All) 
#define FOREACH_ENUM_EGAMEPLAYTAGMATCHTYPE(op) \
	op(EGameplayTagMatchType::Explicit) \
	op(EGameplayTagMatchType::IncludeParentTags) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
