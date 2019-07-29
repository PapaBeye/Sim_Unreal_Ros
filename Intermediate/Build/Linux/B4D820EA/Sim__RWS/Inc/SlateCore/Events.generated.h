// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLATECORE_Events_generated_h
#error "Events.generated.h already included, missing '#pragma once' in Events.h"
#endif
#define SLATECORE_Events_generated_h

#define Engine_Source_Runtime_SlateCore_Public_Input_Events_h_996_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavigationEvent_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FInputEvent Super;


#define Engine_Source_Runtime_SlateCore_Public_Input_Events_h_919_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMotionEvent_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FInputEvent Super;


#define Engine_Source_Runtime_SlateCore_Public_Input_Events_h_633_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPointerEvent_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FInputEvent Super;


#define Engine_Source_Runtime_SlateCore_Public_Input_Events_h_551_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterEvent_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FInputEvent Super;


#define Engine_Source_Runtime_SlateCore_Public_Input_Events_h_488_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnalogInputEvent_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FKeyEvent Super;


#define Engine_Source_Runtime_SlateCore_Public_Input_Events_h_393_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKeyEvent_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FInputEvent Super;


#define Engine_Source_Runtime_SlateCore_Public_Input_Events_h_157_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputEvent_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_SlateCore_Public_Input_Events_h_108_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCaptureLostEvent_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_SlateCore_Public_Input_Events_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFocusEvent_Statics; \
	SLATECORE_API static class UScriptStruct* StaticStruct();


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_SlateCore_Public_Input_Events_h


#define FOREACH_ENUM_EFOCUSCAUSE(op) \
	op(EFocusCause::Mouse) \
	op(EFocusCause::Navigation) \
	op(EFocusCause::SetDirectly) \
	op(EFocusCause::Cleared) \
	op(EFocusCause::OtherWidgetLostFocus) \
	op(EFocusCause::WindowActivate) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
