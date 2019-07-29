// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCapturedPixels;
struct FFrameMetrics;
class UTexture;
#ifdef MOVIESCENECAPTURE_UserDefinedCaptureProtocol_generated_h
#error "UserDefinedCaptureProtocol.generated.h already included, missing '#pragma once' in UserDefinedCaptureProtocol.h"
#endif
#define MOVIESCENECAPTURE_UserDefinedCaptureProtocol_generated_h

#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCapturedPixels_Statics; \
	MOVIESCENECAPTURE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_26_DELEGATE \
struct _Script_MovieSceneCapture_eventOnReceiveCapturedPixels_Parms \
{ \
	FCapturedPixels Pixels; \
	FName StreamName; \
	FFrameMetrics FrameMetrics; \
}; \
static inline void FOnReceiveCapturedPixels_DelegateWrapper(const FScriptDelegate& OnReceiveCapturedPixels, FCapturedPixels const& Pixels, FName StreamName, FFrameMetrics FrameMetrics) \
{ \
	_Script_MovieSceneCapture_eventOnReceiveCapturedPixels_Parms Parms; \
	Parms.Pixels=Pixels; \
	Parms.StreamName=StreamName; \
	Parms.FrameMetrics=FrameMetrics; \
	OnReceiveCapturedPixels.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_37_RPC_WRAPPERS \
	virtual bool OnCanFinalize_Implementation() const; \
	virtual bool OnSetup_Implementation(); \
 \
	DECLARE_FUNCTION(execGetCurrentFrameMetrics) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFrameMetrics*)Z_Param__Result=P_THIS->GetCurrentFrameMetrics(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateFilename) \
	{ \
		P_GET_STRUCT_REF(FFrameMetrics,Z_Param_Out_InFrameMetrics); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GenerateFilename(Z_Param_Out_InFrameMetrics); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopCapturingFinalPixels) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopCapturingFinalPixels(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartCapturingFinalPixels) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_StreamName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartCapturingFinalPixels(Z_Param_StreamName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResolveBuffer) \
	{ \
		P_GET_OBJECT(UTexture,Z_Param_Buffer); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BufferName); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Handler); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResolveBuffer(Z_Param_Buffer,Z_Param_BufferName,FOnReceiveCapturedPixels(Z_Param_Handler)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPushBufferToStream) \
	{ \
		P_GET_OBJECT(UTexture,Z_Param_Buffer); \
		P_GET_PROPERTY(UNameProperty,Z_Param_StreamName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PushBufferToStream(Z_Param_Buffer,Z_Param_StreamName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBindToStream) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_StreamName); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Handler); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BindToStream(Z_Param_StreamName,FOnReceiveCapturedPixels(Z_Param_Handler)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCanFinalize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->OnCanFinalize_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSetup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->OnSetup_Implementation(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentFrameMetrics) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFrameMetrics*)Z_Param__Result=P_THIS->GetCurrentFrameMetrics(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateFilename) \
	{ \
		P_GET_STRUCT_REF(FFrameMetrics,Z_Param_Out_InFrameMetrics); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GenerateFilename(Z_Param_Out_InFrameMetrics); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopCapturingFinalPixels) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopCapturingFinalPixels(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartCapturingFinalPixels) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_StreamName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartCapturingFinalPixels(Z_Param_StreamName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResolveBuffer) \
	{ \
		P_GET_OBJECT(UTexture,Z_Param_Buffer); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BufferName); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Handler); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResolveBuffer(Z_Param_Buffer,Z_Param_BufferName,FOnReceiveCapturedPixels(Z_Param_Handler)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPushBufferToStream) \
	{ \
		P_GET_OBJECT(UTexture,Z_Param_Buffer); \
		P_GET_PROPERTY(UNameProperty,Z_Param_StreamName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PushBufferToStream(Z_Param_Buffer,Z_Param_StreamName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBindToStream) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_StreamName); \
		P_GET_PROPERTY(UDelegateProperty,Z_Param_Handler); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BindToStream(Z_Param_StreamName,FOnReceiveCapturedPixels(Z_Param_Handler)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnCanFinalize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->OnCanFinalize_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSetup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->OnSetup_Implementation(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_37_EVENT_PARMS \
	struct UserDefinedCaptureProtocol_eventOnCanFinalize_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		UserDefinedCaptureProtocol_eventOnCanFinalize_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct UserDefinedCaptureProtocol_eventOnSetup_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		UserDefinedCaptureProtocol_eventOnSetup_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_37_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserDefinedCaptureProtocol(); \
	friend struct Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics; \
public: \
	DECLARE_CLASS(UUserDefinedCaptureProtocol, UMovieSceneImageCaptureProtocolBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), NO_API) \
	DECLARE_SERIALIZER(UUserDefinedCaptureProtocol)


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUUserDefinedCaptureProtocol(); \
	friend struct Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics; \
public: \
	DECLARE_CLASS(UUserDefinedCaptureProtocol, UMovieSceneImageCaptureProtocolBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), NO_API) \
	DECLARE_SERIALIZER(UUserDefinedCaptureProtocol)


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserDefinedCaptureProtocol(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserDefinedCaptureProtocol) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserDefinedCaptureProtocol); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserDefinedCaptureProtocol); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserDefinedCaptureProtocol(UUserDefinedCaptureProtocol&&); \
	NO_API UUserDefinedCaptureProtocol(const UUserDefinedCaptureProtocol&); \
public:


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserDefinedCaptureProtocol(UUserDefinedCaptureProtocol&&); \
	NO_API UUserDefinedCaptureProtocol(const UUserDefinedCaptureProtocol&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserDefinedCaptureProtocol); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserDefinedCaptureProtocol); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserDefinedCaptureProtocol)


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_37_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__World() { return STRUCT_OFFSET(UUserDefinedCaptureProtocol, World); }


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_31_PROLOG \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_37_EVENT_PARMS


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_37_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_37_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_37_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_37_INCLASS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_37_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_37_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_37_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_37_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_238_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWriteImageToDisk) \
	{ \
		P_GET_STRUCT_REF(FCapturedPixels,Z_Param_Out_PixelData); \
		P_GET_PROPERTY(UNameProperty,Z_Param_StreamName); \
		P_GET_STRUCT_REF(FFrameMetrics,Z_Param_Out_FrameMetrics); \
		P_GET_UBOOL(Z_Param_bCopyImageData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WriteImageToDisk(Z_Param_Out_PixelData,Z_Param_StreamName,Z_Param_Out_FrameMetrics,Z_Param_bCopyImageData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateFilenameForCurrentFrame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GenerateFilenameForCurrentFrame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateFilenameForBuffer) \
	{ \
		P_GET_OBJECT(UTexture,Z_Param_Buffer); \
		P_GET_PROPERTY(UNameProperty,Z_Param_StreamName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GenerateFilenameForBuffer(Z_Param_Buffer,Z_Param_StreamName); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_238_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWriteImageToDisk) \
	{ \
		P_GET_STRUCT_REF(FCapturedPixels,Z_Param_Out_PixelData); \
		P_GET_PROPERTY(UNameProperty,Z_Param_StreamName); \
		P_GET_STRUCT_REF(FFrameMetrics,Z_Param_Out_FrameMetrics); \
		P_GET_UBOOL(Z_Param_bCopyImageData); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WriteImageToDisk(Z_Param_Out_PixelData,Z_Param_StreamName,Z_Param_Out_FrameMetrics,Z_Param_bCopyImageData); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateFilenameForCurrentFrame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GenerateFilenameForCurrentFrame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateFilenameForBuffer) \
	{ \
		P_GET_OBJECT(UTexture,Z_Param_Buffer); \
		P_GET_PROPERTY(UNameProperty,Z_Param_StreamName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GenerateFilenameForBuffer(Z_Param_Buffer,Z_Param_StreamName); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_238_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserDefinedImageCaptureProtocol(); \
	friend struct Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics; \
public: \
	DECLARE_CLASS(UUserDefinedImageCaptureProtocol, UUserDefinedCaptureProtocol, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), NO_API) \
	DECLARE_SERIALIZER(UUserDefinedImageCaptureProtocol) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_238_INCLASS \
private: \
	static void StaticRegisterNativesUUserDefinedImageCaptureProtocol(); \
	friend struct Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics; \
public: \
	DECLARE_CLASS(UUserDefinedImageCaptureProtocol, UUserDefinedCaptureProtocol, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/MovieSceneCapture"), NO_API) \
	DECLARE_SERIALIZER(UUserDefinedImageCaptureProtocol) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_238_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserDefinedImageCaptureProtocol(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserDefinedImageCaptureProtocol) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserDefinedImageCaptureProtocol); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserDefinedImageCaptureProtocol); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserDefinedImageCaptureProtocol(UUserDefinedImageCaptureProtocol&&); \
	NO_API UUserDefinedImageCaptureProtocol(const UUserDefinedImageCaptureProtocol&); \
public:


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_238_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserDefinedImageCaptureProtocol(UUserDefinedImageCaptureProtocol&&); \
	NO_API UUserDefinedImageCaptureProtocol(const UUserDefinedImageCaptureProtocol&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserDefinedImageCaptureProtocol); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserDefinedImageCaptureProtocol); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserDefinedImageCaptureProtocol)


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_238_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_232_PROLOG
#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_238_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_238_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_238_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_238_INCLASS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_238_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_238_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_238_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_238_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_238_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_238_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
