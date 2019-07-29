// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ChildConnection_generated_h
#error "ChildConnection.generated.h already included, missing '#pragma once' in ChildConnection.h"
#endif
#define ENGINE_ChildConnection_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_ChildConnection_h_17_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_ChildConnection_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_ChildConnection_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChildConnection(); \
	friend struct Z_Construct_UClass_UChildConnection_Statics; \
public: \
	DECLARE_CLASS(UChildConnection, UNetConnection, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UChildConnection)


#define Engine_Source_Runtime_Engine_Classes_Engine_ChildConnection_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUChildConnection(); \
	friend struct Z_Construct_UClass_UChildConnection_Statics; \
public: \
	DECLARE_CLASS(UChildConnection, UNetConnection, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UChildConnection)


#define Engine_Source_Runtime_Engine_Classes_Engine_ChildConnection_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UChildConnection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChildConnection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UChildConnection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChildConnection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UChildConnection(UChildConnection&&); \
	ENGINE_API UChildConnection(const UChildConnection&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_ChildConnection_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UChildConnection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UChildConnection(UChildConnection&&); \
	ENGINE_API UChildConnection(const UChildConnection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UChildConnection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChildConnection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChildConnection)


#define Engine_Source_Runtime_Engine_Classes_Engine_ChildConnection_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_ChildConnection_h_13_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_ChildConnection_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_ChildConnection_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_ChildConnection_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_ChildConnection_h_17_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_ChildConnection_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_ChildConnection_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_ChildConnection_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_ChildConnection_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_ChildConnection_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_ChildConnection_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ChildConnection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_ChildConnection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
