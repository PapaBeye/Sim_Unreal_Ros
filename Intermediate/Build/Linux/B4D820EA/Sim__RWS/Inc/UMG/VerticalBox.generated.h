// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
class UVerticalBoxSlot;
#ifdef UMG_VerticalBox_generated_h
#error "VerticalBox.generated.h already included, missing '#pragma once' in VerticalBox.h"
#endif
#define UMG_VerticalBox_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddChildToVerticalBox) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVerticalBoxSlot**)Z_Param__Result=P_THIS->AddChildToVerticalBox(Z_Param_Content); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddChildToVerticalBox) \
	{ \
		P_GET_OBJECT(UWidget,Z_Param_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVerticalBoxSlot**)Z_Param__Result=P_THIS->AddChildToVerticalBox(Z_Param_Content); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVerticalBox(); \
	friend struct Z_Construct_UClass_UVerticalBox_Statics; \
public: \
	DECLARE_CLASS(UVerticalBox, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UVerticalBox)


#define Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUVerticalBox(); \
	friend struct Z_Construct_UClass_UVerticalBox_Statics; \
public: \
	DECLARE_CLASS(UVerticalBox, UPanelWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UVerticalBox)


#define Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVerticalBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVerticalBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVerticalBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVerticalBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVerticalBox(UVerticalBox&&); \
	NO_API UVerticalBox(const UVerticalBox&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVerticalBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVerticalBox(UVerticalBox&&); \
	NO_API UVerticalBox(const UVerticalBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVerticalBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVerticalBox); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVerticalBox)


#define Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_21_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VerticalBox."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_VerticalBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
