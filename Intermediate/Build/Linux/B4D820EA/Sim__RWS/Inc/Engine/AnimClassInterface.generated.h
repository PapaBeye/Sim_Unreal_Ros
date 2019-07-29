// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimClassInterface_generated_h
#error "AnimClassInterface.generated.h already included, missing '#pragma once' in AnimClassInterface.h"
#endif
#define ENGINE_AnimClassInterface_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_21_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimClassInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimClassInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimClassInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimClassInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimClassInterface(UAnimClassInterface&&); \
	NO_API UAnimClassInterface(const UAnimClassInterface&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimClassInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimClassInterface(UAnimClassInterface&&); \
	NO_API UAnimClassInterface(const UAnimClassInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimClassInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimClassInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimClassInterface)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_21_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAnimClassInterface(); \
	friend struct Z_Construct_UClass_UAnimClassInterface_Statics; \
public: \
	DECLARE_CLASS(UAnimClassInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimClassInterface)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_21_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_21_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_21_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_21_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_21_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_21_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAnimClassInterface() {} \
public: \
	typedef UAnimClassInterface UClassType; \
	typedef IAnimClassInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_21_INCLASS_IINTERFACE \
protected: \
	virtual ~IAnimClassInterface() {} \
public: \
	typedef UAnimClassInterface UClassType; \
	typedef IAnimClassInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_18_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_21_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_21_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
