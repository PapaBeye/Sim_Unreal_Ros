// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImageWriteQueue/Public/ImageWriteTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImageWriteTypes() {}
// Cross Module References
	IMAGEWRITEQUEUE_API UEnum* Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat();
	UPackage* Z_Construct_UPackage__Script_ImageWriteQueue();
// End Cross Module References
	static UEnum* EDesiredImageFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat, Z_Construct_UPackage__Script_ImageWriteQueue(), TEXT("EDesiredImageFormat"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDesiredImageFormat(EDesiredImageFormat_StaticEnum, TEXT("/Script/ImageWriteQueue"), TEXT("EDesiredImageFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat_CRC() { return 2709647094U; }
	UEnum* Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ImageWriteQueue();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDesiredImageFormat"), 0, Get_Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDesiredImageFormat::PNG", (int64)EDesiredImageFormat::PNG },
				{ "EDesiredImageFormat::JPG", (int64)EDesiredImageFormat::JPG },
				{ "EDesiredImageFormat::BMP", (int64)EDesiredImageFormat::BMP },
				{ "EDesiredImageFormat::EXR", (int64)EDesiredImageFormat::EXR },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ImageWriteTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ImageWriteQueue,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EDesiredImageFormat",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EDesiredImageFormat",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
