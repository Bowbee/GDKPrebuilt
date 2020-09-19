// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDK/Public/EngineClasses/SpatialWorldSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpatialWorldSettings() {}
// Cross Module References
	SPATIALGDK_API UClass* Z_Construct_UClass_ASpatialWorldSettings_NoRegister();
	SPATIALGDK_API UClass* Z_Construct_UClass_ASpatialWorldSettings();
	ENGINE_API UClass* Z_Construct_UClass_AWorldSettings();
	UPackage* Z_Construct_UPackage__Script_SpatialGDK();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SPATIALGDK_API UClass* Z_Construct_UClass_USpatialMultiWorkerSettings_NoRegister();
// End Cross Module References
	void ASpatialWorldSettings::StaticRegisterNativesASpatialWorldSettings()
	{
	}
	UClass* Z_Construct_UClass_ASpatialWorldSettings_NoRegister()
	{
		return ASpatialWorldSettings::StaticClass();
	}
	struct Z_Construct_UClass_ASpatialWorldSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiWorkerSettingsClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MultiWorkerSettingsClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableMultiWorker_MetaData[];
#endif
		static void NewProp_bEnableMultiWorker_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableMultiWorker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpatialWorldSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWorldSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialWorldSettings_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Actor Advanced Display Events Object Attachment Info Input Blueprint Layers Tags Replication Input Movement Collision Utilities|Transformation" },
		{ "IncludePath", "EngineClasses/SpatialWorldSettings.h" },
		{ "ModuleRelativePath", "Public/EngineClasses/SpatialWorldSettings.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialWorldSettings_Statics::NewProp_MultiWorkerSettingsClass_MetaData[] = {
		{ "Category", "Multi-Worker" },
		{ "EditCondition", "bEnableMultiWorker" },
		{ "ModuleRelativePath", "Public/EngineClasses/SpatialWorldSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpatialWorldSettings_Statics::NewProp_MultiWorkerSettingsClass = { "MultiWorkerSettingsClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpatialWorldSettings, MultiWorkerSettingsClass), Z_Construct_UClass_USpatialMultiWorkerSettings_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASpatialWorldSettings_Statics::NewProp_MultiWorkerSettingsClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialWorldSettings_Statics::NewProp_MultiWorkerSettingsClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialWorldSettings_Statics::NewProp_bEnableMultiWorker_MetaData[] = {
		{ "Category", "Multi-Worker" },
		{ "Comment", "/** Enable running different server worker types to split the simulation. */" },
		{ "ModuleRelativePath", "Public/EngineClasses/SpatialWorldSettings.h" },
		{ "ToolTip", "Enable running different server worker types to split the simulation." },
	};
#endif
	void Z_Construct_UClass_ASpatialWorldSettings_Statics::NewProp_bEnableMultiWorker_SetBit(void* Obj)
	{
		((ASpatialWorldSettings*)Obj)->bEnableMultiWorker = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpatialWorldSettings_Statics::NewProp_bEnableMultiWorker = { "bEnableMultiWorker", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASpatialWorldSettings), &Z_Construct_UClass_ASpatialWorldSettings_Statics::NewProp_bEnableMultiWorker_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpatialWorldSettings_Statics::NewProp_bEnableMultiWorker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialWorldSettings_Statics::NewProp_bEnableMultiWorker_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpatialWorldSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialWorldSettings_Statics::NewProp_MultiWorkerSettingsClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialWorldSettings_Statics::NewProp_bEnableMultiWorker,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpatialWorldSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpatialWorldSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpatialWorldSettings_Statics::ClassParams = {
		&ASpatialWorldSettings::StaticClass,
		"game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpatialWorldSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialWorldSettings_Statics::PropPointers),
		0,
		0x009002A4u,
		0x00000010u,
		METADATA_PARAMS(Z_Construct_UClass_ASpatialWorldSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialWorldSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpatialWorldSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpatialWorldSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpatialWorldSettings, 3461410034);
	template<> SPATIALGDK_API UClass* StaticClass<ASpatialWorldSettings>()
	{
		return ASpatialWorldSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpatialWorldSettings(Z_Construct_UClass_ASpatialWorldSettings, &ASpatialWorldSettings::StaticClass, TEXT("/Script/SpatialGDK"), TEXT("ASpatialWorldSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpatialWorldSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
