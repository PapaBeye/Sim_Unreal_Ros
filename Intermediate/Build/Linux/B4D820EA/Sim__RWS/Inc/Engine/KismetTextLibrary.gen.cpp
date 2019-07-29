// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Kismet/KismetTextLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKismetTextLibrary() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFormatArgumentType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextGender();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERoundingMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFormatArgumentData();
	ENGINE_API UClass* Z_Construct_UClass_UKismetTextLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UKismetTextLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_ByteToText();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_ColorToText();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_FloatToText();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_NameToText();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_ObjectToText();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_RotatorToText();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_Vector2dToText();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_VectorToText();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_Format();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_GetEmptyText();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPolyglotTextData();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextToLower();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextToUpper();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing();
	ENGINE_API UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing();
// End Cross Module References
	static UEnum* EFormatArgumentType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EFormatArgumentType, Z_Construct_UPackage__Script_Engine(), TEXT("EFormatArgumentType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFormatArgumentType(EFormatArgumentType_StaticEnum, TEXT("/Script/Engine"), TEXT("EFormatArgumentType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EFormatArgumentType_CRC() { return 1898189471U; }
	UEnum* Z_Construct_UEnum_Engine_EFormatArgumentType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFormatArgumentType"), 0, Get_Z_Construct_UEnum_Engine_EFormatArgumentType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFormatArgumentType::Int", (int64)EFormatArgumentType::Int },
				{ "EFormatArgumentType::UInt", (int64)EFormatArgumentType::UInt },
				{ "EFormatArgumentType::Float", (int64)EFormatArgumentType::Float },
				{ "EFormatArgumentType::Double", (int64)EFormatArgumentType::Double },
				{ "EFormatArgumentType::Text", (int64)EFormatArgumentType::Text },
				{ "EFormatArgumentType::Gender", (int64)EFormatArgumentType::Gender },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EFormatArgumentType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EFormatArgumentType::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETextGender_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextGender, Z_Construct_UPackage__Script_Engine(), TEXT("ETextGender"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETextGender(ETextGender_StaticEnum, TEXT("/Script/Engine"), TEXT("ETextGender"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETextGender_CRC() { return 1753162068U; }
	UEnum* Z_Construct_UEnum_Engine_ETextGender()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETextGender"), 0, Get_Z_Construct_UEnum_Engine_ETextGender_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETextGender::Masculine", (int64)ETextGender::Masculine },
				{ "ETextGender::Feminine", (int64)ETextGender::Feminine },
				{ "ETextGender::Neuter", (int64)ETextGender::Neuter },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETextGender",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ETextGender",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ERoundingMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERoundingMode, Z_Construct_UPackage__Script_Engine(), TEXT("ERoundingMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERoundingMode(ERoundingMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ERoundingMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ERoundingMode_CRC() { return 2845402634U; }
	UEnum* Z_Construct_UEnum_Engine_ERoundingMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERoundingMode"), 0, Get_Z_Construct_UEnum_Engine_ERoundingMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "HalfToEven", (int64)HalfToEven },
				{ "HalfFromZero", (int64)HalfFromZero },
				{ "HalfToZero", (int64)HalfToZero },
				{ "FromZero", (int64)FromZero },
				{ "ToZero", (int64)ToZero },
				{ "ToNegativeInfinity", (int64)ToNegativeInfinity },
				{ "ToPositiveInfinity", (int64)ToPositiveInfinity },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FromZero.ToolTip", "Rounds to the value which is further from zero, \"larger\" in absolute value: 0.1 becomes 1, -0.1 becomes -1" },
				{ "HalfFromZero.ToolTip", "Rounds to nearest place, equidistant ties go to the value which is further from zero: -0.5 becomes -1.0, 0.5 becomes 1.0" },
				{ "HalfToEven.ToolTip", "Rounds to the nearest place, equidistant ties go to the value which is closest to an even value: 1.5 becomes 2, 0.5 becomes 0" },
				{ "HalfToZero.ToolTip", "Rounds to nearest place, equidistant ties go to the value which is closer to zero: -0.5 becomes 0, 0.5 becomes 0." },
				{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
				{ "ToNegativeInfinity.ToolTip", "Rounds to the value which is more negative: 0.1 becomes 0, -0.1 becomes -1" },
				{ "ToolTip", "Provides rounding modes for converting numbers into localized text" },
				{ "ToPositiveInfinity.ToolTip", "Rounds to the value which is more positive: 0.1 becomes 1, -0.1 becomes 0" },
				{ "ToZero.ToolTip", "Rounds to the value which is closer to zero, \"smaller\" in absolute value: 0.1 becomes 0, -0.1 becomes 0" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ERoundingMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ERoundingMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	struct Z_Construct_UScriptStruct_FFormatArgumentData_Statics
	{
		struct FFormatArgumentData
		{
			FString ArgumentName;
			TEnumAsByte<EFormatArgumentType::Type> ArgumentValueType;
			FText ArgumentValue;
			int32 ArgumentValueInt;
			float ArgumentValueFloat;
			ETextGender ArgumentValueGender;
		};

#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArgumentValueGender_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ArgumentValueGender;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ArgumentValueGender_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArgumentValueFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArgumentValueFloat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArgumentValueInt_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArgumentValueInt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArgumentValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ArgumentValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArgumentValueType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ArgumentValueType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArgumentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ArgumentName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFormatArgumentData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Used to pass argument/value pairs into FText::Format.\nThe full C++ struct is located here: Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\Text.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueGender_MetaData[] = {
		{ "Category", "ArgumentValue" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueGender = { UE4CodeGen_Private::EPropertyClass::Enum, "ArgumentValueGender", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000805, 1, nullptr, STRUCT_OFFSET(FFormatArgumentData, ArgumentValueGender), Z_Construct_UEnum_Engine_ETextGender, METADATA_PARAMS(Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueGender_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueGender_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueGender_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueFloat_MetaData[] = {
		{ "Category", "ArgumentValue" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueFloat = { UE4CodeGen_Private::EPropertyClass::Float, "ArgumentValueFloat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000805, 1, nullptr, STRUCT_OFFSET(FFormatArgumentData, ArgumentValueFloat), METADATA_PARAMS(Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueFloat_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueFloat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueInt_MetaData[] = {
		{ "Category", "ArgumentValue" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueInt = { UE4CodeGen_Private::EPropertyClass::Int, "ArgumentValueInt", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000805, 1, nullptr, STRUCT_OFFSET(FFormatArgumentData, ArgumentValueInt), METADATA_PARAMS(Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueInt_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueInt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValue_MetaData[] = {
		{ "Category", "ArgumentValue" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValue = { UE4CodeGen_Private::EPropertyClass::Text, "ArgumentValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000805, 1, nullptr, STRUCT_OFFSET(FFormatArgumentData, ArgumentValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueType_MetaData[] = {
		{ "Category", "ArgumentValue" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueType = { UE4CodeGen_Private::EPropertyClass::Byte, "ArgumentValueType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000805, 1, nullptr, STRUCT_OFFSET(FFormatArgumentData, ArgumentValueType), Z_Construct_UEnum_Engine_EFormatArgumentType, METADATA_PARAMS(Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueType_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentName_MetaData[] = {
		{ "Category", "ArgumentName" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentName = { UE4CodeGen_Private::EPropertyClass::Str, "ArgumentName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000805, 1, nullptr, STRUCT_OFFSET(FFormatArgumentData, ArgumentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFormatArgumentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueGender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueGender_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueInt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFormatArgumentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		nullptr,
		"FormatArgumentData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		sizeof(FFormatArgumentData),
		alignof(FFormatArgumentData),
		Z_Construct_UScriptStruct_FFormatArgumentData_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FFormatArgumentData_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFormatArgumentData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FFormatArgumentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFormatArgumentData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFormatArgumentData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FormatArgumentData"), sizeof(Z_Construct_UScriptStruct_FFormatArgumentData_Statics::FFormatArgumentData), Get_Z_Construct_UScriptStruct_FFormatArgumentData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFormatArgumentData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFormatArgumentData_CRC() { return 3766237146U; }
	void UKismetTextLibrary::StaticRegisterNativesUKismetTextLibrary()
	{
		UClass* Class = UKismetTextLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsCurrency_Float", &UKismetTextLibrary::execAsCurrency_Float },
			{ "AsCurrency_Integer", &UKismetTextLibrary::execAsCurrency_Integer },
			{ "AsCurrencyBase", &UKismetTextLibrary::execAsCurrencyBase },
			{ "AsDate_DateTime", &UKismetTextLibrary::execAsDate_DateTime },
			{ "AsDateTime_DateTime", &UKismetTextLibrary::execAsDateTime_DateTime },
			{ "AsPercent_Float", &UKismetTextLibrary::execAsPercent_Float },
			{ "AsTime_DateTime", &UKismetTextLibrary::execAsTime_DateTime },
			{ "AsTimespan_Timespan", &UKismetTextLibrary::execAsTimespan_Timespan },
			{ "AsTimeZoneDate_DateTime", &UKismetTextLibrary::execAsTimeZoneDate_DateTime },
			{ "AsTimeZoneDateTime_DateTime", &UKismetTextLibrary::execAsTimeZoneDateTime_DateTime },
			{ "AsTimeZoneTime_DateTime", &UKismetTextLibrary::execAsTimeZoneTime_DateTime },
			{ "Conv_BoolToText", &UKismetTextLibrary::execConv_BoolToText },
			{ "Conv_ByteToText", &UKismetTextLibrary::execConv_ByteToText },
			{ "Conv_ColorToText", &UKismetTextLibrary::execConv_ColorToText },
			{ "Conv_FloatToText", &UKismetTextLibrary::execConv_FloatToText },
			{ "Conv_IntToText", &UKismetTextLibrary::execConv_IntToText },
			{ "Conv_NameToText", &UKismetTextLibrary::execConv_NameToText },
			{ "Conv_ObjectToText", &UKismetTextLibrary::execConv_ObjectToText },
			{ "Conv_RotatorToText", &UKismetTextLibrary::execConv_RotatorToText },
			{ "Conv_StringToText", &UKismetTextLibrary::execConv_StringToText },
			{ "Conv_TextToString", &UKismetTextLibrary::execConv_TextToString },
			{ "Conv_TransformToText", &UKismetTextLibrary::execConv_TransformToText },
			{ "Conv_Vector2dToText", &UKismetTextLibrary::execConv_Vector2dToText },
			{ "Conv_VectorToText", &UKismetTextLibrary::execConv_VectorToText },
			{ "EqualEqual_IgnoreCase_TextText", &UKismetTextLibrary::execEqualEqual_IgnoreCase_TextText },
			{ "EqualEqual_TextText", &UKismetTextLibrary::execEqualEqual_TextText },
			{ "FindTextInLocalizationTable", &UKismetTextLibrary::execFindTextInLocalizationTable },
			{ "Format", &UKismetTextLibrary::execFormat },
			{ "GetEmptyText", &UKismetTextLibrary::execGetEmptyText },
			{ "IsPolyglotDataValid", &UKismetTextLibrary::execIsPolyglotDataValid },
			{ "NotEqual_IgnoreCase_TextText", &UKismetTextLibrary::execNotEqual_IgnoreCase_TextText },
			{ "NotEqual_TextText", &UKismetTextLibrary::execNotEqual_TextText },
			{ "PolyglotDataToText", &UKismetTextLibrary::execPolyglotDataToText },
			{ "StringTableIdAndKeyFromText", &UKismetTextLibrary::execStringTableIdAndKeyFromText },
			{ "TextFromStringTable", &UKismetTextLibrary::execTextFromStringTable },
			{ "TextIsCultureInvariant", &UKismetTextLibrary::execTextIsCultureInvariant },
			{ "TextIsEmpty", &UKismetTextLibrary::execTextIsEmpty },
			{ "TextIsFromStringTable", &UKismetTextLibrary::execTextIsFromStringTable },
			{ "TextIsTransient", &UKismetTextLibrary::execTextIsTransient },
			{ "TextToLower", &UKismetTextLibrary::execTextToLower },
			{ "TextToUpper", &UKismetTextLibrary::execTextToUpper },
			{ "TextTrimPreceding", &UKismetTextLibrary::execTextTrimPreceding },
			{ "TextTrimPrecedingAndTrailing", &UKismetTextLibrary::execTextTrimPrecedingAndTrailing },
			{ "TextTrimTrailing", &UKismetTextLibrary::execTextTrimTrailing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics
	{
		struct KismetTextLibrary_eventAsCurrency_Float_Parms
		{
			float Value;
			TEnumAsByte<ERoundingMode> RoundingMode;
			bool bAlwaysSign;
			bool bUseGrouping;
			int32 MinimumIntegralDigits;
			int32 MaximumIntegralDigits;
			int32 MinimumFractionalDigits;
			int32 MaximumFractionalDigits;
			FString CurrencyCode;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrencyCode;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumFractionalDigits;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinimumFractionalDigits;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumIntegralDigits;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinimumIntegralDigits;
		static void NewProp_bUseGrouping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGrouping;
		static void NewProp_bAlwaysSign_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysSign;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RoundingMode;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Float_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_CurrencyCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_CurrencyCode = { UE4CodeGen_Private::EPropertyClass::Str, "CurrencyCode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Float_Parms, CurrencyCode), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_CurrencyCode_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_CurrencyCode_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_MaximumFractionalDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MaximumFractionalDigits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Float_Parms, MaximumFractionalDigits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_MinimumFractionalDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MinimumFractionalDigits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Float_Parms, MinimumFractionalDigits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_MaximumIntegralDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MaximumIntegralDigits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Float_Parms, MaximumIntegralDigits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_MinimumIntegralDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MinimumIntegralDigits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Float_Parms, MinimumIntegralDigits), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_bUseGrouping_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventAsCurrency_Float_Parms*)Obj)->bUseGrouping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_bUseGrouping = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseGrouping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventAsCurrency_Float_Parms), &Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_bUseGrouping_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_bAlwaysSign_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventAsCurrency_Float_Parms*)Obj)->bAlwaysSign = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_bAlwaysSign = { UE4CodeGen_Private::EPropertyClass::Bool, "bAlwaysSign", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventAsCurrency_Float_Parms), &Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_bAlwaysSign_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_RoundingMode = { UE4CodeGen_Private::EPropertyClass::Byte, "RoundingMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Float_Parms, RoundingMode), Z_Construct_UEnum_Engine_ERoundingMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Float_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_CurrencyCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_MaximumFractionalDigits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_MinimumFractionalDigits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_MaximumIntegralDigits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_MinimumIntegralDigits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_bUseGrouping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_bAlwaysSign,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_RoundingMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "CPP_Default_bAlwaysSign", "false" },
		{ "CPP_Default_bUseGrouping", "true" },
		{ "CPP_Default_CurrencyCode", "" },
		{ "CPP_Default_MaximumFractionalDigits", "3" },
		{ "CPP_Default_MaximumIntegralDigits", "324" },
		{ "CPP_Default_MinimumFractionalDigits", "0" },
		{ "CPP_Default_MinimumIntegralDigits", "1" },
		{ "DisplayName", "AsCurrency (float) - DEPRECATED (use AsCurrency)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a passed in float to a text formatted as a currency" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "AsCurrency_Float", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetTextLibrary_eventAsCurrency_Float_Parms), Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics
	{
		struct KismetTextLibrary_eventAsCurrency_Integer_Parms
		{
			int32 Value;
			TEnumAsByte<ERoundingMode> RoundingMode;
			bool bAlwaysSign;
			bool bUseGrouping;
			int32 MinimumIntegralDigits;
			int32 MaximumIntegralDigits;
			int32 MinimumFractionalDigits;
			int32 MaximumFractionalDigits;
			FString CurrencyCode;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrencyCode;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumFractionalDigits;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinimumFractionalDigits;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumIntegralDigits;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinimumIntegralDigits;
		static void NewProp_bUseGrouping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGrouping;
		static void NewProp_bAlwaysSign_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysSign;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RoundingMode;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Integer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_CurrencyCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_CurrencyCode = { UE4CodeGen_Private::EPropertyClass::Str, "CurrencyCode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Integer_Parms, CurrencyCode), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_CurrencyCode_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_CurrencyCode_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_MaximumFractionalDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MaximumFractionalDigits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Integer_Parms, MaximumFractionalDigits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_MinimumFractionalDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MinimumFractionalDigits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Integer_Parms, MinimumFractionalDigits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_MaximumIntegralDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MaximumIntegralDigits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Integer_Parms, MaximumIntegralDigits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_MinimumIntegralDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MinimumIntegralDigits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Integer_Parms, MinimumIntegralDigits), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_bUseGrouping_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventAsCurrency_Integer_Parms*)Obj)->bUseGrouping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_bUseGrouping = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseGrouping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventAsCurrency_Integer_Parms), &Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_bUseGrouping_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_bAlwaysSign_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventAsCurrency_Integer_Parms*)Obj)->bAlwaysSign = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_bAlwaysSign = { UE4CodeGen_Private::EPropertyClass::Bool, "bAlwaysSign", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventAsCurrency_Integer_Parms), &Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_bAlwaysSign_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_RoundingMode = { UE4CodeGen_Private::EPropertyClass::Byte, "RoundingMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Integer_Parms, RoundingMode), Z_Construct_UEnum_Engine_ERoundingMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Int, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Integer_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_CurrencyCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_MaximumFractionalDigits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_MinimumFractionalDigits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_MaximumIntegralDigits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_MinimumIntegralDigits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_bUseGrouping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_bAlwaysSign,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_RoundingMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "CPP_Default_bAlwaysSign", "false" },
		{ "CPP_Default_bUseGrouping", "true" },
		{ "CPP_Default_CurrencyCode", "" },
		{ "CPP_Default_MaximumFractionalDigits", "3" },
		{ "CPP_Default_MaximumIntegralDigits", "324" },
		{ "CPP_Default_MinimumFractionalDigits", "0" },
		{ "CPP_Default_MinimumIntegralDigits", "1" },
		{ "DisplayName", "AsCurrency (integer) - DEPRECATED (use AsCurrency)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a passed in integer to a text formatted as a currency" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "AsCurrency_Integer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetTextLibrary_eventAsCurrency_Integer_Parms), Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase_Statics
	{
		struct KismetTextLibrary_eventAsCurrencyBase_Parms
		{
			int32 BaseValue;
			FString CurrencyCode;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrencyCode;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BaseValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrencyBase_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase_Statics::NewProp_CurrencyCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase_Statics::NewProp_CurrencyCode = { UE4CodeGen_Private::EPropertyClass::Str, "CurrencyCode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrencyBase_Parms, CurrencyCode), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase_Statics::NewProp_CurrencyCode_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase_Statics::NewProp_CurrencyCode_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase_Statics::NewProp_BaseValue = { UE4CodeGen_Private::EPropertyClass::Int, "BaseValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrencyBase_Parms, BaseValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase_Statics::NewProp_CurrencyCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase_Statics::NewProp_BaseValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "DisplayName", "AsCurrency" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Generate an FText that represents the passed number as currency in the current culture.\nBaseVal is specified in the smallest fractional value of the currency and will be converted for formatting according to the selected culture.\nKeep in mind the CurrencyCode is completely independent of the culture it's displayed in (and they do not imply one another).\nFor example: FText::AsCurrencyBase(650, TEXT(\"EUR\")); would return an FText of \"<EUR>6.50\" in most English cultures (en_US/en_UK) and \"6,50<EUR>\" in Spanish (es_ES) (where <EUR> is U+20AC)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "AsCurrencyBase", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetTextLibrary_eventAsCurrencyBase_Parms), Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime_Statics
	{
		struct KismetTextLibrary_eventAsDate_DateTime_Parms
		{
			FDateTime InDateTime;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InDateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InDateTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsDate_DateTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime_Statics::NewProp_InDateTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime_Statics::NewProp_InDateTime = { UE4CodeGen_Private::EPropertyClass::Struct, "InDateTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsDate_DateTime_Parms, InDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime_Statics::NewProp_InDateTime_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime_Statics::NewProp_InDateTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime_Statics::NewProp_InDateTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Text" },
		{ "DisplayName", "AsDate" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a passed in date & time to a text, formatted as a date using an invariant timezone. This will use the given date & time as-is, so it's assumed to already be in the correct timezone." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "AsDate_DateTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KismetTextLibrary_eventAsDate_DateTime_Parms), Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime_Statics
	{
		struct KismetTextLibrary_eventAsDateTime_DateTime_Parms
		{
			FDateTime In;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_In_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_In;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsDateTime_DateTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime_Statics::NewProp_In_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime_Statics::NewProp_In = { UE4CodeGen_Private::EPropertyClass::Struct, "In", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsDateTime_DateTime_Parms, In), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime_Statics::NewProp_In_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime_Statics::NewProp_In_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime_Statics::NewProp_In,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Text" },
		{ "DisplayName", "AsDateTime" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a passed in date & time to a text, formatted as a date & time using an invariant timezone. This will use the given date & time as-is, so it's assumed to already be in the correct timezone." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "AsDateTime_DateTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KismetTextLibrary_eventAsDateTime_DateTime_Parms), Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics
	{
		struct KismetTextLibrary_eventAsPercent_Float_Parms
		{
			float Value;
			TEnumAsByte<ERoundingMode> RoundingMode;
			bool bAlwaysSign;
			bool bUseGrouping;
			int32 MinimumIntegralDigits;
			int32 MaximumIntegralDigits;
			int32 MinimumFractionalDigits;
			int32 MaximumFractionalDigits;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumFractionalDigits;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinimumFractionalDigits;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumIntegralDigits;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinimumIntegralDigits;
		static void NewProp_bUseGrouping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGrouping;
		static void NewProp_bAlwaysSign_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysSign;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RoundingMode;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsPercent_Float_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_MaximumFractionalDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MaximumFractionalDigits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsPercent_Float_Parms, MaximumFractionalDigits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_MinimumFractionalDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MinimumFractionalDigits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsPercent_Float_Parms, MinimumFractionalDigits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_MaximumIntegralDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MaximumIntegralDigits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsPercent_Float_Parms, MaximumIntegralDigits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_MinimumIntegralDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MinimumIntegralDigits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsPercent_Float_Parms, MinimumIntegralDigits), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_bUseGrouping_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventAsPercent_Float_Parms*)Obj)->bUseGrouping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_bUseGrouping = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseGrouping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventAsPercent_Float_Parms), &Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_bUseGrouping_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_bAlwaysSign_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventAsPercent_Float_Parms*)Obj)->bAlwaysSign = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_bAlwaysSign = { UE4CodeGen_Private::EPropertyClass::Bool, "bAlwaysSign", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventAsPercent_Float_Parms), &Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_bAlwaysSign_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_RoundingMode = { UE4CodeGen_Private::EPropertyClass::Byte, "RoundingMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsPercent_Float_Parms, RoundingMode), Z_Construct_UEnum_Engine_ERoundingMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsPercent_Float_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_MaximumFractionalDigits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_MinimumFractionalDigits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_MaximumIntegralDigits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_MinimumIntegralDigits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_bUseGrouping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_bAlwaysSign,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_RoundingMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Text" },
		{ "CPP_Default_bAlwaysSign", "false" },
		{ "CPP_Default_bUseGrouping", "true" },
		{ "CPP_Default_MaximumFractionalDigits", "3" },
		{ "CPP_Default_MaximumIntegralDigits", "324" },
		{ "CPP_Default_MinimumFractionalDigits", "0" },
		{ "CPP_Default_MinimumIntegralDigits", "1" },
		{ "DisplayName", "AsPercent" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a passed in float to a text, formatted as a percent" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "AsPercent_Float", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetTextLibrary_eventAsPercent_Float_Parms), Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime_Statics
	{
		struct KismetTextLibrary_eventAsTime_DateTime_Parms
		{
			FDateTime In;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_In_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_In;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTime_DateTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime_Statics::NewProp_In_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime_Statics::NewProp_In = { UE4CodeGen_Private::EPropertyClass::Struct, "In", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTime_DateTime_Parms, In), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime_Statics::NewProp_In_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime_Statics::NewProp_In_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime_Statics::NewProp_In,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Text" },
		{ "DisplayName", "AsTime" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a passed in date & time to a text, formatted as a time using an invariant timezone. This will use the given date & time as-is, so it's assumed to already be in the correct timezone." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "AsTime_DateTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KismetTextLibrary_eventAsTime_DateTime_Parms), Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan_Statics
	{
		struct KismetTextLibrary_eventAsTimespan_Timespan_Parms
		{
			FTimespan InTimespan;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTimespan_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTimespan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTimespan_Timespan_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan_Statics::NewProp_InTimespan_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan_Statics::NewProp_InTimespan = { UE4CodeGen_Private::EPropertyClass::Struct, "InTimespan", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTimespan_Timespan_Parms, InTimespan), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan_Statics::NewProp_InTimespan_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan_Statics::NewProp_InTimespan_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan_Statics::NewProp_InTimespan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Text" },
		{ "DisplayName", "AsTimespan" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a passed in time span to a text, formatted as a time span" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "AsTimespan_Timespan", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KismetTextLibrary_eventAsTimespan_Timespan_Parms), Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics
	{
		struct KismetTextLibrary_eventAsTimeZoneDate_DateTime_Parms
		{
			FDateTime InDateTime;
			FString InTimeZone;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTimeZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InTimeZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InDateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InDateTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTimeZoneDate_DateTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::NewProp_InTimeZone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::NewProp_InTimeZone = { UE4CodeGen_Private::EPropertyClass::Str, "InTimeZone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTimeZoneDate_DateTime_Parms, InTimeZone), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::NewProp_InTimeZone_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::NewProp_InTimeZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::NewProp_InDateTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::NewProp_InDateTime = { UE4CodeGen_Private::EPropertyClass::Struct, "InDateTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTimeZoneDate_DateTime_Parms, InDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::NewProp_InDateTime_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::NewProp_InDateTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::NewProp_InTimeZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::NewProp_InDateTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Text" },
		{ "CPP_Default_InTimeZone", "" },
		{ "DisplayName", "AsDate (from UTC)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a passed in date & time to a text, formatted as a date using the given timezone (default is the local timezone). This will convert the given date & time from UTC to the given timezone (taking into account DST)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "AsTimeZoneDate_DateTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KismetTextLibrary_eventAsTimeZoneDate_DateTime_Parms), Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics
	{
		struct KismetTextLibrary_eventAsTimeZoneDateTime_DateTime_Parms
		{
			FDateTime InDateTime;
			FString InTimeZone;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTimeZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InTimeZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InDateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InDateTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTimeZoneDateTime_DateTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::NewProp_InTimeZone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::NewProp_InTimeZone = { UE4CodeGen_Private::EPropertyClass::Str, "InTimeZone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTimeZoneDateTime_DateTime_Parms, InTimeZone), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::NewProp_InTimeZone_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::NewProp_InTimeZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::NewProp_InDateTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::NewProp_InDateTime = { UE4CodeGen_Private::EPropertyClass::Struct, "InDateTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTimeZoneDateTime_DateTime_Parms, InDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::NewProp_InDateTime_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::NewProp_InDateTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::NewProp_InTimeZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::NewProp_InDateTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Text" },
		{ "CPP_Default_InTimeZone", "" },
		{ "DisplayName", "AsDateTime (from UTC)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a passed in date & time to a text, formatted as a date & time using the given timezone (default is the local timezone). This will convert the given date & time from UTC to the given timezone (taking into account DST)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "AsTimeZoneDateTime_DateTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KismetTextLibrary_eventAsTimeZoneDateTime_DateTime_Parms), Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics
	{
		struct KismetTextLibrary_eventAsTimeZoneTime_DateTime_Parms
		{
			FDateTime InDateTime;
			FString InTimeZone;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTimeZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InTimeZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InDateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InDateTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTimeZoneTime_DateTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::NewProp_InTimeZone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::NewProp_InTimeZone = { UE4CodeGen_Private::EPropertyClass::Str, "InTimeZone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTimeZoneTime_DateTime_Parms, InTimeZone), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::NewProp_InTimeZone_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::NewProp_InTimeZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::NewProp_InDateTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::NewProp_InDateTime = { UE4CodeGen_Private::EPropertyClass::Struct, "InDateTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTimeZoneTime_DateTime_Parms, InDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::NewProp_InDateTime_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::NewProp_InDateTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::NewProp_InTimeZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::NewProp_InDateTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Text" },
		{ "CPP_Default_InTimeZone", "" },
		{ "DisplayName", "AsTime (from UTC)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a passed in date & time to a text, formatted as a time using the given timezone (default is the local timezone). This will convert the given date & time from UTC to the given timezone (taking into account DST)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "AsTimeZoneTime_DateTime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KismetTextLibrary_eventAsTimeZoneTime_DateTime_Parms), Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText_Statics
	{
		struct KismetTextLibrary_eventConv_BoolToText_Parms
		{
			bool InBool;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static void NewProp_InBool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InBool;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_BoolToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText_Statics::NewProp_InBool_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventConv_BoolToText_Parms*)Obj)->InBool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText_Statics::NewProp_InBool = { UE4CodeGen_Private::EPropertyClass::Bool, "InBool", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventConv_BoolToText_Parms), &Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText_Statics::NewProp_InBool_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText_Statics::NewProp_InBool,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Text" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToText (boolean)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a boolean value to formatted text, either 'true' or 'false'" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "Conv_BoolToText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetTextLibrary_eventConv_BoolToText_Parms), Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_Conv_ByteToText_Statics
	{
		struct KismetTextLibrary_eventConv_ByteToText_Parms
		{
			uint8 Value;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_ByteToText_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_ByteToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_ByteToText_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Byte, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_ByteToText_Parms, Value), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_Conv_ByteToText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_ByteToText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_ByteToText_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_Conv_ByteToText_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Text" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToText (byte)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a byte value to formatted text" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_Conv_ByteToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "Conv_ByteToText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetTextLibrary_eventConv_ByteToText_Parms), Z_Construct_UFunction_UKismetTextLibrary_Conv_ByteToText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_ByteToText_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_Conv_ByteToText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_ByteToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_ByteToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_Conv_ByteToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_Conv_ColorToText_Statics
	{
		struct KismetTextLibrary_eventConv_ColorToText_Parms
		{
			FLinearColor InColor;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_ColorToText_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_ColorToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_ColorToText_Statics::NewProp_InColor = { UE4CodeGen_Private::EPropertyClass::Struct, "InColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_ColorToText_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_Conv_ColorToText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_ColorToText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_ColorToText_Statics::NewProp_InColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_Conv_ColorToText_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Text" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToText (linear color)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a linear color value to localized formatted text, in the form '(R=,G=,B=,A=)'" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_Conv_ColorToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "Conv_ColorToText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(KismetTextLibrary_eventConv_ColorToText_Parms), Z_Construct_UFunction_UKismetTextLibrary_Conv_ColorToText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_ColorToText_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_Conv_ColorToText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_ColorToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_ColorToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_Conv_ColorToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_Conv_FloatToText_Statics
	{
		struct KismetTextLibrary_eventConv_FloatToText_Parms
		{
			float Value;
			TEnumAsByte<ERoundingMode> RoundingMode;
			bool bAlwaysSign;
			bool bUseGrouping;
			int32 MinimumIntegralDigits;
			int32 MaximumIntegralDigits;
			int32 MinimumFractionalDigits;
			int32 MaximumFractionalDigits;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumFractionalDigits;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinimumFractionalDigits;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumIntegralDigits;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinimumIntegralDigits;
		static void NewProp_bUseGrouping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGrouping;
		static void NewProp_bAlwaysSign_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysSign;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RoundingMode;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_FloatToText_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_FloatToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_FloatToText_Statics::NewProp_MaximumFractionalDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MaximumFractionalDigits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_FloatToText_Parms, MaximumFractionalDigits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_FloatToText_Statics::NewProp_MinimumFractionalDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MinimumFractionalDigits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_FloatToText_Parms, MinimumFractionalDigits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_FloatToText_Statics::NewProp_MaximumIntegralDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MaximumIntegralDigits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_FloatToText_Parms, MaximumIntegralDigits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_FloatToText_Statics::NewProp_MinimumIntegralDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MinimumIntegralDigits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_FloatToText_Parms, MinimumIntegralDigits), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetTextLibrary_Conv_FloatToText_Statics::NewProp_bUseGrouping_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventConv_FloatToText_Parms*)Obj)->bUseGrouping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_FloatToText_Statics::NewProp_bUseGrouping = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseGrouping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventConv_FloatToText_Parms), &Z_Construct_UFunction_UKismetTextLibrary_Conv_FloatToText_Statics::NewProp_bUseGrouping_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetTextLibrary_Conv_FloatToText_Statics::NewProp_bAlwaysSign_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventConv_FloatToText_Parms*)Obj)->bAlwaysSign = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_FloatToText_Statics::NewProp_bAlwaysSign = { UE4CodeGen_Private::EPropertyClass::Bool, "bAlwaysSign", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventConv_FloatToText_Parms), &Z_Construct_UFunction_UKismetTextLibrary_Conv_FloatToText_Statics::NewProp_bAlwaysSign_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_FloatToText_Statics::NewProp_RoundingMode = { UE4CodeGen_Private::EPropertyClass::Byte, "RoundingMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_FloatToText_Parms, RoundingMode), Z_Construct_UEnum_Engine_ERoundingMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_FloatToText_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_FloatToText_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_Conv_FloatToText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_FloatToText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_FloatToText_Statics::NewProp_MaximumFractionalDigits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_FloatToText_Statics::NewProp_MinimumFractionalDigits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_FloatToText_Statics::NewProp_MaximumIntegralDigits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_FloatToText_Statics::NewProp_MinimumIntegralDigits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_FloatToText_Statics::NewProp_bUseGrouping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_FloatToText_Statics::NewProp_bAlwaysSign,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_FloatToText_Statics::NewProp_RoundingMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_FloatToText_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_Conv_FloatToText_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Text" },
		{ "CPP_Default_bAlwaysSign", "false" },
		{ "CPP_Default_bUseGrouping", "true" },
		{ "CPP_Default_MaximumFractionalDigits", "3" },
		{ "CPP_Default_MaximumIntegralDigits", "324" },
		{ "CPP_Default_MinimumFractionalDigits", "0" },
		{ "CPP_Default_MinimumIntegralDigits", "1" },
		{ "DisplayName", "ToText (float)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a passed in float to text based on formatting options" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_Conv_FloatToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "Conv_FloatToText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetTextLibrary_eventConv_FloatToText_Parms), Z_Construct_UFunction_UKismetTextLibrary_Conv_FloatToText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_FloatToText_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_Conv_FloatToText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_FloatToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_FloatToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_Conv_FloatToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics
	{
		struct KismetTextLibrary_eventConv_IntToText_Parms
		{
			int32 Value;
			bool bAlwaysSign;
			bool bUseGrouping;
			int32 MinimumIntegralDigits;
			int32 MaximumIntegralDigits;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaximumIntegralDigits;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinimumIntegralDigits;
		static void NewProp_bUseGrouping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGrouping;
		static void NewProp_bAlwaysSign_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysSign;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_IntToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::NewProp_MaximumIntegralDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MaximumIntegralDigits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_IntToText_Parms, MaximumIntegralDigits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::NewProp_MinimumIntegralDigits = { UE4CodeGen_Private::EPropertyClass::Int, "MinimumIntegralDigits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_IntToText_Parms, MinimumIntegralDigits), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::NewProp_bUseGrouping_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventConv_IntToText_Parms*)Obj)->bUseGrouping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::NewProp_bUseGrouping = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseGrouping", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventConv_IntToText_Parms), &Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::NewProp_bUseGrouping_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::NewProp_bAlwaysSign_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventConv_IntToText_Parms*)Obj)->bAlwaysSign = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::NewProp_bAlwaysSign = { UE4CodeGen_Private::EPropertyClass::Bool, "bAlwaysSign", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010040000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventConv_IntToText_Parms), &Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::NewProp_bAlwaysSign_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Int, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_IntToText_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::NewProp_MaximumIntegralDigits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::NewProp_MinimumIntegralDigits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::NewProp_bUseGrouping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::NewProp_bAlwaysSign,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Text" },
		{ "CPP_Default_bAlwaysSign", "false" },
		{ "CPP_Default_bUseGrouping", "true" },
		{ "CPP_Default_MaximumIntegralDigits", "324" },
		{ "CPP_Default_MinimumIntegralDigits", "1" },
		{ "DisplayName", "ToText (integer)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a passed in integer to text based on formatting options" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "Conv_IntToText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetTextLibrary_eventConv_IntToText_Parms), Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_Conv_NameToText_Statics
	{
		struct KismetTextLibrary_eventConv_NameToText_Parms
		{
			FName InName;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_NameToText_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_NameToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_NameToText_Statics::NewProp_InName = { UE4CodeGen_Private::EPropertyClass::Name, "InName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_NameToText_Parms, InName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_Conv_NameToText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_NameToText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_NameToText_Statics::NewProp_InName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_Conv_NameToText_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Text" },
		{ "DisplayName", "ToText (name)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts Name to culture invariant text" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_Conv_NameToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "Conv_NameToText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetTextLibrary_eventConv_NameToText_Parms), Z_Construct_UFunction_UKismetTextLibrary_Conv_NameToText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_NameToText_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_Conv_NameToText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_NameToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_NameToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_Conv_NameToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_Conv_ObjectToText_Statics
	{
		struct KismetTextLibrary_eventConv_ObjectToText_Parms
		{
			UObject* InObj;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InObj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_ObjectToText_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_ObjectToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_ObjectToText_Statics::NewProp_InObj = { UE4CodeGen_Private::EPropertyClass::Object, "InObj", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_ObjectToText_Parms, InObj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_Conv_ObjectToText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_ObjectToText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_ObjectToText_Statics::NewProp_InObj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_Conv_ObjectToText_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Text" },
		{ "DisplayName", "ToText (object)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a UObject value to culture invariant text by calling the object's GetName method" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_Conv_ObjectToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "Conv_ObjectToText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetTextLibrary_eventConv_ObjectToText_Parms), Z_Construct_UFunction_UKismetTextLibrary_Conv_ObjectToText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_ObjectToText_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_Conv_ObjectToText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_ObjectToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_ObjectToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_Conv_ObjectToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_Conv_RotatorToText_Statics
	{
		struct KismetTextLibrary_eventConv_RotatorToText_Parms
		{
			FRotator InRot;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InRot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_RotatorToText_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_RotatorToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_RotatorToText_Statics::NewProp_InRot = { UE4CodeGen_Private::EPropertyClass::Struct, "InRot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_RotatorToText_Parms, InRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_Conv_RotatorToText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_RotatorToText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_RotatorToText_Statics::NewProp_InRot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_Conv_RotatorToText_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Text" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToText (rotator)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a rotator value to localized formatted text, in the form 'P= Y= R='" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_Conv_RotatorToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "Conv_RotatorToText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(KismetTextLibrary_eventConv_RotatorToText_Parms), Z_Construct_UFunction_UKismetTextLibrary_Conv_RotatorToText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_RotatorToText_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_Conv_RotatorToText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_RotatorToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_RotatorToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_Conv_RotatorToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText_Statics
	{
		struct KismetTextLibrary_eventConv_StringToText_Parms
		{
			FString InString;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_StringToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText_Statics::NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText_Statics::NewProp_InString = { UE4CodeGen_Private::EPropertyClass::Str, "InString", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_StringToText_Parms, InString), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText_Statics::NewProp_InString_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText_Statics::NewProp_InString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText_Statics::NewProp_InString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Text" },
		{ "DisplayName", "ToText (string)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts string to culture invariant text. Use Format or Make Literal Text to create localizable text" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "Conv_StringToText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetTextLibrary_eventConv_StringToText_Parms), Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString_Statics
	{
		struct KismetTextLibrary_eventConv_TextToString_Parms
		{
			FText InText;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_TextToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString_Statics::NewProp_InText = { UE4CodeGen_Private::EPropertyClass::Text, "InText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_TextToString_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString_Statics::NewProp_InText_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString_Statics::NewProp_InText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|String" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (text)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts localizable text to the string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "Conv_TextToString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetTextLibrary_eventConv_TextToString_Parms), Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText_Statics
	{
		struct KismetTextLibrary_eventConv_TransformToText_Parms
		{
			FTransform InTrans;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTrans_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTrans;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_TransformToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText_Statics::NewProp_InTrans_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText_Statics::NewProp_InTrans = { UE4CodeGen_Private::EPropertyClass::Struct, "InTrans", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_TransformToText_Parms, InTrans), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText_Statics::NewProp_InTrans_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText_Statics::NewProp_InTrans_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText_Statics::NewProp_InTrans,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Text" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToText (transform)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a transform value to localized formatted text, in the form 'Translation: X= Y= Z= Rotation: P= Y= R= Scale: X= Y= Z='" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "Conv_TransformToText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(KismetTextLibrary_eventConv_TransformToText_Parms), Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_Conv_Vector2dToText_Statics
	{
		struct KismetTextLibrary_eventConv_Vector2dToText_Parms
		{
			FVector2D InVec;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_Vector2dToText_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_Vector2dToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_Vector2dToText_Statics::NewProp_InVec = { UE4CodeGen_Private::EPropertyClass::Struct, "InVec", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_Vector2dToText_Parms, InVec), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_Conv_Vector2dToText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_Vector2dToText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_Vector2dToText_Statics::NewProp_InVec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_Conv_Vector2dToText_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Text" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToText (vector2d)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a vector2d value to localized formatted text, in the form 'X= Y='" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_Conv_Vector2dToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "Conv_Vector2dToText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(KismetTextLibrary_eventConv_Vector2dToText_Parms), Z_Construct_UFunction_UKismetTextLibrary_Conv_Vector2dToText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_Vector2dToText_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_Conv_Vector2dToText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_Vector2dToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_Vector2dToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_Conv_Vector2dToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_Conv_VectorToText_Statics
	{
		struct KismetTextLibrary_eventConv_VectorToText_Parms
		{
			FVector InVec;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_VectorToText_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_VectorToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_VectorToText_Statics::NewProp_InVec = { UE4CodeGen_Private::EPropertyClass::Struct, "InVec", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_VectorToText_Parms, InVec), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_Conv_VectorToText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_VectorToText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_VectorToText_Statics::NewProp_InVec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_Conv_VectorToText_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Text" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToText (Vector)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a vector value to localized formatted text, in the form 'X= Y= Z='" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_Conv_VectorToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "Conv_VectorToText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14822401, sizeof(KismetTextLibrary_eventConv_VectorToText_Parms), Z_Construct_UFunction_UKismetTextLibrary_Conv_VectorToText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_VectorToText_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_Conv_VectorToText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_VectorToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_VectorToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_Conv_VectorToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics
	{
		struct KismetTextLibrary_eventEqualEqual_IgnoreCase_TextText_Parms
		{
			FText A;
			FText B;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventEqualEqual_IgnoreCase_TextText_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventEqualEqual_IgnoreCase_TextText_Parms), &Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::NewProp_B = { UE4CodeGen_Private::EPropertyClass::Text, "B", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventEqualEqual_IgnoreCase_TextText_Parms, B), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::NewProp_B_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::NewProp_A = { UE4CodeGen_Private::EPropertyClass::Text, "A", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventEqualEqual_IgnoreCase_TextText_Parms, A), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::NewProp_A_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::NewProp_A_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal, Case Insensitive (text)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Returns true if A and B are linguistically equal (A == B), ignoring case." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "EqualEqual_IgnoreCase_TextText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetTextLibrary_eventEqualEqual_IgnoreCase_TextText_Parms), Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics
	{
		struct KismetTextLibrary_eventEqualEqual_TextText_Parms
		{
			FText A;
			FText B;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventEqualEqual_TextText_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventEqualEqual_TextText_Parms), &Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::NewProp_B = { UE4CodeGen_Private::EPropertyClass::Text, "B", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventEqualEqual_TextText_Parms, B), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::NewProp_B_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::NewProp_A = { UE4CodeGen_Private::EPropertyClass::Text, "A", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventEqualEqual_TextText_Parms, A), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::NewProp_A_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::NewProp_A_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal (text)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Returns true if A and B are linguistically equal (A == B)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "EqualEqual_TextText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetTextLibrary_eventEqualEqual_TextText_Parms), Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics
	{
		struct KismetTextLibrary_eventFindTextInLocalizationTable_Parms
		{
			FString Namespace;
			FString Key;
			FText OutText;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_OutText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Namespace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventFindTextInLocalizationTable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventFindTextInLocalizationTable_Parms), &Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::NewProp_OutText = { UE4CodeGen_Private::EPropertyClass::Text, "OutText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventFindTextInLocalizationTable_Parms, OutText), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Str, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventFindTextInLocalizationTable_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::NewProp_Namespace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::NewProp_Namespace = { UE4CodeGen_Private::EPropertyClass::Str, "Namespace", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventFindTextInLocalizationTable_Parms, Namespace), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::NewProp_Namespace_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::NewProp_Namespace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::NewProp_OutText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::NewProp_Namespace,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Attempts to find existing Text using the representation found in the loc tables for the specified namespace and key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "FindTextInLocalizationTable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetTextLibrary_eventFindTextInLocalizationTable_Parms), Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_Format_Statics
	{
		struct FFormatArgumentData
		{
			FString ArgumentName;
			TEnumAsByte<EFormatArgumentType::Type> ArgumentValueType;
			FText ArgumentValue;
			int32 ArgumentValueInt;
			float ArgumentValueFloat;
			ETextGender ArgumentValueGender;
		};

		struct KismetTextLibrary_eventFormat_Parms
		{
			FText InPattern;
			TArray<FFormatArgumentData> InArgs;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InArgs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InArgs_Inner;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InPattern;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Format_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventFormat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Format_Statics::NewProp_InArgs = { UE4CodeGen_Private::EPropertyClass::Array, "InArgs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventFormat_Parms, InArgs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Format_Statics::NewProp_InArgs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "InArgs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FFormatArgumentData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Format_Statics::NewProp_InPattern = { UE4CodeGen_Private::EPropertyClass::Text, "InPattern", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventFormat_Parms, InPattern), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_Format_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Format_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Format_Statics::NewProp_InArgs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Format_Statics::NewProp_InArgs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Format_Statics::NewProp_InPattern,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_Format_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Used for formatting text using the FText::Format function and utilized by the UK2Node_FormatText" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_Format_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "Format", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetTextLibrary_eventFormat_Parms), Z_Construct_UFunction_UKismetTextLibrary_Format_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Format_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_Format_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Format_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Format()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_Format_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_GetEmptyText_Statics
	{
		struct KismetTextLibrary_eventGetEmptyText_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_GetEmptyText_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventGetEmptyText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_GetEmptyText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_GetEmptyText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_GetEmptyText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Returns an empty piece of text." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_GetEmptyText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "GetEmptyText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetTextLibrary_eventGetEmptyText_Parms), Z_Construct_UFunction_UKismetTextLibrary_GetEmptyText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_GetEmptyText_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_GetEmptyText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_GetEmptyText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_GetEmptyText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_GetEmptyText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics
	{
		struct FPolyglotTextData
		{
			ELocalizedTextSourceCategory Category;
			FString NativeCulture;
			FString Namespace;
			FString Key;
			FString NativeString;
			TMap<FString,FString> LocalizedStrings;
			FText CachedText;
		};

		struct KismetTextLibrary_eventIsPolyglotDataValid_Parms
		{
			FPolyglotTextData PolyglotData;
			bool IsValid;
			FText ErrorMessage;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ErrorMessage;
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolyglotData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolyglotData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::NewProp_ErrorMessage = { UE4CodeGen_Private::EPropertyClass::Text, "ErrorMessage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventIsPolyglotDataValid_Parms, ErrorMessage), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventIsPolyglotDataValid_Parms*)Obj)->IsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::NewProp_IsValid = { UE4CodeGen_Private::EPropertyClass::Bool, "IsValid", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventIsPolyglotDataValid_Parms), &Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::NewProp_PolyglotData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::NewProp_PolyglotData = { UE4CodeGen_Private::EPropertyClass::Struct, "PolyglotData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventIsPolyglotDataValid_Parms, PolyglotData), Z_Construct_UScriptStruct_FPolyglotTextData, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::NewProp_PolyglotData_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::NewProp_PolyglotData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::NewProp_ErrorMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::NewProp_IsValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::NewProp_PolyglotData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Check whether the given polyglot data is valid.\n@return True if the polyglot data is valid, false otherwise. ErrorMessage will be filled in if the the data is invalid." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "IsPolyglotDataValid", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetTextLibrary_eventIsPolyglotDataValid_Parms), Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics
	{
		struct KismetTextLibrary_eventNotEqual_IgnoreCase_TextText_Parms
		{
			FText A;
			FText B;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventNotEqual_IgnoreCase_TextText_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventNotEqual_IgnoreCase_TextText_Parms), &Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::NewProp_B = { UE4CodeGen_Private::EPropertyClass::Text, "B", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventNotEqual_IgnoreCase_TextText_Parms, B), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::NewProp_B_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::NewProp_A = { UE4CodeGen_Private::EPropertyClass::Text, "A", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventNotEqual_IgnoreCase_TextText_Parms, A), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::NewProp_A_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::NewProp_A_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "NotEqual, Case Insensitive (text)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Returns true if A and B are linguistically not equal (A != B), ignoring case." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "NotEqual_IgnoreCase_TextText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetTextLibrary_eventNotEqual_IgnoreCase_TextText_Parms), Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics
	{
		struct KismetTextLibrary_eventNotEqual_TextText_Parms
		{
			FText A;
			FText B;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventNotEqual_TextText_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventNotEqual_TextText_Parms), &Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::NewProp_B = { UE4CodeGen_Private::EPropertyClass::Text, "B", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventNotEqual_TextText_Parms, B), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::NewProp_B_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::NewProp_A = { UE4CodeGen_Private::EPropertyClass::Text, "A", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventNotEqual_TextText_Parms, A), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::NewProp_A_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::NewProp_A_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "NotEqual (text)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Returns true if A and B are linguistically not equal (A != B)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "NotEqual_TextText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetTextLibrary_eventNotEqual_TextText_Parms), Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText_Statics
	{
		struct FPolyglotTextData
		{
			ELocalizedTextSourceCategory Category;
			FString NativeCulture;
			FString Namespace;
			FString Key;
			FString NativeString;
			TMap<FString,FString> LocalizedStrings;
			FText CachedText;
		};

		struct KismetTextLibrary_eventPolyglotDataToText_Parms
		{
			FPolyglotTextData PolyglotData;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PolyglotData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PolyglotData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventPolyglotDataToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText_Statics::NewProp_PolyglotData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText_Statics::NewProp_PolyglotData = { UE4CodeGen_Private::EPropertyClass::Struct, "PolyglotData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventPolyglotDataToText_Parms, PolyglotData), Z_Construct_UScriptStruct_FPolyglotTextData, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText_Statics::NewProp_PolyglotData_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText_Statics::NewProp_PolyglotData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText_Statics::NewProp_PolyglotData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Get the text instance created from this polyglot data.\n@return The text instance, or an empty text if the data is invalid." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "PolyglotDataToText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetTextLibrary_eventPolyglotDataToText_Parms), Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics
	{
		struct KismetTextLibrary_eventStringTableIdAndKeyFromText_Parms
		{
			FText Text;
			FName OutTableId;
			FString OutKey;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutKey;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutTableId;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventStringTableIdAndKeyFromText_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventStringTableIdAndKeyFromText_Parms), &Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics::NewProp_OutKey = { UE4CodeGen_Private::EPropertyClass::Str, "OutKey", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventStringTableIdAndKeyFromText_Parms, OutKey), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics::NewProp_OutTableId = { UE4CodeGen_Private::EPropertyClass::Name, "OutTableId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventStringTableIdAndKeyFromText_Parms, OutTableId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics::NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Text, "Text", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventStringTableIdAndKeyFromText_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics::NewProp_OutKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics::NewProp_OutTableId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "DisplayName", "Find String Table ID and Key from Text" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Attempts to find the String Table ID and key used by the given text.\n@return True if the String Table ID and key were found, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "StringTableIdAndKeyFromText", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetTextLibrary_eventStringTableIdAndKeyFromText_Parms), Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics
	{
		struct KismetTextLibrary_eventTextFromStringTable_Parms
		{
			FName TableId;
			FString Key;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TableId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextFromStringTable_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Str, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextFromStringTable_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::NewProp_TableId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::NewProp_TableId = { UE4CodeGen_Private::EPropertyClass::Name, "TableId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextFromStringTable_Parms, TableId), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::NewProp_TableId_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::NewProp_TableId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::NewProp_TableId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "DisplayName", "Make Text from String Table (Advanced)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Attempts to create a text instance from a string table ID and key.\n@note This exists to allow programmatic \xe2\x80\x8elook-up of a string table entry from dynamic content - you should favor setting your string table reference on a text property or pin wherever possible as it is significantly more robust (see \"Make Literal Text\").\n@return The found text, or a dummy text if the entry could not be found." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "TextFromStringTable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(KismetTextLibrary_eventTextFromStringTable_Parms), Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant_Statics
	{
		struct KismetTextLibrary_eventTextIsCultureInvariant_Parms
		{
			FText InText;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventTextIsCultureInvariant_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventTextIsCultureInvariant_Parms), &Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant_Statics::NewProp_InText = { UE4CodeGen_Private::EPropertyClass::Text, "InText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextIsCultureInvariant_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant_Statics::NewProp_InText_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant_Statics::NewProp_InText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Returns true if text is culture invariant." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "TextIsCultureInvariant", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetTextLibrary_eventTextIsCultureInvariant_Parms), Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty_Statics
	{
		struct KismetTextLibrary_eventTextIsEmpty_Parms
		{
			FText InText;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventTextIsEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventTextIsEmpty_Parms), &Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty_Statics::NewProp_InText = { UE4CodeGen_Private::EPropertyClass::Text, "InText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextIsEmpty_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty_Statics::NewProp_InText_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty_Statics::NewProp_InText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Returns true if text is empty." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "TextIsEmpty", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetTextLibrary_eventTextIsEmpty_Parms), Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable_Statics
	{
		struct KismetTextLibrary_eventTextIsFromStringTable_Parms
		{
			FText Text;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventTextIsFromStringTable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventTextIsFromStringTable_Parms), &Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable_Statics::NewProp_Text = { UE4CodeGen_Private::EPropertyClass::Text, "Text", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextIsFromStringTable_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable_Statics::NewProp_Text_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable_Statics::NewProp_Text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "DisplayName", "Is Text from String Table" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Returns true if the given text is referencing a string table." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "TextIsFromStringTable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetTextLibrary_eventTextIsFromStringTable_Parms), Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient_Statics
	{
		struct KismetTextLibrary_eventTextIsTransient_Parms
		{
			FText InText;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventTextIsTransient_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(KismetTextLibrary_eventTextIsTransient_Parms), &Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient_Statics::NewProp_InText = { UE4CodeGen_Private::EPropertyClass::Text, "InText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextIsTransient_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient_Statics::NewProp_InText_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient_Statics::NewProp_InText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Returns true if text is transient." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "TextIsTransient", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetTextLibrary_eventTextIsTransient_Parms), Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_TextToLower_Statics
	{
		struct KismetTextLibrary_eventTextToLower_Parms
		{
			FText InText;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextToLower_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextToLower_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextToLower_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextToLower_Statics::NewProp_InText = { UE4CodeGen_Private::EPropertyClass::Text, "InText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextToLower_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextToLower_Statics::NewProp_InText_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextToLower_Statics::NewProp_InText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_TextToLower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextToLower_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextToLower_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextToLower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Transforms the text to lowercase in a culture correct way.\n@note The returned instance is linked to the original and will be rebuilt if the active culture is changed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_TextToLower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "TextToLower", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetTextLibrary_eventTextToLower_Parms), Z_Construct_UFunction_UKismetTextLibrary_TextToLower_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextToLower_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextToLower_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextToLower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextToLower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_TextToLower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_TextToUpper_Statics
	{
		struct KismetTextLibrary_eventTextToUpper_Parms
		{
			FText InText;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextToUpper_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextToUpper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextToUpper_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextToUpper_Statics::NewProp_InText = { UE4CodeGen_Private::EPropertyClass::Text, "InText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextToUpper_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextToUpper_Statics::NewProp_InText_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextToUpper_Statics::NewProp_InText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_TextToUpper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextToUpper_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextToUpper_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextToUpper_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Transforms the text to uppercase in a culture correct way.\n@note The returned instance is linked to the original and will be rebuilt if the active culture is changed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_TextToUpper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "TextToUpper", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetTextLibrary_eventTextToUpper_Parms), Z_Construct_UFunction_UKismetTextLibrary_TextToUpper_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextToUpper_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextToUpper_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextToUpper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextToUpper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_TextToUpper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding_Statics
	{
		struct KismetTextLibrary_eventTextTrimPreceding_Parms
		{
			FText InText;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextTrimPreceding_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding_Statics::NewProp_InText = { UE4CodeGen_Private::EPropertyClass::Text, "InText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextTrimPreceding_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding_Statics::NewProp_InText_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding_Statics::NewProp_InText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Removes whitespace characters from the front of the text." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "TextTrimPreceding", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetTextLibrary_eventTextTrimPreceding_Parms), Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing_Statics
	{
		struct KismetTextLibrary_eventTextTrimPrecedingAndTrailing_Parms
		{
			FText InText;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextTrimPrecedingAndTrailing_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing_Statics::NewProp_InText = { UE4CodeGen_Private::EPropertyClass::Text, "InText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextTrimPrecedingAndTrailing_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing_Statics::NewProp_InText_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing_Statics::NewProp_InText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Removes whitespace characters from the front and end of the text." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "TextTrimPrecedingAndTrailing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetTextLibrary_eventTextTrimPrecedingAndTrailing_Parms), Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing_Statics
	{
		struct KismetTextLibrary_eventTextTrimTrailing_Parms
		{
			FText InText;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Text, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextTrimTrailing_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing_Statics::NewProp_InText = { UE4CodeGen_Private::EPropertyClass::Text, "InText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextTrimTrailing_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing_Statics::NewProp_InText_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing_Statics::NewProp_InText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Removes trailing whitespace characters." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, "TextTrimTrailing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(KismetTextLibrary_eventTextTrimTrailing_Parms), Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKismetTextLibrary_NoRegister()
	{
		return UKismetTextLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UKismetTextLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKismetTextLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKismetTextLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float, "AsCurrency_Float" }, // 4032761591
		{ &Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer, "AsCurrency_Integer" }, // 2016334207
		{ &Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase, "AsCurrencyBase" }, // 1414271102
		{ &Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime, "AsDate_DateTime" }, // 1022566819
		{ &Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime, "AsDateTime_DateTime" }, // 2179389729
		{ &Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float, "AsPercent_Float" }, // 294041919
		{ &Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime, "AsTime_DateTime" }, // 3548312864
		{ &Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan, "AsTimespan_Timespan" }, // 1330580359
		{ &Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime, "AsTimeZoneDate_DateTime" }, // 3685416867
		{ &Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime, "AsTimeZoneDateTime_DateTime" }, // 3621000252
		{ &Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime, "AsTimeZoneTime_DateTime" }, // 3007724539
		{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText, "Conv_BoolToText" }, // 4079450392
		{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_ByteToText, "Conv_ByteToText" }, // 2899368508
		{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_ColorToText, "Conv_ColorToText" }, // 74048751
		{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_FloatToText, "Conv_FloatToText" }, // 1060664609
		{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText, "Conv_IntToText" }, // 2133997671
		{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_NameToText, "Conv_NameToText" }, // 3135533972
		{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_ObjectToText, "Conv_ObjectToText" }, // 3928166268
		{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_RotatorToText, "Conv_RotatorToText" }, // 2086981649
		{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText, "Conv_StringToText" }, // 1645560189
		{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString, "Conv_TextToString" }, // 1886070802
		{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText, "Conv_TransformToText" }, // 3735021290
		{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_Vector2dToText, "Conv_Vector2dToText" }, // 3726788695
		{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_VectorToText, "Conv_VectorToText" }, // 944182952
		{ &Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText, "EqualEqual_IgnoreCase_TextText" }, // 906300760
		{ &Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText, "EqualEqual_TextText" }, // 451383063
		{ &Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable, "FindTextInLocalizationTable" }, // 1521599452
		{ &Z_Construct_UFunction_UKismetTextLibrary_Format, "Format" }, // 3995226467
		{ &Z_Construct_UFunction_UKismetTextLibrary_GetEmptyText, "GetEmptyText" }, // 873125618
		{ &Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid, "IsPolyglotDataValid" }, // 1874451518
		{ &Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText, "NotEqual_IgnoreCase_TextText" }, // 3504367057
		{ &Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText, "NotEqual_TextText" }, // 3825672931
		{ &Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText, "PolyglotDataToText" }, // 3435442883
		{ &Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText, "StringTableIdAndKeyFromText" }, // 1136371496
		{ &Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable, "TextFromStringTable" }, // 1033206658
		{ &Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant, "TextIsCultureInvariant" }, // 1884987263
		{ &Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty, "TextIsEmpty" }, // 952815427
		{ &Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable, "TextIsFromStringTable" }, // 852549885
		{ &Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient, "TextIsTransient" }, // 1624102481
		{ &Z_Construct_UFunction_UKismetTextLibrary_TextToLower, "TextToLower" }, // 209347244
		{ &Z_Construct_UFunction_UKismetTextLibrary_TextToUpper, "TextToUpper" }, // 541308507
		{ &Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding, "TextTrimPreceding" }, // 3519267772
		{ &Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing, "TextTrimPrecedingAndTrailing" }, // 3340959682
		{ &Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing, "TextTrimTrailing" }, // 707709489
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKismetTextLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "IncludePath", "Kismet/KismetTextLibrary.h" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ScriptName", "TextLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKismetTextLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKismetTextLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKismetTextLibrary_Statics::ClassParams = {
		&UKismetTextLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UKismetTextLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UKismetTextLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKismetTextLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKismetTextLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKismetTextLibrary, 4056840203);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKismetTextLibrary(Z_Construct_UClass_UKismetTextLibrary, &UKismetTextLibrary::StaticClass, TEXT("/Script/Engine"), TEXT("UKismetTextLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKismetTextLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
