// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKEditorCommandlet/Private/Commandlets/CookAndGenerateSchemaCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCookAndGenerateSchemaCommandlet() {}
// Cross Module References
	SPATIALGDKEDITORCOMMANDLET_API UClass* Z_Construct_UClass_UCookAndGenerateSchemaCommandlet_NoRegister();
	SPATIALGDKEDITORCOMMANDLET_API UClass* Z_Construct_UClass_UCookAndGenerateSchemaCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UCookCommandlet();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKEditorCommandlet();
// End Cross Module References
	void UCookAndGenerateSchemaCommandlet::StaticRegisterNativesUCookAndGenerateSchemaCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UCookAndGenerateSchemaCommandlet_NoRegister()
	{
		return UCookAndGenerateSchemaCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UCookAndGenerateSchemaCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCookAndGenerateSchemaCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCookCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKEditorCommandlet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookAndGenerateSchemaCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * -- EXPERIMENTAL --\n * This Commandlet generates schema and performs a cook command.\n * It supports the same set of arguments as cook. It will only generate\n * schema for blueprints required by the cook.\n *\n * Usage:\n * Engine\\Binaries\\Win64\\UE4Editor-Cmd.exe <PathToGame>.uproject -run=CookAndGenerateSchema -targetplatform=LinuxServer -SkipShaderCompile  <...Native Cook Params>\n *\n * Known Issues:\n * - SchemaDatabase.uasset will need to be cooked again after running this Commandlet, potentially with [-iterate] flag.\n * - [-iterate] flag will result in schema only generated for dirty packages, you maintain previous .schema files if you want to use this flag.\n *\n * Recommended Workflow:\n *  1. Run CookAndGenerateSchema for a LinuxServer platform with [-SkipShaderCompile] for needed maps WITHOUT [-iterate]\n *  2. Run GenerateSchemaAndSnapshots with [-SkipSchema] for needed maps.\n *  2. BuildCookRun for the same platform WITH [-iterate]\n *  3. BuildCookRun other platforms\n */" },
		{ "IncludePath", "Commandlets/CookAndGenerateSchemaCommandlet.h" },
		{ "ModuleRelativePath", "Private/Commandlets/CookAndGenerateSchemaCommandlet.h" },
		{ "ToolTip", "-- EXPERIMENTAL --\nThis Commandlet generates schema and performs a cook command.\nIt supports the same set of arguments as cook. It will only generate\nschema for blueprints required by the cook.\n\nUsage:\nEngine\\Binaries\\Win64\\UE4Editor-Cmd.exe <PathToGame>.uproject -run=CookAndGenerateSchema -targetplatform=LinuxServer -SkipShaderCompile  <...Native Cook Params>\n\nKnown Issues:\n- SchemaDatabase.uasset will need to be cooked again after running this Commandlet, potentially with [-iterate] flag.\n- [-iterate] flag will result in schema only generated for dirty packages, you maintain previous .schema files if you want to use this flag.\n\nRecommended Workflow:\n 1. Run CookAndGenerateSchema for a LinuxServer platform with [-SkipShaderCompile] for needed maps WITHOUT [-iterate]\n 2. Run GenerateSchemaAndSnapshots with [-SkipSchema] for needed maps.\n 2. BuildCookRun for the same platform WITH [-iterate]\n 3. BuildCookRun other platforms" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCookAndGenerateSchemaCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCookAndGenerateSchemaCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCookAndGenerateSchemaCommandlet_Statics::ClassParams = {
		&UCookAndGenerateSchemaCommandlet::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000ACu,
		0x00000000u,
		METADATA_PARAMS(Z_Construct_UClass_UCookAndGenerateSchemaCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCookAndGenerateSchemaCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCookAndGenerateSchemaCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCookAndGenerateSchemaCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCookAndGenerateSchemaCommandlet, 746976156);
	template<> SPATIALGDKEDITORCOMMANDLET_API UClass* StaticClass<UCookAndGenerateSchemaCommandlet>()
	{
		return UCookAndGenerateSchemaCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCookAndGenerateSchemaCommandlet(Z_Construct_UClass_UCookAndGenerateSchemaCommandlet, &UCookAndGenerateSchemaCommandlet::StaticClass, TEXT("/Script/SpatialGDKEditorCommandlet"), TEXT("UCookAndGenerateSchemaCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCookAndGenerateSchemaCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
