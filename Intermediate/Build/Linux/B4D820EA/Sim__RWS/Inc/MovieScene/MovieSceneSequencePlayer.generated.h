// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FMovieSceneObjectBindingID;
struct FFrameTime;
struct FQualifiedFrameTime;
struct FFrameRate;
#ifdef MOVIESCENE_MovieSceneSequencePlayer_generated_h
#error "MovieSceneSequencePlayer.generated.h already included, missing '#pragma once' in MovieSceneSequencePlayer.h"
#endif
#define MOVIESCENE_MovieSceneSequencePlayer_generated_h

#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_16_DELEGATE \
static inline void FOnMovieSceneSequencePlayerEvent_DelegateWrapper(const FMulticastScriptDelegate& OnMovieSceneSequencePlayerEvent) \
{ \
	OnMovieSceneSequencePlayerEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_126_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetObjectBindings) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_InObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FMovieSceneObjectBindingID>*)Z_Param__Result=P_THIS->GetObjectBindings(Z_Param_InObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoundObjects) \
	{ \
		P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_ObjectBinding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UObject*>*)Z_Param__Result=P_THIS->GetBoundObjects(Z_Param_ObjectBinding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDisableCameraCuts) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetDisableCameraCuts(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDisableCameraCuts) \
	{ \
		P_GET_UBOOL(Z_Param_bInDisableCameraCuts); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDisableCameraCuts(Z_Param_bInDisableCameraCuts); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlayRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlayRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlayRate(Z_Param_PlayRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPlayRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsReversed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsReversed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPaused) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPaused(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJumpToSeconds) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeInSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->JumpToSeconds(Z_Param_TimeInSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScrubToSeconds) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeInSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ScrubToSeconds(Z_Param_TimeInSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayToSeconds) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeInSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayToSeconds(Z_Param_TimeInSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJumpToFrame) \
	{ \
		P_GET_STRUCT(FFrameTime,Z_Param_NewPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->JumpToFrame(Z_Param_NewPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScrubToFrame) \
	{ \
		P_GET_STRUCT(FFrameTime,Z_Param_NewPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ScrubToFrame(Z_Param_NewPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayToFrame) \
	{ \
		P_GET_STRUCT(FFrameTime,Z_Param_NewPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayToFrame(Z_Param_NewPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTimeRange) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTimeRange(Z_Param_StartTime,Z_Param_Duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFrameRange) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_StartFrame); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFrameRange(Z_Param_StartFrame,Z_Param_Duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEndTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQualifiedFrameTime*)Z_Param__Result=P_THIS->GetEndTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStartTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQualifiedFrameTime*)Z_Param__Result=P_THIS->GetStartTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFrameRate) \
	{ \
		P_GET_STRUCT(FFrameRate,Z_Param_FrameRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFrameRate(Z_Param_FrameRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFrameRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFrameRate*)Z_Param__Result=P_THIS->GetFrameRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFrameDuration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetFrameDuration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDuration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQualifiedFrameTime*)Z_Param__Result=P_THIS->GetDuration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQualifiedFrameTime*)Z_Param__Result=P_THIS->GetCurrentTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJumpToPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPlaybackPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->JumpToPosition(Z_Param_NewPlaybackPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlaybackRange) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewStartTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewEndTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlaybackRange(Z_Param_NewStartTime,Z_Param_NewEndTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlaybackPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPlaybackPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlaybackPosition(Z_Param_NewPlaybackPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaybackEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPlaybackEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaybackStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPlaybackStart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLength(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaybackPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPlaybackPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGoToEndAndStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GoToEndAndStop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Stop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScrub) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Scrub(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPause) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Pause(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayLooping) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumLoops); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayLooping(Z_Param_NumLoops); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangePlaybackDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangePlaybackDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayReverse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayReverse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Play(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_126_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetObjectBindings) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_InObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FMovieSceneObjectBindingID>*)Z_Param__Result=P_THIS->GetObjectBindings(Z_Param_InObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoundObjects) \
	{ \
		P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_ObjectBinding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UObject*>*)Z_Param__Result=P_THIS->GetBoundObjects(Z_Param_ObjectBinding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDisableCameraCuts) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetDisableCameraCuts(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDisableCameraCuts) \
	{ \
		P_GET_UBOOL(Z_Param_bInDisableCameraCuts); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDisableCameraCuts(Z_Param_bInDisableCameraCuts); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlayRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_PlayRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlayRate(Z_Param_PlayRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlayRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPlayRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsReversed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsReversed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPaused) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPaused(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlaying) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsPlaying(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJumpToSeconds) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeInSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->JumpToSeconds(Z_Param_TimeInSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScrubToSeconds) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeInSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ScrubToSeconds(Z_Param_TimeInSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayToSeconds) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_TimeInSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayToSeconds(Z_Param_TimeInSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJumpToFrame) \
	{ \
		P_GET_STRUCT(FFrameTime,Z_Param_NewPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->JumpToFrame(Z_Param_NewPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScrubToFrame) \
	{ \
		P_GET_STRUCT(FFrameTime,Z_Param_NewPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ScrubToFrame(Z_Param_NewPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayToFrame) \
	{ \
		P_GET_STRUCT(FFrameTime,Z_Param_NewPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayToFrame(Z_Param_NewPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTimeRange) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTimeRange(Z_Param_StartTime,Z_Param_Duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFrameRange) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_StartFrame); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Duration); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFrameRange(Z_Param_StartFrame,Z_Param_Duration); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEndTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQualifiedFrameTime*)Z_Param__Result=P_THIS->GetEndTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStartTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQualifiedFrameTime*)Z_Param__Result=P_THIS->GetStartTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFrameRate) \
	{ \
		P_GET_STRUCT(FFrameRate,Z_Param_FrameRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFrameRate(Z_Param_FrameRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFrameRate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FFrameRate*)Z_Param__Result=P_THIS->GetFrameRate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFrameDuration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetFrameDuration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDuration) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQualifiedFrameTime*)Z_Param__Result=P_THIS->GetDuration(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FQualifiedFrameTime*)Z_Param__Result=P_THIS->GetCurrentTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execJumpToPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPlaybackPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->JumpToPosition(Z_Param_NewPlaybackPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlaybackRange) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewStartTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewEndTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlaybackRange(Z_Param_NewStartTime,Z_Param_NewEndTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlaybackPosition) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewPlaybackPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlaybackPosition(Z_Param_NewPlaybackPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaybackEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPlaybackEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaybackStart) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPlaybackStart(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLength) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetLength(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPlaybackPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPlaybackPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGoToEndAndStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GoToEndAndStop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Stop(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execScrub) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Scrub(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPause) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Pause(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayLooping) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumLoops); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayLooping(Z_Param_NumLoops); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangePlaybackDirection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangePlaybackDirection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayReverse) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayReverse(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Play(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_126_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneSequencePlayer(); \
	friend struct Z_Construct_UClass_UMovieSceneSequencePlayer_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSequencePlayer, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneSequencePlayer)


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_126_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneSequencePlayer(); \
	friend struct Z_Construct_UClass_UMovieSceneSequencePlayer_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneSequencePlayer, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MovieScene"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneSequencePlayer)


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_126_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneSequencePlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSequencePlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneSequencePlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSequencePlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneSequencePlayer(UMovieSceneSequencePlayer&&); \
	NO_API UMovieSceneSequencePlayer(const UMovieSceneSequencePlayer&); \
public:


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_126_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneSequencePlayer(UMovieSceneSequencePlayer&&); \
	NO_API UMovieSceneSequencePlayer(const UMovieSceneSequencePlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneSequencePlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneSequencePlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneSequencePlayer)


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_126_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Status() { return STRUCT_OFFSET(UMovieSceneSequencePlayer, Status); } \
	FORCEINLINE static uint32 __PPO__Sequence() { return STRUCT_OFFSET(UMovieSceneSequencePlayer, Sequence); } \
	FORCEINLINE static uint32 __PPO__StartTime() { return STRUCT_OFFSET(UMovieSceneSequencePlayer, StartTime); } \
	FORCEINLINE static uint32 __PPO__DurationFrames() { return STRUCT_OFFSET(UMovieSceneSequencePlayer, DurationFrames); } \
	FORCEINLINE static uint32 __PPO__CurrentNumLoops() { return STRUCT_OFFSET(UMovieSceneSequencePlayer, CurrentNumLoops); } \
	FORCEINLINE static uint32 __PPO__PlaybackSettings() { return STRUCT_OFFSET(UMovieSceneSequencePlayer, PlaybackSettings); } \
	FORCEINLINE static uint32 __PPO__RootTemplateInstance() { return STRUCT_OFFSET(UMovieSceneSequencePlayer, RootTemplateInstance); }


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_120_PROLOG
#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_126_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_126_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_126_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_126_INCLASS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_126_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_126_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_126_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_126_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_126_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h_126_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieScene_Public_MovieSceneSequencePlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
