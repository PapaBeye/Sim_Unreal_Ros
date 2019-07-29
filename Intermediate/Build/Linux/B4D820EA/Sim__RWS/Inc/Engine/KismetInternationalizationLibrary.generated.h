// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_KismetInternationalizationLibrary_generated_h
#error "KismetInternationalizationLibrary.generated.h already included, missing '#pragma once' in KismetInternationalizationLibrary.h"
#endif
#define ENGINE_KismetInternationalizationLibrary_generated_h

#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearCurrentAssetGroupCulture) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_AssetGroup); \
		P_GET_UBOOL(Z_Param_SaveToConfig); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetInternationalizationLibrary::ClearCurrentAssetGroupCulture(Z_Param_AssetGroup,Z_Param_SaveToConfig); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentAssetGroupCulture) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_AssetGroup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetInternationalizationLibrary::GetCurrentAssetGroupCulture(Z_Param_AssetGroup); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentAssetGroupCulture) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_AssetGroup); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Culture); \
		P_GET_UBOOL(Z_Param_SaveToConfig); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInternationalizationLibrary::SetCurrentAssetGroupCulture(Z_Param_AssetGroup,Z_Param_Culture,Z_Param_SaveToConfig); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentLanguageAndLocale) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Culture); \
		P_GET_UBOOL(Z_Param_SaveToConfig); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInternationalizationLibrary::SetCurrentLanguageAndLocale(Z_Param_Culture,Z_Param_SaveToConfig); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentLocale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetInternationalizationLibrary::GetCurrentLocale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentLocale) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Culture); \
		P_GET_UBOOL(Z_Param_SaveToConfig); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInternationalizationLibrary::SetCurrentLocale(Z_Param_Culture,Z_Param_SaveToConfig); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentLanguage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetInternationalizationLibrary::GetCurrentLanguage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentLanguage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Culture); \
		P_GET_UBOOL(Z_Param_SaveToConfig); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInternationalizationLibrary::SetCurrentLanguage(Z_Param_Culture,Z_Param_SaveToConfig); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentCulture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetInternationalizationLibrary::GetCurrentCulture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentCulture) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Culture); \
		P_GET_UBOOL(Z_Param_SaveToConfig); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInternationalizationLibrary::SetCurrentCulture(Z_Param_Culture,Z_Param_SaveToConfig); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearCurrentAssetGroupCulture) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_AssetGroup); \
		P_GET_UBOOL(Z_Param_SaveToConfig); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UKismetInternationalizationLibrary::ClearCurrentAssetGroupCulture(Z_Param_AssetGroup,Z_Param_SaveToConfig); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentAssetGroupCulture) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_AssetGroup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetInternationalizationLibrary::GetCurrentAssetGroupCulture(Z_Param_AssetGroup); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentAssetGroupCulture) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_AssetGroup); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Culture); \
		P_GET_UBOOL(Z_Param_SaveToConfig); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInternationalizationLibrary::SetCurrentAssetGroupCulture(Z_Param_AssetGroup,Z_Param_Culture,Z_Param_SaveToConfig); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentLanguageAndLocale) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Culture); \
		P_GET_UBOOL(Z_Param_SaveToConfig); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInternationalizationLibrary::SetCurrentLanguageAndLocale(Z_Param_Culture,Z_Param_SaveToConfig); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentLocale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetInternationalizationLibrary::GetCurrentLocale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentLocale) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Culture); \
		P_GET_UBOOL(Z_Param_SaveToConfig); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInternationalizationLibrary::SetCurrentLocale(Z_Param_Culture,Z_Param_SaveToConfig); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentLanguage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetInternationalizationLibrary::GetCurrentLanguage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentLanguage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Culture); \
		P_GET_UBOOL(Z_Param_SaveToConfig); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInternationalizationLibrary::SetCurrentLanguage(Z_Param_Culture,Z_Param_SaveToConfig); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentCulture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UKismetInternationalizationLibrary::GetCurrentCulture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCurrentCulture) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Culture); \
		P_GET_UBOOL(Z_Param_SaveToConfig); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UKismetInternationalizationLibrary::SetCurrentCulture(Z_Param_Culture,Z_Param_SaveToConfig); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKismetInternationalizationLibrary(); \
	friend struct Z_Construct_UClass_UKismetInternationalizationLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetInternationalizationLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UKismetInternationalizationLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUKismetInternationalizationLibrary(); \
	friend struct Z_Construct_UClass_UKismetInternationalizationLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetInternationalizationLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UKismetInternationalizationLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetInternationalizationLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetInternationalizationLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetInternationalizationLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetInternationalizationLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetInternationalizationLibrary(UKismetInternationalizationLibrary&&); \
	NO_API UKismetInternationalizationLibrary(const UKismetInternationalizationLibrary&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetInternationalizationLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetInternationalizationLibrary(UKismetInternationalizationLibrary&&); \
	NO_API UKismetInternationalizationLibrary(const UKismetInternationalizationLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetInternationalizationLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetInternationalizationLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetInternationalizationLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_14_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_11_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_14_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Kismet_KismetInternationalizationLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
