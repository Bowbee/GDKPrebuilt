// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDK/Public/Interop/Connection/SpatialViewWorkerConnection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpatialViewWorkerConnection() {}
// Cross Module References
	SPATIALGDK_API UClass* Z_Construct_UClass_USpatialViewWorkerConnection_NoRegister();
	SPATIALGDK_API UClass* Z_Construct_UClass_USpatialViewWorkerConnection();
	SPATIALGDK_API UClass* Z_Construct_UClass_USpatialWorkerConnection();
	UPackage* Z_Construct_UPackage__Script_SpatialGDK();
// End Cross Module References
	void USpatialViewWorkerConnection::StaticRegisterNativesUSpatialViewWorkerConnection()
	{
	}
	UClass* Z_Construct_UClass_USpatialViewWorkerConnection_NoRegister()
	{
		return USpatialViewWorkerConnection::StaticClass();
	}
	struct Z_Construct_UClass_USpatialViewWorkerConnection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpatialViewWorkerConnection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpatialWorkerConnection,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialViewWorkerConnection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Interop/Connection/SpatialViewWorkerConnection.h" },
		{ "ModuleRelativePath", "Public/Interop/Connection/SpatialViewWorkerConnection.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpatialViewWorkerConnection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpatialViewWorkerConnection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpatialViewWorkerConnection_Statics::ClassParams = {
		&USpatialViewWorkerConnection::StaticClass,
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
		0x001000A0u,
		0x00000000u,
		METADATA_PARAMS(Z_Construct_UClass_USpatialViewWorkerConnection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialViewWorkerConnection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpatialViewWorkerConnection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpatialViewWorkerConnection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpatialViewWorkerConnection, 3379194404);
	template<> SPATIALGDK_API UClass* StaticClass<USpatialViewWorkerConnection>()
	{
		return USpatialViewWorkerConnection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpatialViewWorkerConnection(Z_Construct_UClass_USpatialViewWorkerConnection, &USpatialViewWorkerConnection::StaticClass, TEXT("/Script/SpatialGDK"), TEXT("USpatialViewWorkerConnection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpatialViewWorkerConnection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
