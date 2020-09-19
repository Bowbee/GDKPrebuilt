// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpatialGDK_init() {}
	SPATIALGDK_API UFunction* Z_Construct_UDelegateFunction_SpatialGDK_OnRecordPing__DelegateSignature();
	SPATIALGDK_API UFunction* Z_Construct_UDelegateFunction_SpatialGDK_OnConnectedEvent__DelegateSignature();
	SPATIALGDK_API UFunction* Z_Construct_UDelegateFunction_SpatialGDK_OnConnectionFailedEvent__DelegateSignature();
	SPATIALGDK_API UFunction* Z_Construct_UDelegateFunction_SpatialGDK_OnPlayerSpawnFailedEvent__DelegateSignature();
	SPATIALGDK_API UFunction* Z_Construct_UDelegateFunction_SpatialGDK_EntityPoolReadyEvent__DelegateSignature();
	SPATIALGDK_API UFunction* Z_Construct_UDelegateFunction_SpatialGDK_OnWorkerFlagsUpdatedBP__DelegateSignature();
	SPATIALGDK_API UFunction* Z_Construct_UDelegateFunction_SpatialGDK_OnWorkerFlagsUpdated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SpatialGDK()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SpatialGDK_OnRecordPing__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SpatialGDK_OnConnectedEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SpatialGDK_OnConnectionFailedEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SpatialGDK_OnPlayerSpawnFailedEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SpatialGDK_EntityPoolReadyEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SpatialGDK_OnWorkerFlagsUpdatedBP__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_SpatialGDK_OnWorkerFlagsUpdated__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/SpatialGDK",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x8FE499A7,
				0x8DA6D8E5,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
