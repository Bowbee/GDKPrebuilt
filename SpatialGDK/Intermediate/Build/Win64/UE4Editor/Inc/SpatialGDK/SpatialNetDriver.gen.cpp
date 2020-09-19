// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDK/Public/EngineClasses/SpatialNetDriver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpatialNetDriver() {}
// Cross Module References
	SPATIALGDK_API UClass* Z_Construct_UClass_USpatialNetDriver_NoRegister();
	SPATIALGDK_API UClass* Z_Construct_UClass_USpatialNetDriver();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpNetDriver();
	UPackage* Z_Construct_UPackage__Script_SpatialGDK();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	SPATIALGDK_API UClass* Z_Construct_UClass_USpatialWorkerFlags_NoRegister();
	SPATIALGDK_API UClass* Z_Construct_UClass_UAbstractLockingPolicy_NoRegister();
	SPATIALGDK_API UClass* Z_Construct_UClass_UAbstractLBStrategy_NoRegister();
	SPATIALGDK_API UClass* Z_Construct_UClass_ASpatialDebugger_NoRegister();
	SPATIALGDK_API UClass* Z_Construct_UClass_ASpatialMetricsDisplay_NoRegister();
	SPATIALGDK_API UClass* Z_Construct_UClass_USpatialMetrics_NoRegister();
	SPATIALGDK_API UClass* Z_Construct_UClass_USpatialStaticComponentView_NoRegister();
	SPATIALGDK_API UClass* Z_Construct_UClass_USpatialPackageMapClient_NoRegister();
	SPATIALGDK_API UClass* Z_Construct_UClass_USpatialPlayerSpawner_NoRegister();
	SPATIALGDK_API UClass* Z_Construct_UClass_UGlobalStateManager_NoRegister();
	SPATIALGDK_API UClass* Z_Construct_UClass_USpatialClassInfoManager_NoRegister();
	SPATIALGDK_API UClass* Z_Construct_UClass_USpatialReceiver_NoRegister();
	SPATIALGDK_API UClass* Z_Construct_UClass_USpatialSender_NoRegister();
	SPATIALGDK_API UClass* Z_Construct_UClass_USpatialConnectionManager_NoRegister();
	SPATIALGDK_API UClass* Z_Construct_UClass_USpatialWorkerConnection_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USpatialNetDriver::execOnLevelAddedToWorld)
	{
		P_GET_OBJECT(ULevel,Z_Param_LoadedLevel);
		P_GET_OBJECT(UWorld,Z_Param_OwningWorld);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelAddedToWorld(Z_Param_LoadedLevel,Z_Param_OwningWorld);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpatialNetDriver::execOnMapLoaded)
	{
		P_GET_OBJECT(UWorld,Z_Param_LoadedWorld);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMapLoaded(Z_Param_LoadedWorld);
		P_NATIVE_END;
	}
	void USpatialNetDriver::StaticRegisterNativesUSpatialNetDriver()
	{
		UClass* Class = USpatialNetDriver::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLevelAddedToWorld", &USpatialNetDriver::execOnLevelAddedToWorld },
			{ "OnMapLoaded", &USpatialNetDriver::execOnMapLoaded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpatialNetDriver_OnLevelAddedToWorld_Statics
	{
		struct SpatialNetDriver_eventOnLevelAddedToWorld_Parms
		{
			ULevel* LoadedLevel;
			UWorld* OwningWorld;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningWorld;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadedLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpatialNetDriver_OnLevelAddedToWorld_Statics::NewProp_OwningWorld = { "OwningWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialNetDriver_eventOnLevelAddedToWorld_Parms, OwningWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpatialNetDriver_OnLevelAddedToWorld_Statics::NewProp_LoadedLevel = { "LoadedLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialNetDriver_eventOnLevelAddedToWorld_Parms, LoadedLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialNetDriver_OnLevelAddedToWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialNetDriver_OnLevelAddedToWorld_Statics::NewProp_OwningWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialNetDriver_OnLevelAddedToWorld_Statics::NewProp_LoadedLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialNetDriver_OnLevelAddedToWorld_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EngineClasses/SpatialNetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialNetDriver_OnLevelAddedToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpatialNetDriver, nullptr, "OnLevelAddedToWorld", nullptr, nullptr, sizeof(SpatialNetDriver_eventOnLevelAddedToWorld_Parms), Z_Construct_UFunction_USpatialNetDriver_OnLevelAddedToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialNetDriver_OnLevelAddedToWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpatialNetDriver_OnLevelAddedToWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialNetDriver_OnLevelAddedToWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpatialNetDriver_OnLevelAddedToWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpatialNetDriver_OnLevelAddedToWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpatialNetDriver_OnMapLoaded_Statics
	{
		struct SpatialNetDriver_eventOnMapLoaded_Parms
		{
			UWorld* LoadedWorld;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadedWorld;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpatialNetDriver_OnMapLoaded_Statics::NewProp_LoadedWorld = { "LoadedWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialNetDriver_eventOnMapLoaded_Parms, LoadedWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialNetDriver_OnMapLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialNetDriver_OnMapLoaded_Statics::NewProp_LoadedWorld,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialNetDriver_OnMapLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EngineClasses/SpatialNetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialNetDriver_OnMapLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpatialNetDriver, nullptr, "OnMapLoaded", nullptr, nullptr, sizeof(SpatialNetDriver_eventOnMapLoaded_Parms), Z_Construct_UFunction_USpatialNetDriver_OnMapLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialNetDriver_OnMapLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpatialNetDriver_OnMapLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialNetDriver_OnMapLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpatialNetDriver_OnMapLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpatialNetDriver_OnMapLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USpatialNetDriver_NoRegister()
	{
		return USpatialNetDriver::StaticClass();
	}
	struct Z_Construct_UClass_USpatialNetDriver_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpatialWorkerFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpatialWorkerFlags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockingPolicy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LockingPolicy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadBalanceStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoadBalanceStrategy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpatialDebugger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpatialDebugger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpatialMetricsDisplay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpatialMetricsDisplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpatialMetrics_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpatialMetrics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticComponentView_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticComponentView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackageMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PackageMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerSpawner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerSpawner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalStateManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GlobalStateManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassInfoManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClassInfoManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Receiver_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Receiver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sender_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sender;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConnectionManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Connection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Connection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpatialNetDriver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIpNetDriver,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USpatialNetDriver_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpatialNetDriver_OnLevelAddedToWorld, "OnLevelAddedToWorld" }, // 3716922659
		{ &Z_Construct_UFunction_USpatialNetDriver_OnMapLoaded, "OnMapLoaded" }, // 2144306573
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialNetDriver_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EngineClasses/SpatialNetDriver.h" },
		{ "ModuleRelativePath", "Public/EngineClasses/SpatialNetDriver.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_SpatialWorkerFlags_MetaData[] = {
		{ "ModuleRelativePath", "Public/EngineClasses/SpatialNetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_SpatialWorkerFlags = { "SpatialWorkerFlags", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialNetDriver, SpatialWorkerFlags), Z_Construct_UClass_USpatialWorkerFlags_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_SpatialWorkerFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_SpatialWorkerFlags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_LockingPolicy_MetaData[] = {
		{ "ModuleRelativePath", "Public/EngineClasses/SpatialNetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_LockingPolicy = { "LockingPolicy", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialNetDriver, LockingPolicy), Z_Construct_UClass_UAbstractLockingPolicy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_LockingPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_LockingPolicy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_LoadBalanceStrategy_MetaData[] = {
		{ "ModuleRelativePath", "Public/EngineClasses/SpatialNetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_LoadBalanceStrategy = { "LoadBalanceStrategy", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialNetDriver, LoadBalanceStrategy), Z_Construct_UClass_UAbstractLBStrategy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_LoadBalanceStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_LoadBalanceStrategy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_SpatialDebugger_MetaData[] = {
		{ "ModuleRelativePath", "Public/EngineClasses/SpatialNetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_SpatialDebugger = { "SpatialDebugger", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialNetDriver, SpatialDebugger), Z_Construct_UClass_ASpatialDebugger_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_SpatialDebugger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_SpatialDebugger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_SpatialMetricsDisplay_MetaData[] = {
		{ "ModuleRelativePath", "Public/EngineClasses/SpatialNetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_SpatialMetricsDisplay = { "SpatialMetricsDisplay", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialNetDriver, SpatialMetricsDisplay), Z_Construct_UClass_ASpatialMetricsDisplay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_SpatialMetricsDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_SpatialMetricsDisplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_SpatialMetrics_MetaData[] = {
		{ "ModuleRelativePath", "Public/EngineClasses/SpatialNetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_SpatialMetrics = { "SpatialMetrics", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialNetDriver, SpatialMetrics), Z_Construct_UClass_USpatialMetrics_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_SpatialMetrics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_SpatialMetrics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_StaticComponentView_MetaData[] = {
		{ "ModuleRelativePath", "Public/EngineClasses/SpatialNetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_StaticComponentView = { "StaticComponentView", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialNetDriver, StaticComponentView), Z_Construct_UClass_USpatialStaticComponentView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_StaticComponentView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_StaticComponentView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_PackageMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/EngineClasses/SpatialNetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_PackageMap = { "PackageMap", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialNetDriver, PackageMap), Z_Construct_UClass_USpatialPackageMapClient_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_PackageMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_PackageMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_PlayerSpawner_MetaData[] = {
		{ "ModuleRelativePath", "Public/EngineClasses/SpatialNetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_PlayerSpawner = { "PlayerSpawner", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialNetDriver, PlayerSpawner), Z_Construct_UClass_USpatialPlayerSpawner_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_PlayerSpawner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_PlayerSpawner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_GlobalStateManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/EngineClasses/SpatialNetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_GlobalStateManager = { "GlobalStateManager", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialNetDriver, GlobalStateManager), Z_Construct_UClass_UGlobalStateManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_GlobalStateManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_GlobalStateManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_ClassInfoManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/EngineClasses/SpatialNetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_ClassInfoManager = { "ClassInfoManager", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialNetDriver, ClassInfoManager), Z_Construct_UClass_USpatialClassInfoManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_ClassInfoManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_ClassInfoManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_Receiver_MetaData[] = {
		{ "ModuleRelativePath", "Public/EngineClasses/SpatialNetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_Receiver = { "Receiver", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialNetDriver, Receiver), Z_Construct_UClass_USpatialReceiver_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_Receiver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_Receiver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_Sender_MetaData[] = {
		{ "ModuleRelativePath", "Public/EngineClasses/SpatialNetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_Sender = { "Sender", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialNetDriver, Sender), Z_Construct_UClass_USpatialSender_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_Sender_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_Sender_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_ConnectionManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/EngineClasses/SpatialNetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_ConnectionManager = { "ConnectionManager", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialNetDriver, ConnectionManager), Z_Construct_UClass_USpatialConnectionManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_ConnectionManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_ConnectionManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_Connection_MetaData[] = {
		{ "ModuleRelativePath", "Public/EngineClasses/SpatialNetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialNetDriver, Connection), Z_Construct_UClass_USpatialWorkerConnection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_Connection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_Connection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpatialNetDriver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_SpatialWorkerFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_LockingPolicy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_LoadBalanceStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_SpatialDebugger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_SpatialMetricsDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_SpatialMetrics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_StaticComponentView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_PackageMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_PlayerSpawner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_GlobalStateManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_ClassInfoManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_Receiver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_Sender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_ConnectionManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialNetDriver_Statics::NewProp_Connection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpatialNetDriver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpatialNetDriver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpatialNetDriver_Statics::ClassParams = {
		&USpatialNetDriver::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USpatialNetDriver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USpatialNetDriver_Statics::PropPointers),
		0,
		0x001000ACu,
		0x00000000u,
		METADATA_PARAMS(Z_Construct_UClass_USpatialNetDriver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialNetDriver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpatialNetDriver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpatialNetDriver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpatialNetDriver, 3853155268);
	template<> SPATIALGDK_API UClass* StaticClass<USpatialNetDriver>()
	{
		return USpatialNetDriver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpatialNetDriver(Z_Construct_UClass_USpatialNetDriver, &USpatialNetDriver::StaticClass, TEXT("/Script/SpatialGDK"), TEXT("USpatialNetDriver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpatialNetDriver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
