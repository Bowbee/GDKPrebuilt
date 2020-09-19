// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKFunctionalTests/Public/SpatialFunctionalTestAutoDestroyComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpatialFunctionalTestAutoDestroyComponent() {}
// Cross Module References
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_USpatialFunctionalTestAutoDestroyComponent_NoRegister();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_USpatialFunctionalTestAutoDestroyComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKFunctionalTests();
// End Cross Module References
	void USpatialFunctionalTestAutoDestroyComponent::StaticRegisterNativesUSpatialFunctionalTestAutoDestroyComponent()
	{
	}
	UClass* Z_Construct_UClass_USpatialFunctionalTestAutoDestroyComponent_NoRegister()
	{
		return USpatialFunctionalTestAutoDestroyComponent::StaticClass();
	}
	struct Z_Construct_UClass_USpatialFunctionalTestAutoDestroyComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpatialFunctionalTestAutoDestroyComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKFunctionalTests,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialFunctionalTestAutoDestroyComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "SpatialFunctionalTest" },
		{ "Comment", "/*\n* Empty component to be added to actors so that they can be automatically destroyed when the tests finish\n*/" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "SpatialFunctionalTestAutoDestroyComponent.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/SpatialFunctionalTestAutoDestroyComponent.h" },
		{ "ToolTip", "* Empty component to be added to actors so that they can be automatically destroyed when the tests finish" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpatialFunctionalTestAutoDestroyComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpatialFunctionalTestAutoDestroyComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpatialFunctionalTestAutoDestroyComponent_Statics::ClassParams = {
		&USpatialFunctionalTestAutoDestroyComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		0x00000010u,
		METADATA_PARAMS(Z_Construct_UClass_USpatialFunctionalTestAutoDestroyComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialFunctionalTestAutoDestroyComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpatialFunctionalTestAutoDestroyComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpatialFunctionalTestAutoDestroyComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpatialFunctionalTestAutoDestroyComponent, 1250139971);
	template<> SPATIALGDKFUNCTIONALTESTS_API UClass* StaticClass<USpatialFunctionalTestAutoDestroyComponent>()
	{
		return USpatialFunctionalTestAutoDestroyComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpatialFunctionalTestAutoDestroyComponent(Z_Construct_UClass_USpatialFunctionalTestAutoDestroyComponent, &USpatialFunctionalTestAutoDestroyComponent::StaticClass, TEXT("/Script/SpatialGDKFunctionalTests"), TEXT("USpatialFunctionalTestAutoDestroyComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpatialFunctionalTestAutoDestroyComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
