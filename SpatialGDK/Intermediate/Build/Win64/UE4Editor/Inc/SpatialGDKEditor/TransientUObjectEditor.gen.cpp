// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKEditor/Public/Utils/TransientUObjectEditor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransientUObjectEditor() {}
// Cross Module References
	SPATIALGDKEDITOR_API UClass* Z_Construct_UClass_UTransientUObjectEditor_NoRegister();
	SPATIALGDKEDITOR_API UClass* Z_Construct_UClass_UTransientUObjectEditor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKEditor();
// End Cross Module References
	void UTransientUObjectEditor::StaticRegisterNativesUTransientUObjectEditor()
	{
	}
	UClass* Z_Construct_UClass_UTransientUObjectEditor_NoRegister()
	{
		return UTransientUObjectEditor::StaticClass();
	}
	struct Z_Construct_UClass_UTransientUObjectEditor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTransientUObjectEditor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransientUObjectEditor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Utility class to create Editor tools exposing a UObject Field and automatically adding Exec UFUNCTION as buttons.\n" },
		{ "IncludePath", "Utils/TransientUObjectEditor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Utils/TransientUObjectEditor.h" },
		{ "ToolTip", "Utility class to create Editor tools exposing a UObject Field and automatically adding Exec UFUNCTION as buttons." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTransientUObjectEditor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransientUObjectEditor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTransientUObjectEditor_Statics::ClassParams = {
		&UTransientUObjectEditor::StaticClass,
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
		0x001000A1u,
		0x00000000u,
		METADATA_PARAMS(Z_Construct_UClass_UTransientUObjectEditor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTransientUObjectEditor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTransientUObjectEditor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTransientUObjectEditor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTransientUObjectEditor, 4229819474);
	template<> SPATIALGDKEDITOR_API UClass* StaticClass<UTransientUObjectEditor>()
	{
		return UTransientUObjectEditor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTransientUObjectEditor(Z_Construct_UClass_UTransientUObjectEditor, &UTransientUObjectEditor::StaticClass, TEXT("/Script/SpatialGDKEditor"), TEXT("UTransientUObjectEditor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTransientUObjectEditor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
