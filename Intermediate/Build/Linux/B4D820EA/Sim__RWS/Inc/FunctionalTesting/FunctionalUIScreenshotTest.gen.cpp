// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionalTesting/Classes/FunctionalUIScreenshotTest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFunctionalUIScreenshotTest() {}
// Cross Module References
	FUNCTIONALTESTING_API UEnum* Z_Construct_UEnum_FunctionalTesting_EWidgetTestAppearLocation();
	UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalUIScreenshotTest_NoRegister();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalUIScreenshotTest();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AScreenshotFunctionalTestBase();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static UEnum* EWidgetTestAppearLocation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FunctionalTesting_EWidgetTestAppearLocation, Z_Construct_UPackage__Script_FunctionalTesting(), TEXT("EWidgetTestAppearLocation"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWidgetTestAppearLocation(EWidgetTestAppearLocation_StaticEnum, TEXT("/Script/FunctionalTesting"), TEXT("EWidgetTestAppearLocation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FunctionalTesting_EWidgetTestAppearLocation_CRC() { return 969855216U; }
	UEnum* Z_Construct_UEnum_FunctionalTesting_EWidgetTestAppearLocation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FunctionalTesting();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWidgetTestAppearLocation"), 0, Get_Z_Construct_UEnum_FunctionalTesting_EWidgetTestAppearLocation_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWidgetTestAppearLocation::Viewport", (int64)EWidgetTestAppearLocation::Viewport },
				{ "EWidgetTestAppearLocation::PlayerScreen", (int64)EWidgetTestAppearLocation::PlayerScreen },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/FunctionalUIScreenshotTest.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FunctionalTesting,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EWidgetTestAppearLocation",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EWidgetTestAppearLocation",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AFunctionalUIScreenshotTest::StaticRegisterNativesAFunctionalUIScreenshotTest()
	{
	}
	UClass* Z_Construct_UClass_AFunctionalUIScreenshotTest_NoRegister()
	{
		return AFunctionalUIScreenshotTest::StaticClass();
	}
	struct Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenshotRT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScreenshotRT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WidgetLocation;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_WidgetLocation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AScreenshotFunctionalTestBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Actor Input Rendering" },
		{ "IncludePath", "FunctionalUIScreenshotTest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/FunctionalUIScreenshotTest.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::NewProp_ScreenshotRT_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FunctionalUIScreenshotTest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::NewProp_ScreenshotRT = { UE4CodeGen_Private::EPropertyClass::Object, "ScreenshotRT", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000202000, 1, nullptr, STRUCT_OFFSET(AFunctionalUIScreenshotTest, ScreenshotRT), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::NewProp_ScreenshotRT_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::NewProp_ScreenshotRT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::NewProp_WidgetLocation_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Classes/FunctionalUIScreenshotTest.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::NewProp_WidgetLocation = { UE4CodeGen_Private::EPropertyClass::Enum, "WidgetLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(AFunctionalUIScreenshotTest, WidgetLocation), Z_Construct_UEnum_FunctionalTesting_EWidgetTestAppearLocation, METADATA_PARAMS(Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::NewProp_WidgetLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::NewProp_WidgetLocation_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::NewProp_WidgetLocation_Underlying = { UE4CodeGen_Private::EPropertyClass::Int, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::NewProp_SpawnedWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/FunctionalUIScreenshotTest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::NewProp_SpawnedWidget = { UE4CodeGen_Private::EPropertyClass::Object, "SpawnedWidget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000080008, 1, nullptr, STRUCT_OFFSET(AFunctionalUIScreenshotTest, SpawnedWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::NewProp_SpawnedWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::NewProp_SpawnedWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Classes/FunctionalUIScreenshotTest.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::NewProp_WidgetClass = { UE4CodeGen_Private::EPropertyClass::Class, "WidgetClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0024080000000001, 1, nullptr, STRUCT_OFFSET(AFunctionalUIScreenshotTest, WidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::NewProp_WidgetClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::NewProp_WidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::NewProp_ScreenshotRT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::NewProp_WidgetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::NewProp_WidgetLocation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::NewProp_SpawnedWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::NewProp_WidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFunctionalUIScreenshotTest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::ClassParams = {
		&AFunctionalUIScreenshotTest::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008800A0u,
		nullptr, 0,
		Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFunctionalUIScreenshotTest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFunctionalUIScreenshotTest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFunctionalUIScreenshotTest, 674626);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFunctionalUIScreenshotTest(Z_Construct_UClass_AFunctionalUIScreenshotTest, &AFunctionalUIScreenshotTest::StaticClass, TEXT("/Script/FunctionalTesting"), TEXT("AFunctionalUIScreenshotTest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFunctionalUIScreenshotTest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
