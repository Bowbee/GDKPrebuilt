// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDKFunctionalTests/SpatialGDK/TestActors/ReplicatedTestActorBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplicatedTestActorBase() {}
// Cross Module References
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_AReplicatedTestActorBase_NoRegister();
	SPATIALGDKFUNCTIONALTESTS_API UClass* Z_Construct_UClass_AReplicatedTestActorBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SpatialGDKFunctionalTests();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AReplicatedTestActorBase::StaticRegisterNativesAReplicatedTestActorBase()
	{
	}
	UClass* Z_Construct_UClass_AReplicatedTestActorBase_NoRegister()
	{
		return AReplicatedTestActorBase::StaticClass();
	}
	struct Z_Construct_UClass_AReplicatedTestActorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CubeComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CubeComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AReplicatedTestActorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDKFunctionalTests,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReplicatedTestActorBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A replicated Actor with a Cube Mesh, used as a base for Actors used in tests.\n */" },
		{ "IncludePath", "SpatialGDK/TestActors/ReplicatedTestActorBase.h" },
		{ "ModuleRelativePath", "SpatialGDK/TestActors/ReplicatedTestActorBase.h" },
		{ "ToolTip", "A replicated Actor with a Cube Mesh, used as a base for Actors used in tests." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReplicatedTestActorBase_Statics::NewProp_CubeComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpatialGDK/TestActors/ReplicatedTestActorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AReplicatedTestActorBase_Statics::NewProp_CubeComponent = { "CubeComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AReplicatedTestActorBase, CubeComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AReplicatedTestActorBase_Statics::NewProp_CubeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReplicatedTestActorBase_Statics::NewProp_CubeComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AReplicatedTestActorBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReplicatedTestActorBase_Statics::NewProp_CubeComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AReplicatedTestActorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AReplicatedTestActorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AReplicatedTestActorBase_Statics::ClassParams = {
		&AReplicatedTestActorBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AReplicatedTestActorBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AReplicatedTestActorBase_Statics::PropPointers),
		0,
		0x008000A4u,
		0x00000010u,
		METADATA_PARAMS(Z_Construct_UClass_AReplicatedTestActorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AReplicatedTestActorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AReplicatedTestActorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AReplicatedTestActorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AReplicatedTestActorBase, 3337419415);
	template<> SPATIALGDKFUNCTIONALTESTS_API UClass* StaticClass<AReplicatedTestActorBase>()
	{
		return AReplicatedTestActorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AReplicatedTestActorBase(Z_Construct_UClass_AReplicatedTestActorBase, &AReplicatedTestActorBase::StaticClass, TEXT("/Script/SpatialGDKFunctionalTests"), TEXT("AReplicatedTestActorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AReplicatedTestActorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
