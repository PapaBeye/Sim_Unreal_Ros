// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Kismet/KismetRenderingLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKismetRenderingLibrary() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDrawToRenderTargetContext();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UKismetRenderingLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UKismetRenderingLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UCanvas_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureRenderTargetFormat();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ReleaseRenderTarget2D();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureMipGenSettings();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureCompressionSettings();
// End Cross Module References
class UScriptStruct* FDrawToRenderTargetContext::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FDrawToRenderTargetContext_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDrawToRenderTargetContext, Z_Construct_UPackage__Script_Engine(), TEXT("DrawToRenderTargetContext"), sizeof(FDrawToRenderTargetContext), Get_Z_Construct_UScriptStruct_FDrawToRenderTargetContext_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDrawToRenderTargetContext(FDrawToRenderTargetContext::StaticStruct, TEXT("/Script/Engine"), TEXT("DrawToRenderTargetContext"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFDrawToRenderTargetContext
{
	FScriptStruct_Engine_StaticRegisterNativesFDrawToRenderTargetContext()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DrawToRenderTargetContext")),new UScriptStruct::TCppStructOps<FDrawToRenderTargetContext>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFDrawToRenderTargetContext;
	struct Z_Construct_UScriptStruct_FDrawToRenderTargetContext_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDrawToRenderTargetContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDrawToRenderTargetContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDrawToRenderTargetContext>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDrawToRenderTargetContext_Statics::NewProp_RenderTarget_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDrawToRenderTargetContext_Statics::NewProp_RenderTarget = { UE4CodeGen_Private::EPropertyClass::Object, "RenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FDrawToRenderTargetContext, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDrawToRenderTargetContext_Statics::NewProp_RenderTarget_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDrawToRenderTargetContext_Statics::NewProp_RenderTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDrawToRenderTargetContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDrawToRenderTargetContext_Statics::NewProp_RenderTarget,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDrawToRenderTargetContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DrawToRenderTargetContext",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FDrawToRenderTargetContext),
		alignof(FDrawToRenderTargetContext),
		Z_Construct_UScriptStruct_FDrawToRenderTargetContext_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FDrawToRenderTargetContext_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDrawToRenderTargetContext_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDrawToRenderTargetContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDrawToRenderTargetContext()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDrawToRenderTargetContext_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DrawToRenderTargetContext"), sizeof(FDrawToRenderTargetContext), Get_Z_Construct_UScriptStruct_FDrawToRenderTargetContext_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDrawToRenderTargetContext_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDrawToRenderTargetContext_CRC() { return 2279725598U; }
	void UKismetRenderingLibrary::StaticRegisterNativesUKismetRenderingLibrary()
	{
		UClass* Class = UKismetRenderingLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginDrawCanvasToRenderTarget", &UKismetRenderingLibrary::execBeginDrawCanvasToRenderTarget },
			{ "BreakSkinWeightInfo", &UKismetRenderingLibrary::execBreakSkinWeightInfo },
			{ "ClearRenderTarget2D", &UKismetRenderingLibrary::execClearRenderTarget2D },
			{ "ConvertRenderTargetToTexture2DEditorOnly", &UKismetRenderingLibrary::execConvertRenderTargetToTexture2DEditorOnly },
			{ "CreateRenderTarget2D", &UKismetRenderingLibrary::execCreateRenderTarget2D },
			{ "DrawMaterialToRenderTarget", &UKismetRenderingLibrary::execDrawMaterialToRenderTarget },
			{ "EndDrawCanvasToRenderTarget", &UKismetRenderingLibrary::execEndDrawCanvasToRenderTarget },
			{ "ExportRenderTarget", &UKismetRenderingLibrary::execExportRenderTarget },
			{ "ExportTexture2D", &UKismetRenderingLibrary::execExportTexture2D },
			{ "ImportBufferAsTexture2D", &UKismetRenderingLibrary::execImportBufferAsTexture2D },
			{ "ImportFileAsTexture2D", &UKismetRenderingLibrary::execImportFileAsTexture2D },
			{ "MakeSkinWeightInfo", &UKismetRenderingLibrary::execMakeSkinWeightInfo },
			{ "ReadRenderTargetPixel", &UKismetRenderingLibrary::execReadRenderTargetPixel },
			{ "ReadRenderTargetRawPixel", &UKismetRenderingLibrary::execReadRenderTargetRawPixel },
			{ "ReadRenderTargetRawUV", &UKismetRenderingLibrary::execReadRenderTargetRawUV },
			{ "ReadRenderTargetUV", &UKismetRenderingLibrary::execReadRenderTargetUV },
			{ "ReleaseRenderTarget2D", &UKismetRenderingLibrary::execReleaseRenderTarget2D },
			{ "RenderTargetCreateStaticTexture2DEditorOnly", &UKismetRenderingLibrary::execRenderTargetCreateStaticTexture2DEditorOnly },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics
	{
		struct KismetRenderingLibrary_eventBeginDrawCanvasToRenderTarget_Parms
		{
			UObject* WorldContextObject;
			UTextureRenderTarget2D* TextureRenderTarget;
			UCanvas* Canvas;
			FVector2D Size;
			FDrawToRenderTargetContext Context;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Canvas;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics::NewProp_Context = { UE4CodeGen_Private::EPropertyClass::Struct, "Context", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBeginDrawCanvasToRenderTarget_Parms, Context), Z_Construct_UScriptStruct_FDrawToRenderTargetContext, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics::NewProp_Size = { UE4CodeGen_Private::EPropertyClass::Struct, "Size", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBeginDrawCanvasToRenderTarget_Parms, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics::NewProp_Canvas = { UE4CodeGen_Private::EPropertyClass::Object, "Canvas", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBeginDrawCanvasToRenderTarget_Parms, Canvas), Z_Construct_UClass_UCanvas_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics::NewProp_TextureRenderTarget = { UE4CodeGen_Private::EPropertyClass::Object, "TextureRenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBeginDrawCanvasToRenderTarget_Parms, TextureRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBeginDrawCanvasToRenderTarget_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics::NewProp_Context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics::NewProp_Canvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics::NewProp_TextureRenderTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Keywords", "BeginDrawCanvasToRenderTarget" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Returns a Canvas object that can be used to draw to the specified render target.\nCanvas has functions like DrawMaterial with size parameters that can be used to draw to a specific area of a render target.\nBe sure to call EndDrawCanvasToRenderTarget to complete the rendering!" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, "BeginDrawCanvasToRenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22403, sizeof(KismetRenderingLibrary_eventBeginDrawCanvasToRenderTarget_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics
	{
		struct KismetRenderingLibrary_eventBreakSkinWeightInfo_Parms
		{
			FSkelMeshSkinWeightInfo InWeight;
			int32 Bone0;
			uint8 Weight0;
			int32 Bone1;
			uint8 Weight1;
			int32 Bone2;
			uint8 Weight2;
			int32 Bone3;
			uint8 Weight3;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Weight3;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Bone3;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Weight2;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Bone2;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Weight1;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Bone1;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Weight0;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Bone0;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InWeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::NewProp_Weight3 = { UE4CodeGen_Private::EPropertyClass::Byte, "Weight3", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBreakSkinWeightInfo_Parms, Weight3), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::NewProp_Bone3 = { UE4CodeGen_Private::EPropertyClass::Int, "Bone3", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBreakSkinWeightInfo_Parms, Bone3), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::NewProp_Weight2 = { UE4CodeGen_Private::EPropertyClass::Byte, "Weight2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBreakSkinWeightInfo_Parms, Weight2), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::NewProp_Bone2 = { UE4CodeGen_Private::EPropertyClass::Int, "Bone2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBreakSkinWeightInfo_Parms, Bone2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::NewProp_Weight1 = { UE4CodeGen_Private::EPropertyClass::Byte, "Weight1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBreakSkinWeightInfo_Parms, Weight1), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::NewProp_Bone1 = { UE4CodeGen_Private::EPropertyClass::Int, "Bone1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBreakSkinWeightInfo_Parms, Bone1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::NewProp_Weight0 = { UE4CodeGen_Private::EPropertyClass::Byte, "Weight0", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBreakSkinWeightInfo_Parms, Weight0), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::NewProp_Bone0 = { UE4CodeGen_Private::EPropertyClass::Int, "Bone0", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBreakSkinWeightInfo_Parms, Bone0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::NewProp_InWeight = { UE4CodeGen_Private::EPropertyClass::Struct, "InWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventBreakSkinWeightInfo_Parms, InWeight), Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::NewProp_Weight3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::NewProp_Bone3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::NewProp_Weight2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::NewProp_Bone2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::NewProp_Weight1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::NewProp_Bone1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::NewProp_Weight0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::NewProp_Bone0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::NewProp_InWeight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "Break FSkelMeshSkinWeightInfo" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, "BreakSkinWeightInfo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422403, sizeof(KismetRenderingLibrary_eventBreakSkinWeightInfo_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D_Statics
	{
		struct KismetRenderingLibrary_eventClearRenderTarget2D_Parms
		{
			UObject* WorldContextObject;
			UTextureRenderTarget2D* TextureRenderTarget;
			FLinearColor ClearColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClearColor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D_Statics::NewProp_ClearColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ClearColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventClearRenderTarget2D_Parms, ClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D_Statics::NewProp_TextureRenderTarget = { UE4CodeGen_Private::EPropertyClass::Object, "TextureRenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventClearRenderTarget2D_Parms, TextureRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventClearRenderTarget2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D_Statics::NewProp_ClearColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D_Statics::NewProp_TextureRenderTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "CPP_Default_ClearColor", "(R=0.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "Keywords", "ClearRenderTarget" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Clears the specified render target with the given ClearColor." },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, "ClearRenderTarget2D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822403, sizeof(KismetRenderingLibrary_eventClearRenderTarget2D_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly_Statics
	{
		struct KismetRenderingLibrary_eventConvertRenderTargetToTexture2DEditorOnly_Parms
		{
			UObject* WorldContextObject;
			UTextureRenderTarget2D* RenderTarget;
			UTexture2D* Texture;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly_Statics::NewProp_Texture = { UE4CodeGen_Private::EPropertyClass::Object, "Texture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventConvertRenderTargetToTexture2DEditorOnly_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly_Statics::NewProp_RenderTarget = { UE4CodeGen_Private::EPropertyClass::Object, "RenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventConvertRenderTargetToTexture2DEditorOnly_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventConvertRenderTargetToTexture2DEditorOnly_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly_Statics::NewProp_RenderTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Keywords", "ConvertRenderTarget" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Copies the contents of a render target to a UTexture2D\nOnly works in the editor" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, "ConvertRenderTargetToTexture2DEditorOnly", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, sizeof(KismetRenderingLibrary_eventConvertRenderTargetToTexture2DEditorOnly_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics
	{
		struct KismetRenderingLibrary_eventCreateRenderTarget2D_Parms
		{
			UObject* WorldContextObject;
			int32 Width;
			int32 Height;
			TEnumAsByte<ETextureRenderTargetFormat> Format;
			UTextureRenderTarget2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Format;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventCreateRenderTarget2D_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::NewProp_Format = { UE4CodeGen_Private::EPropertyClass::Byte, "Format", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventCreateRenderTarget2D_Parms, Format), Z_Construct_UEnum_Engine_ETextureRenderTargetFormat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::NewProp_Height = { UE4CodeGen_Private::EPropertyClass::Int, "Height", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventCreateRenderTarget2D_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::NewProp_Width = { UE4CodeGen_Private::EPropertyClass::Int, "Width", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventCreateRenderTarget2D_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventCreateRenderTarget2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::NewProp_Format,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "CPP_Default_Format", "RTF_RGBA16f" },
		{ "CPP_Default_Height", "256" },
		{ "CPP_Default_Width", "256" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Creates a new render target and initializes it to the specified dimensions" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, "CreateRenderTarget2D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, sizeof(KismetRenderingLibrary_eventCreateRenderTarget2D_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget_Statics
	{
		struct KismetRenderingLibrary_eventDrawMaterialToRenderTarget_Parms
		{
			UObject* WorldContextObject;
			UTextureRenderTarget2D* TextureRenderTarget;
			UMaterialInterface* Material;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget_Statics::NewProp_Material = { UE4CodeGen_Private::EPropertyClass::Object, "Material", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventDrawMaterialToRenderTarget_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget_Statics::NewProp_TextureRenderTarget = { UE4CodeGen_Private::EPropertyClass::Object, "TextureRenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventDrawMaterialToRenderTarget_Parms, TextureRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventDrawMaterialToRenderTarget_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget_Statics::NewProp_TextureRenderTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Keywords", "DrawMaterialToRenderTarget" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Renders a quad with the material applied to the specified render target.\nThis sets the render target even if it is already set, which is an expensive operation.\nUse BeginDrawCanvasToRenderTarget / EndDrawCanvasToRenderTarget instead if rendering multiple primitives to the same render target." },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, "DrawMaterialToRenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, sizeof(KismetRenderingLibrary_eventDrawMaterialToRenderTarget_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget_Statics
	{
		struct KismetRenderingLibrary_eventEndDrawCanvasToRenderTarget_Parms
		{
			UObject* WorldContextObject;
			FDrawToRenderTargetContext Context;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget_Statics::NewProp_Context = { UE4CodeGen_Private::EPropertyClass::Struct, "Context", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventEndDrawCanvasToRenderTarget_Parms, Context), Z_Construct_UScriptStruct_FDrawToRenderTargetContext, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget_Statics::NewProp_Context_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget_Statics::NewProp_Context_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventEndDrawCanvasToRenderTarget_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget_Statics::NewProp_Context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Keywords", "EndDrawCanvasToRenderTarget" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Must be paired with a BeginDrawCanvasToRenderTarget to complete rendering to a render target." },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, "EndDrawCanvasToRenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422403, sizeof(KismetRenderingLibrary_eventEndDrawCanvasToRenderTarget_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics
	{
		struct KismetRenderingLibrary_eventExportRenderTarget_Parms
		{
			UObject* WorldContextObject;
			UTextureRenderTarget2D* TextureRenderTarget;
			FString FilePath;
			FString FileName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::NewProp_FileName = { UE4CodeGen_Private::EPropertyClass::Str, "FileName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventExportRenderTarget_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::NewProp_FileName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::NewProp_FileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::NewProp_FilePath = { UE4CodeGen_Private::EPropertyClass::Str, "FilePath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventExportRenderTarget_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::NewProp_FilePath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::NewProp_FilePath_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::NewProp_TextureRenderTarget = { UE4CodeGen_Private::EPropertyClass::Object, "TextureRenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventExportRenderTarget_Parms, TextureRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventExportRenderTarget_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::NewProp_TextureRenderTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Keywords", "ExportRenderTarget" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Exports a render target as a HDR or PNG image onto the disk (depending on the format of the render target)" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, "ExportRenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, sizeof(KismetRenderingLibrary_eventExportRenderTarget_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics
	{
		struct KismetRenderingLibrary_eventExportTexture2D_Parms
		{
			UObject* WorldContextObject;
			UTexture2D* Texture;
			FString FilePath;
			FString FileName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::NewProp_FileName = { UE4CodeGen_Private::EPropertyClass::Str, "FileName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventExportTexture2D_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::NewProp_FileName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::NewProp_FileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::NewProp_FilePath = { UE4CodeGen_Private::EPropertyClass::Str, "FilePath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventExportTexture2D_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::NewProp_FilePath_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::NewProp_FilePath_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::NewProp_Texture = { UE4CodeGen_Private::EPropertyClass::Object, "Texture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventExportTexture2D_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventExportTexture2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Keywords", "ExportTexture2D" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Exports a Texture2D as a HDR image onto the disk." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, "ExportTexture2D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, sizeof(KismetRenderingLibrary_eventExportTexture2D_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics
	{
		struct KismetRenderingLibrary_eventImportBufferAsTexture2D_Parms
		{
			UObject* WorldContextObject;
			TArray<uint8> Buffer;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Buffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Buffer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventImportBufferAsTexture2D_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::NewProp_Buffer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::NewProp_Buffer = { UE4CodeGen_Private::EPropertyClass::Array, "Buffer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventImportBufferAsTexture2D_Parms, Buffer), METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::NewProp_Buffer_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::NewProp_Buffer_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::NewProp_Buffer_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "Buffer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventImportBufferAsTexture2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::NewProp_Buffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::NewProp_Buffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Imports a texture from a buffer and creates Texture2D from it." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, "ImportBufferAsTexture2D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422403, sizeof(KismetRenderingLibrary_eventImportBufferAsTexture2D_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D_Statics
	{
		struct KismetRenderingLibrary_eventImportFileAsTexture2D_Parms
		{
			UObject* WorldContextObject;
			FString Filename;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventImportFileAsTexture2D_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D_Statics::NewProp_Filename = { UE4CodeGen_Private::EPropertyClass::Str, "Filename", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventImportFileAsTexture2D_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D_Statics::NewProp_Filename_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D_Statics::NewProp_Filename_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventImportFileAsTexture2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Imports a texture file from disk and creates Texture2D from it." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, "ImportFileAsTexture2D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, sizeof(KismetRenderingLibrary_eventImportFileAsTexture2D_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics
	{
		struct KismetRenderingLibrary_eventMakeSkinWeightInfo_Parms
		{
			int32 Bone0;
			uint8 Weight0;
			int32 Bone1;
			uint8 Weight1;
			int32 Bone2;
			uint8 Weight2;
			int32 Bone3;
			uint8 Weight3;
			FSkelMeshSkinWeightInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Weight3;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Bone3;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Weight2;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Bone2;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Weight1;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Bone1;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Weight0;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Bone0;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventMakeSkinWeightInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FSkelMeshSkinWeightInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::NewProp_Weight3 = { UE4CodeGen_Private::EPropertyClass::Byte, "Weight3", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventMakeSkinWeightInfo_Parms, Weight3), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::NewProp_Bone3 = { UE4CodeGen_Private::EPropertyClass::Int, "Bone3", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventMakeSkinWeightInfo_Parms, Bone3), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::NewProp_Weight2 = { UE4CodeGen_Private::EPropertyClass::Byte, "Weight2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventMakeSkinWeightInfo_Parms, Weight2), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::NewProp_Bone2 = { UE4CodeGen_Private::EPropertyClass::Int, "Bone2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventMakeSkinWeightInfo_Parms, Bone2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::NewProp_Weight1 = { UE4CodeGen_Private::EPropertyClass::Byte, "Weight1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventMakeSkinWeightInfo_Parms, Weight1), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::NewProp_Bone1 = { UE4CodeGen_Private::EPropertyClass::Int, "Bone1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventMakeSkinWeightInfo_Parms, Bone1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::NewProp_Weight0 = { UE4CodeGen_Private::EPropertyClass::Byte, "Weight0", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventMakeSkinWeightInfo_Parms, Weight0), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::NewProp_Bone0 = { UE4CodeGen_Private::EPropertyClass::Int, "Bone0", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventMakeSkinWeightInfo_Parms, Bone0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::NewProp_Weight3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::NewProp_Bone3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::NewProp_Weight2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::NewProp_Bone2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::NewProp_Weight1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::NewProp_Bone1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::NewProp_Weight0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::NewProp_Bone0,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Create FSkelMeshSkinWeightInfo" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, "MakeSkinWeightInfo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022403, sizeof(KismetRenderingLibrary_eventMakeSkinWeightInfo_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics
	{
		struct KismetRenderingLibrary_eventReadRenderTargetPixel_Parms
		{
			UObject* WorldContextObject;
			UTextureRenderTarget2D* TextureRenderTarget;
			int32 X;
			int32 Y;
			FColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetPixel_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics::NewProp_Y = { UE4CodeGen_Private::EPropertyClass::Int, "Y", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetPixel_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics::NewProp_X = { UE4CodeGen_Private::EPropertyClass::Int, "X", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetPixel_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics::NewProp_TextureRenderTarget = { UE4CodeGen_Private::EPropertyClass::Object, "TextureRenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetPixel_Parms, TextureRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetPixel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics::NewProp_TextureRenderTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Keywords", "ReadRenderTarget" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Incredibly inefficient and slow operation! Read a value as sRGB color from a render target using integer pixel coordinates.\nLDR render targets are assumed to be in sRGB space. HDR ones are assumed to be in linear space.\nResult is 8-bit per channel [0,255] BGRA in sRGB space." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, "ReadRenderTargetPixel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822403, sizeof(KismetRenderingLibrary_eventReadRenderTargetPixel_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics
	{
		struct KismetRenderingLibrary_eventReadRenderTargetRawPixel_Parms
		{
			UObject* WorldContextObject;
			UTextureRenderTarget2D* TextureRenderTarget;
			int32 X;
			int32 Y;
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Y;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetRawPixel_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::NewProp_Y = { UE4CodeGen_Private::EPropertyClass::Int, "Y", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetRawPixel_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::NewProp_X = { UE4CodeGen_Private::EPropertyClass::Int, "X", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetRawPixel_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::NewProp_TextureRenderTarget = { UE4CodeGen_Private::EPropertyClass::Object, "TextureRenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetRawPixel_Parms, TextureRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetRawPixel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::NewProp_TextureRenderTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Keywords", "ReadRenderTarget" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Incredibly inefficient and slow operation! Read a value as-is from a render target using integer pixel coordinates." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, "ReadRenderTargetRawPixel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822403, sizeof(KismetRenderingLibrary_eventReadRenderTargetRawPixel_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics
	{
		struct KismetRenderingLibrary_eventReadRenderTargetRawUV_Parms
		{
			UObject* WorldContextObject;
			UTextureRenderTarget2D* TextureRenderTarget;
			float U;
			float V;
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_V;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_U;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetRawUV_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::NewProp_V = { UE4CodeGen_Private::EPropertyClass::Float, "V", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetRawUV_Parms, V), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::NewProp_U = { UE4CodeGen_Private::EPropertyClass::Float, "U", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetRawUV_Parms, U), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::NewProp_TextureRenderTarget = { UE4CodeGen_Private::EPropertyClass::Object, "TextureRenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetRawUV_Parms, TextureRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetRawUV_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::NewProp_V,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::NewProp_U,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::NewProp_TextureRenderTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Keywords", "ReadRenderTarget" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Incredibly inefficient and slow operation! Read a value as-is color from a render target using UV [0,1]x[0,1] coordinates." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, "ReadRenderTargetRawUV", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822403, sizeof(KismetRenderingLibrary_eventReadRenderTargetRawUV_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics
	{
		struct KismetRenderingLibrary_eventReadRenderTargetUV_Parms
		{
			UObject* WorldContextObject;
			UTextureRenderTarget2D* TextureRenderTarget;
			float U;
			float V;
			FColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_V;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_U;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetUV_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics::NewProp_V = { UE4CodeGen_Private::EPropertyClass::Float, "V", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetUV_Parms, V), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics::NewProp_U = { UE4CodeGen_Private::EPropertyClass::Float, "U", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetUV_Parms, U), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics::NewProp_TextureRenderTarget = { UE4CodeGen_Private::EPropertyClass::Object, "TextureRenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetUV_Parms, TextureRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics::NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReadRenderTargetUV_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics::NewProp_V,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics::NewProp_U,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics::NewProp_TextureRenderTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Keywords", "ReadRenderTarget" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Incredibly inefficient and slow operation! Read a value as sRGB color from a render target using UV [0,1]x[0,1] coordinates.\nLDR render targets are assumed to be in sRGB space. HDR ones are assumed to be in linear space.\nResult is 8-bit per channel [0,255] BGRA in sRGB space." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, "ReadRenderTargetUV", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822403, sizeof(KismetRenderingLibrary_eventReadRenderTargetUV_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_ReleaseRenderTarget2D_Statics
	{
		struct KismetRenderingLibrary_eventReleaseRenderTarget2D_Parms
		{
			UTextureRenderTarget2D* TextureRenderTarget;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_ReleaseRenderTarget2D_Statics::NewProp_TextureRenderTarget = { UE4CodeGen_Private::EPropertyClass::Object, "TextureRenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventReleaseRenderTarget2D_Parms, TextureRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_ReleaseRenderTarget2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_ReleaseRenderTarget2D_Statics::NewProp_TextureRenderTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_ReleaseRenderTarget2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Manually releases GPU resources of a render target. This is useful for blueprint creating a lot of render target that would\nnormally be released too late by the garbage collector that can be problematic on platforms that have tight GPU memory constrains." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_ReleaseRenderTarget2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, "ReleaseRenderTarget2D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, sizeof(KismetRenderingLibrary_eventReleaseRenderTarget2D_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_ReleaseRenderTarget2D_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ReleaseRenderTarget2D_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_ReleaseRenderTarget2D_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_ReleaseRenderTarget2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_ReleaseRenderTarget2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_ReleaseRenderTarget2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics
	{
		struct KismetRenderingLibrary_eventRenderTargetCreateStaticTexture2DEditorOnly_Parms
		{
			UTextureRenderTarget2D* RenderTarget;
			FString Name;
			TEnumAsByte<TextureCompressionSettings> CompressionSettings;
			TEnumAsByte<TextureMipGenSettings> MipSettings;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MipSettings;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompressionSettings;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventRenderTargetCreateStaticTexture2DEditorOnly_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics::NewProp_MipSettings = { UE4CodeGen_Private::EPropertyClass::Byte, "MipSettings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventRenderTargetCreateStaticTexture2DEditorOnly_Parms, MipSettings), Z_Construct_UEnum_Engine_TextureMipGenSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics::NewProp_CompressionSettings = { UE4CodeGen_Private::EPropertyClass::Byte, "CompressionSettings", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventRenderTargetCreateStaticTexture2DEditorOnly_Parms, CompressionSettings), Z_Construct_UEnum_Engine_TextureCompressionSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventRenderTargetCreateStaticTexture2DEditorOnly_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics::NewProp_RenderTarget = { UE4CodeGen_Private::EPropertyClass::Object, "RenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetRenderingLibrary_eventRenderTargetCreateStaticTexture2DEditorOnly_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics::NewProp_MipSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics::NewProp_CompressionSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics::NewProp_RenderTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "CPP_Default_CompressionSettings", "TC_Default" },
		{ "CPP_Default_MipSettings", "TMGS_FromTextureGroup" },
		{ "CPP_Default_Name", "Texture" },
		{ "DisplayName", "Render Target Create Static Texture Editor Only" },
		{ "Keywords", "Create Static Texture from Render Target" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ToolTip", "Creates a new Static Texture from a Render Target 2D. Render Target Must be power of two and use four channels.\nOnly works in the editor" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetRenderingLibrary, "RenderTargetCreateStaticTexture2DEditorOnly", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022403, sizeof(KismetRenderingLibrary_eventRenderTargetCreateStaticTexture2DEditorOnly_Parms), Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKismetRenderingLibrary_NoRegister()
	{
		return UKismetRenderingLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UKismetRenderingLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKismetRenderingLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKismetRenderingLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_BeginDrawCanvasToRenderTarget, "BeginDrawCanvasToRenderTarget" }, // 2624863941
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_BreakSkinWeightInfo, "BreakSkinWeightInfo" }, // 946700015
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_ClearRenderTarget2D, "ClearRenderTarget2D" }, // 29963093
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_ConvertRenderTargetToTexture2DEditorOnly, "ConvertRenderTargetToTexture2DEditorOnly" }, // 3110298517
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_CreateRenderTarget2D, "CreateRenderTarget2D" }, // 1873833298
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_DrawMaterialToRenderTarget, "DrawMaterialToRenderTarget" }, // 2619900521
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_EndDrawCanvasToRenderTarget, "EndDrawCanvasToRenderTarget" }, // 4002130571
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_ExportRenderTarget, "ExportRenderTarget" }, // 2943228945
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_ExportTexture2D, "ExportTexture2D" }, // 2546283404
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_ImportBufferAsTexture2D, "ImportBufferAsTexture2D" }, // 1458067139
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_ImportFileAsTexture2D, "ImportFileAsTexture2D" }, // 2157075694
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_MakeSkinWeightInfo, "MakeSkinWeightInfo" }, // 2680584045
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetPixel, "ReadRenderTargetPixel" }, // 3028477302
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawPixel, "ReadRenderTargetRawPixel" }, // 3249573844
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetRawUV, "ReadRenderTargetRawUV" }, // 970808706
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_ReadRenderTargetUV, "ReadRenderTargetUV" }, // 3239097948
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_ReleaseRenderTarget2D, "ReleaseRenderTarget2D" }, // 4057371065
		{ &Z_Construct_UFunction_UKismetRenderingLibrary_RenderTargetCreateStaticTexture2DEditorOnly, "RenderTargetCreateStaticTexture2DEditorOnly" }, // 2439122993
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKismetRenderingLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Kismet/KismetRenderingLibrary.h" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetRenderingLibrary.h" },
		{ "ScriptName", "RenderingLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKismetRenderingLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKismetRenderingLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKismetRenderingLibrary_Statics::ClassParams = {
		&UKismetRenderingLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000800A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UKismetRenderingLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UKismetRenderingLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKismetRenderingLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKismetRenderingLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKismetRenderingLibrary, 2706803235);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKismetRenderingLibrary(Z_Construct_UClass_UKismetRenderingLibrary, &UKismetRenderingLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UKismetRenderingLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKismetRenderingLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
