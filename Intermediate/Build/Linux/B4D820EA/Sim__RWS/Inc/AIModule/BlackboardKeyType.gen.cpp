// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackboardKeyType() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_ETextKeyOperation();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EArithmeticKeyOperation();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBasicKeyOperation();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ETextKeyOperation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_ETextKeyOperation, Z_Construct_UPackage__Script_AIModule(), TEXT("ETextKeyOperation"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETextKeyOperation(ETextKeyOperation_StaticEnum, TEXT("/Script/AIModule"), TEXT("ETextKeyOperation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_ETextKeyOperation_CRC() { return 4003021631U; }
	UEnum* Z_Construct_UEnum_AIModule_ETextKeyOperation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETextKeyOperation"), 0, Get_Z_Construct_UEnum_AIModule_ETextKeyOperation_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETextKeyOperation::Equal", (int64)ETextKeyOperation::Equal },
				{ "ETextKeyOperation::NotEqual", (int64)ETextKeyOperation::NotEqual },
				{ "ETextKeyOperation::Contain", (int64)ETextKeyOperation::Contain },
				{ "ETextKeyOperation::NotContain", (int64)ETextKeyOperation::NotContain },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Contain.DisplayName", "Contains" },
				{ "Equal.DisplayName", "Is Equal To" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType.h" },
				{ "NotContain.DisplayName", "Not Contains" },
				{ "NotEqual.DisplayName", "Is Not Equal To" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETextKeyOperation",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ETextKeyOperation::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EArithmeticKeyOperation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EArithmeticKeyOperation, Z_Construct_UPackage__Script_AIModule(), TEXT("EArithmeticKeyOperation"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EArithmeticKeyOperation(EArithmeticKeyOperation_StaticEnum, TEXT("/Script/AIModule"), TEXT("EArithmeticKeyOperation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EArithmeticKeyOperation_CRC() { return 1715180738U; }
	UEnum* Z_Construct_UEnum_AIModule_EArithmeticKeyOperation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EArithmeticKeyOperation"), 0, Get_Z_Construct_UEnum_AIModule_EArithmeticKeyOperation_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EArithmeticKeyOperation::Equal", (int64)EArithmeticKeyOperation::Equal },
				{ "EArithmeticKeyOperation::NotEqual", (int64)EArithmeticKeyOperation::NotEqual },
				{ "EArithmeticKeyOperation::Less", (int64)EArithmeticKeyOperation::Less },
				{ "EArithmeticKeyOperation::LessOrEqual", (int64)EArithmeticKeyOperation::LessOrEqual },
				{ "EArithmeticKeyOperation::Greater", (int64)EArithmeticKeyOperation::Greater },
				{ "EArithmeticKeyOperation::GreaterOrEqual", (int64)EArithmeticKeyOperation::GreaterOrEqual },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Equal.DisplayName", "Is Equal To" },
				{ "Greater.DisplayName", "Is Greater Than" },
				{ "GreaterOrEqual.DisplayName", "Is Greater Than Or Equal To" },
				{ "Less.DisplayName", "Is Less Than" },
				{ "LessOrEqual.DisplayName", "Is Less Than Or Equal To" },
				{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType.h" },
				{ "NotEqual.DisplayName", "Is Not Equal To" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EArithmeticKeyOperation",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EArithmeticKeyOperation::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBasicKeyOperation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EBasicKeyOperation, Z_Construct_UPackage__Script_AIModule(), TEXT("EBasicKeyOperation"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBasicKeyOperation(EBasicKeyOperation_StaticEnum, TEXT("/Script/AIModule"), TEXT("EBasicKeyOperation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EBasicKeyOperation_CRC() { return 1505800032U; }
	UEnum* Z_Construct_UEnum_AIModule_EBasicKeyOperation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBasicKeyOperation"), 0, Get_Z_Construct_UEnum_AIModule_EBasicKeyOperation_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBasicKeyOperation::Set", (int64)EBasicKeyOperation::Set },
				{ "EBasicKeyOperation::NotSet", (int64)EBasicKeyOperation::NotSet },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType.h" },
				{ "NotSet.DisplayName", "Is Not Set" },
				{ "Set.DisplayName", "Is Set" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBasicKeyOperation",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EBasicKeyOperation::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UBlackboardKeyType::StaticRegisterNativesUBlackboardKeyType()
	{
	}
	UClass* Z_Construct_UClass_UBlackboardKeyType_NoRegister()
	{
		return UBlackboardKeyType::StaticClass();
	}
	struct Z_Construct_UClass_UBlackboardKeyType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlackboardKeyType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardKeyType_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Blackboard" },
		{ "IncludePath", "BehaviorTree/Blackboard/BlackboardKeyType.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/Blackboard/BlackboardKeyType.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlackboardKeyType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlackboardKeyType>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlackboardKeyType_Statics::ClassParams = {
		&UBlackboardKeyType::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001030A1u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBlackboardKeyType_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBlackboardKeyType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlackboardKeyType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlackboardKeyType_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlackboardKeyType, 2484436012);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlackboardKeyType(Z_Construct_UClass_UBlackboardKeyType, &UBlackboardKeyType::StaticClass, TEXT("/Script/AIModule"), TEXT("UBlackboardKeyType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackboardKeyType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
