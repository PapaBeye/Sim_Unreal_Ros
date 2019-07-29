// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DemoNetConnection_generated_h
#error "DemoNetConnection.generated.h already included, missing '#pragma once' in DemoNetConnection.h"
#endif
#define ENGINE_DemoNetConnection_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_DemoNetConnection_h_60_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_DemoNetConnection_h_60_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_DemoNetConnection_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDemoNetConnection(); \
	friend struct Z_Construct_UClass_UDemoNetConnection_Statics; \
public: \
	DECLARE_CLASS(UDemoNetConnection, UNetConnection, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDemoNetConnection)


#define Engine_Source_Runtime_Engine_Classes_Engine_DemoNetConnection_h_60_INCLASS \
private: \
	static void StaticRegisterNativesUDemoNetConnection(); \
	friend struct Z_Construct_UClass_UDemoNetConnection_Statics; \
public: \
	DECLARE_CLASS(UDemoNetConnection, UNetConnection, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDemoNetConnection)


#define Engine_Source_Runtime_Engine_Classes_Engine_DemoNetConnection_h_60_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDemoNetConnection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDemoNetConnection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDemoNetConnection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDemoNetConnection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDemoNetConnection(UDemoNetConnection&&); \
	NO_API UDemoNetConnection(const UDemoNetConnection&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_DemoNetConnection_h_60_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDemoNetConnection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDemoNetConnection(UDemoNetConnection&&); \
	NO_API UDemoNetConnection(const UDemoNetConnection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDemoNetConnection); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDemoNetConnection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDemoNetConnection)


#define Engine_Source_Runtime_Engine_Classes_Engine_DemoNetConnection_h_60_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_DemoNetConnection_h_56_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_DemoNetConnection_h_60_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_DemoNetConnection_h_60_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_DemoNetConnection_h_60_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_DemoNetConnection_h_60_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_DemoNetConnection_h_60_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_DemoNetConnection_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_DemoNetConnection_h_60_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_DemoNetConnection_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_DemoNetConnection_h_60_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_DemoNetConnection_h_60_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DemoNetConnection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_DemoNetConnection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
