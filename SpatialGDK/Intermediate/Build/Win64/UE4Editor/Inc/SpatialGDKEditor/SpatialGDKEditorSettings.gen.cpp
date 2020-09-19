// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKEditor/Public/SpatialGDKEditorSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpatialGDKEditorSettings() {}
// Cross Module References
	SPATIALGDKEDITOR_API UEnum* Z_Construct_UEnum_SpatialGDKEditor_ESpatialOSRuntimeVariant();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKEditor();
	SPATIALGDKEDITOR_API UEnum* Z_Construct_UEnum_SpatialGDKEditor_ESpatialOSNetFlow();
	SPATIALGDKEDITOR_API UEnum* Z_Construct_UEnum_SpatialGDKEditor_ERegionCode();
	SPATIALGDKEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeVariantVersion();
	SPATIALGDKEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription();
	SPATIALGDKEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FWorkerTypeLaunchSection();
	SPATIALGDKEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FWorldLaunchSection();
	SPATIALGDKEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FWorkerPermissionsSection();
	SPATIALGDKEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLoginRateLimitSection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	SPATIALGDKEDITOR_API UClass* Z_Construct_UClass_USpatialGDKEditorSettings_NoRegister();
	SPATIALGDKEDITOR_API UClass* Z_Construct_UClass_USpatialGDKEditorSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
// End Cross Module References
	static UEnum* ESpatialOSRuntimeVariant_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SpatialGDKEditor_ESpatialOSRuntimeVariant, Z_Construct_UPackage__Script_SpatialGDKEditor(), TEXT("ESpatialOSRuntimeVariant"));
		}
		return Singleton;
	}
	template<> SPATIALGDKEDITOR_API UEnum* StaticEnum<ESpatialOSRuntimeVariant::Type>()
	{
		return ESpatialOSRuntimeVariant_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpatialOSRuntimeVariant(ESpatialOSRuntimeVariant_StaticEnum, TEXT("/Script/SpatialGDKEditor"), TEXT("ESpatialOSRuntimeVariant"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SpatialGDKEditor_ESpatialOSRuntimeVariant_Hash() { return 182448243U; }
	UEnum* Z_Construct_UEnum_SpatialGDKEditor_ESpatialOSRuntimeVariant()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SpatialGDKEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpatialOSRuntimeVariant"), 0, Get_Z_Construct_UEnum_SpatialGDKEditor_ESpatialOSRuntimeVariant_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESpatialOSRuntimeVariant::Standard", (int64)ESpatialOSRuntimeVariant::Standard },
				{ "ESpatialOSRuntimeVariant::CompatibilityMode", (int64)ESpatialOSRuntimeVariant::CompatibilityMode },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CompatibilityMode.Name", "ESpatialOSRuntimeVariant::CompatibilityMode" },
				{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
				{ "Standard.Name", "ESpatialOSRuntimeVariant::Standard" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SpatialGDKEditor,
				nullptr,
				"ESpatialOSRuntimeVariant",
				"ESpatialOSRuntimeVariant::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESpatialOSNetFlow_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SpatialGDKEditor_ESpatialOSNetFlow, Z_Construct_UPackage__Script_SpatialGDKEditor(), TEXT("ESpatialOSNetFlow"));
		}
		return Singleton;
	}
	template<> SPATIALGDKEDITOR_API UEnum* StaticEnum<ESpatialOSNetFlow::Type>()
	{
		return ESpatialOSNetFlow_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpatialOSNetFlow(ESpatialOSNetFlow_StaticEnum, TEXT("/Script/SpatialGDKEditor"), TEXT("ESpatialOSNetFlow"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SpatialGDKEditor_ESpatialOSNetFlow_Hash() { return 3985660987U; }
	UEnum* Z_Construct_UEnum_SpatialGDKEditor_ESpatialOSNetFlow()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SpatialGDKEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpatialOSNetFlow"), 0, Get_Z_Construct_UEnum_SpatialGDKEditor_ESpatialOSNetFlow_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESpatialOSNetFlow::LocalDeployment", (int64)ESpatialOSNetFlow::LocalDeployment },
				{ "ESpatialOSNetFlow::CloudDeployment", (int64)ESpatialOSNetFlow::CloudDeployment },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CloudDeployment.Name", "ESpatialOSNetFlow::CloudDeployment" },
				{ "LocalDeployment.Name", "ESpatialOSNetFlow::LocalDeployment" },
				{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SpatialGDKEditor,
				nullptr,
				"ESpatialOSNetFlow",
				"ESpatialOSNetFlow::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ERegionCode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SpatialGDKEditor_ERegionCode, Z_Construct_UPackage__Script_SpatialGDKEditor(), TEXT("ERegionCode"));
		}
		return Singleton;
	}
	template<> SPATIALGDKEDITOR_API UEnum* StaticEnum<ERegionCode::Type>()
	{
		return ERegionCode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERegionCode(ERegionCode_StaticEnum, TEXT("/Script/SpatialGDKEditor"), TEXT("ERegionCode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SpatialGDKEditor_ERegionCode_Hash() { return 3734488719U; }
	UEnum* Z_Construct_UEnum_SpatialGDKEditor_ERegionCode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SpatialGDKEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERegionCode"), 0, Get_Z_Construct_UEnum_SpatialGDKEditor_ERegionCode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERegionCode::US", (int64)ERegionCode::US },
				{ "ERegionCode::EU", (int64)ERegionCode::EU },
				{ "ERegionCode::AP", (int64)ERegionCode::AP },
				{ "ERegionCode::CN", (int64)ERegionCode::CN },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AP.Name", "ERegionCode::AP" },
				{ "CN.Hidden", "" },
				{ "CN.Name", "ERegionCode::CN" },
				{ "Comment", "/**\n* Enumerates available Region Codes\n*/" },
				{ "EU.Name", "ERegionCode::EU" },
				{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
				{ "ToolTip", "Enumerates available Region Codes" },
				{ "US.Name", "ERegionCode::US" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SpatialGDKEditor,
				nullptr,
				"ERegionCode",
				"ERegionCode::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FRuntimeVariantVersion::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SPATIALGDKEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeVariantVersion_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeVariantVersion, Z_Construct_UPackage__Script_SpatialGDKEditor(), TEXT("RuntimeVariantVersion"), sizeof(FRuntimeVariantVersion), Get_Z_Construct_UScriptStruct_FRuntimeVariantVersion_Hash());
	}
	return Singleton;
}
template<> SPATIALGDKEDITOR_API UScriptStruct* StaticStruct<FRuntimeVariantVersion>()
{
	return FRuntimeVariantVersion::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeVariantVersion(FRuntimeVariantVersion::StaticStruct, TEXT("/Script/SpatialGDKEditor"), TEXT("RuntimeVariantVersion"), false, nullptr, nullptr);
static struct FScriptStruct_SpatialGDKEditor_StaticRegisterNativesFRuntimeVariantVersion
{
	FScriptStruct_SpatialGDKEditor_StaticRegisterNativesFRuntimeVariantVersion()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeVariantVersion")),new UScriptStruct::TCppStructOps<FRuntimeVariantVersion>);
	}
} ScriptStruct_SpatialGDKEditor_StaticRegisterNativesFRuntimeVariantVersion;
	struct Z_Construct_UScriptStruct_FRuntimeVariantVersion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloudRuntimeVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CloudRuntimeVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalRuntimeVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalRuntimeVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseGDKPinnedRuntimeVersionForCloud_MetaData[];
#endif
		static void NewProp_bUseGDKPinnedRuntimeVersionForCloud_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGDKPinnedRuntimeVersionForCloud;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseGDKPinnedRuntimeVersionForLocal_MetaData[];
#endif
		static void NewProp_bUseGDKPinnedRuntimeVersionForLocal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGDKPinnedRuntimeVersionForLocal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeVariantVersion_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeVariantVersion_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeVariantVersion>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeVariantVersion_Statics::NewProp_CloudRuntimeVersion_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "/** Runtime version to use for cloud deployments, if not using the GDK pinned version. */" },
		{ "EditCondition", "!bUseGDKPinnedRuntimeVersionForCloud" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Runtime version to use for cloud deployments, if not using the GDK pinned version." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRuntimeVariantVersion_Statics::NewProp_CloudRuntimeVersion = { "CloudRuntimeVersion", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeVariantVersion, CloudRuntimeVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeVariantVersion_Statics::NewProp_CloudRuntimeVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeVariantVersion_Statics::NewProp_CloudRuntimeVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeVariantVersion_Statics::NewProp_LocalRuntimeVersion_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "/** Runtime version to use for local deployments, if not using the GDK pinned version. */" },
		{ "EditCondition", "!bUseGDKPinnedRuntimeVersionForLocal" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Runtime version to use for local deployments, if not using the GDK pinned version." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRuntimeVariantVersion_Statics::NewProp_LocalRuntimeVersion = { "LocalRuntimeVersion", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRuntimeVariantVersion, LocalRuntimeVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeVariantVersion_Statics::NewProp_LocalRuntimeVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeVariantVersion_Statics::NewProp_LocalRuntimeVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeVariantVersion_Statics::NewProp_bUseGDKPinnedRuntimeVersionForCloud_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "/** Whether to use the GDK-associated SpatialOS runtime version for cloud deployments, or to use the one specified in the RuntimeVersion field. */" },
		{ "DisplayName", "Use GDK pinned runtime version for cloud" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Whether to use the GDK-associated SpatialOS runtime version for cloud deployments, or to use the one specified in the RuntimeVersion field." },
	};
#endif
	void Z_Construct_UScriptStruct_FRuntimeVariantVersion_Statics::NewProp_bUseGDKPinnedRuntimeVersionForCloud_SetBit(void* Obj)
	{
		((FRuntimeVariantVersion*)Obj)->bUseGDKPinnedRuntimeVersionForCloud = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimeVariantVersion_Statics::NewProp_bUseGDKPinnedRuntimeVersionForCloud = { "bUseGDKPinnedRuntimeVersionForCloud", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRuntimeVariantVersion), &Z_Construct_UScriptStruct_FRuntimeVariantVersion_Statics::NewProp_bUseGDKPinnedRuntimeVersionForCloud_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeVariantVersion_Statics::NewProp_bUseGDKPinnedRuntimeVersionForCloud_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeVariantVersion_Statics::NewProp_bUseGDKPinnedRuntimeVersionForCloud_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeVariantVersion_Statics::NewProp_bUseGDKPinnedRuntimeVersionForLocal_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "/** Whether to use the GDK-associated SpatialOS runtime version for local deployments, or to use the one specified in the RuntimeVersion field. */" },
		{ "DisplayName", "Use GDK pinned runtime version for local" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Whether to use the GDK-associated SpatialOS runtime version for local deployments, or to use the one specified in the RuntimeVersion field." },
	};
#endif
	void Z_Construct_UScriptStruct_FRuntimeVariantVersion_Statics::NewProp_bUseGDKPinnedRuntimeVersionForLocal_SetBit(void* Obj)
	{
		((FRuntimeVariantVersion*)Obj)->bUseGDKPinnedRuntimeVersionForLocal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRuntimeVariantVersion_Statics::NewProp_bUseGDKPinnedRuntimeVersionForLocal = { "bUseGDKPinnedRuntimeVersionForLocal", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRuntimeVariantVersion), &Z_Construct_UScriptStruct_FRuntimeVariantVersion_Statics::NewProp_bUseGDKPinnedRuntimeVersionForLocal_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeVariantVersion_Statics::NewProp_bUseGDKPinnedRuntimeVersionForLocal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeVariantVersion_Statics::NewProp_bUseGDKPinnedRuntimeVersionForLocal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeVariantVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeVariantVersion_Statics::NewProp_CloudRuntimeVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeVariantVersion_Statics::NewProp_LocalRuntimeVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeVariantVersion_Statics::NewProp_bUseGDKPinnedRuntimeVersionForCloud,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeVariantVersion_Statics::NewProp_bUseGDKPinnedRuntimeVersionForLocal,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeVariantVersion_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKEditor,
		nullptr,
		&NewStructOps,
		"RuntimeVariantVersion",
		sizeof(FRuntimeVariantVersion),
		alignof(FRuntimeVariantVersion),
		Z_Construct_UScriptStruct_FRuntimeVariantVersion_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeVariantVersion_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeVariantVersion_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeVariantVersion_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeVariantVersion()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeVariantVersion_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SpatialGDKEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeVariantVersion"), sizeof(FRuntimeVariantVersion), Get_Z_Construct_UScriptStruct_FRuntimeVariantVersion_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRuntimeVariantVersion_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeVariantVersion_Hash() { return 2139001423U; }
class UScriptStruct* FSpatialLaunchConfigDescription::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SPATIALGDKEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription, Z_Construct_UPackage__Script_SpatialGDKEditor(), TEXT("SpatialLaunchConfigDescription"), sizeof(FSpatialLaunchConfigDescription), Get_Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Hash());
	}
	return Singleton;
}
template<> SPATIALGDKEDITOR_API UScriptStruct* StaticStruct<FSpatialLaunchConfigDescription>()
{
	return FSpatialLaunchConfigDescription::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpatialLaunchConfigDescription(FSpatialLaunchConfigDescription::StaticStruct, TEXT("/Script/SpatialGDKEditor"), TEXT("SpatialLaunchConfigDescription"), false, nullptr, nullptr);
static struct FScriptStruct_SpatialGDKEditor_StaticRegisterNativesFSpatialLaunchConfigDescription
{
	FScriptStruct_SpatialGDKEditor_StaticRegisterNativesFSpatialLaunchConfigDescription()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpatialLaunchConfigDescription")),new UScriptStruct::TCppStructOps<FSpatialLaunchConfigDescription>);
	}
} ScriptStruct_SpatialGDKEditor_StaticRegisterNativesFSpatialLaunchConfigDescription;
	struct Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerWorkerConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ServerWorkerConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerWorkers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ServerWorkers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ServerWorkers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_World;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Template_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Template;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultTemplateForRuntimeVariant_MetaData[];
#endif
		static void NewProp_bUseDefaultTemplateForRuntimeVariant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultTemplateForRuntimeVariant;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpatialLaunchConfigDescription>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::NewProp_ServerWorkerConfig_MetaData[] = {
		{ "Category", "SpatialGDK" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::NewProp_ServerWorkerConfig = { "ServerWorkerConfig", nullptr, (EPropertyFlags)0x0010000000004041, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpatialLaunchConfigDescription, ServerWorkerConfig), Z_Construct_UScriptStruct_FWorkerTypeLaunchSection, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::NewProp_ServerWorkerConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::NewProp_ServerWorkerConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::NewProp_ServerWorkers_MetaData[] = {
		{ "Comment", "/** Worker-specific configuration parameters. */" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Worker-specific configuration parameters." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::NewProp_ServerWorkers = { "ServerWorkers", nullptr, (EPropertyFlags)0x0010000020004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpatialLaunchConfigDescription, ServerWorkers_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::NewProp_ServerWorkers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::NewProp_ServerWorkers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::NewProp_ServerWorkers_Inner = { "ServerWorkers", nullptr, (EPropertyFlags)0x0000000020004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FWorkerTypeLaunchSection, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::NewProp_World_MetaData[] = {
		{ "Category", "SpatialGDK" },
		{ "Comment", "/** Configuration for the simulated world. */" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Configuration for the simulated world." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpatialLaunchConfigDescription, World), Z_Construct_UScriptStruct_FWorldLaunchSection, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::NewProp_World_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::NewProp_Template_MetaData[] = {
		{ "Category", "SpatialGDK" },
		{ "Comment", "/** Deployment template. */" },
		{ "EditCondition", "!bUseDefaultTemplateForRuntimeVariant" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Deployment template." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::NewProp_Template = { "Template", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpatialLaunchConfigDescription, Template), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::NewProp_Template_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::NewProp_Template_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::NewProp_bUseDefaultTemplateForRuntimeVariant_MetaData[] = {
		{ "Category", "SpatialGDK" },
		{ "Comment", "/** Use default template for deployments. */" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Use default template for deployments." },
	};
#endif
	void Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::NewProp_bUseDefaultTemplateForRuntimeVariant_SetBit(void* Obj)
	{
		((FSpatialLaunchConfigDescription*)Obj)->bUseDefaultTemplateForRuntimeVariant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::NewProp_bUseDefaultTemplateForRuntimeVariant = { "bUseDefaultTemplateForRuntimeVariant", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSpatialLaunchConfigDescription), &Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::NewProp_bUseDefaultTemplateForRuntimeVariant_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::NewProp_bUseDefaultTemplateForRuntimeVariant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::NewProp_bUseDefaultTemplateForRuntimeVariant_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::NewProp_ServerWorkerConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::NewProp_ServerWorkers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::NewProp_ServerWorkers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::NewProp_Template,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::NewProp_bUseDefaultTemplateForRuntimeVariant,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKEditor,
		nullptr,
		&NewStructOps,
		"SpatialLaunchConfigDescription",
		sizeof(FSpatialLaunchConfigDescription),
		alignof(FSpatialLaunchConfigDescription),
		Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SpatialGDKEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpatialLaunchConfigDescription"), sizeof(FSpatialLaunchConfigDescription), Get_Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Hash() { return 1892770333U; }
class UScriptStruct* FWorkerTypeLaunchSection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SPATIALGDKEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorkerTypeLaunchSection, Z_Construct_UPackage__Script_SpatialGDKEditor(), TEXT("WorkerTypeLaunchSection"), sizeof(FWorkerTypeLaunchSection), Get_Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Hash());
	}
	return Singleton;
}
template<> SPATIALGDKEDITOR_API UScriptStruct* StaticStruct<FWorkerTypeLaunchSection>()
{
	return FWorkerTypeLaunchSection::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWorkerTypeLaunchSection(FWorkerTypeLaunchSection::StaticStruct, TEXT("/Script/SpatialGDKEditor"), TEXT("WorkerTypeLaunchSection"), false, nullptr, nullptr);
static struct FScriptStruct_SpatialGDKEditor_StaticRegisterNativesFWorkerTypeLaunchSection
{
	FScriptStruct_SpatialGDKEditor_StaticRegisterNativesFWorkerTypeLaunchSection()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WorkerTypeLaunchSection")),new UScriptStruct::TCppStructOps<FWorkerTypeLaunchSection>);
	}
} ScriptStruct_SpatialGDKEditor_StaticRegisterNativesFWorkerTypeLaunchSection;
	struct Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bManualWorkerConnectionOnly_MetaData[];
#endif
		static void NewProp_bManualWorkerConnectionOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bManualWorkerConnectionOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Flags;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Flags_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Flags_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumEditorInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumEditorInstances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoNumEditorInstances_MetaData[];
#endif
		static void NewProp_bAutoNumEditorInstances_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoNumEditorInstances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorkerPermissions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorkerPermissions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorkerTypeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WorkerTypeName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorkerTypeLaunchSection>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_bManualWorkerConnectionOnly_MetaData[] = {
		{ "Category", "SpatialGDK" },
		{ "Comment", "/** Determines if the worker instance is launched manually or by SpatialOS. */" },
		{ "DisplayName", "Manual worker connection only" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Determines if the worker instance is launched manually or by SpatialOS." },
	};
#endif
	void Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_bManualWorkerConnectionOnly_SetBit(void* Obj)
	{
		((FWorkerTypeLaunchSection*)Obj)->bManualWorkerConnectionOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_bManualWorkerConnectionOnly = { "bManualWorkerConnectionOnly", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWorkerTypeLaunchSection), &Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_bManualWorkerConnectionOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_bManualWorkerConnectionOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_bManualWorkerConnectionOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_Flags_MetaData[] = {
		{ "Category", "SpatialGDK" },
		{ "Comment", "/** Flags defined for a worker instance. */" },
		{ "DisplayName", "Flags" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Flags defined for a worker instance." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorkerTypeLaunchSection, Flags), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_Flags_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_Flags_Key_KeyProp = { "Flags_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_Flags_ValueProp = { "Flags", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_NumEditorInstances_MetaData[] = {
		{ "Category", "SpatialGDK" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of instances to launch when playing in editor. */" },
		{ "DisplayName", "Instances to launch in editor" },
		{ "EditCondition", "!bAutoNumEditorInstances" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Number of instances to launch when playing in editor." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_NumEditorInstances = { "NumEditorInstances", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorkerTypeLaunchSection, NumEditorInstances), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_NumEditorInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_NumEditorInstances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_bAutoNumEditorInstances_MetaData[] = {
		{ "Category", "SpatialGDK" },
		{ "Comment", "/** Automatically or manually specifies the number of worker instances to launch in editor. */" },
		{ "DisplayName", "Automatically compute number of instances to launch in Editor" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Automatically or manually specifies the number of worker instances to launch in editor." },
	};
#endif
	void Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_bAutoNumEditorInstances_SetBit(void* Obj)
	{
		((FWorkerTypeLaunchSection*)Obj)->bAutoNumEditorInstances = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_bAutoNumEditorInstances = { "bAutoNumEditorInstances", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWorkerTypeLaunchSection), &Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_bAutoNumEditorInstances_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_bAutoNumEditorInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_bAutoNumEditorInstances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_WorkerPermissions_MetaData[] = {
		{ "Category", "SpatialGDK" },
		{ "Comment", "/** Defines the worker instance's permissions. */" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Defines the worker instance's permissions." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_WorkerPermissions = { "WorkerPermissions", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorkerTypeLaunchSection, WorkerPermissions), Z_Construct_UScriptStruct_FWorkerPermissionsSection, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_WorkerPermissions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_WorkerPermissions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_WorkerTypeName_MetaData[] = {
		{ "Comment", "/** Worker type name, deprecated in favor of defining them in the runtime settings.*/" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Worker type name, deprecated in favor of defining them in the runtime settings." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_WorkerTypeName = { "WorkerTypeName", nullptr, (EPropertyFlags)0x0010000020004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorkerTypeLaunchSection, WorkerTypeName_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_WorkerTypeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_WorkerTypeName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_bManualWorkerConnectionOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_Flags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_Flags_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_Flags_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_NumEditorInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_bAutoNumEditorInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_WorkerPermissions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::NewProp_WorkerTypeName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKEditor,
		nullptr,
		&NewStructOps,
		"WorkerTypeLaunchSection",
		sizeof(FWorkerTypeLaunchSection),
		alignof(FWorkerTypeLaunchSection),
		Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorkerTypeLaunchSection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SpatialGDKEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WorkerTypeLaunchSection"), sizeof(FWorkerTypeLaunchSection), Get_Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Hash() { return 196787608U; }
class UScriptStruct* FLoginRateLimitSection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SPATIALGDKEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FLoginRateLimitSection_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoginRateLimitSection, Z_Construct_UPackage__Script_SpatialGDKEditor(), TEXT("LoginRateLimitSection"), sizeof(FLoginRateLimitSection), Get_Z_Construct_UScriptStruct_FLoginRateLimitSection_Hash());
	}
	return Singleton;
}
template<> SPATIALGDKEDITOR_API UScriptStruct* StaticStruct<FLoginRateLimitSection>()
{
	return FLoginRateLimitSection::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLoginRateLimitSection(FLoginRateLimitSection::StaticStruct, TEXT("/Script/SpatialGDKEditor"), TEXT("LoginRateLimitSection"), false, nullptr, nullptr);
static struct FScriptStruct_SpatialGDKEditor_StaticRegisterNativesFLoginRateLimitSection
{
	FScriptStruct_SpatialGDKEditor_StaticRegisterNativesFLoginRateLimitSection()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LoginRateLimitSection")),new UScriptStruct::TCppStructOps<FLoginRateLimitSection>);
	}
} ScriptStruct_SpatialGDKEditor_StaticRegisterNativesFLoginRateLimitSection;
	struct Z_Construct_UScriptStruct_FLoginRateLimitSection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestsPerDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RequestsPerDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginRateLimitSection_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLoginRateLimitSection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoginRateLimitSection>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginRateLimitSection_Statics::NewProp_RequestsPerDuration_MetaData[] = {
		{ "Category", "SpatialGDK" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The connection request limit for the duration. */" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "The connection request limit for the duration." },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLoginRateLimitSection_Statics::NewProp_RequestsPerDuration = { "RequestsPerDuration", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoginRateLimitSection, RequestsPerDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginRateLimitSection_Statics::NewProp_RequestsPerDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginRateLimitSection_Statics::NewProp_RequestsPerDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoginRateLimitSection_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "SpatialGDK" },
		{ "Comment", "/** The duration for which worker connection requests will be limited. */" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "The duration for which worker connection requests will be limited." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLoginRateLimitSection_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoginRateLimitSection, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginRateLimitSection_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginRateLimitSection_Statics::NewProp_Duration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLoginRateLimitSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoginRateLimitSection_Statics::NewProp_RequestsPerDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoginRateLimitSection_Statics::NewProp_Duration,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoginRateLimitSection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKEditor,
		nullptr,
		&NewStructOps,
		"LoginRateLimitSection",
		sizeof(FLoginRateLimitSection),
		alignof(FLoginRateLimitSection),
		Z_Construct_UScriptStruct_FLoginRateLimitSection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginRateLimitSection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLoginRateLimitSection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoginRateLimitSection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLoginRateLimitSection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLoginRateLimitSection_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SpatialGDKEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LoginRateLimitSection"), sizeof(FLoginRateLimitSection), Get_Z_Construct_UScriptStruct_FLoginRateLimitSection_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLoginRateLimitSection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLoginRateLimitSection_Hash() { return 1715233697U; }
class UScriptStruct* FWorkerPermissionsSection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SPATIALGDKEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FWorkerPermissionsSection_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorkerPermissionsSection, Z_Construct_UPackage__Script_SpatialGDKEditor(), TEXT("WorkerPermissionsSection"), sizeof(FWorkerPermissionsSection), Get_Z_Construct_UScriptStruct_FWorkerPermissionsSection_Hash());
	}
	return Singleton;
}
template<> SPATIALGDKEDITOR_API UScriptStruct* StaticStruct<FWorkerPermissionsSection>()
{
	return FWorkerPermissionsSection::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWorkerPermissionsSection(FWorkerPermissionsSection::StaticStruct, TEXT("/Script/SpatialGDKEditor"), TEXT("WorkerPermissionsSection"), false, nullptr, nullptr);
static struct FScriptStruct_SpatialGDKEditor_StaticRegisterNativesFWorkerPermissionsSection
{
	FScriptStruct_SpatialGDKEditor_StaticRegisterNativesFWorkerPermissionsSection()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WorkerPermissionsSection")),new UScriptStruct::TCppStructOps<FWorkerPermissionsSection>);
	}
} ScriptStruct_SpatialGDKEditor_StaticRegisterNativesFWorkerPermissionsSection;
	struct Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Components_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Components;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Components_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowEntityQuery_MetaData[];
#endif
		static void NewProp_bAllowEntityQuery_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowEntityQuery;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowEntityDeletion_MetaData[];
#endif
		static void NewProp_bAllowEntityDeletion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowEntityDeletion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowEntityCreation_MetaData[];
#endif
		static void NewProp_bAllowEntityCreation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowEntityCreation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllPermissions_MetaData[];
#endif
		static void NewProp_bAllPermissions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllPermissions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorkerPermissionsSection>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::NewProp_Components_MetaData[] = {
		{ "Category", "SpatialGDK" },
		{ "Comment", "/** Specifies which components can be returned in the query result. */" },
		{ "DisplayName", "Component queries" },
		{ "EditCondition", "!bAllPermissions" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Specifies which components can be returned in the query result." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::NewProp_Components = { "Components", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorkerPermissionsSection, Components), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::NewProp_Components_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::NewProp_Components_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::NewProp_Components_Inner = { "Components", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::NewProp_bAllowEntityQuery_MetaData[] = {
		{ "Category", "SpatialGDK" },
		{ "Comment", "/** Controls which components can be returned from entity queries that the worker instance performs. If an entity query specifies other components to be returned, the query will fail. */" },
		{ "DisplayName", "Allow entity query" },
		{ "EditCondition", "!bAllPermissions" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Controls which components can be returned from entity queries that the worker instance performs. If an entity query specifies other components to be returned, the query will fail." },
	};
#endif
	void Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::NewProp_bAllowEntityQuery_SetBit(void* Obj)
	{
		((FWorkerPermissionsSection*)Obj)->bAllowEntityQuery = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::NewProp_bAllowEntityQuery = { "bAllowEntityQuery", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWorkerPermissionsSection), &Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::NewProp_bAllowEntityQuery_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::NewProp_bAllowEntityQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::NewProp_bAllowEntityQuery_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::NewProp_bAllowEntityDeletion_MetaData[] = {
		{ "Category", "SpatialGDK" },
		{ "Comment", "/** Enables a worker instance to delete entities. */" },
		{ "DisplayName", "Allow entity deletion" },
		{ "EditCondition", "!bAllPermissions" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Enables a worker instance to delete entities." },
	};
#endif
	void Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::NewProp_bAllowEntityDeletion_SetBit(void* Obj)
	{
		((FWorkerPermissionsSection*)Obj)->bAllowEntityDeletion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::NewProp_bAllowEntityDeletion = { "bAllowEntityDeletion", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWorkerPermissionsSection), &Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::NewProp_bAllowEntityDeletion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::NewProp_bAllowEntityDeletion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::NewProp_bAllowEntityDeletion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::NewProp_bAllowEntityCreation_MetaData[] = {
		{ "Category", "SpatialGDK" },
		{ "Comment", "/** Enables a worker instance to create new entities. */" },
		{ "DisplayName", "Allow entity creation" },
		{ "EditCondition", "!bAllPermissions" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Enables a worker instance to create new entities." },
	};
#endif
	void Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::NewProp_bAllowEntityCreation_SetBit(void* Obj)
	{
		((FWorkerPermissionsSection*)Obj)->bAllowEntityCreation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::NewProp_bAllowEntityCreation = { "bAllowEntityCreation", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWorkerPermissionsSection), &Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::NewProp_bAllowEntityCreation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::NewProp_bAllowEntityCreation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::NewProp_bAllowEntityCreation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::NewProp_bAllPermissions_MetaData[] = {
		{ "Category", "SpatialGDK" },
		{ "Comment", "/** Gives all permissions to a worker instance. */" },
		{ "DisplayName", "All" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Gives all permissions to a worker instance." },
	};
#endif
	void Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::NewProp_bAllPermissions_SetBit(void* Obj)
	{
		((FWorkerPermissionsSection*)Obj)->bAllPermissions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::NewProp_bAllPermissions = { "bAllPermissions", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWorkerPermissionsSection), &Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::NewProp_bAllPermissions_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::NewProp_bAllPermissions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::NewProp_bAllPermissions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::NewProp_Components,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::NewProp_Components_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::NewProp_bAllowEntityQuery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::NewProp_bAllowEntityDeletion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::NewProp_bAllowEntityCreation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::NewProp_bAllPermissions,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKEditor,
		nullptr,
		&NewStructOps,
		"WorkerPermissionsSection",
		sizeof(FWorkerPermissionsSection),
		alignof(FWorkerPermissionsSection),
		Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorkerPermissionsSection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWorkerPermissionsSection_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SpatialGDKEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WorkerPermissionsSection"), sizeof(FWorkerPermissionsSection), Get_Z_Construct_UScriptStruct_FWorkerPermissionsSection_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWorkerPermissionsSection_Hash() { return 3719268126U; }
class UScriptStruct* FWorldLaunchSection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SPATIALGDKEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FWorldLaunchSection_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldLaunchSection, Z_Construct_UPackage__Script_SpatialGDKEditor(), TEXT("WorldLaunchSection"), sizeof(FWorldLaunchSection), Get_Z_Construct_UScriptStruct_FWorldLaunchSection_Hash());
	}
	return Singleton;
}
template<> SPATIALGDKEDITOR_API UScriptStruct* StaticStruct<FWorldLaunchSection>()
{
	return FWorldLaunchSection::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWorldLaunchSection(FWorldLaunchSection::StaticStruct, TEXT("/Script/SpatialGDKEditor"), TEXT("WorldLaunchSection"), false, nullptr, nullptr);
static struct FScriptStruct_SpatialGDKEditor_StaticRegisterNativesFWorldLaunchSection
{
	FScriptStruct_SpatialGDKEditor_StaticRegisterNativesFWorldLaunchSection()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WorldLaunchSection")),new UScriptStruct::TCppStructOps<FWorldLaunchSection>);
	}
} ScriptStruct_SpatialGDKEditor_StaticRegisterNativesFWorldLaunchSection;
	struct Z_Construct_UScriptStruct_FWorldLaunchSection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LegacyJavaParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LegacyJavaParams;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LegacyJavaParams_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LegacyJavaParams_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LegacyFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LegacyFlags;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LegacyFlags_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LegacyFlags_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapshotWritePeriodSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SnapshotWritePeriodSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChunkEdgeLengthMeters_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChunkEdgeLengthMeters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dimensions_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Dimensions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldLaunchSection>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::NewProp_LegacyJavaParams_MetaData[] = {
		{ "Category", "SpatialGDK" },
		{ "Comment", "/** Legacy JVM configurations. */" },
		{ "DisplayName", "Legacy Java parameters" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Legacy JVM configurations." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::NewProp_LegacyJavaParams = { "LegacyJavaParams", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorldLaunchSection, LegacyJavaParams), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::NewProp_LegacyJavaParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::NewProp_LegacyJavaParams_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::NewProp_LegacyJavaParams_Key_KeyProp = { "LegacyJavaParams_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::NewProp_LegacyJavaParams_ValueProp = { "LegacyJavaParams", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::NewProp_LegacyFlags_MetaData[] = {
		{ "Category", "SpatialGDK" },
		{ "Comment", "/** Legacy non-worker flag configurations. */" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Legacy non-worker flag configurations." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::NewProp_LegacyFlags = { "LegacyFlags", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorldLaunchSection, LegacyFlags), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::NewProp_LegacyFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::NewProp_LegacyFlags_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::NewProp_LegacyFlags_Key_KeyProp = { "LegacyFlags_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::NewProp_LegacyFlags_ValueProp = { "LegacyFlags", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::NewProp_SnapshotWritePeriodSeconds_MetaData[] = {
		{ "Category", "SpatialGDK" },
		{ "Comment", "/** The frequency in seconds to write snapshots of the simulated world. */" },
		{ "DisplayName", "Snapshot write period in seconds" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "The frequency in seconds to write snapshots of the simulated world." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::NewProp_SnapshotWritePeriodSeconds = { "SnapshotWritePeriodSeconds", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorldLaunchSection, SnapshotWritePeriodSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::NewProp_SnapshotWritePeriodSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::NewProp_SnapshotWritePeriodSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::NewProp_ChunkEdgeLengthMeters_MetaData[] = {
		{ "Category", "SpatialGDK" },
		{ "Comment", "/** The size of the grid squares that the world is divided into, in \xe2\x80\x9cworld units\xe2\x80\x9d (an arbitrary unit that worker instances can interpret as they choose). */" },
		{ "DisplayName", "Chunk edge length in meters" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "The size of the grid squares that the world is divided into, in \xe2\x80\x9cworld units\xe2\x80\x9d (an arbitrary unit that worker instances can interpret as they choose)." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::NewProp_ChunkEdgeLengthMeters = { "ChunkEdgeLengthMeters", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorldLaunchSection, ChunkEdgeLengthMeters), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::NewProp_ChunkEdgeLengthMeters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::NewProp_ChunkEdgeLengthMeters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::NewProp_Dimensions_MetaData[] = {
		{ "Category", "SpatialGDK" },
		{ "Comment", "/** The size of the simulation, in meters, for the auto-generated launch configuration file. */" },
		{ "DisplayName", "Simulation dimensions in meters" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "The size of the simulation, in meters, for the auto-generated launch configuration file." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::NewProp_Dimensions = { "Dimensions", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorldLaunchSection, Dimensions), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::NewProp_Dimensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::NewProp_Dimensions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::NewProp_LegacyJavaParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::NewProp_LegacyJavaParams_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::NewProp_LegacyJavaParams_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::NewProp_LegacyFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::NewProp_LegacyFlags_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::NewProp_LegacyFlags_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::NewProp_SnapshotWritePeriodSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::NewProp_ChunkEdgeLengthMeters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::NewProp_Dimensions,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKEditor,
		nullptr,
		&NewStructOps,
		"WorldLaunchSection",
		sizeof(FWorldLaunchSection),
		alignof(FWorldLaunchSection),
		Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorldLaunchSection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWorldLaunchSection_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SpatialGDKEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WorldLaunchSection"), sizeof(FWorldLaunchSection), Get_Z_Construct_UScriptStruct_FWorldLaunchSection_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWorldLaunchSection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWorldLaunchSection_Hash() { return 2992733789U; }
	void USpatialGDKEditorSettings::StaticRegisterNativesUSpatialGDKEditorSettings()
	{
	}
	UClass* Z_Construct_UClass_USpatialGDKEditorSettings_NoRegister()
	{
		return USpatialGDKEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_USpatialGDKEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpatialOSNetFlowType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpatialOSNetFlowType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchConfigDesc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LaunchConfigDesc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartPIEClientsWithLocalLaunchOnDevice_MetaData[];
#endif
		static void NewProp_bStartPIEClientsWithLocalLaunchOnDevice_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartPIEClientsWithLocalLaunchOnDevice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPackageMobileCommandLineArgs_MetaData[];
#endif
		static void NewProp_bPackageMobileCommandLineArgs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPackageMobileCommandLineArgs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MobileExtraCommandLineArgs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MobileExtraCommandLineArgs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MobileWorkerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MobileWorkerType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MobileRuntimeIPOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MobileRuntimeIPOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MobileConnectionFlow_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MobileConnectionFlow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMobileOverrideConnectionFlow_MetaData[];
#endif
		static void NewProp_bMobileOverrideConnectionFlow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMobileOverrideConnectionFlow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfSimulatedPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumberOfSimulatedPlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulatedPlayerDeploymentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SimulatedPlayerDeploymentName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSimulatedPlayersIsEnabled_MetaData[];
#endif
		static void NewProp_bSimulatedPlayersIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSimulatedPlayersIsEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulatedPlayerCluster_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SimulatedPlayerCluster;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimulatedPlayerDeploymentRegionCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SimulatedPlayerDeploymentRegionCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ListeningAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ListeningAddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalReceptionistPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LocalReceptionistPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bConnectServerToCloud_MetaData[];
#endif
		static void NewProp_bConnectServerToCloud_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConnectServerToCloud;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DevelopmentAuthenticationToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DevelopmentAuthenticationToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildSimulatedPlayerExtraArgs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildSimulatedPlayerExtraArgs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildClientExtraArgs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildClientExtraArgs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildServerExtraArgs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildServerExtraArgs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateSnapshot_MetaData[];
#endif
		static void NewProp_bGenerateSnapshot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateSnapshot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateSchema_MetaData[];
#endif
		static void NewProp_bGenerateSchema_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateSchema;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBuildClientWorker_MetaData[];
#endif
		static void NewProp_bBuildClientWorker_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBuildClientWorker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceAssemblyOverwrite_MetaData[];
#endif
		static void NewProp_bForceAssemblyOverwrite_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceAssemblyOverwrite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssemblyBuildConfiguration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssemblyBuildConfiguration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBuildAndUploadAssembly_MetaData[];
#endif
		static void NewProp_bBuildAndUploadAssembly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBuildAndUploadAssembly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAutoGenerateCloudConfigEnabled_MetaData[];
#endif
		static void NewProp_bIsAutoGenerateCloudConfigEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAutoGenerateCloudConfigEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeploymentTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeploymentTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainDeploymentCluster_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MainDeploymentCluster;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryDeploymentRegionCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PrimaryDeploymentRegionCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapshotPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SnapshotPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryLaunchConfigPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryLaunchConfigPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryDeploymentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PrimaryDeploymentName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssemblyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssemblyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpatialOSCommandLineLaunchFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpatialOSCommandLineLaunchFlags;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SpatialOSCommandLineLaunchFlags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CookAndGenerateAdditionalArguments_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CookAndGenerateAdditionalArguments;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CookAndGeneratePlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CookAndGeneratePlatform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpatialOSSnapshotToLoad_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SpatialOSSnapshotToLoad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpatialOSSnapshotToSave_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SpatialOSSnapshotToSave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoStartLocalDeployment_MetaData[];
#endif
		static void NewProp_bAutoStartLocalDeployment_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoStartLocalDeployment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopSpatialOnExit_MetaData[];
#endif
		static void NewProp_bStopSpatialOnExit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopSpatialOnExit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopLocalDeploymentOnEndPIE_MetaData[];
#endif
		static void NewProp_bStopLocalDeploymentOnEndPIE_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopLocalDeploymentOnEndPIE;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExposedRuntimeIP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExposedRuntimeIP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpatialOSLaunchConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpatialOSLaunchConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompatibilityModeRuntimeVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CompatibilityModeRuntimeVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandardRuntimeVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StandardRuntimeVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuntimeVariant_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RuntimeVariant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateDefaultLaunchConfig_MetaData[];
#endif
		static void NewProp_bGenerateDefaultLaunchConfig_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateDefaultLaunchConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDeleteDynamicEntities_MetaData[];
#endif
		static void NewProp_bDeleteDynamicEntities_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDeleteDynamicEntities;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowSpatialServiceButton_MetaData[];
#endif
		static void NewProp_bShowSpatialServiceButton_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowSpatialServiceButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpatialGDKEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "LoadBalancing" },
		{ "IncludePath", "SpatialGDKEditorSettings.h" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SpatialOSNetFlowType_MetaData[] = {
		{ "Category", "Connection Flow" },
		{ "Comment", "/** Select the connection flow that should be used when starting the game with Spatial networking enabled. */" },
		{ "DisplayName", "SpatialOS Connection Flow Type" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Select the connection flow that should be used when starting the game with Spatial networking enabled." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SpatialOSNetFlowType = { "SpatialOSNetFlowType", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKEditorSettings, SpatialOSNetFlowType), Z_Construct_UEnum_SpatialGDKEditor_ESpatialOSNetFlow, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SpatialOSNetFlowType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SpatialOSNetFlowType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_LaunchConfigDesc_MetaData[] = {
		{ "Category", "Launch" },
		{ "Comment", "/** If you have selected **Auto-generate launch configuration file**, you can change the default options in the file from the drop-down menu. */" },
		{ "DisplayName", "Launch configuration file options" },
		{ "EditCondition", "bGenerateDefaultLaunchConfig" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "If you have selected **Auto-generate launch configuration file**, you can change the default options in the file from the drop-down menu." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_LaunchConfigDesc = { "LaunchConfigDesc", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKEditorSettings, LaunchConfigDesc), Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_LaunchConfigDesc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_LaunchConfigDesc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bStartPIEClientsWithLocalLaunchOnDevice_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/** If checked, PIE clients will be automatically started when launching on a device and connecting to local deployment. */" },
		{ "DisplayName", "Start PIE Clients when launching on a device with local deployment flow" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "If checked, PIE clients will be automatically started when launching on a device and connecting to local deployment." },
	};
#endif
	void Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bStartPIEClientsWithLocalLaunchOnDevice_SetBit(void* Obj)
	{
		((USpatialGDKEditorSettings*)Obj)->bStartPIEClientsWithLocalLaunchOnDevice = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bStartPIEClientsWithLocalLaunchOnDevice = { "bStartPIEClientsWithLocalLaunchOnDevice", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialGDKEditorSettings), &Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bStartPIEClientsWithLocalLaunchOnDevice_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bStartPIEClientsWithLocalLaunchOnDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bStartPIEClientsWithLocalLaunchOnDevice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bPackageMobileCommandLineArgs_MetaData[] = {
		{ "Category", "Mobile" },
		{ "DisplayName", "Include Command Line Arguments when Packaging" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bPackageMobileCommandLineArgs_SetBit(void* Obj)
	{
		((USpatialGDKEditorSettings*)Obj)->bPackageMobileCommandLineArgs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bPackageMobileCommandLineArgs = { "bPackageMobileCommandLineArgs", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialGDKEditorSettings), &Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bPackageMobileCommandLineArgs_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bPackageMobileCommandLineArgs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bPackageMobileCommandLineArgs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_MobileExtraCommandLineArgs_MetaData[] = {
		{ "Category", "Mobile" },
		{ "DisplayName", "Extra Command Line Arguments" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_MobileExtraCommandLineArgs = { "MobileExtraCommandLineArgs", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKEditorSettings, MobileExtraCommandLineArgs), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_MobileExtraCommandLineArgs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_MobileExtraCommandLineArgs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_MobileWorkerType_MetaData[] = {
		{ "Category", "Mobile" },
		{ "DisplayName", "Mobile Client Worker Type" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_MobileWorkerType = { "MobileWorkerType", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKEditorSettings, MobileWorkerType), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_MobileWorkerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_MobileWorkerType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_MobileRuntimeIPOverride_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/** If specified, use this IP instead of 'Exposed local runtime IP address' when building the command line to push to the mobile device. */" },
		{ "DisplayName", "Local Runtime IP Override" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "If specified, use this IP instead of 'Exposed local runtime IP address' when building the command line to push to the mobile device." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_MobileRuntimeIPOverride = { "MobileRuntimeIPOverride", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKEditorSettings, MobileRuntimeIPOverride), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_MobileRuntimeIPOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_MobileRuntimeIPOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_MobileConnectionFlow_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/** The connection flow that should be used when pushing command line to the mobile device. */" },
		{ "DisplayName", "Mobile Connection Flow" },
		{ "EditCondition", "bMobileOverrideConnectionFlow" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "The connection flow that should be used when pushing command line to the mobile device." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_MobileConnectionFlow = { "MobileConnectionFlow", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKEditorSettings, MobileConnectionFlow), Z_Construct_UEnum_SpatialGDKEditor_ESpatialOSNetFlow, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_MobileConnectionFlow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_MobileConnectionFlow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bMobileOverrideConnectionFlow_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/** If checked, use the connection flow override below instead of the one selected in the editor when building the command line for mobile. */" },
		{ "DisplayName", "Override Mobile Connection Flow (only for Push settings to device)" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "If checked, use the connection flow override below instead of the one selected in the editor when building the command line for mobile." },
	};
#endif
	void Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bMobileOverrideConnectionFlow_SetBit(void* Obj)
	{
		((USpatialGDKEditorSettings*)Obj)->bMobileOverrideConnectionFlow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bMobileOverrideConnectionFlow = { "bMobileOverrideConnectionFlow", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialGDKEditorSettings), &Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bMobileOverrideConnectionFlow_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bMobileOverrideConnectionFlow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bMobileOverrideConnectionFlow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_NumberOfSimulatedPlayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_NumberOfSimulatedPlayers = { "NumberOfSimulatedPlayers", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKEditorSettings, NumberOfSimulatedPlayers), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_NumberOfSimulatedPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_NumberOfSimulatedPlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SimulatedPlayerDeploymentName_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SimulatedPlayerDeploymentName = { "SimulatedPlayerDeploymentName", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKEditorSettings, SimulatedPlayerDeploymentName), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SimulatedPlayerDeploymentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SimulatedPlayerDeploymentName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bSimulatedPlayersIsEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bSimulatedPlayersIsEnabled_SetBit(void* Obj)
	{
		((USpatialGDKEditorSettings*)Obj)->bSimulatedPlayersIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bSimulatedPlayersIsEnabled = { "bSimulatedPlayersIsEnabled", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialGDKEditorSettings), &Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bSimulatedPlayersIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bSimulatedPlayersIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bSimulatedPlayersIsEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SimulatedPlayerCluster_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SimulatedPlayerCluster = { "SimulatedPlayerCluster", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKEditorSettings, SimulatedPlayerCluster), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SimulatedPlayerCluster_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SimulatedPlayerCluster_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SimulatedPlayerDeploymentRegionCode_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SimulatedPlayerDeploymentRegionCode = { "SimulatedPlayerDeploymentRegionCode", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKEditorSettings, SimulatedPlayerDeploymentRegionCode), Z_Construct_UEnum_SpatialGDKEditor_ERegionCode, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SimulatedPlayerDeploymentRegionCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SimulatedPlayerDeploymentRegionCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_ListeningAddress_MetaData[] = {
		{ "Category", "Cloud Connection" },
		{ "Comment", "/** Network address to bind the receptionist proxy to. */" },
		{ "DisplayName", "Listening Address" },
		{ "EditCondition", "bConnectServerToCloud" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Network address to bind the receptionist proxy to." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_ListeningAddress = { "ListeningAddress", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKEditorSettings, ListeningAddress), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_ListeningAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_ListeningAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_LocalReceptionistPort_MetaData[] = {
		{ "Category", "Cloud Connection" },
		{ "Comment", "/** Port on which the receptionist proxy will be available. */" },
		{ "DisplayName", "Local Receptionist Port" },
		{ "EditCondition", "bConnectServerToCloud" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Port on which the receptionist proxy will be available." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_LocalReceptionistPort = { "LocalReceptionistPort", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKEditorSettings, LocalReceptionistPort), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_LocalReceptionistPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_LocalReceptionistPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bConnectServerToCloud_MetaData[] = {
		{ "Category", "Cloud Connection" },
		{ "Comment", "/** Whether to start local server worker when connecting to cloud deployment. If selected, make sure that the cloud deployment you want to connect to is not automatically launching Server-workers. (That your workers have \"manual_connection_only\" enabled) */" },
		{ "DisplayName", "Connect local server worker to the cloud deployment" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Whether to start local server worker when connecting to cloud deployment. If selected, make sure that the cloud deployment you want to connect to is not automatically launching Server-workers. (That your workers have \"manual_connection_only\" enabled)" },
	};
#endif
	void Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bConnectServerToCloud_SetBit(void* Obj)
	{
		((USpatialGDKEditorSettings*)Obj)->bConnectServerToCloud = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bConnectServerToCloud = { "bConnectServerToCloud", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialGDKEditorSettings), &Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bConnectServerToCloud_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bConnectServerToCloud_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bConnectServerToCloud_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_DevelopmentAuthenticationToken_MetaData[] = {
		{ "Category", "Cloud Connection" },
		{ "Comment", "/** The token created using 'spatial project auth dev-auth-token' */" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "The token created using 'spatial project auth dev-auth-token'" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_DevelopmentAuthenticationToken = { "DevelopmentAuthenticationToken", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKEditorSettings, DevelopmentAuthenticationToken), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_DevelopmentAuthenticationToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_DevelopmentAuthenticationToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_BuildSimulatedPlayerExtraArgs_MetaData[] = {
		{ "Category", "Assembly" },
		{ "Comment", "/** Extra arguments to pass when building the simulated player worker. */" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Extra arguments to pass when building the simulated player worker." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_BuildSimulatedPlayerExtraArgs = { "BuildSimulatedPlayerExtraArgs", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKEditorSettings, BuildSimulatedPlayerExtraArgs), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_BuildSimulatedPlayerExtraArgs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_BuildSimulatedPlayerExtraArgs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_BuildClientExtraArgs_MetaData[] = {
		{ "Category", "Assembly" },
		{ "Comment", "/** Extra arguments to pass when building the client worker. */" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Extra arguments to pass when building the client worker." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_BuildClientExtraArgs = { "BuildClientExtraArgs", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKEditorSettings, BuildClientExtraArgs), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_BuildClientExtraArgs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_BuildClientExtraArgs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_BuildServerExtraArgs_MetaData[] = {
		{ "Category", "Assembly" },
		{ "Comment", "/** Extra arguments to pass when building the server worker. */" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Extra arguments to pass when building the server worker." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_BuildServerExtraArgs = { "BuildServerExtraArgs", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKEditorSettings, BuildServerExtraArgs), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_BuildServerExtraArgs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_BuildServerExtraArgs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bGenerateSnapshot_MetaData[] = {
		{ "Category", "Assembly" },
		{ "Comment", "/** Whether to generate a snapshot automatically before building an assembly */" },
		{ "DisplayName", "Generate Snapshot" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Whether to generate a snapshot automatically before building an assembly" },
	};
#endif
	void Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bGenerateSnapshot_SetBit(void* Obj)
	{
		((USpatialGDKEditorSettings*)Obj)->bGenerateSnapshot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bGenerateSnapshot = { "bGenerateSnapshot", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialGDKEditorSettings), &Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bGenerateSnapshot_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bGenerateSnapshot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bGenerateSnapshot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bGenerateSchema_MetaData[] = {
		{ "Category", "Assembly" },
		{ "Comment", "/** Whether to generate schema automatically before building an assembly */" },
		{ "DisplayName", "Generate Schema" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Whether to generate schema automatically before building an assembly" },
	};
#endif
	void Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bGenerateSchema_SetBit(void* Obj)
	{
		((USpatialGDKEditorSettings*)Obj)->bGenerateSchema = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bGenerateSchema = { "bGenerateSchema", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialGDKEditorSettings), &Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bGenerateSchema_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bGenerateSchema_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bGenerateSchema_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bBuildClientWorker_MetaData[] = {
		{ "Category", "Assembly" },
		{ "Comment", "/** Whether to build client worker as part of the assembly */" },
		{ "DisplayName", "Build Client Worker" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Whether to build client worker as part of the assembly" },
	};
#endif
	void Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bBuildClientWorker_SetBit(void* Obj)
	{
		((USpatialGDKEditorSettings*)Obj)->bBuildClientWorker = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bBuildClientWorker = { "bBuildClientWorker", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialGDKEditorSettings), &Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bBuildClientWorker_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bBuildClientWorker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bBuildClientWorker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bForceAssemblyOverwrite_MetaData[] = {
		{ "Category", "Assembly" },
		{ "Comment", "/** Allow overwriting an assembly of the same name */" },
		{ "DisplayName", "Force Assembly Overwrite" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Allow overwriting an assembly of the same name" },
	};
#endif
	void Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bForceAssemblyOverwrite_SetBit(void* Obj)
	{
		((USpatialGDKEditorSettings*)Obj)->bForceAssemblyOverwrite = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bForceAssemblyOverwrite = { "bForceAssemblyOverwrite", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialGDKEditorSettings), &Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bForceAssemblyOverwrite_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bForceAssemblyOverwrite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bForceAssemblyOverwrite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_AssemblyBuildConfiguration_MetaData[] = {
		{ "Category", "Assembly" },
		{ "Comment", "/** The build configuration to use when creating workers for the assembly, e.g. Development */" },
		{ "DisplayName", "Build Configuration" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "The build configuration to use when creating workers for the assembly, e.g. Development" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_AssemblyBuildConfiguration = { "AssemblyBuildConfiguration", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKEditorSettings, AssemblyBuildConfiguration), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_AssemblyBuildConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_AssemblyBuildConfiguration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bBuildAndUploadAssembly_MetaData[] = {
		{ "Category", "Assembly" },
		{ "Comment", "/** Whether to build and upload the assembly when starting the cloud deployment. */" },
		{ "DisplayName", "Build and Upload Assembly" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Whether to build and upload the assembly when starting the cloud deployment." },
	};
#endif
	void Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bBuildAndUploadAssembly_SetBit(void* Obj)
	{
		((USpatialGDKEditorSettings*)Obj)->bBuildAndUploadAssembly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bBuildAndUploadAssembly = { "bBuildAndUploadAssembly", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialGDKEditorSettings), &Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bBuildAndUploadAssembly_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bBuildAndUploadAssembly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bBuildAndUploadAssembly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bIsAutoGenerateCloudConfigEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bIsAutoGenerateCloudConfigEnabled_SetBit(void* Obj)
	{
		((USpatialGDKEditorSettings*)Obj)->bIsAutoGenerateCloudConfigEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bIsAutoGenerateCloudConfigEnabled = { "bIsAutoGenerateCloudConfigEnabled", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialGDKEditorSettings), &Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bIsAutoGenerateCloudConfigEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bIsAutoGenerateCloudConfigEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bIsAutoGenerateCloudConfigEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_DeploymentTags_MetaData[] = {
		{ "Comment", "/** Tags used when launching a deployment */" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Tags used when launching a deployment" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_DeploymentTags = { "DeploymentTags", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKEditorSettings, DeploymentTags), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_DeploymentTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_DeploymentTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_MainDeploymentCluster_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_MainDeploymentCluster = { "MainDeploymentCluster", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKEditorSettings, MainDeploymentCluster), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_MainDeploymentCluster_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_MainDeploymentCluster_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_PrimaryDeploymentRegionCode_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_PrimaryDeploymentRegionCode = { "PrimaryDeploymentRegionCode", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKEditorSettings, PrimaryDeploymentRegionCode), Z_Construct_UEnum_SpatialGDKEditor_ERegionCode, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_PrimaryDeploymentRegionCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_PrimaryDeploymentRegionCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SnapshotPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SnapshotPath = { "SnapshotPath", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKEditorSettings, SnapshotPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SnapshotPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SnapshotPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_PrimaryLaunchConfigPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_PrimaryLaunchConfigPath = { "PrimaryLaunchConfigPath", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKEditorSettings, PrimaryLaunchConfigPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_PrimaryLaunchConfigPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_PrimaryLaunchConfigPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_PrimaryDeploymentName_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_PrimaryDeploymentName = { "PrimaryDeploymentName", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKEditorSettings, PrimaryDeploymentName), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_PrimaryDeploymentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_PrimaryDeploymentName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_AssemblyName_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_AssemblyName = { "AssemblyName", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKEditorSettings, AssemblyName), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_AssemblyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_AssemblyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SpatialOSCommandLineLaunchFlags_MetaData[] = {
		{ "Category", "Launch" },
		{ "Comment", "/** Add flags to the `spatial local launch` command; they alter the deployment\xe2\x80\x99s behavior. Select the trash icon to remove all the flags.*/" },
		{ "DisplayName", "Command line flags for local launch" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Add flags to the `spatial local launch` command; they alter the deployment\xe2\x80\x99s behavior. Select the trash icon to remove all the flags." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SpatialOSCommandLineLaunchFlags = { "SpatialOSCommandLineLaunchFlags", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKEditorSettings, SpatialOSCommandLineLaunchFlags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SpatialOSCommandLineLaunchFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SpatialOSCommandLineLaunchFlags_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SpatialOSCommandLineLaunchFlags_Inner = { "SpatialOSCommandLineLaunchFlags", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_CookAndGenerateAdditionalArguments_MetaData[] = {
		{ "Category", "Schema Generation" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "Tooltip", "Additional arguments passed to Cook And Generate Schema" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_CookAndGenerateAdditionalArguments = { "CookAndGenerateAdditionalArguments", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKEditorSettings, CookAndGenerateAdditionalArguments), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_CookAndGenerateAdditionalArguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_CookAndGenerateAdditionalArguments_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_CookAndGeneratePlatform_MetaData[] = {
		{ "Category", "Schema Generation" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "Tooltip", "Platform to target when using Cook And Generate Schema (if empty, defaults to Editor's platform)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_CookAndGeneratePlatform = { "CookAndGeneratePlatform", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKEditorSettings, CookAndGeneratePlatform), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_CookAndGeneratePlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_CookAndGeneratePlatform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SpatialOSSnapshotToLoad_MetaData[] = {
		{ "Category", "Snapshots" },
		{ "Comment", "/** Name of your SpatialOS snapshot file that will be loaded during deployment. */" },
		{ "DisplayName", "Snapshot to load" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Name of your SpatialOS snapshot file that will be loaded during deployment." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SpatialOSSnapshotToLoad = { "SpatialOSSnapshotToLoad", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKEditorSettings, SpatialOSSnapshotToLoad), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SpatialOSSnapshotToLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SpatialOSSnapshotToLoad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SpatialOSSnapshotToSave_MetaData[] = {
		{ "Category", "Snapshots" },
		{ "Comment", "/** Name of your SpatialOS snapshot file that will be generated. */" },
		{ "DisplayName", "Snapshot to save" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Name of your SpatialOS snapshot file that will be generated." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SpatialOSSnapshotToSave = { "SpatialOSSnapshotToSave", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKEditorSettings, SpatialOSSnapshotToSave), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SpatialOSSnapshotToSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SpatialOSSnapshotToSave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bAutoStartLocalDeployment_MetaData[] = {
		{ "Category", "Launch" },
		{ "Comment", "/** Start a local SpatialOS deployment when clicking 'Play'. */" },
		{ "DisplayName", "Auto-start local deployment" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Start a local SpatialOS deployment when clicking 'Play'." },
	};
#endif
	void Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bAutoStartLocalDeployment_SetBit(void* Obj)
	{
		((USpatialGDKEditorSettings*)Obj)->bAutoStartLocalDeployment = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bAutoStartLocalDeployment = { "bAutoStartLocalDeployment", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialGDKEditorSettings), &Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bAutoStartLocalDeployment_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bAutoStartLocalDeployment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bAutoStartLocalDeployment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bStopSpatialOnExit_MetaData[] = {
		{ "Category", "Launch" },
		{ "Comment", "/** Select the check box to stop your game\xe2\x80\x99s local deployment when you shut down Unreal Editor. */" },
		{ "DisplayName", "Stop local deployment on exit" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Select the check box to stop your game\xe2\x80\x99s local deployment when you shut down Unreal Editor." },
	};
#endif
	void Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bStopSpatialOnExit_SetBit(void* Obj)
	{
		((USpatialGDKEditorSettings*)Obj)->bStopSpatialOnExit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bStopSpatialOnExit = { "bStopSpatialOnExit", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialGDKEditorSettings), &Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bStopSpatialOnExit_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bStopSpatialOnExit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bStopSpatialOnExit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bStopLocalDeploymentOnEndPIE_MetaData[] = {
		{ "Category", "Launch" },
		{ "DisplayName", "Stop local deployment on stop play in editor" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bStopLocalDeploymentOnEndPIE_SetBit(void* Obj)
	{
		((USpatialGDKEditorSettings*)Obj)->bStopLocalDeploymentOnEndPIE = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bStopLocalDeploymentOnEndPIE = { "bStopLocalDeploymentOnEndPIE", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialGDKEditorSettings), &Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bStopLocalDeploymentOnEndPIE_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bStopLocalDeploymentOnEndPIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bStopLocalDeploymentOnEndPIE_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_ExposedRuntimeIP_MetaData[] = {
		{ "Category", "Launch" },
		{ "Comment", "/** Specify on which IP address the local runtime should be reachable. If empty, the local runtime will not be exposed. Changes are applied on next local deployment startup. */" },
		{ "DisplayName", "Exposed local runtime IP address" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Specify on which IP address the local runtime should be reachable. If empty, the local runtime will not be exposed. Changes are applied on next local deployment startup." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_ExposedRuntimeIP = { "ExposedRuntimeIP", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKEditorSettings, ExposedRuntimeIP), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_ExposedRuntimeIP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_ExposedRuntimeIP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SpatialOSLaunchConfig_MetaData[] = {
		{ "Category", "Launch" },
		{ "Comment", "/** If you are not using auto-generate launch configuration file, specify a launch configuration `.json` file and location here.  */" },
		{ "DisplayName", "Launch configuration file path" },
		{ "EditCondition", "!bGenerateDefaultLaunchConfig" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "If you are not using auto-generate launch configuration file, specify a launch configuration `.json` file and location here." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SpatialOSLaunchConfig = { "SpatialOSLaunchConfig", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKEditorSettings, SpatialOSLaunchConfig), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SpatialOSLaunchConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SpatialOSLaunchConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_CompatibilityModeRuntimeVersion_MetaData[] = {
		{ "Category", "Runtime" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_CompatibilityModeRuntimeVersion = { "CompatibilityModeRuntimeVersion", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKEditorSettings, CompatibilityModeRuntimeVersion), Z_Construct_UScriptStruct_FRuntimeVariantVersion, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_CompatibilityModeRuntimeVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_CompatibilityModeRuntimeVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_StandardRuntimeVersion_MetaData[] = {
		{ "Category", "Runtime" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_StandardRuntimeVersion = { "StandardRuntimeVersion", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKEditorSettings, StandardRuntimeVersion), Z_Construct_UScriptStruct_FRuntimeVariantVersion, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_StandardRuntimeVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_StandardRuntimeVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_RuntimeVariant_MetaData[] = {
		{ "Category", "Runtime" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_RuntimeVariant = { "RuntimeVariant", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKEditorSettings, RuntimeVariant), Z_Construct_UEnum_SpatialGDKEditor_ESpatialOSRuntimeVariant, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_RuntimeVariant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_RuntimeVariant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bGenerateDefaultLaunchConfig_MetaData[] = {
		{ "Category", "Launch" },
		{ "Comment", "/** Select the check box for the GDK to auto-generate a launch configuration file for your game when you launch a deployment session. If NOT selected, you must specify a launch configuration `.json` file. */" },
		{ "DisplayName", "Auto-generate launch configuration file" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Select the check box for the GDK to auto-generate a launch configuration file for your game when you launch a deployment session. If NOT selected, you must specify a launch configuration `.json` file." },
	};
#endif
	void Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bGenerateDefaultLaunchConfig_SetBit(void* Obj)
	{
		((USpatialGDKEditorSettings*)Obj)->bGenerateDefaultLaunchConfig = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bGenerateDefaultLaunchConfig = { "bGenerateDefaultLaunchConfig", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialGDKEditorSettings), &Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bGenerateDefaultLaunchConfig_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bGenerateDefaultLaunchConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bGenerateDefaultLaunchConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bDeleteDynamicEntities_MetaData[] = {
		{ "Category", "Play in editor settings" },
		{ "Comment", "/** Select to delete all a server-worker instance\xe2\x80\x99s dynamically-spawned entities when the server-worker instance shuts down. If NOT selected, a new server-worker instance has all of these entities from the former server-worker instance\xe2\x80\x99s session. */" },
		{ "DisplayName", "Delete dynamically spawned entities" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "Select to delete all a server-worker instance\xe2\x80\x99s dynamically-spawned entities when the server-worker instance shuts down. If NOT selected, a new server-worker instance has all of these entities from the former server-worker instance\xe2\x80\x99s session." },
	};
#endif
	void Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bDeleteDynamicEntities_SetBit(void* Obj)
	{
		((USpatialGDKEditorSettings*)Obj)->bDeleteDynamicEntities = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bDeleteDynamicEntities = { "bDeleteDynamicEntities", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialGDKEditorSettings), &Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bDeleteDynamicEntities_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bDeleteDynamicEntities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bDeleteDynamicEntities_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bShowSpatialServiceButton_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** If checked, show the Spatial service button on the GDK toolbar which can be used to turn the Spatial service on and off. */" },
		{ "DisplayName", "Show Spatial service button" },
		{ "ModuleRelativePath", "Public/SpatialGDKEditorSettings.h" },
		{ "ToolTip", "If checked, show the Spatial service button on the GDK toolbar which can be used to turn the Spatial service on and off." },
	};
#endif
	void Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bShowSpatialServiceButton_SetBit(void* Obj)
	{
		((USpatialGDKEditorSettings*)Obj)->bShowSpatialServiceButton = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bShowSpatialServiceButton = { "bShowSpatialServiceButton", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialGDKEditorSettings), &Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bShowSpatialServiceButton_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bShowSpatialServiceButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bShowSpatialServiceButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpatialGDKEditorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SpatialOSNetFlowType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_LaunchConfigDesc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bStartPIEClientsWithLocalLaunchOnDevice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bPackageMobileCommandLineArgs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_MobileExtraCommandLineArgs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_MobileWorkerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_MobileRuntimeIPOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_MobileConnectionFlow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bMobileOverrideConnectionFlow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_NumberOfSimulatedPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SimulatedPlayerDeploymentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bSimulatedPlayersIsEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SimulatedPlayerCluster,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SimulatedPlayerDeploymentRegionCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_ListeningAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_LocalReceptionistPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bConnectServerToCloud,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_DevelopmentAuthenticationToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_BuildSimulatedPlayerExtraArgs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_BuildClientExtraArgs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_BuildServerExtraArgs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bGenerateSnapshot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bGenerateSchema,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bBuildClientWorker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bForceAssemblyOverwrite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_AssemblyBuildConfiguration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bBuildAndUploadAssembly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bIsAutoGenerateCloudConfigEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_DeploymentTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_MainDeploymentCluster,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_PrimaryDeploymentRegionCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SnapshotPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_PrimaryLaunchConfigPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_PrimaryDeploymentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_AssemblyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SpatialOSCommandLineLaunchFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SpatialOSCommandLineLaunchFlags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_CookAndGenerateAdditionalArguments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_CookAndGeneratePlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SpatialOSSnapshotToLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SpatialOSSnapshotToSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bAutoStartLocalDeployment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bStopSpatialOnExit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bStopLocalDeploymentOnEndPIE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_ExposedRuntimeIP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_SpatialOSLaunchConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_CompatibilityModeRuntimeVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_StandardRuntimeVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_RuntimeVariant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bGenerateDefaultLaunchConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bDeleteDynamicEntities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKEditorSettings_Statics::NewProp_bShowSpatialServiceButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpatialGDKEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpatialGDKEditorSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpatialGDKEditorSettings_Statics::ClassParams = {
		&USpatialGDKEditorSettings::StaticClass,
		"SpatialGDKEditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpatialGDKEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		0x00000000u,
		METADATA_PARAMS(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpatialGDKEditorSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpatialGDKEditorSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpatialGDKEditorSettings, 2541203225);
	template<> SPATIALGDKEDITOR_API UClass* StaticClass<USpatialGDKEditorSettings>()
	{
		return USpatialGDKEditorSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpatialGDKEditorSettings(Z_Construct_UClass_USpatialGDKEditorSettings, &USpatialGDKEditorSettings::StaticClass, TEXT("/Script/SpatialGDKEditor"), TEXT("USpatialGDKEditorSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpatialGDKEditorSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
