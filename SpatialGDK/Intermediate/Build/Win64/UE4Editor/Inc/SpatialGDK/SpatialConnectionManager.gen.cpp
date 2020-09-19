// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDK/Public/Interop/Connection/SpatialConnectionManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpatialConnectionManager() {}
// Cross Module References
	SPATIALGDK_API UClass* Z_Construct_UClass_USpatialConnectionManager_NoRegister();
	SPATIALGDK_API UClass* Z_Construct_UClass_USpatialConnectionManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SpatialGDK();
	SPATIALGDK_API UClass* Z_Construct_UClass_USpatialWorkerConnection_NoRegister();
// End Cross Module References
	void USpatialConnectionManager::StaticRegisterNativesUSpatialConnectionManager()
	{
	}
	UClass* Z_Construct_UClass_USpatialConnectionManager_NoRegister()
	{
		return USpatialConnectionManager::StaticClass();
	}
	struct Z_Construct_UClass_USpatialConnectionManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorkerConnection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorkerConnection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpatialConnectionManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialConnectionManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Interop/Connection/SpatialConnectionManager.h" },
		{ "ModuleRelativePath", "Public/Interop/Connection/SpatialConnectionManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialConnectionManager_Statics::NewProp_WorkerConnection_MetaData[] = {
		{ "ModuleRelativePath", "Public/Interop/Connection/SpatialConnectionManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialConnectionManager_Statics::NewProp_WorkerConnection = { "WorkerConnection", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialConnectionManager, WorkerConnection), Z_Construct_UClass_USpatialWorkerConnection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpatialConnectionManager_Statics::NewProp_WorkerConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialConnectionManager_Statics::NewProp_WorkerConnection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpatialConnectionManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialConnectionManager_Statics::NewProp_WorkerConnection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpatialConnectionManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpatialConnectionManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpatialConnectionManager_Statics::ClassParams = {
		&USpatialConnectionManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpatialConnectionManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpatialConnectionManager_Statics::PropPointers),
		0,
		0x001000A0u,
		0x00000000u,
		METADATA_PARAMS(Z_Construct_UClass_USpatialConnectionManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialConnectionManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpatialConnectionManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpatialConnectionManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpatialConnectionManager, 2449455674);
	template<> SPATIALGDK_API UClass* StaticClass<USpatialConnectionManager>()
	{
		return USpatialConnectionManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpatialConnectionManager(Z_Construct_UClass_USpatialConnectionManager, &USpatialConnectionManager::StaticClass, TEXT("/Script/SpatialGDK"), TEXT("USpatialConnectionManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpatialConnectionManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
