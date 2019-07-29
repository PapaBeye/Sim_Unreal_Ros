// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_BTService_generated_h
#error "BTService.generated.h already included, missing '#pragma once' in BTService.h"
#endif
#define AIMODULE_BTService_generated_h

#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTService_h_37_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTService_h_37_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTService_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBTService(); \
	friend struct Z_Construct_UClass_UBTService_Statics; \
public: \
	DECLARE_CLASS(UBTService, UBTAuxiliaryNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTService)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTService_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUBTService(); \
	friend struct Z_Construct_UClass_UBTService_Statics; \
public: \
	DECLARE_CLASS(UBTService, UBTAuxiliaryNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UBTService)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTService_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTService(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTService) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTService); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTService); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTService(UBTService&&); \
	NO_API UBTService(const UBTService&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTService_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBTService(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBTService(UBTService&&); \
	NO_API UBTService(const UBTService&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBTService); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBTService); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBTService)


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTService_h_37_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Interval() { return STRUCT_OFFSET(UBTService, Interval); } \
	FORCEINLINE static uint32 __PPO__RandomDeviation() { return STRUCT_OFFSET(UBTService, RandomDeviation); }


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTService_h_34_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTService_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTService_h_37_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTService_h_37_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTService_h_37_INCLASS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTService_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTService_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTService_h_37_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTService_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTService_h_37_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTService_h_37_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BTService."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BTService_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
