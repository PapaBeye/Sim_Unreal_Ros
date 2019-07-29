// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
struct FVector2D;
class ULocalPlayer;
class UUserWidget;
class UMaterialInstanceDynamic;
class UTextureRenderTarget2D;
#ifdef UMG_WidgetComponent_generated_h
#error "WidgetComponent.generated.h already included, missing '#pragma once' in WidgetComponent.h"
#endif
#define UMG_WidgetComponent_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_73_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetTintColorAndOpacity) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_NewTintColorAndOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTintColorAndOpacity(Z_Param_NewTintColorAndOpacity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBackgroundColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_NewBackgroundColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBackgroundColor(Z_Param_NewBackgroundColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestRedraw) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestRedraw(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDrawSize) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDrawSize(Z_Param_Size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDrawSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetDrawSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwnerPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULocalPlayer**)Z_Param__Result=P_THIS->GetOwnerPlayer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetManuallyRedraw) \
	{ \
		P_GET_UBOOL(Z_Param_bUseManualRedraw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetManuallyRedraw(Z_Param_bUseManualRedraw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOwnerPlayer) \
	{ \
		P_GET_OBJECT(ULocalPlayer,Z_Param_LocalPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOwnerPlayer(Z_Param_LocalPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWidget) \
	{ \
		P_GET_OBJECT(UUserWidget,Z_Param_Widget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWidget(Z_Param_Widget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaterialInstance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetMaterialInstance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRenderTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->GetRenderTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserWidgetObject) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUserWidget**)Z_Param__Result=P_THIS->GetUserWidgetObject(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetTintColorAndOpacity) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_NewTintColorAndOpacity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTintColorAndOpacity(Z_Param_NewTintColorAndOpacity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBackgroundColor) \
	{ \
		P_GET_STRUCT(FLinearColor,Z_Param_NewBackgroundColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBackgroundColor(Z_Param_NewBackgroundColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestRedraw) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestRedraw(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDrawSize) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_Size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDrawSize(Z_Param_Size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDrawSize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetDrawSize(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOwnerPlayer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULocalPlayer**)Z_Param__Result=P_THIS->GetOwnerPlayer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetManuallyRedraw) \
	{ \
		P_GET_UBOOL(Z_Param_bUseManualRedraw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetManuallyRedraw(Z_Param_bUseManualRedraw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOwnerPlayer) \
	{ \
		P_GET_OBJECT(ULocalPlayer,Z_Param_LocalPlayer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOwnerPlayer(Z_Param_LocalPlayer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWidget) \
	{ \
		P_GET_OBJECT(UUserWidget,Z_Param_Widget); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWidget(Z_Param_Widget); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaterialInstance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetMaterialInstance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRenderTarget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->GetRenderTarget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUserWidgetObject) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUserWidget**)Z_Param__Result=P_THIS->GetUserWidgetObject(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetComponent(); \
	friend struct Z_Construct_UClass_UWidgetComponent_Statics; \
public: \
	DECLARE_CLASS(UWidgetComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidgetComponent)


#define Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_73_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetComponent(); \
	friend struct Z_Construct_UClass_UWidgetComponent_Statics; \
public: \
	DECLARE_CLASS(UWidgetComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidgetComponent)


#define Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_73_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetComponent(UWidgetComponent&&); \
	NO_API UWidgetComponent(const UWidgetComponent&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_73_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetComponent(UWidgetComponent&&); \
	NO_API UWidgetComponent(const UWidgetComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetComponent)


#define Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_73_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Space() { return STRUCT_OFFSET(UWidgetComponent, Space); } \
	FORCEINLINE static uint32 __PPO__TimingPolicy() { return STRUCT_OFFSET(UWidgetComponent, TimingPolicy); } \
	FORCEINLINE static uint32 __PPO__WidgetClass() { return STRUCT_OFFSET(UWidgetComponent, WidgetClass); } \
	FORCEINLINE static uint32 __PPO__DrawSize() { return STRUCT_OFFSET(UWidgetComponent, DrawSize); } \
	FORCEINLINE static uint32 __PPO__bManuallyRedraw() { return STRUCT_OFFSET(UWidgetComponent, bManuallyRedraw); } \
	FORCEINLINE static uint32 __PPO__bRedrawRequested() { return STRUCT_OFFSET(UWidgetComponent, bRedrawRequested); } \
	FORCEINLINE static uint32 __PPO__RedrawTime() { return STRUCT_OFFSET(UWidgetComponent, RedrawTime); } \
	FORCEINLINE static uint32 __PPO__CurrentDrawSize() { return STRUCT_OFFSET(UWidgetComponent, CurrentDrawSize); } \
	FORCEINLINE static uint32 __PPO__bDrawAtDesiredSize() { return STRUCT_OFFSET(UWidgetComponent, bDrawAtDesiredSize); } \
	FORCEINLINE static uint32 __PPO__Pivot() { return STRUCT_OFFSET(UWidgetComponent, Pivot); } \
	FORCEINLINE static uint32 __PPO__bReceiveHardwareInput() { return STRUCT_OFFSET(UWidgetComponent, bReceiveHardwareInput); } \
	FORCEINLINE static uint32 __PPO__bWindowFocusable() { return STRUCT_OFFSET(UWidgetComponent, bWindowFocusable); } \
	FORCEINLINE static uint32 __PPO__bApplyGammaCorrection() { return STRUCT_OFFSET(UWidgetComponent, bApplyGammaCorrection); } \
	FORCEINLINE static uint32 __PPO__OwnerPlayer() { return STRUCT_OFFSET(UWidgetComponent, OwnerPlayer); } \
	FORCEINLINE static uint32 __PPO__BackgroundColor() { return STRUCT_OFFSET(UWidgetComponent, BackgroundColor); } \
	FORCEINLINE static uint32 __PPO__TintColorAndOpacity() { return STRUCT_OFFSET(UWidgetComponent, TintColorAndOpacity); } \
	FORCEINLINE static uint32 __PPO__OpacityFromTexture() { return STRUCT_OFFSET(UWidgetComponent, OpacityFromTexture); } \
	FORCEINLINE static uint32 __PPO__BlendMode() { return STRUCT_OFFSET(UWidgetComponent, BlendMode); } \
	FORCEINLINE static uint32 __PPO__bIsTwoSided() { return STRUCT_OFFSET(UWidgetComponent, bIsTwoSided); } \
	FORCEINLINE static uint32 __PPO__TickWhenOffscreen() { return STRUCT_OFFSET(UWidgetComponent, TickWhenOffscreen); } \
	FORCEINLINE static uint32 __PPO__Widget() { return STRUCT_OFFSET(UWidgetComponent, Widget); } \
	FORCEINLINE static uint32 __PPO__BodySetup() { return STRUCT_OFFSET(UWidgetComponent, BodySetup); } \
	FORCEINLINE static uint32 __PPO__TranslucentMaterial() { return STRUCT_OFFSET(UWidgetComponent, TranslucentMaterial); } \
	FORCEINLINE static uint32 __PPO__TranslucentMaterial_OneSided() { return STRUCT_OFFSET(UWidgetComponent, TranslucentMaterial_OneSided); } \
	FORCEINLINE static uint32 __PPO__OpaqueMaterial() { return STRUCT_OFFSET(UWidgetComponent, OpaqueMaterial); } \
	FORCEINLINE static uint32 __PPO__OpaqueMaterial_OneSided() { return STRUCT_OFFSET(UWidgetComponent, OpaqueMaterial_OneSided); } \
	FORCEINLINE static uint32 __PPO__MaskedMaterial() { return STRUCT_OFFSET(UWidgetComponent, MaskedMaterial); } \
	FORCEINLINE static uint32 __PPO__MaskedMaterial_OneSided() { return STRUCT_OFFSET(UWidgetComponent, MaskedMaterial_OneSided); } \
	FORCEINLINE static uint32 __PPO__RenderTarget() { return STRUCT_OFFSET(UWidgetComponent, RenderTarget); } \
	FORCEINLINE static uint32 __PPO__MaterialInstance() { return STRUCT_OFFSET(UWidgetComponent, MaterialInstance); } \
	FORCEINLINE static uint32 __PPO__bAddedToScreen() { return STRUCT_OFFSET(UWidgetComponent, bAddedToScreen); } \
	FORCEINLINE static uint32 __PPO__bEditTimeUsable() { return STRUCT_OFFSET(UWidgetComponent, bEditTimeUsable); } \
	FORCEINLINE static uint32 __PPO__SharedLayerName() { return STRUCT_OFFSET(UWidgetComponent, SharedLayerName); } \
	FORCEINLINE static uint32 __PPO__LayerZOrder() { return STRUCT_OFFSET(UWidgetComponent, LayerZOrder); } \
	FORCEINLINE static uint32 __PPO__GeometryMode() { return STRUCT_OFFSET(UWidgetComponent, GeometryMode); } \
	FORCEINLINE static uint32 __PPO__CylinderArcAngle() { return STRUCT_OFFSET(UWidgetComponent, CylinderArcAngle); }


#define Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_70_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_73_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_73_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_73_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_73_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_73_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_73_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_73_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_73_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WidgetComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h


#define FOREACH_ENUM_EWIDGETGEOMETRYMODE(op) \
	op(EWidgetGeometryMode::Plane) \
	op(EWidgetGeometryMode::Cylinder) 
#define FOREACH_ENUM_EWIDGETBLENDMODE(op) \
	op(EWidgetBlendMode::Opaque) \
	op(EWidgetBlendMode::Masked) \
	op(EWidgetBlendMode::Transparent) 
#define FOREACH_ENUM_EWIDGETTIMINGPOLICY(op) \
	op(EWidgetTimingPolicy::RealTime) \
	op(EWidgetTimingPolicy::GameTime) 
#define FOREACH_ENUM_EWIDGETSPACE(op) \
	op(EWidgetSpace::World) \
	op(EWidgetSpace::Screen) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
