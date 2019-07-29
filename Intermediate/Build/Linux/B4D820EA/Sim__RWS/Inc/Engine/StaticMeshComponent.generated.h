// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class UStaticMesh;
#ifdef ENGINE_StaticMeshComponent_generated_h
#error "StaticMeshComponent.generated.h already included, missing '#pragma once' in StaticMeshComponent.h"
#endif
#define ENGINE_StaticMeshComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPaintedVertex_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_173_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetReverseCulling) \
	{ \
		P_GET_UBOOL(Z_Param_ReverseCulling); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetReverseCulling(Z_Param_ReverseCulling); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalBounds) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Min); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetLocalBounds(Z_Param_Out_Min,Z_Param_Out_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDistanceFieldSelfShadowBias) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDistanceFieldSelfShadowBias(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetForcedLodModel) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewForcedLodModel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetForcedLodModel(Z_Param_NewForcedLodModel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStaticMesh) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_NewMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetStaticMesh(Z_Param_NewMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_StaticMesh) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_OldStaticMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_StaticMesh(Z_Param_OldStaticMesh); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_173_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetReverseCulling) \
	{ \
		P_GET_UBOOL(Z_Param_ReverseCulling); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetReverseCulling(Z_Param_ReverseCulling); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocalBounds) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Min); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Max); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetLocalBounds(Z_Param_Out_Min,Z_Param_Out_Max); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDistanceFieldSelfShadowBias) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDistanceFieldSelfShadowBias(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetForcedLodModel) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewForcedLodModel); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetForcedLodModel(Z_Param_NewForcedLodModel); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStaticMesh) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_NewMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetStaticMesh(Z_Param_NewMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_StaticMesh) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_OldStaticMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_StaticMesh(Z_Param_OldStaticMesh); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_173_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UStaticMeshComponent, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_173_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStaticMeshComponent(); \
	friend struct Z_Construct_UClass_UStaticMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UStaticMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_UStaticMeshComponent, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStaticMeshComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_173_ARCHIVESERIALIZER \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_173_INCLASS \
private: \
	static void StaticRegisterNativesUStaticMeshComponent(); \
	friend struct Z_Construct_UClass_UStaticMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UStaticMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_UStaticMeshComponent, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStaticMeshComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_173_ARCHIVESERIALIZER \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_173_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStaticMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStaticMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStaticMeshComponent(UStaticMeshComponent&&); \
	NO_API UStaticMeshComponent(const UStaticMeshComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_173_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStaticMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStaticMeshComponent(UStaticMeshComponent&&); \
	NO_API UStaticMeshComponent(const UStaticMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStaticMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMeshComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_173_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StaticMesh() { return STRUCT_OFFSET(UStaticMeshComponent, StaticMesh); }


#define Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_170_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_173_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_173_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_173_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_173_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_173_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_173_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_173_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_173_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_173_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_173_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class StaticMeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
