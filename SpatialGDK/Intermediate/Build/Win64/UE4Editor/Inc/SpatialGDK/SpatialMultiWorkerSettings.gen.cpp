// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDK/Public/LoadBalancing/SpatialMultiWorkerSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpatialMultiWorkerSettings() {}
// Cross Module References
	SPATIALGDK_API UClass* Z_Construct_UClass_UAbstractSpatialMultiWorkerSettings_NoRegister();
	SPATIALGDK_API UClass* Z_Construct_UClass_UAbstractSpatialMultiWorkerSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_SpatialGDK();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SPATIALGDK_API UClass* Z_Construct_UClass_UAbstractLockingPolicy_NoRegister();
	SPATIALGDK_API UScriptStruct* Z_Construct_UScriptStruct_FLayerInfo();
	SPATIALGDK_API UClass* Z_Construct_UClass_USpatialMultiWorkerSettings_NoRegister();
	SPATIALGDK_API UClass* Z_Construct_UClass_USpatialMultiWorkerSettings();
// End Cross Module References
	void UAbstractSpatialMultiWorkerSettings::StaticRegisterNativesUAbstractSpatialMultiWorkerSettings()
	{
	}
	UClass* Z_Construct_UClass_UAbstractSpatialMultiWorkerSettings_NoRegister()
	{
		return UAbstractSpatialMultiWorkerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAbstractSpatialMultiWorkerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockingPolicy_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LockingPolicy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorkerLayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WorkerLayers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorkerLayers_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbstractSpatialMultiWorkerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbstractSpatialMultiWorkerSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LoadBalancing/SpatialMultiWorkerSettings.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/LoadBalancing/SpatialMultiWorkerSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbstractSpatialMultiWorkerSettings_Statics::NewProp_LockingPolicy_MetaData[] = {
		{ "Category", "Multi-Worker" },
		{ "ModuleRelativePath", "Public/LoadBalancing/SpatialMultiWorkerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAbstractSpatialMultiWorkerSettings_Statics::NewProp_LockingPolicy = { "LockingPolicy", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbstractSpatialMultiWorkerSettings, LockingPolicy), Z_Construct_UClass_UAbstractLockingPolicy_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAbstractSpatialMultiWorkerSettings_Statics::NewProp_LockingPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbstractSpatialMultiWorkerSettings_Statics::NewProp_LockingPolicy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbstractSpatialMultiWorkerSettings_Statics::NewProp_WorkerLayers_MetaData[] = {
		{ "Category", "Multi-Worker" },
		{ "ModuleRelativePath", "Public/LoadBalancing/SpatialMultiWorkerSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAbstractSpatialMultiWorkerSettings_Statics::NewProp_WorkerLayers = { "WorkerLayers", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAbstractSpatialMultiWorkerSettings, WorkerLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAbstractSpatialMultiWorkerSettings_Statics::NewProp_WorkerLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbstractSpatialMultiWorkerSettings_Statics::NewProp_WorkerLayers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbstractSpatialMultiWorkerSettings_Statics::NewProp_WorkerLayers_Inner = { "WorkerLayers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLayerInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbstractSpatialMultiWorkerSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbstractSpatialMultiWorkerSettings_Statics::NewProp_LockingPolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbstractSpatialMultiWorkerSettings_Statics::NewProp_WorkerLayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbstractSpatialMultiWorkerSettings_Statics::NewProp_WorkerLayers_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbstractSpatialMultiWorkerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbstractSpatialMultiWorkerSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAbstractSpatialMultiWorkerSettings_Statics::ClassParams = {
		&UAbstractSpatialMultiWorkerSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAbstractSpatialMultiWorkerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbstractSpatialMultiWorkerSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		0x00000000u,
		METADATA_PARAMS(Z_Construct_UClass_UAbstractSpatialMultiWorkerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbstractSpatialMultiWorkerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbstractSpatialMultiWorkerSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAbstractSpatialMultiWorkerSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAbstractSpatialMultiWorkerSettings, 1121277349);
	template<> SPATIALGDK_API UClass* StaticClass<UAbstractSpatialMultiWorkerSettings>()
	{
		return UAbstractSpatialMultiWorkerSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAbstractSpatialMultiWorkerSettings(Z_Construct_UClass_UAbstractSpatialMultiWorkerSettings, &UAbstractSpatialMultiWorkerSettings::StaticClass, TEXT("/Script/SpatialGDK"), TEXT("UAbstractSpatialMultiWorkerSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbstractSpatialMultiWorkerSettings);
	void USpatialMultiWorkerSettings::StaticRegisterNativesUSpatialMultiWorkerSettings()
	{
	}
	UClass* Z_Construct_UClass_USpatialMultiWorkerSettings_NoRegister()
	{
		return USpatialMultiWorkerSettings::StaticClass();
	}
	struct Z_Construct_UClass_USpatialMultiWorkerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpatialMultiWorkerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbstractSpatialMultiWorkerSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialMultiWorkerSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LoadBalancing/SpatialMultiWorkerSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LoadBalancing/SpatialMultiWorkerSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpatialMultiWorkerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpatialMultiWorkerSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpatialMultiWorkerSettings_Statics::ClassParams = {
		&USpatialMultiWorkerSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x041000A0u,
		0x00000000u,
		METADATA_PARAMS(Z_Construct_UClass_USpatialMultiWorkerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialMultiWorkerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpatialMultiWorkerSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpatialMultiWorkerSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpatialMultiWorkerSettings, 3930534794);
	template<> SPATIALGDK_API UClass* StaticClass<USpatialMultiWorkerSettings>()
	{
		return USpatialMultiWorkerSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpatialMultiWorkerSettings(Z_Construct_UClass_USpatialMultiWorkerSettings, &USpatialMultiWorkerSettings::StaticClass, TEXT("/Script/SpatialGDK"), TEXT("USpatialMultiWorkerSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpatialMultiWorkerSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
