// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDK/Public/LoadBalancing/WorkerRegion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorkerRegion() {}
// Cross Module References
	SPATIALGDK_API UClass* Z_Construct_UClass_AWorkerRegion_NoRegister();
	SPATIALGDK_API UClass* Z_Construct_UClass_AWorkerRegion();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SpatialGDK();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AWorkerRegion::StaticRegisterNativesAWorkerRegion()
	{
	}
	UClass* Z_Construct_UClass_AWorkerRegion_NoRegister()
	{
		return AWorkerRegion::StaticClass();
	}
	struct Z_Construct_UClass_AWorkerRegion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWorkerRegion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorkerRegion_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LoadBalancing/WorkerRegion.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/LoadBalancing/WorkerRegion.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorkerRegion_Statics::NewProp_MaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/LoadBalancing/WorkerRegion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorkerRegion_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorkerRegion, MaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorkerRegion_Statics::NewProp_MaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorkerRegion_Statics::NewProp_MaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorkerRegion_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadBalancing/WorkerRegion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorkerRegion_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorkerRegion, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorkerRegion_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWorkerRegion_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWorkerRegion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorkerRegion_Statics::NewProp_MaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorkerRegion_Statics::NewProp_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWorkerRegion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorkerRegion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWorkerRegion_Statics::ClassParams = {
		&AWorkerRegion::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWorkerRegion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWorkerRegion_Statics::PropPointers),
		0,
		0x009002A4u,
		0x00000010u,
		METADATA_PARAMS(Z_Construct_UClass_AWorkerRegion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWorkerRegion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWorkerRegion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWorkerRegion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWorkerRegion, 1002586185);
	template<> SPATIALGDK_API UClass* StaticClass<AWorkerRegion>()
	{
		return AWorkerRegion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWorkerRegion(Z_Construct_UClass_AWorkerRegion, &AWorkerRegion::StaticClass, TEXT("/Script/SpatialGDK"), TEXT("AWorkerRegion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorkerRegion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
