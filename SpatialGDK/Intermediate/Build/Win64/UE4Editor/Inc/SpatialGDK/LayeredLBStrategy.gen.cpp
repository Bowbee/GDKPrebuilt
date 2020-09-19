// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDK/Public/LoadBalancing/LayeredLBStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLayeredLBStrategy() {}
// Cross Module References
	SPATIALGDK_API UClass* Z_Construct_UClass_ULayeredLBStrategy_NoRegister();
	SPATIALGDK_API UClass* Z_Construct_UClass_ULayeredLBStrategy();
	SPATIALGDK_API UClass* Z_Construct_UClass_UAbstractLBStrategy();
	UPackage* Z_Construct_UPackage__Script_SpatialGDK();
	SPATIALGDK_API UClass* Z_Construct_UClass_UAbstractLBStrategy_NoRegister();
// End Cross Module References
	void ULayeredLBStrategy::StaticRegisterNativesULayeredLBStrategy()
	{
	}
	UClass* Z_Construct_UClass_ULayeredLBStrategy_NoRegister()
	{
		return ULayeredLBStrategy::StaticClass();
	}
	struct Z_Construct_UClass_ULayeredLBStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerNameToLBStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LayerNameToLBStrategy;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LayerNameToLBStrategy_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LayerNameToLBStrategy_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULayeredLBStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbstractLBStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULayeredLBStrategy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A load balancing strategy that wraps multiple LBStrategies. The user can define \"Layers\" of work, which are\n * specified by sets of classes, and a LBStrategy for each Layer. This class will then allocate virtual workers\n * to each Layer/Strategy and keep track of which Actors belong in which layer and should be load balanced\n * by the corresponding Strategy.\n */" },
		{ "IncludePath", "LoadBalancing/LayeredLBStrategy.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/LoadBalancing/LayeredLBStrategy.h" },
		{ "ToolTip", "A load balancing strategy that wraps multiple LBStrategies. The user can define \"Layers\" of work, which are\nspecified by sets of classes, and a LBStrategy for each Layer. This class will then allocate virtual workers\nto each Layer/Strategy and keep track of which Actors belong in which layer and should be load balanced\nby the corresponding Strategy." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULayeredLBStrategy_Statics::NewProp_LayerNameToLBStrategy_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadBalancing/LayeredLBStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULayeredLBStrategy_Statics::NewProp_LayerNameToLBStrategy = { "LayerNameToLBStrategy", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULayeredLBStrategy, LayerNameToLBStrategy), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULayeredLBStrategy_Statics::NewProp_LayerNameToLBStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULayeredLBStrategy_Statics::NewProp_LayerNameToLBStrategy_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULayeredLBStrategy_Statics::NewProp_LayerNameToLBStrategy_Key_KeyProp = { "LayerNameToLBStrategy_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULayeredLBStrategy_Statics::NewProp_LayerNameToLBStrategy_ValueProp = { "LayerNameToLBStrategy", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UAbstractLBStrategy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULayeredLBStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULayeredLBStrategy_Statics::NewProp_LayerNameToLBStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULayeredLBStrategy_Statics::NewProp_LayerNameToLBStrategy_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULayeredLBStrategy_Statics::NewProp_LayerNameToLBStrategy_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULayeredLBStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULayeredLBStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULayeredLBStrategy_Statics::ClassParams = {
		&ULayeredLBStrategy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULayeredLBStrategy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULayeredLBStrategy_Statics::PropPointers),
		0,
		0x041000A0u,
		0x00000000u,
		METADATA_PARAMS(Z_Construct_UClass_ULayeredLBStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULayeredLBStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULayeredLBStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULayeredLBStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULayeredLBStrategy, 1551596072);
	template<> SPATIALGDK_API UClass* StaticClass<ULayeredLBStrategy>()
	{
		return ULayeredLBStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULayeredLBStrategy(Z_Construct_UClass_ULayeredLBStrategy, &ULayeredLBStrategy::StaticClass, TEXT("/Script/SpatialGDK"), TEXT("ULayeredLBStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULayeredLBStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
