// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKEditorCommandlet/Private/Commandlets/GenerateSchemaCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenerateSchemaCommandlet() {}
// Cross Module References
	SPATIALGDKEDITORCOMMANDLET_API UClass* Z_Construct_UClass_UGenerateSchemaCommandlet_NoRegister();
	SPATIALGDKEDITORCOMMANDLET_API UClass* Z_Construct_UClass_UGenerateSchemaCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKEditorCommandlet();
// End Cross Module References
	void UGenerateSchemaCommandlet::StaticRegisterNativesUGenerateSchemaCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UGenerateSchemaCommandlet_NoRegister()
	{
		return UGenerateSchemaCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UGenerateSchemaCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenerateSchemaCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKEditorCommandlet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateSchemaCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/GenerateSchemaCommandlet.h" },
		{ "ModuleRelativePath", "Private/Commandlets/GenerateSchemaCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenerateSchemaCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenerateSchemaCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGenerateSchemaCommandlet_Statics::ClassParams = {
		&UGenerateSchemaCommandlet::StaticClass,
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
		0x000000A8u,
		0x00000000u,
		METADATA_PARAMS(Z_Construct_UClass_UGenerateSchemaCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateSchemaCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenerateSchemaCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGenerateSchemaCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGenerateSchemaCommandlet, 1042839027);
	template<> SPATIALGDKEDITORCOMMANDLET_API UClass* StaticClass<UGenerateSchemaCommandlet>()
	{
		return UGenerateSchemaCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGenerateSchemaCommandlet(Z_Construct_UClass_UGenerateSchemaCommandlet, &UGenerateSchemaCommandlet::StaticClass, TEXT("/Script/SpatialGDKEditorCommandlet"), TEXT("UGenerateSchemaCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenerateSchemaCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
