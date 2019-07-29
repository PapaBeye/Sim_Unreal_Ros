// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLATECORE_CompositeFont_generated_h
#error "CompositeFont.generated.h already included, missing '#pragma once' in CompositeFont.h"
#endif
#define SLATECORE_CompositeFont_generated_h

#define Engine_Source_Runtime_SlateCore_Public_Fonts_CompositeFont_h_397_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCompositeFont_Statics; \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_SlateCore_Public_Fonts_CompositeFont_h_372_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCompositeSubFont_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FCompositeFallbackFont Super;


#define Engine_Source_Runtime_SlateCore_Public_Fonts_CompositeFont_h_351_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCompositeFallbackFont_Statics; \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_SlateCore_Public_Fonts_CompositeFont_h_323_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTypeface_Statics; \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_SlateCore_Public_Fonts_CompositeFont_h_290_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTypefaceEntry_Statics; \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_SlateCore_Public_Fonts_CompositeFont_h_138_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFontData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__FontFilename() { return STRUCT_OFFSET(FFontData, FontFilename); } \
	FORCEINLINE static uint32 __PPO__Hinting() { return STRUCT_OFFSET(FFontData, Hinting); } \
	FORCEINLINE static uint32 __PPO__LoadingPolicy() { return STRUCT_OFFSET(FFontData, LoadingPolicy); } \
	FORCEINLINE static uint32 __PPO__SubFaceIndex() { return STRUCT_OFFSET(FFontData, SubFaceIndex); } \
	FORCEINLINE static uint32 __PPO__FontFaceAsset() { return STRUCT_OFFSET(FFontData, FontFaceAsset); }


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_SlateCore_Public_Fonts_CompositeFont_h


#define FOREACH_ENUM_EFONTLAYOUTMETHOD(op) \
	op(EFontLayoutMethod::Metrics) \
	op(EFontLayoutMethod::BoundingBox) 
#define FOREACH_ENUM_EFONTLOADINGPOLICY(op) \
	op(EFontLoadingPolicy::LazyLoad) \
	op(EFontLoadingPolicy::Stream) \
	op(EFontLoadingPolicy::Inline) 
#define FOREACH_ENUM_EFONTHINTING(op) \
	op(EFontHinting::Default) \
	op(EFontHinting::Auto) \
	op(EFontHinting::AutoLight) \
	op(EFontHinting::Monochrome) \
	op(EFontHinting::None) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
