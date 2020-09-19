// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDK/Public/EngineClasses/SpatialReplicationGraph.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpatialReplicationGraph() {}
// Cross Module References
	SPATIALGDK_API UClass* Z_Construct_UClass_USpatialReplicationGraph_NoRegister();
	SPATIALGDK_API UClass* Z_Construct_UClass_USpatialReplicationGraph();
	REPLICATIONGRAPH_API UClass* Z_Construct_UClass_UReplicationGraph();
	UPackage* Z_Construct_UPackage__Script_SpatialGDK();
// End Cross Module References
	void USpatialReplicationGraph::StaticRegisterNativesUSpatialReplicationGraph()
	{
	}
	UClass* Z_Construct_UClass_USpatialReplicationGraph_NoRegister()
	{
		return USpatialReplicationGraph::StaticClass();
	}
	struct Z_Construct_UClass_USpatialReplicationGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpatialReplicationGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReplicationGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialReplicationGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EngineClasses/SpatialReplicationGraph.h" },
		{ "ModuleRelativePath", "Public/EngineClasses/SpatialReplicationGraph.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpatialReplicationGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpatialReplicationGraph>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpatialReplicationGraph_Statics::ClassParams = {
		&USpatialReplicationGraph::StaticClass,
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
		0x001000ACu,
		0x00000000u,
		METADATA_PARAMS(Z_Construct_UClass_USpatialReplicationGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialReplicationGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpatialReplicationGraph()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpatialReplicationGraph_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpatialReplicationGraph, 3115248110);
	template<> SPATIALGDK_API UClass* StaticClass<USpatialReplicationGraph>()
	{
		return USpatialReplicationGraph::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpatialReplicationGraph(Z_Construct_UClass_USpatialReplicationGraph, &USpatialReplicationGraph::StaticClass, TEXT("/Script/SpatialGDK"), TEXT("USpatialReplicationGraph"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpatialReplicationGraph);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
