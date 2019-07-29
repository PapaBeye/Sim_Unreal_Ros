// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ParticleSpriteEmitter_generated_h
#error "ParticleSpriteEmitter.generated.h already included, missing '#pragma once' in ParticleSpriteEmitter.h"
#endif
#define ENGINE_ParticleSpriteEmitter_generated_h

#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSpriteEmitter_h_29_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSpriteEmitter_h_29_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSpriteEmitter_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUParticleSpriteEmitter(); \
	friend struct Z_Construct_UClass_UParticleSpriteEmitter_Statics; \
public: \
	DECLARE_CLASS(UParticleSpriteEmitter, UParticleEmitter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleSpriteEmitter)


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSpriteEmitter_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUParticleSpriteEmitter(); \
	friend struct Z_Construct_UClass_UParticleSpriteEmitter_Statics; \
public: \
	DECLARE_CLASS(UParticleSpriteEmitter, UParticleEmitter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UParticleSpriteEmitter)


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSpriteEmitter_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleSpriteEmitter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleSpriteEmitter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleSpriteEmitter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleSpriteEmitter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UParticleSpriteEmitter(UParticleSpriteEmitter&&); \
	ENGINE_API UParticleSpriteEmitter(const UParticleSpriteEmitter&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSpriteEmitter_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UParticleSpriteEmitter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UParticleSpriteEmitter(UParticleSpriteEmitter&&); \
	ENGINE_API UParticleSpriteEmitter(const UParticleSpriteEmitter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UParticleSpriteEmitter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UParticleSpriteEmitter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UParticleSpriteEmitter)


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSpriteEmitter_h_29_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSpriteEmitter_h_26_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSpriteEmitter_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSpriteEmitter_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSpriteEmitter_h_29_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSpriteEmitter_h_29_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSpriteEmitter_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Particles_ParticleSpriteEmitter_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSpriteEmitter_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSpriteEmitter_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSpriteEmitter_h_29_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Particles_ParticleSpriteEmitter_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ParticleSpriteEmitter."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Particles_ParticleSpriteEmitter_h


#define FOREACH_ENUM_EPARTICLESCREENALIGNMENT(op) \
	op(PSA_FacingCameraPosition) \
	op(PSA_Square) \
	op(PSA_Rectangle) \
	op(PSA_Velocity) \
	op(PSA_AwayFromCenter) \
	op(PSA_TypeSpecific) \
	op(PSA_FacingCameraDistanceBlend) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
