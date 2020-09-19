// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKEditor/Public/Utils/LaunchConfigurationEditor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaunchConfigurationEditor() {}
// Cross Module References
	SPATIALGDKEDITOR_API UClass* Z_Construct_UClass_ULaunchConfigurationEditor_NoRegister();
	SPATIALGDKEDITOR_API UClass* Z_Construct_UClass_ULaunchConfigurationEditor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKEditor();
	SPATIALGDKEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription();
// End Cross Module References
	DEFINE_FUNCTION(ULaunchConfigurationEditor::execSaveConfiguration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveConfiguration();
		P_NATIVE_END;
	}
	void ULaunchConfigurationEditor::StaticRegisterNativesULaunchConfigurationEditor()
	{
		UClass* Class = ULaunchConfigurationEditor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SaveConfiguration", &ULaunchConfigurationEditor::execSaveConfiguration },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULaunchConfigurationEditor_SaveConfiguration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULaunchConfigurationEditor_SaveConfiguration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils/LaunchConfigurationEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULaunchConfigurationEditor_SaveConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULaunchConfigurationEditor, nullptr, "SaveConfiguration", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080601, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULaunchConfigurationEditor_SaveConfiguration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULaunchConfigurationEditor_SaveConfiguration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULaunchConfigurationEditor_SaveConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULaunchConfigurationEditor_SaveConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULaunchConfigurationEditor_NoRegister()
	{
		return ULaunchConfigurationEditor::StaticClass();
	}
	struct Z_Construct_UClass_ULaunchConfigurationEditor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchConfiguration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LaunchConfiguration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULaunchConfigurationEditor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULaunchConfigurationEditor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULaunchConfigurationEditor_SaveConfiguration, "SaveConfiguration" }, // 2424281975
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULaunchConfigurationEditor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utils/LaunchConfigurationEditor.h" },
		{ "ModuleRelativePath", "Public/Utils/LaunchConfigurationEditor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULaunchConfigurationEditor_Statics::NewProp_LaunchConfiguration_MetaData[] = {
		{ "Category", "Launch Configuration" },
		{ "ModuleRelativePath", "Public/Utils/LaunchConfigurationEditor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULaunchConfigurationEditor_Statics::NewProp_LaunchConfiguration = { "LaunchConfiguration", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULaunchConfigurationEditor, LaunchConfiguration), Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription, METADATA_PARAMS(Z_Construct_UClass_ULaunchConfigurationEditor_Statics::NewProp_LaunchConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULaunchConfigurationEditor_Statics::NewProp_LaunchConfiguration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULaunchConfigurationEditor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULaunchConfigurationEditor_Statics::NewProp_LaunchConfiguration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULaunchConfigurationEditor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULaunchConfigurationEditor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULaunchConfigurationEditor_Statics::ClassParams = {
		&ULaunchConfigurationEditor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULaunchConfigurationEditor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULaunchConfigurationEditor_Statics::PropPointers),
		0,
		0x001020A8u,
		0x00000000u,
		METADATA_PARAMS(Z_Construct_UClass_ULaunchConfigurationEditor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULaunchConfigurationEditor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULaunchConfigurationEditor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULaunchConfigurationEditor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULaunchConfigurationEditor, 2309240594);
	template<> SPATIALGDKEDITOR_API UClass* StaticClass<ULaunchConfigurationEditor>()
	{
		return ULaunchConfigurationEditor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULaunchConfigurationEditor(Z_Construct_UClass_ULaunchConfigurationEditor, &ULaunchConfigurationEditor::StaticClass, TEXT("/Script/SpatialGDKEditor"), TEXT("ULaunchConfigurationEditor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULaunchConfigurationEditor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
