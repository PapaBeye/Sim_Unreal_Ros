// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Emitter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmitter() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_AEmitter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AEmitter();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UFunction* Z_Construct_UFunction_AEmitter_Activate();
	ENGINE_API UFunction* Z_Construct_UFunction_AEmitter_Deactivate();
	ENGINE_API UFunction* Z_Construct_UFunction_AEmitter_IsActive();
	ENGINE_API UFunction* Z_Construct_UFunction_AEmitter_OnParticleSystemFinished();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_AEmitter_OnRep_bCurrentlyActive();
	ENGINE_API UFunction* Z_Construct_UFunction_AEmitter_SetActorParameter();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_AEmitter_SetColorParameter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UFunction* Z_Construct_UFunction_AEmitter_SetFloatParameter();
	ENGINE_API UFunction* Z_Construct_UFunction_AEmitter_SetMaterialParameter();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_AEmitter_SetTemplate();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_AEmitter_SetVectorParameter();
	ENGINE_API UFunction* Z_Construct_UFunction_AEmitter_ToggleActive();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventParticleCollisionSignature_Parms
		{
			FName EventName;
			float EmitterTime;
			int32 ParticleTime;
			FVector Location;
			FVector Velocity;
			FVector Direction;
			FVector Normal;
			FName BoneName;
			UPhysicalMaterial* PhysMat;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysMat;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ParticleTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmitterTime;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::NewProp_PhysMat = { UE4CodeGen_Private::EPropertyClass::Object, "PhysMat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleCollisionSignature_Parms, PhysMat), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::NewProp_BoneName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleCollisionSignature_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::NewProp_Normal = { UE4CodeGen_Private::EPropertyClass::Struct, "Normal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleCollisionSignature_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::NewProp_Direction = { UE4CodeGen_Private::EPropertyClass::Struct, "Direction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleCollisionSignature_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::NewProp_Velocity = { UE4CodeGen_Private::EPropertyClass::Struct, "Velocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleCollisionSignature_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleCollisionSignature_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::NewProp_ParticleTime = { UE4CodeGen_Private::EPropertyClass::Int, "ParticleTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleCollisionSignature_Parms, ParticleTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::NewProp_EmitterTime = { UE4CodeGen_Private::EPropertyClass::Float, "EmitterTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleCollisionSignature_Parms, EmitterTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::NewProp_EventName = { UE4CodeGen_Private::EPropertyClass::Name, "EventName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleCollisionSignature_Parms, EventName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::NewProp_PhysMat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::NewProp_ParticleTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::NewProp_EmitterTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::NewProp_EventName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
		{ "ToolTip", "Fires when a particle dies\n@param EventName - Custom event name for the Collision Event.\n@param EmitterTime - The emitter time when the event occured.\n@param ParticleTime - How long the particle had been alive at the time of the event.\n@param Location - Location of the collision.\n@param Velocity - Velocity of the particle at the point of collision.\n@param Direction - Direction of the particle at the point of collision.\n@param Normal - Normal to the surface with which collision occurred.\n@param BoneName- Name of the bone that the particle collided with. (Only valid if collision was with a Skeletal Mesh)\n@param PhysMat - Physical Material for this collision." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "ParticleCollisionSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_Engine_eventParticleCollisionSignature_Parms), Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventParticleDeathSignature_Parms
		{
			FName EventName;
			float EmitterTime;
			int32 ParticleTime;
			FVector Location;
			FVector Velocity;
			FVector Direction;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ParticleTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmitterTime;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::NewProp_Direction = { UE4CodeGen_Private::EPropertyClass::Struct, "Direction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleDeathSignature_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::NewProp_Velocity = { UE4CodeGen_Private::EPropertyClass::Struct, "Velocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleDeathSignature_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleDeathSignature_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::NewProp_ParticleTime = { UE4CodeGen_Private::EPropertyClass::Int, "ParticleTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleDeathSignature_Parms, ParticleTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::NewProp_EmitterTime = { UE4CodeGen_Private::EPropertyClass::Float, "EmitterTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleDeathSignature_Parms, EmitterTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::NewProp_EventName = { UE4CodeGen_Private::EPropertyClass::Name, "EventName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleDeathSignature_Parms, EventName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::NewProp_ParticleTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::NewProp_EmitterTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::NewProp_EventName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
		{ "ToolTip", "Fires when a particle dies\n@param EventName - Custom event name for the Death Event.\n@param EmitterTime - The emitter time when the event occured.\n@param ParticleTime - How long the particle had been alive at the time of the event.\n@param Location - Location the particle was at when it died.\n@param Velocity - Velocity of the particle when it died.\n@param Direction - Direction of the particle when it died." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "ParticleDeathSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_Engine_eventParticleDeathSignature_Parms), Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventParticleBurstSignature_Parms
		{
			FName EventName;
			float EmitterTime;
			int32 ParticleCount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ParticleCount;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmitterTime;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature_Statics::NewProp_ParticleCount = { UE4CodeGen_Private::EPropertyClass::Int, "ParticleCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleBurstSignature_Parms, ParticleCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature_Statics::NewProp_EmitterTime = { UE4CodeGen_Private::EPropertyClass::Float, "EmitterTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleBurstSignature_Parms, EmitterTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature_Statics::NewProp_EventName = { UE4CodeGen_Private::EPropertyClass::Name, "EventName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleBurstSignature_Parms, EventName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature_Statics::NewProp_ParticleCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature_Statics::NewProp_EmitterTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature_Statics::NewProp_EventName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
		{ "ToolTip", "Fires when a particle system bursts\n@param EventName - Custom event name for the Burst Event\n@param EmitterTime - The emitter time when the event occured.\n@param ParticleCount - The number of particles spawned in the burst." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "ParticleBurstSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_Engine_eventParticleBurstSignature_Parms), Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventParticleSpawnSignature_Parms
		{
			FName EventName;
			float EmitterTime;
			FVector Location;
			FVector Velocity;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmitterTime;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_EventName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature_Statics::NewProp_Velocity = { UE4CodeGen_Private::EPropertyClass::Struct, "Velocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleSpawnSignature_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature_Statics::NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleSpawnSignature_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature_Statics::NewProp_EmitterTime = { UE4CodeGen_Private::EPropertyClass::Float, "EmitterTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleSpawnSignature_Parms, EmitterTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature_Statics::NewProp_EventName = { UE4CodeGen_Private::EPropertyClass::Name, "EventName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_Engine_eventParticleSpawnSignature_Parms, EventName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature_Statics::NewProp_EmitterTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature_Statics::NewProp_EventName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
		{ "ToolTip", "Fires when a particle is spawned\n@param EventName - Custom event name for the Spawn Event.\n@param EmitterTime - The emitter time when the event occured.\n@param Location - Location at which the particle was spawned.\n@param Velocity - Initial velocity of the spawned particle." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, "ParticleSpawnSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_Engine_eventParticleSpawnSignature_Parms), Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void AEmitter::StaticRegisterNativesAEmitter()
	{
		UClass* Class = AEmitter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Activate", &AEmitter::execActivate },
			{ "Deactivate", &AEmitter::execDeactivate },
			{ "IsActive", &AEmitter::execIsActive },
			{ "OnParticleSystemFinished", &AEmitter::execOnParticleSystemFinished },
			{ "OnRep_bCurrentlyActive", &AEmitter::execOnRep_bCurrentlyActive },
			{ "SetActorParameter", &AEmitter::execSetActorParameter },
			{ "SetColorParameter", &AEmitter::execSetColorParameter },
			{ "SetFloatParameter", &AEmitter::execSetFloatParameter },
			{ "SetMaterialParameter", &AEmitter::execSetMaterialParameter },
			{ "SetTemplate", &AEmitter::execSetTemplate },
			{ "SetVectorParameter", &AEmitter::execSetVectorParameter },
			{ "ToggleActive", &AEmitter::execToggleActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEmitter_Activate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEmitter_Activate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particles" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
		{ "ToolTip", "BEGIN DEPRECATED (use component functions now in level script)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEmitter_Activate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmitter, "Activate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEmitter_Activate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEmitter_Activate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEmitter_Activate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEmitter_Activate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEmitter_Deactivate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEmitter_Deactivate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particles" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEmitter_Deactivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmitter, "Deactivate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEmitter_Deactivate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEmitter_Deactivate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEmitter_Deactivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEmitter_Deactivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEmitter_IsActive_Statics
	{
		struct Emitter_eventIsActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AEmitter_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Emitter_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AEmitter_IsActive_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(Emitter_eventIsActive_Parms), &Z_Construct_UFunction_AEmitter_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEmitter_IsActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEmitter_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEmitter_IsActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particles" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEmitter_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmitter, "IsActive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(Emitter_eventIsActive_Parms), Z_Construct_UFunction_AEmitter_IsActive_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AEmitter_IsActive_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEmitter_IsActive_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEmitter_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEmitter_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEmitter_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEmitter_OnParticleSystemFinished_Statics
	{
		struct Emitter_eventOnParticleSystemFinished_Parms
		{
			UParticleSystemComponent* FinishedComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinishedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FinishedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEmitter_OnParticleSystemFinished_Statics::NewProp_FinishedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEmitter_OnParticleSystemFinished_Statics::NewProp_FinishedComponent = { UE4CodeGen_Private::EPropertyClass::Object, "FinishedComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(Emitter_eventOnParticleSystemFinished_Parms, FinishedComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEmitter_OnParticleSystemFinished_Statics::NewProp_FinishedComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AEmitter_OnParticleSystemFinished_Statics::NewProp_FinishedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEmitter_OnParticleSystemFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEmitter_OnParticleSystemFinished_Statics::NewProp_FinishedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEmitter_OnParticleSystemFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEmitter_OnParticleSystemFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmitter, "OnParticleSystemFinished", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, sizeof(Emitter_eventOnParticleSystemFinished_Parms), Z_Construct_UFunction_AEmitter_OnParticleSystemFinished_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AEmitter_OnParticleSystemFinished_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEmitter_OnParticleSystemFinished_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEmitter_OnParticleSystemFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEmitter_OnParticleSystemFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEmitter_OnParticleSystemFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEmitter_OnRep_bCurrentlyActive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEmitter_OnRep_bCurrentlyActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
		{ "ToolTip", "Replication Notification Callbacks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEmitter_OnRep_bCurrentlyActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmitter, "OnRep_bCurrentlyActive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEmitter_OnRep_bCurrentlyActive_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEmitter_OnRep_bCurrentlyActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEmitter_OnRep_bCurrentlyActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEmitter_OnRep_bCurrentlyActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEmitter_SetActorParameter_Statics
	{
		struct Emitter_eventSetActorParameter_Parms
		{
			FName ParameterName;
			AActor* Param;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEmitter_SetActorParameter_Statics::NewProp_Param = { UE4CodeGen_Private::EPropertyClass::Object, "Param", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Emitter_eventSetActorParameter_Parms, Param), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AEmitter_SetActorParameter_Statics::NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Emitter_eventSetActorParameter_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEmitter_SetActorParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEmitter_SetActorParameter_Statics::NewProp_Param,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEmitter_SetActorParameter_Statics::NewProp_ParameterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEmitter_SetActorParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particles|Parameters" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEmitter_SetActorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmitter, "SetActorParameter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Emitter_eventSetActorParameter_Parms), Z_Construct_UFunction_AEmitter_SetActorParameter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AEmitter_SetActorParameter_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEmitter_SetActorParameter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEmitter_SetActorParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEmitter_SetActorParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEmitter_SetActorParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEmitter_SetColorParameter_Statics
	{
		struct Emitter_eventSetColorParameter_Parms
		{
			FName ParameterName;
			FLinearColor Param;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEmitter_SetColorParameter_Statics::NewProp_Param = { UE4CodeGen_Private::EPropertyClass::Struct, "Param", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Emitter_eventSetColorParameter_Parms, Param), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AEmitter_SetColorParameter_Statics::NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Emitter_eventSetColorParameter_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEmitter_SetColorParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEmitter_SetColorParameter_Statics::NewProp_Param,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEmitter_SetColorParameter_Statics::NewProp_ParameterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEmitter_SetColorParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particles|Parameters" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEmitter_SetColorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmitter, "SetColorParameter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(Emitter_eventSetColorParameter_Parms), Z_Construct_UFunction_AEmitter_SetColorParameter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AEmitter_SetColorParameter_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEmitter_SetColorParameter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEmitter_SetColorParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEmitter_SetColorParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEmitter_SetColorParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEmitter_SetFloatParameter_Statics
	{
		struct Emitter_eventSetFloatParameter_Parms
		{
			FName ParameterName;
			float Param;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEmitter_SetFloatParameter_Statics::NewProp_Param = { UE4CodeGen_Private::EPropertyClass::Float, "Param", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Emitter_eventSetFloatParameter_Parms, Param), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AEmitter_SetFloatParameter_Statics::NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Emitter_eventSetFloatParameter_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEmitter_SetFloatParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEmitter_SetFloatParameter_Statics::NewProp_Param,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEmitter_SetFloatParameter_Statics::NewProp_ParameterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEmitter_SetFloatParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particles|Parameters" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEmitter_SetFloatParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmitter, "SetFloatParameter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Emitter_eventSetFloatParameter_Parms), Z_Construct_UFunction_AEmitter_SetFloatParameter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AEmitter_SetFloatParameter_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEmitter_SetFloatParameter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEmitter_SetFloatParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEmitter_SetFloatParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEmitter_SetFloatParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEmitter_SetMaterialParameter_Statics
	{
		struct Emitter_eventSetMaterialParameter_Parms
		{
			FName ParameterName;
			UMaterialInterface* Param;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEmitter_SetMaterialParameter_Statics::NewProp_Param = { UE4CodeGen_Private::EPropertyClass::Object, "Param", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Emitter_eventSetMaterialParameter_Parms, Param), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AEmitter_SetMaterialParameter_Statics::NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Emitter_eventSetMaterialParameter_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEmitter_SetMaterialParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEmitter_SetMaterialParameter_Statics::NewProp_Param,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEmitter_SetMaterialParameter_Statics::NewProp_ParameterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEmitter_SetMaterialParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particles|Parameters" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEmitter_SetMaterialParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmitter, "SetMaterialParameter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Emitter_eventSetMaterialParameter_Parms), Z_Construct_UFunction_AEmitter_SetMaterialParameter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AEmitter_SetMaterialParameter_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEmitter_SetMaterialParameter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEmitter_SetMaterialParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEmitter_SetMaterialParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEmitter_SetMaterialParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEmitter_SetTemplate_Statics
	{
		struct Emitter_eventSetTemplate_Parms
		{
			UParticleSystem* NewTemplate;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewTemplate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEmitter_SetTemplate_Statics::NewProp_NewTemplate = { UE4CodeGen_Private::EPropertyClass::Object, "NewTemplate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Emitter_eventSetTemplate_Parms, NewTemplate), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEmitter_SetTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEmitter_SetTemplate_Statics::NewProp_NewTemplate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEmitter_SetTemplate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particles" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEmitter_SetTemplate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmitter, "SetTemplate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(Emitter_eventSetTemplate_Parms), Z_Construct_UFunction_AEmitter_SetTemplate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AEmitter_SetTemplate_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEmitter_SetTemplate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEmitter_SetTemplate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEmitter_SetTemplate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEmitter_SetTemplate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEmitter_SetVectorParameter_Statics
	{
		struct Emitter_eventSetVectorParameter_Parms
		{
			FName ParameterName;
			FVector Param;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEmitter_SetVectorParameter_Statics::NewProp_Param = { UE4CodeGen_Private::EPropertyClass::Struct, "Param", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Emitter_eventSetVectorParameter_Parms, Param), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AEmitter_SetVectorParameter_Statics::NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Emitter_eventSetVectorParameter_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEmitter_SetVectorParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEmitter_SetVectorParameter_Statics::NewProp_Param,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEmitter_SetVectorParameter_Statics::NewProp_ParameterName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEmitter_SetVectorParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particles|Parameters" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEmitter_SetVectorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmitter, "SetVectorParameter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(Emitter_eventSetVectorParameter_Parms), Z_Construct_UFunction_AEmitter_SetVectorParameter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AEmitter_SetVectorParameter_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEmitter_SetVectorParameter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEmitter_SetVectorParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEmitter_SetVectorParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEmitter_SetVectorParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEmitter_ToggleActive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEmitter_ToggleActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particles" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEmitter_ToggleActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEmitter, "ToggleActive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEmitter_ToggleActive_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEmitter_ToggleActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEmitter_ToggleActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEmitter_ToggleActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEmitter_NoRegister()
	{
		return AEmitter::StaticClass();
	}
	struct Z_Construct_UClass_AEmitter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnParticleCollide_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnParticleCollide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnParticleDeath_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnParticleDeath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnParticleBurst_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnParticleBurst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnParticleSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnParticleSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCurrentlyActive_MetaData[];
#endif
		static void NewProp_bCurrentlyActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCurrentlyActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPostUpdateTickGroup_MetaData[];
#endif
		static void NewProp_bPostUpdateTickGroup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPostUpdateTickGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDestroyOnSystemFinish_MetaData[];
#endif
		static void NewProp_bDestroyOnSystemFinish_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroyOnSystemFinish;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleSystemComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEmitter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEmitter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEmitter_Activate, "Activate" }, // 3331581777
		{ &Z_Construct_UFunction_AEmitter_Deactivate, "Deactivate" }, // 1261250349
		{ &Z_Construct_UFunction_AEmitter_IsActive, "IsActive" }, // 3759739427
		{ &Z_Construct_UFunction_AEmitter_OnParticleSystemFinished, "OnParticleSystemFinished" }, // 1717124733
		{ &Z_Construct_UFunction_AEmitter_OnRep_bCurrentlyActive, "OnRep_bCurrentlyActive" }, // 4106783479
		{ &Z_Construct_UFunction_AEmitter_SetActorParameter, "SetActorParameter" }, // 3423673181
		{ &Z_Construct_UFunction_AEmitter_SetColorParameter, "SetColorParameter" }, // 1047359317
		{ &Z_Construct_UFunction_AEmitter_SetFloatParameter, "SetFloatParameter" }, // 198227172
		{ &Z_Construct_UFunction_AEmitter_SetMaterialParameter, "SetMaterialParameter" }, // 2855629724
		{ &Z_Construct_UFunction_AEmitter_SetTemplate, "SetTemplate" }, // 2212772760
		{ &Z_Construct_UFunction_AEmitter_SetVectorParameter, "SetVectorParameter" }, // 1141479734
		{ &Z_Construct_UFunction_AEmitter_ToggleActive, "ToggleActive" }, // 1255126542
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Activation Components|Activation Input Collision Game|Damage" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Particles/Emitter.h" },
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitter_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEmitter_Statics::NewProp_ArrowComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ArrowComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000800080008, 1, nullptr, STRUCT_OFFSET(AEmitter, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEmitter_Statics::NewProp_ArrowComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEmitter_Statics::NewProp_ArrowComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitter_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEmitter_Statics::NewProp_SpriteComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SpriteComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000800080008, 1, nullptr, STRUCT_OFFSET(AEmitter, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEmitter_Statics::NewProp_SpriteComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEmitter_Statics::NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleCollide_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleCollide = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnParticleCollide", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AEmitter, OnParticleCollide), Z_Construct_UDelegateFunction_Engine_ParticleCollisionSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleCollide_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleCollide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleDeath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleDeath = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnParticleDeath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AEmitter, OnParticleDeath), Z_Construct_UDelegateFunction_Engine_ParticleDeathSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleDeath_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleDeath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleBurst_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleBurst = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnParticleBurst", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AEmitter, OnParticleBurst), Z_Construct_UDelegateFunction_Engine_ParticleBurstSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleBurst_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleBurst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleSpawn_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleSpawn = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnParticleSpawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(AEmitter, OnParticleSpawn), Z_Construct_UDelegateFunction_Engine_ParticleSpawnSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleSpawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitter_Statics::NewProp_bCurrentlyActive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
		{ "ToolTip", "used to update status of toggleable level placed emitters on clients" },
	};
#endif
	void Z_Construct_UClass_AEmitter_Statics::NewProp_bCurrentlyActive_SetBit(void* Obj)
	{
		((AEmitter*)Obj)->bCurrentlyActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEmitter_Statics::NewProp_bCurrentlyActive = { UE4CodeGen_Private::EPropertyClass::Bool, "bCurrentlyActive", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000100000020, 1, "OnRep_bCurrentlyActive", sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AEmitter), &Z_Construct_UClass_AEmitter_Statics::NewProp_bCurrentlyActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEmitter_Statics::NewProp_bCurrentlyActive_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEmitter_Statics::NewProp_bCurrentlyActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitter_Statics::NewProp_bPostUpdateTickGroup_MetaData[] = {
		{ "Category", "Emitter" },
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	void Z_Construct_UClass_AEmitter_Statics::NewProp_bPostUpdateTickGroup_SetBit(void* Obj)
	{
		((AEmitter*)Obj)->bPostUpdateTickGroup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEmitter_Statics::NewProp_bPostUpdateTickGroup = { UE4CodeGen_Private::EPropertyClass::Bool, "bPostUpdateTickGroup", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AEmitter), &Z_Construct_UClass_AEmitter_Statics::NewProp_bPostUpdateTickGroup_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEmitter_Statics::NewProp_bPostUpdateTickGroup_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEmitter_Statics::NewProp_bPostUpdateTickGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitter_Statics::NewProp_bDestroyOnSystemFinish_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	void Z_Construct_UClass_AEmitter_Statics::NewProp_bDestroyOnSystemFinish_SetBit(void* Obj)
	{
		((AEmitter*)Obj)->bDestroyOnSystemFinish = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEmitter_Statics::NewProp_bDestroyOnSystemFinish = { UE4CodeGen_Private::EPropertyClass::Bool, "bDestroyOnSystemFinish", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(AEmitter), &Z_Construct_UClass_AEmitter_Statics::NewProp_bDestroyOnSystemFinish_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEmitter_Statics::NewProp_bDestroyOnSystemFinish_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEmitter_Statics::NewProp_bDestroyOnSystemFinish_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitter_Statics::NewProp_ParticleSystemComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Emitter" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Particles|Beam,Particles|Parameters,Particles,Effects|Components|ParticleSystem,Rendering,Activation,Components|Activation" },
		{ "ModuleRelativePath", "Classes/Particles/Emitter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEmitter_Statics::NewProp_ParticleSystemComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ParticleSystemComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AEmitter, ParticleSystemComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEmitter_Statics::NewProp_ParticleSystemComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEmitter_Statics::NewProp_ParticleSystemComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEmitter_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitter_Statics::NewProp_ArrowComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitter_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleCollide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleDeath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleBurst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitter_Statics::NewProp_OnParticleSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitter_Statics::NewProp_bCurrentlyActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitter_Statics::NewProp_bPostUpdateTickGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitter_Statics::NewProp_bDestroyOnSystemFinish,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitter_Statics::NewProp_ParticleSystemComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEmitter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEmitter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEmitter_Statics::ClassParams = {
		&AEmitter::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AEmitter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AEmitter_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AEmitter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AEmitter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEmitter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEmitter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEmitter, 3778170193);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEmitter(Z_Construct_UClass_AEmitter, &AEmitter::StaticClass, TEXT("/Script/Engine"), TEXT("AEmitter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEmitter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
