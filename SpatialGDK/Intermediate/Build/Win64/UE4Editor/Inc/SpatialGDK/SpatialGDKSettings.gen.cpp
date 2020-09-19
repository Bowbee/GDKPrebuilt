// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDK/Public/SpatialGDKSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpatialGDKSettings() {}
// Cross Module References
	SPATIALGDK_API UEnum* Z_Construct_UEnum_SpatialGDK_EServicesRegion();
	UPackage* Z_Construct_UPackage__Script_SpatialGDK();
	SPATIALGDK_API UEnum* Z_Construct_UEnum_SpatialGDK_ESettingsWorkerLogVerbosity();
	SPATIALGDK_API UScriptStruct* Z_Construct_UScriptStruct_FDistanceFrequencyPair();
	SPATIALGDK_API UClass* Z_Construct_UClass_USpatialGDKSettings_NoRegister();
	SPATIALGDK_API UClass* Z_Construct_UClass_USpatialGDKSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SPATIALGDK_API UEnum* Z_Construct_UEnum_SpatialGDK_ERPCType();
	SPATIALGDK_API UEnum* Z_Construct_UEnum_SpatialGDK_ERPCResult();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SPATIALGDK_API UClass* Z_Construct_UClass_ASpatialDebugger_NoRegister();
// End Cross Module References
	static UEnum* EServicesRegion_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SpatialGDK_EServicesRegion, Z_Construct_UPackage__Script_SpatialGDK(), TEXT("EServicesRegion"));
		}
		return Singleton;
	}
	template<> SPATIALGDK_API UEnum* StaticEnum<EServicesRegion::Type>()
	{
		return EServicesRegion_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EServicesRegion(EServicesRegion_StaticEnum, TEXT("/Script/SpatialGDK"), TEXT("EServicesRegion"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SpatialGDK_EServicesRegion_Hash() { return 1668617121U; }
	UEnum* Z_Construct_UEnum_SpatialGDK_EServicesRegion()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SpatialGDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EServicesRegion"), 0, Get_Z_Construct_UEnum_SpatialGDK_EServicesRegion_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EServicesRegion::Default", (int64)EServicesRegion::Default },
				{ "EServicesRegion::CN", (int64)EServicesRegion::CN },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CN.Name", "EServicesRegion::CN" },
				{ "Default.Name", "EServicesRegion::Default" },
				{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SpatialGDK,
				nullptr,
				"EServicesRegion",
				"EServicesRegion::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESettingsWorkerLogVerbosity_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SpatialGDK_ESettingsWorkerLogVerbosity, Z_Construct_UPackage__Script_SpatialGDK(), TEXT("ESettingsWorkerLogVerbosity"));
		}
		return Singleton;
	}
	template<> SPATIALGDK_API UEnum* StaticEnum<ESettingsWorkerLogVerbosity::Type>()
	{
		return ESettingsWorkerLogVerbosity_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESettingsWorkerLogVerbosity(ESettingsWorkerLogVerbosity_StaticEnum, TEXT("/Script/SpatialGDK"), TEXT("ESettingsWorkerLogVerbosity"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SpatialGDK_ESettingsWorkerLogVerbosity_Hash() { return 2444348065U; }
	UEnum* Z_Construct_UEnum_SpatialGDK_ESettingsWorkerLogVerbosity()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SpatialGDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESettingsWorkerLogVerbosity"), 0, Get_Z_Construct_UEnum_SpatialGDK_ESettingsWorkerLogVerbosity_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESettingsWorkerLogVerbosity::Fatal", (int64)ESettingsWorkerLogVerbosity::Fatal },
				{ "ESettingsWorkerLogVerbosity::Error", (int64)ESettingsWorkerLogVerbosity::Error },
				{ "ESettingsWorkerLogVerbosity::Warning", (int64)ESettingsWorkerLogVerbosity::Warning },
				{ "ESettingsWorkerLogVerbosity::Display", (int64)ESettingsWorkerLogVerbosity::Display },
				{ "ESettingsWorkerLogVerbosity::Log", (int64)ESettingsWorkerLogVerbosity::Log },
				{ "ESettingsWorkerLogVerbosity::Verbose", (int64)ESettingsWorkerLogVerbosity::Verbose },
				{ "ESettingsWorkerLogVerbosity::VeryVerbose", (int64)ESettingsWorkerLogVerbosity::VeryVerbose },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/**\n * Enum that maps Unreal's log verbosity to allow use in settings.\n**/" },
				{ "Display.Name", "ESettingsWorkerLogVerbosity::Display" },
				{ "Error.Name", "ESettingsWorkerLogVerbosity::Error" },
				{ "Fatal.Name", "ESettingsWorkerLogVerbosity::Fatal" },
				{ "Log.Name", "ESettingsWorkerLogVerbosity::Log" },
				{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
				{ "ToolTip", "Enum that maps Unreal's log verbosity to allow use in settings." },
				{ "Verbose.Name", "ESettingsWorkerLogVerbosity::Verbose" },
				{ "VeryVerbose.Name", "ESettingsWorkerLogVerbosity::VeryVerbose" },
				{ "Warning.Name", "ESettingsWorkerLogVerbosity::Warning" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SpatialGDK,
				nullptr,
				"ESettingsWorkerLogVerbosity",
				"ESettingsWorkerLogVerbosity::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FDistanceFrequencyPair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SPATIALGDK_API uint32 Get_Z_Construct_UScriptStruct_FDistanceFrequencyPair_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDistanceFrequencyPair, Z_Construct_UPackage__Script_SpatialGDK(), TEXT("DistanceFrequencyPair"), sizeof(FDistanceFrequencyPair), Get_Z_Construct_UScriptStruct_FDistanceFrequencyPair_Hash());
	}
	return Singleton;
}
template<> SPATIALGDK_API UScriptStruct* StaticStruct<FDistanceFrequencyPair>()
{
	return FDistanceFrequencyPair::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDistanceFrequencyPair(FDistanceFrequencyPair::StaticStruct, TEXT("/Script/SpatialGDK"), TEXT("DistanceFrequencyPair"), false, nullptr, nullptr);
static struct FScriptStruct_SpatialGDK_StaticRegisterNativesFDistanceFrequencyPair
{
	FScriptStruct_SpatialGDK_StaticRegisterNativesFDistanceFrequencyPair()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DistanceFrequencyPair")),new UScriptStruct::TCppStructOps<FDistanceFrequencyPair>);
	}
} ScriptStruct_SpatialGDK_StaticRegisterNativesFDistanceFrequencyPair;
	struct Z_Construct_UScriptStruct_FDistanceFrequencyPair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceRatio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistanceFrequencyPair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDistanceFrequencyPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDistanceFrequencyPair>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistanceFrequencyPair_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "SpatialGDK" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDistanceFrequencyPair_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDistanceFrequencyPair, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FDistanceFrequencyPair_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistanceFrequencyPair_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistanceFrequencyPair_Statics::NewProp_DistanceRatio_MetaData[] = {
		{ "Category", "SpatialGDK" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDistanceFrequencyPair_Statics::NewProp_DistanceRatio = { "DistanceRatio", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDistanceFrequencyPair, DistanceRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FDistanceFrequencyPair_Statics::NewProp_DistanceRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistanceFrequencyPair_Statics::NewProp_DistanceRatio_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDistanceFrequencyPair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistanceFrequencyPair_Statics::NewProp_Frequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistanceFrequencyPair_Statics::NewProp_DistanceRatio,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDistanceFrequencyPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDK,
		nullptr,
		&NewStructOps,
		"DistanceFrequencyPair",
		sizeof(FDistanceFrequencyPair),
		alignof(FDistanceFrequencyPair),
		Z_Construct_UScriptStruct_FDistanceFrequencyPair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistanceFrequencyPair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDistanceFrequencyPair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistanceFrequencyPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDistanceFrequencyPair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDistanceFrequencyPair_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SpatialGDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DistanceFrequencyPair"), sizeof(FDistanceFrequencyPair), Get_Z_Construct_UScriptStruct_FDistanceFrequencyPair_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDistanceFrequencyPair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDistanceFrequencyPair_Hash() { return 1644469179U; }
	void USpatialGDKSettings::StaticRegisterNativesUSpatialGDKSettings()
	{
	}
	UClass* Z_Construct_UClass_USpatialGDKSettings_NoRegister()
	{
		return USpatialGDKSettings::StaticClass();
	}
	struct Z_Construct_UClass_USpatialGDKSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RPCTypeAllowUnresolvedParamMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_RPCTypeAllowUnresolvedParamMap;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RPCTypeAllowUnresolvedParamMap_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RPCTypeAllowUnresolvedParamMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RPCTypeAllowUnresolvedParamMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableMultiWorkerDebuggingWarnings_MetaData[];
#endif
		static void NewProp_bEnableMultiWorkerDebuggingWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableMultiWorkerDebuggingWarnings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSpatialView_MetaData[];
#endif
		static void NewProp_bUseSpatialView_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSpatialView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableClientQueriesOnServer_MetaData[];
#endif
		static void NewProp_bEnableClientQueriesOnServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableClientQueriesOnServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSecureServerConnection_MetaData[];
#endif
		static void NewProp_bUseSecureServerConnection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSecureServerConnection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSecureClientConnection_MetaData[];
#endif
		static void NewProp_bUseSecureClientConnection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSecureClientConnection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterestRangeFrequencyPairs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InterestRangeFrequencyPairs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InterestRangeFrequencyPairs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullFrequencyNetCullDistanceRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FullFrequencyNetCullDistanceRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableNetCullDistanceFrequency_MetaData[];
#endif
		static void NewProp_bEnableNetCullDistanceFrequency_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableNetCullDistanceFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableNetCullDistanceInterest_MetaData[];
#endif
		static void NewProp_bEnableNetCullDistanceInterest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableNetCullDistanceInterest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RPCQueueWarningDefaultTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RPCQueueWarningDefaultTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RPCQueueWarningTimeouts_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_RPCQueueWarningTimeouts;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RPCQueueWarningTimeouts_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RPCQueueWarningTimeouts_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RPCQueueWarningTimeouts_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAsyncLoadNewClassesOnEntityCheckout_MetaData[];
#endif
		static void NewProp_bAsyncLoadNewClassesOnEntityCheckout_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAsyncLoadNewClassesOnEntityCheckout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWorkerFlushAfterOutgoingNetworkOp_MetaData[];
#endif
		static void NewProp_bWorkerFlushAfterOutgoingNetworkOp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWorkerFlushAfterOutgoingNetworkOp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UdpClientDownstreamUpdateIntervalMS_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_UdpClientDownstreamUpdateIntervalMS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UdpServerDownstreamUpdateIntervalMS_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_UdpServerDownstreamUpdateIntervalMS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTcpNoDelay_MetaData[];
#endif
		static void NewProp_bTcpNoDelay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTcpNoDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRPCRingBufferSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MaxRPCRingBufferSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RPCRingBufferSizeMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_RPCRingBufferSizeMap;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RPCRingBufferSizeMap_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RPCRingBufferSizeMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_RPCRingBufferSizeMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultRPCRingBufferSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_DefaultRPCRingBufferSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRPCRingBuffers_MetaData[];
#endif
		static void NewProp_bUseRPCRingBuffers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRPCRingBuffers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRunSpatialWorkerConnectionOnGameThread_MetaData[];
#endif
		static void NewProp_bRunSpatialWorkerConnectionOnGameThread_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRunSpatialWorkerConnectionOnGameThread;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpatialDebugger_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpatialDebugger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorkerLogLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WorkerLogLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServicesRegion_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ServicesRegion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreventClientCloudDeploymentAutoConnect_MetaData[];
#endif
		static void NewProp_bPreventClientCloudDeploymentAutoConnect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreventClientCloudDeploymentAutoConnect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultReceptionistHost_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultReceptionistHost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDynamicallyAttachedSubobjectsPerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MaxDynamicallyAttachedSubobjectsPerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBatchSpatialPositionUpdates_MetaData[];
#endif
		static void NewProp_bBatchSpatialPositionUpdates_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBatchSpatialPositionUpdates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFrameTimeAsLoad_MetaData[];
#endif
		static void NewProp_bUseFrameTimeAsLoad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFrameTimeAsLoad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetricsReportRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MetricsReportRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableMetricsDisplay_MetaData[];
#endif
		static void NewProp_bEnableMetricsDisplay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableMetricsDisplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableMetrics_MetaData[];
#endif
		static void NewProp_bEnableMetrics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableMetrics;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionDistanceThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PositionDistanceThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionUpdateFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PositionUpdateFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueuedOutgoingRPCRetryTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_QueuedOutgoingRPCRetryTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueuedIncomingRPCRetryTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_QueuedIncomingRPCRetryTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueuedIncomingRPCWaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_QueuedIncomingRPCWaitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNetCullDistanceSquared_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxNetCullDistanceSquared;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableHandover_MetaData[];
#endif
		static void NewProp_bEnableHandover_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableHandover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpsUpdateRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OpsUpdateRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseIsActorRelevantForConnection_MetaData[];
#endif
		static void NewProp_bUseIsActorRelevantForConnection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseIsActorRelevantForConnection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntityCreationRateLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_EntityCreationRateLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorReplicationRateLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ActorReplicationRateLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeartbeatTimeoutWithEditorSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeartbeatTimeoutWithEditorSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeartbeatTimeoutSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeartbeatTimeoutSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeartbeatIntervalSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeartbeatIntervalSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntityPoolRefreshCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_EntityPoolRefreshCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntityPoolRefreshThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_EntityPoolRefreshThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntityPoolInitialReservationCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_EntityPoolInitialReservationCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpatialGDKSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpatialGDKSettings.h" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCTypeAllowUnresolvedParamMap_MetaData[] = {
		{ "Category", "Logging" },
		{ "DisplayName", "Whether or not to suppress a warning if an RPC of Type is being called with unresolved references. Default is false.  QueuedIncomingWaitRPC time is still respected." },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCTypeAllowUnresolvedParamMap = { "RPCTypeAllowUnresolvedParamMap", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKSettings, RPCTypeAllowUnresolvedParamMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCTypeAllowUnresolvedParamMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCTypeAllowUnresolvedParamMap_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCTypeAllowUnresolvedParamMap_Key_KeyProp = { "RPCTypeAllowUnresolvedParamMap_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SpatialGDK_ERPCType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCTypeAllowUnresolvedParamMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCTypeAllowUnresolvedParamMap_ValueProp = { "RPCTypeAllowUnresolvedParamMap", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableMultiWorkerDebuggingWarnings_MetaData[] = {
		{ "Comment", "/**\n\x09  * This will enable warning messages for ActorSpawning that could be legitimate but is likely to be an error.\n\x09  */" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "This will enable warning messages for ActorSpawning that could be legitimate but is likely to be an error." },
	};
#endif
	void Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableMultiWorkerDebuggingWarnings_SetBit(void* Obj)
	{
		((USpatialGDKSettings*)Obj)->bEnableMultiWorkerDebuggingWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableMultiWorkerDebuggingWarnings = { "bEnableMultiWorkerDebuggingWarnings", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialGDKSettings), &Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableMultiWorkerDebuggingWarnings_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableMultiWorkerDebuggingWarnings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableMultiWorkerDebuggingWarnings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseSpatialView_MetaData[] = {
		{ "Comment", "/** Experimental feature to use SpatialView layer when communicating with the Worker */" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "Experimental feature to use SpatialView layer when communicating with the Worker" },
	};
#endif
	void Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseSpatialView_SetBit(void* Obj)
	{
		((USpatialGDKSettings*)Obj)->bUseSpatialView = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseSpatialView = { "bUseSpatialView", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialGDKSettings), &Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseSpatialView_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseSpatialView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseSpatialView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableClientQueriesOnServer_MetaData[] = {
		{ "Category", "Interest" },
		{ "Comment", "/**\n\x09 * Enable to ensure server workers always express interest such that any server is interested in a super set of\n\x09 * client interest. This will cause servers to make most of the same queries as their delegated client queries.\n\x09 * Intended to be used in development before interest due to the LB strategy ensures correct functionality.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "Enable to ensure server workers always express interest such that any server is interested in a super set of\nclient interest. This will cause servers to make most of the same queries as their delegated client queries.\nIntended to be used in development before interest due to the LB strategy ensures correct functionality." },
	};
#endif
	void Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableClientQueriesOnServer_SetBit(void* Obj)
	{
		((USpatialGDKSettings*)Obj)->bEnableClientQueriesOnServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableClientQueriesOnServer = { "bEnableClientQueriesOnServer", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialGDKSettings), &Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableClientQueriesOnServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableClientQueriesOnServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableClientQueriesOnServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseSecureServerConnection_MetaData[] = {
		{ "Category", "Connection" },
		{ "Comment", "/** Use TLS encryption for UnrealWorker (server) workers connection. May impact performance. Only works in non-editor builds. */" },
		{ "DisplayName", "Use Secure Server Connection In Packaged Builds" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "Use TLS encryption for UnrealWorker (server) workers connection. May impact performance. Only works in non-editor builds." },
	};
#endif
	void Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseSecureServerConnection_SetBit(void* Obj)
	{
		((USpatialGDKSettings*)Obj)->bUseSecureServerConnection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseSecureServerConnection = { "bUseSecureServerConnection", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialGDKSettings), &Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseSecureServerConnection_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseSecureServerConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseSecureServerConnection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseSecureClientConnection_MetaData[] = {
		{ "Category", "Connection" },
		{ "Comment", "/** Use TLS encryption for UnrealClient workers connection. May impact performance. Only works in non-editor builds. */" },
		{ "DisplayName", "Use Secure Client Connection In Packaged Builds" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "Use TLS encryption for UnrealClient workers connection. May impact performance. Only works in non-editor builds." },
	};
#endif
	void Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseSecureClientConnection_SetBit(void* Obj)
	{
		((USpatialGDKSettings*)Obj)->bUseSecureClientConnection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseSecureClientConnection = { "bUseSecureClientConnection", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialGDKSettings), &Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseSecureClientConnection_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseSecureClientConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseSecureClientConnection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_InterestRangeFrequencyPairs_MetaData[] = {
		{ "Category", "Interest" },
		{ "Comment", "/** QBI pairs for ratio of - net cull distance : update frequency */" },
		{ "EditCondition", "bEnableNetCullDistanceFrequency" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "QBI pairs for ratio of - net cull distance : update frequency" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_InterestRangeFrequencyPairs = { "InterestRangeFrequencyPairs", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKSettings, InterestRangeFrequencyPairs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_InterestRangeFrequencyPairs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_InterestRangeFrequencyPairs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_InterestRangeFrequencyPairs_Inner = { "InterestRangeFrequencyPairs", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDistanceFrequencyPair, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_FullFrequencyNetCullDistanceRatio_MetaData[] = {
		{ "Category", "Interest" },
		{ "Comment", "/** Full update frequency ratio of actor's net cull distance */" },
		{ "EditCondition", "bEnableNetCullDistanceFrequency" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "Full update frequency ratio of actor's net cull distance" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_FullFrequencyNetCullDistanceRatio = { "FullFrequencyNetCullDistanceRatio", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKSettings, FullFrequencyNetCullDistanceRatio), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_FullFrequencyNetCullDistanceRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_FullFrequencyNetCullDistanceRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableNetCullDistanceFrequency_MetaData[] = {
		{ "Category", "Interest" },
		{ "Comment", "/** Enable to use interest frequency with bEnableNetCullDistanceInterest*/" },
		{ "EditCondition", "bEnableNetCullDistanceInterest" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "Enable to use interest frequency with bEnableNetCullDistanceInterest" },
	};
#endif
	void Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableNetCullDistanceFrequency_SetBit(void* Obj)
	{
		((USpatialGDKSettings*)Obj)->bEnableNetCullDistanceFrequency = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableNetCullDistanceFrequency = { "bEnableNetCullDistanceFrequency", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialGDKSettings), &Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableNetCullDistanceFrequency_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableNetCullDistanceFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableNetCullDistanceFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableNetCullDistanceInterest_MetaData[] = {
		{ "Category", "Interest" },
		{ "Comment", "/** Enable to use the new net cull distance component tagging form of interest */" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "Enable to use the new net cull distance component tagging form of interest" },
	};
#endif
	void Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableNetCullDistanceInterest_SetBit(void* Obj)
	{
		((USpatialGDKSettings*)Obj)->bEnableNetCullDistanceInterest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableNetCullDistanceInterest = { "bEnableNetCullDistanceInterest", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialGDKSettings), &Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableNetCullDistanceInterest_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableNetCullDistanceInterest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableNetCullDistanceInterest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCQueueWarningDefaultTimeout_MetaData[] = {
		{ "Category", "Queued RPC Warning Timeouts" },
		{ "DisplayName", "Default time before a queued RPC will start reporting warnings to the logs." },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCQueueWarningDefaultTimeout = { "RPCQueueWarningDefaultTimeout", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKSettings, RPCQueueWarningDefaultTimeout), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCQueueWarningDefaultTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCQueueWarningDefaultTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCQueueWarningTimeouts_MetaData[] = {
		{ "Category", "Queued RPC Warning Timeouts" },
		{ "DisplayName", "For a given RPC failure type, the time it will queue before reporting warnings to the logs." },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCQueueWarningTimeouts = { "RPCQueueWarningTimeouts", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKSettings, RPCQueueWarningTimeouts), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCQueueWarningTimeouts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCQueueWarningTimeouts_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCQueueWarningTimeouts_Key_KeyProp = { "RPCQueueWarningTimeouts_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SpatialGDK_ERPCResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCQueueWarningTimeouts_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCQueueWarningTimeouts_ValueProp = { "RPCQueueWarningTimeouts", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bAsyncLoadNewClassesOnEntityCheckout_MetaData[] = {
		{ "Comment", "/** Do async loading for new classes when checking out entities. */" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "Do async loading for new classes when checking out entities." },
	};
#endif
	void Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bAsyncLoadNewClassesOnEntityCheckout_SetBit(void* Obj)
	{
		((USpatialGDKSettings*)Obj)->bAsyncLoadNewClassesOnEntityCheckout = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bAsyncLoadNewClassesOnEntityCheckout = { "bAsyncLoadNewClassesOnEntityCheckout", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialGDKSettings), &Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bAsyncLoadNewClassesOnEntityCheckout_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bAsyncLoadNewClassesOnEntityCheckout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bAsyncLoadNewClassesOnEntityCheckout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bWorkerFlushAfterOutgoingNetworkOp_MetaData[] = {
		{ "Comment", "/** Will flush worker messages immediately after every RPC. Higher bandwidth but lower latency on RPC calls. */" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "Will flush worker messages immediately after every RPC. Higher bandwidth but lower latency on RPC calls." },
	};
#endif
	void Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bWorkerFlushAfterOutgoingNetworkOp_SetBit(void* Obj)
	{
		((USpatialGDKSettings*)Obj)->bWorkerFlushAfterOutgoingNetworkOp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bWorkerFlushAfterOutgoingNetworkOp = { "bWorkerFlushAfterOutgoingNetworkOp", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialGDKSettings), &Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bWorkerFlushAfterOutgoingNetworkOp_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bWorkerFlushAfterOutgoingNetworkOp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bWorkerFlushAfterOutgoingNetworkOp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_UdpClientDownstreamUpdateIntervalMS_MetaData[] = {
		{ "Comment", "/** Only valid on Udp connections - specifies client downstream flush interval - see c_worker.h */" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "Only valid on Udp connections - specifies client downstream flush interval - see c_worker.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_UdpClientDownstreamUpdateIntervalMS = { "UdpClientDownstreamUpdateIntervalMS", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKSettings, UdpClientDownstreamUpdateIntervalMS), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_UdpClientDownstreamUpdateIntervalMS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_UdpClientDownstreamUpdateIntervalMS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_UdpServerDownstreamUpdateIntervalMS_MetaData[] = {
		{ "Comment", "/** Only valid on Udp connections - specifies server downstream flush interval - see c_worker.h */" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "Only valid on Udp connections - specifies server downstream flush interval - see c_worker.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_UdpServerDownstreamUpdateIntervalMS = { "UdpServerDownstreamUpdateIntervalMS", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKSettings, UdpServerDownstreamUpdateIntervalMS), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_UdpServerDownstreamUpdateIntervalMS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_UdpServerDownstreamUpdateIntervalMS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bTcpNoDelay_MetaData[] = {
		{ "Comment", "/** Only valid on Tcp connections - indicates if we should enable TCP_NODELAY - see c_worker.h */" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "Only valid on Tcp connections - indicates if we should enable TCP_NODELAY - see c_worker.h" },
	};
#endif
	void Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bTcpNoDelay_SetBit(void* Obj)
	{
		((USpatialGDKSettings*)Obj)->bTcpNoDelay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bTcpNoDelay = { "bTcpNoDelay", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialGDKSettings), &Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bTcpNoDelay_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bTcpNoDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bTcpNoDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_MaxRPCRingBufferSize_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** The number of fields that the endpoint schema components are generated with. Changing this will require schema to be regenerated and break snapshot compatibility. */" },
		{ "DisplayName", "Max RPC Ring Buffer Size" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "The number of fields that the endpoint schema components are generated with. Changing this will require schema to be regenerated and break snapshot compatibility." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_MaxRPCRingBufferSize = { "MaxRPCRingBufferSize", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKSettings, MaxRPCRingBufferSize), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_MaxRPCRingBufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_MaxRPCRingBufferSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCRingBufferSizeMap_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** Overrides default ring buffer size. */" },
		{ "DisplayName", "RPC Ring Buffer Size Map" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "Overrides default ring buffer size." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCRingBufferSizeMap = { "RPCRingBufferSizeMap", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKSettings, RPCRingBufferSizeMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCRingBufferSizeMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCRingBufferSizeMap_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCRingBufferSizeMap_Key_KeyProp = { "RPCRingBufferSizeMap_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SpatialGDK_ERPCType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCRingBufferSizeMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCRingBufferSizeMap_ValueProp = { "RPCRingBufferSizeMap", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_DefaultRPCRingBufferSize_MetaData[] = {
		{ "Category", "Replication" },
		{ "DisplayName", "Default RPC Ring Buffer Size" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_DefaultRPCRingBufferSize = { "DefaultRPCRingBufferSize", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKSettings, DefaultRPCRingBufferSize), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_DefaultRPCRingBufferSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_DefaultRPCRingBufferSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseRPCRingBuffers_MetaData[] = {
		{ "Category", "Replication" },
		{ "DisplayName", "Use RPC Ring Buffers" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
	};
#endif
	void Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseRPCRingBuffers_SetBit(void* Obj)
	{
		((USpatialGDKSettings*)Obj)->bUseRPCRingBuffers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseRPCRingBuffers = { "bUseRPCRingBuffers", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialGDKSettings), &Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseRPCRingBuffers_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseRPCRingBuffers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseRPCRingBuffers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bRunSpatialWorkerConnectionOnGameThread_MetaData[] = {
		{ "Comment", "/** EXPERIMENTAL: Run SpatialWorkerConnection on Game Thread. */" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "EXPERIMENTAL: Run SpatialWorkerConnection on Game Thread." },
	};
#endif
	void Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bRunSpatialWorkerConnectionOnGameThread_SetBit(void* Obj)
	{
		((USpatialGDKSettings*)Obj)->bRunSpatialWorkerConnectionOnGameThread = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bRunSpatialWorkerConnectionOnGameThread = { "bRunSpatialWorkerConnectionOnGameThread", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialGDKSettings), &Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bRunSpatialWorkerConnectionOnGameThread_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bRunSpatialWorkerConnectionOnGameThread_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bRunSpatialWorkerConnectionOnGameThread_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_SpatialDebugger_MetaData[] = {
		{ "Category", "Debug" },
		{ "MetaClass", "SpatialDebugger" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_SpatialDebugger = { "SpatialDebugger", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKSettings, SpatialDebugger), Z_Construct_UClass_ASpatialDebugger_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_SpatialDebugger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_SpatialDebugger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_WorkerLogLevel_MetaData[] = {
		{ "Category", "Logging" },
		{ "Comment", "/** Controls the verbosity of worker logs which are sent to SpatialOS. These logs will appear in the Spatial Output and launch.log */" },
		{ "DisplayName", "Worker Log Level" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "Controls the verbosity of worker logs which are sent to SpatialOS. These logs will appear in the Spatial Output and launch.log" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_WorkerLogLevel = { "WorkerLogLevel", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKSettings, WorkerLogLevel), Z_Construct_UEnum_SpatialGDK_ESettingsWorkerLogVerbosity, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_WorkerLogLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_WorkerLogLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_ServicesRegion_MetaData[] = {
		{ "Category", "Region settings" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Region where services are located" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_ServicesRegion = { "ServicesRegion", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKSettings, ServicesRegion), Z_Construct_UEnum_SpatialGDK_EServicesRegion, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_ServicesRegion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_ServicesRegion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bPreventClientCloudDeploymentAutoConnect_MetaData[] = {
		{ "Category", "Cloud Connection" },
		{ "Comment", "/** Will stop a non editor client auto connecting via command line args to a cloud deployment */" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "Will stop a non editor client auto connecting via command line args to a cloud deployment" },
	};
#endif
	void Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bPreventClientCloudDeploymentAutoConnect_SetBit(void* Obj)
	{
		((USpatialGDKSettings*)Obj)->bPreventClientCloudDeploymentAutoConnect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bPreventClientCloudDeploymentAutoConnect = { "bPreventClientCloudDeploymentAutoConnect", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialGDKSettings), &Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bPreventClientCloudDeploymentAutoConnect_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bPreventClientCloudDeploymentAutoConnect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bPreventClientCloudDeploymentAutoConnect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_DefaultReceptionistHost_MetaData[] = {
		{ "Category", "Local Connection" },
		{ "Comment", "/** The receptionist host to use if no 'receptionistHost' argument is passed to the command line. */" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "The receptionist host to use if no 'receptionistHost' argument is passed to the command line." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_DefaultReceptionistHost = { "DefaultReceptionistHost", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKSettings, DefaultReceptionistHost), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_DefaultReceptionistHost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_DefaultReceptionistHost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_MaxDynamicallyAttachedSubobjectsPerClass_MetaData[] = {
		{ "Category", "Schema Generation" },
		{ "Comment", "/** Maximum number of ActorComponents/Subobjects of the same class that can be attached to an Actor.*/" },
		{ "DisplayName", "Maximum Dynamically Attached Subobjects Per Class" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "Maximum number of ActorComponents/Subobjects of the same class that can be attached to an Actor." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_MaxDynamicallyAttachedSubobjectsPerClass = { "MaxDynamicallyAttachedSubobjectsPerClass", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKSettings, MaxDynamicallyAttachedSubobjectsPerClass), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_MaxDynamicallyAttachedSubobjectsPerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_MaxDynamicallyAttachedSubobjectsPerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bBatchSpatialPositionUpdates_MetaData[] = {
		{ "Comment", "/** Batch entity position updates to be processed on a single frame.*/" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "Batch entity position updates to be processed on a single frame." },
	};
#endif
	void Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bBatchSpatialPositionUpdates_SetBit(void* Obj)
	{
		((USpatialGDKSettings*)Obj)->bBatchSpatialPositionUpdates = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bBatchSpatialPositionUpdates = { "bBatchSpatialPositionUpdates", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialGDKSettings), &Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bBatchSpatialPositionUpdates_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bBatchSpatialPositionUpdates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bBatchSpatialPositionUpdates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseFrameTimeAsLoad_MetaData[] = {
		{ "Category", "Metrics" },
		{ "Comment", "/**\n\x09* By default the SpatialOS Runtime reports server-worker instance\xe2\x80\x99s load in frames per second (FPS).\n\x09* Select this to switch so it reports as seconds per frame.\n\x09* This value is visible as 'Load' in the Inspector, next to each worker.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "By default the SpatialOS Runtime reports server-worker instance\xe2\x80\x99s load in frames per second (FPS).\nSelect this to switch so it reports as seconds per frame.\nThis value is visible as 'Load' in the Inspector, next to each worker." },
	};
#endif
	void Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseFrameTimeAsLoad_SetBit(void* Obj)
	{
		((USpatialGDKSettings*)Obj)->bUseFrameTimeAsLoad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseFrameTimeAsLoad = { "bUseFrameTimeAsLoad", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialGDKSettings), &Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseFrameTimeAsLoad_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseFrameTimeAsLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseFrameTimeAsLoad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_MetricsReportRate_MetaData[] = {
		{ "Category", "Metrics" },
		{ "Comment", "/** Frequency that metrics are reported to SpatialOS.*/" },
		{ "DisplayName", "Metrics Report Rate (seconds)" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "Frequency that metrics are reported to SpatialOS." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_MetricsReportRate = { "MetricsReportRate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKSettings, MetricsReportRate), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_MetricsReportRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_MetricsReportRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableMetricsDisplay_MetaData[] = {
		{ "Category", "Metrics" },
		{ "Comment", "/** Display server metrics on clients.*/" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "Display server metrics on clients." },
	};
#endif
	void Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableMetricsDisplay_SetBit(void* Obj)
	{
		((USpatialGDKSettings*)Obj)->bEnableMetricsDisplay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableMetricsDisplay = { "bEnableMetricsDisplay", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialGDKSettings), &Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableMetricsDisplay_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableMetricsDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableMetricsDisplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableMetrics_MetaData[] = {
		{ "Category", "Metrics" },
		{ "Comment", "/** Metrics about client and server performance can be reported to SpatialOS to monitor a deployments health.*/" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "Metrics about client and server performance can be reported to SpatialOS to monitor a deployments health." },
	};
#endif
	void Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableMetrics_SetBit(void* Obj)
	{
		((USpatialGDKSettings*)Obj)->bEnableMetrics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableMetrics = { "bEnableMetrics", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialGDKSettings), &Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableMetrics_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableMetrics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableMetrics_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_PositionDistanceThreshold_MetaData[] = {
		{ "Category", "SpatialOS Position Updates" },
		{ "Comment", "/** Threshold an Actor needs to move, in centimeters, before its SpatialOS Position is updated.*/" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "Threshold an Actor needs to move, in centimeters, before its SpatialOS Position is updated." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_PositionDistanceThreshold = { "PositionDistanceThreshold", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKSettings, PositionDistanceThreshold), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_PositionDistanceThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_PositionDistanceThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_PositionUpdateFrequency_MetaData[] = {
		{ "Category", "SpatialOS Position Updates" },
		{ "Comment", "/** Frequency for updating an Actor's SpatialOS Position. Updating position should have a low update rate since it is expensive.*/" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "Frequency for updating an Actor's SpatialOS Position. Updating position should have a low update rate since it is expensive." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_PositionUpdateFrequency = { "PositionUpdateFrequency", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKSettings, PositionUpdateFrequency), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_PositionUpdateFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_PositionUpdateFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_QueuedOutgoingRPCRetryTime_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** Seconds to wait before retying all queued outgoing RPCs. If 0 there will not be retried on a timer. */" },
		{ "DisplayName", "Wait Time Before Retrying Outoing RPC" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "Seconds to wait before retying all queued outgoing RPCs. If 0 there will not be retried on a timer." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_QueuedOutgoingRPCRetryTime = { "QueuedOutgoingRPCRetryTime", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKSettings, QueuedOutgoingRPCRetryTime), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_QueuedOutgoingRPCRetryTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_QueuedOutgoingRPCRetryTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_QueuedIncomingRPCRetryTime_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** Seconds to wait before attempting to reprocess queued incoming RPCs */" },
		{ "DisplayName", "Wait Time Before Attempting To Reprocess Queued Incoming RPCs" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "Seconds to wait before attempting to reprocess queued incoming RPCs" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_QueuedIncomingRPCRetryTime = { "QueuedIncomingRPCRetryTime", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKSettings, QueuedIncomingRPCRetryTime), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_QueuedIncomingRPCRetryTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_QueuedIncomingRPCRetryTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_QueuedIncomingRPCWaitTime_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** Seconds to wait before executing a received RPC substituting nullptr for unresolved UObjects*/" },
		{ "DisplayName", "Wait Time Before Processing Received RPC With Unresolved Refs" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "Seconds to wait before executing a received RPC substituting nullptr for unresolved UObjects" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_QueuedIncomingRPCWaitTime = { "QueuedIncomingRPCWaitTime", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKSettings, QueuedIncomingRPCWaitTime), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_QueuedIncomingRPCWaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_QueuedIncomingRPCWaitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_MaxNetCullDistanceSquared_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/**\n\x09 * Maximum NetCullDistanceSquared value used in Spatial networking. Not respected when using the Replication Graph.\n\x09 * Set to 0.0 to disable. This is temporary and will be removed when the runtime issue is resolved.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "Maximum NetCullDistanceSquared value used in Spatial networking. Not respected when using the Replication Graph.\nSet to 0.0 to disable. This is temporary and will be removed when the runtime issue is resolved." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_MaxNetCullDistanceSquared = { "MaxNetCullDistanceSquared", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKSettings, MaxNetCullDistanceSquared), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_MaxNetCullDistanceSquared_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_MaxNetCullDistanceSquared_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableHandover_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/** Replicate handover properties between servers, required for zoned worker deployments. If Unreal Load Balancing is enabled, this will be set based on the load balancing strategy.*/" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "Replicate handover properties between servers, required for zoned worker deployments. If Unreal Load Balancing is enabled, this will be set based on the load balancing strategy." },
	};
#endif
	void Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableHandover_SetBit(void* Obj)
	{
		((USpatialGDKSettings*)Obj)->bEnableHandover = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableHandover = { "bEnableHandover", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialGDKSettings), &Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableHandover_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableHandover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableHandover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_OpsUpdateRate_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/**\n\x09* Specifies the rate, in number of times per second, at which server-worker instance updates are sent to and received from the SpatialOS Runtime.\n\x09* Default:1000/s\n\x09*/" },
		{ "DisplayName", "SpatialOS Network Update Rate" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "Specifies the rate, in number of times per second, at which server-worker instance updates are sent to and received from the SpatialOS Runtime.\nDefault:1000/s" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_OpsUpdateRate = { "OpsUpdateRate", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKSettings, OpsUpdateRate), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_OpsUpdateRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_OpsUpdateRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseIsActorRelevantForConnection_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/**\n\x09 * When enabled, only entities which are in the net relevancy range of player controllers will be replicated to SpatialOS. Not respected when using the Replication Graph.\n\x09 * This should only be used in single server configurations. The state of the world in the inspector will no longer be up to date.\n\x09 */" },
		{ "DisplayName", "Only Replicate Net Relevant Actors" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "When enabled, only entities which are in the net relevancy range of player controllers will be replicated to SpatialOS. Not respected when using the Replication Graph.\nThis should only be used in single server configurations. The state of the world in the inspector will no longer be up to date." },
	};
#endif
	void Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseIsActorRelevantForConnection_SetBit(void* Obj)
	{
		((USpatialGDKSettings*)Obj)->bUseIsActorRelevantForConnection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseIsActorRelevantForConnection = { "bUseIsActorRelevantForConnection", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialGDKSettings), &Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseIsActorRelevantForConnection_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseIsActorRelevantForConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseIsActorRelevantForConnection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_EntityCreationRateLimit_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/**\n\x09* Specifies the maximum number of entities created by the SpatialOS Runtime per tick. Not respected when using the Replication Graph.\n\x09* (The SpatialOS Runtime handles entity creation separately from Actor replication to ensure it can handle entity creation requests under load.)\n\x09* Note: if you set the value to 0, there is no limit to the number of entities created per tick. However, too many entities created at the same time might overload the SpatialOS Runtime, which can negatively affect your game.\n\x09* Default: `0` per tick  (no limit)\n\x09*/" },
		{ "DisplayName", "Maximum entities created per tick" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "Specifies the maximum number of entities created by the SpatialOS Runtime per tick. Not respected when using the Replication Graph.\n(The SpatialOS Runtime handles entity creation separately from Actor replication to ensure it can handle entity creation requests under load.)\nNote: if you set the value to 0, there is no limit to the number of entities created per tick. However, too many entities created at the same time might overload the SpatialOS Runtime, which can negatively affect your game.\nDefault: `0` per tick  (no limit)" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_EntityCreationRateLimit = { "EntityCreationRateLimit", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKSettings, EntityCreationRateLimit), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_EntityCreationRateLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_EntityCreationRateLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_ActorReplicationRateLimit_MetaData[] = {
		{ "Category", "Replication" },
		{ "Comment", "/**\n\x09 * Specifies the maximum number of Actors replicated per tick. Not respected when using the Replication Graph.\n\x09 * Default: `0` per tick  (no limit)\n\x09 * (If you set the value to ` 0`, the SpatialOS Runtime replicates every Actor per tick; this forms a large SpatialOS  world, affecting the performance of both game clients and server-worker instances.)\n\x09 * You can use the `stat Spatial` flag when you run project builds to find the number of calls to `ReplicateActor`, and then use this number for reference.\n\x09 */" },
		{ "DisplayName", "Maximum Actors replicated per tick" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "Specifies the maximum number of Actors replicated per tick. Not respected when using the Replication Graph.\nDefault: `0` per tick  (no limit)\n(If you set the value to ` 0`, the SpatialOS Runtime replicates every Actor per tick; this forms a large SpatialOS  world, affecting the performance of both game clients and server-worker instances.)\nYou can use the `stat Spatial` flag when you run project builds to find the number of calls to `ReplicateActor`, and then use this number for reference." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_ActorReplicationRateLimit = { "ActorReplicationRateLimit", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKSettings, ActorReplicationRateLimit), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_ActorReplicationRateLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_ActorReplicationRateLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_HeartbeatTimeoutWithEditorSeconds_MetaData[] = {
		{ "Category", "Heartbeat" },
		{ "Comment", "/**\n\x09* Same as HeartbeatTimeoutSeconds, but used if WITH_EDITOR is defined.\n\x09*/" },
		{ "DisplayName", "Heartbeat Timeout With Editor (seconds)" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "Same as HeartbeatTimeoutSeconds, but used if WITH_EDITOR is defined." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_HeartbeatTimeoutWithEditorSeconds = { "HeartbeatTimeoutWithEditorSeconds", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKSettings, HeartbeatTimeoutWithEditorSeconds), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_HeartbeatTimeoutWithEditorSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_HeartbeatTimeoutWithEditorSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_HeartbeatTimeoutSeconds_MetaData[] = {
		{ "Category", "Heartbeat" },
		{ "Comment", "/**\n\x09* Specifies the maximum amount of time, in seconds, that the server-worker instances wait for a game client to send heartbeat events.\n\x09* (If the timeout expires, the game client has disconnected.)\n\x09*/" },
		{ "DisplayName", "Heartbeat Timeout (seconds)" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "Specifies the maximum amount of time, in seconds, that the server-worker instances wait for a game client to send heartbeat events.\n(If the timeout expires, the game client has disconnected.)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_HeartbeatTimeoutSeconds = { "HeartbeatTimeoutSeconds", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKSettings, HeartbeatTimeoutSeconds), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_HeartbeatTimeoutSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_HeartbeatTimeoutSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_HeartbeatIntervalSeconds_MetaData[] = {
		{ "Category", "Heartbeat" },
		{ "Comment", "/** Specifies the amount of time, in seconds, between heartbeat events sent from a game client to notify the server-worker instances that it's connected. */" },
		{ "DisplayName", "Heartbeat Interval (seconds)" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "Specifies the amount of time, in seconds, between heartbeat events sent from a game client to notify the server-worker instances that it's connected." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_HeartbeatIntervalSeconds = { "HeartbeatIntervalSeconds", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKSettings, HeartbeatIntervalSeconds), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_HeartbeatIntervalSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_HeartbeatIntervalSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_EntityPoolRefreshCount_MetaData[] = {
		{ "Category", "Entity Pool" },
		{ "Comment", "/**\n\x09* Specifies the number of new entity IDs the SpatialOS Runtime reserves when `Pool refresh threshold` triggers a new batch.\n\x09*/" },
		{ "DisplayName", "Refresh Count" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "Specifies the number of new entity IDs the SpatialOS Runtime reserves when `Pool refresh threshold` triggers a new batch." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_EntityPoolRefreshCount = { "EntityPoolRefreshCount", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKSettings, EntityPoolRefreshCount), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_EntityPoolRefreshCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_EntityPoolRefreshCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_EntityPoolRefreshThreshold_MetaData[] = {
		{ "Category", "Entity Pool" },
		{ "Comment", "/**\n\x09 * Specifies when the SpatialOS Runtime should reserve a new batch of entity IDs: the value is the number of un-used entity\n\x09 * IDs left in the entity pool which triggers the SpatialOS Runtime to reserve new entity IDs\n\x09*/" },
		{ "DisplayName", "Pool Refresh Threshold" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "Specifies when the SpatialOS Runtime should reserve a new batch of entity IDs: the value is the number of un-used entity\nIDs left in the entity pool which triggers the SpatialOS Runtime to reserve new entity IDs" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_EntityPoolRefreshThreshold = { "EntityPoolRefreshThreshold", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKSettings, EntityPoolRefreshThreshold), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_EntityPoolRefreshThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_EntityPoolRefreshThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_EntityPoolInitialReservationCount_MetaData[] = {
		{ "Category", "Entity Pool" },
		{ "Comment", "/**\n\x09 * The number of entity IDs to be reserved when the entity pool is first created. Ensure that the number of entity IDs\n\x09 * reserved is greater than the number of Actors that you expect the server-worker instances to spawn at game deployment\n\x09*/" },
		{ "DisplayName", "Initial Entity ID Reservation Count" },
		{ "ModuleRelativePath", "Public/SpatialGDKSettings.h" },
		{ "ToolTip", "The number of entity IDs to be reserved when the entity pool is first created. Ensure that the number of entity IDs\nreserved is greater than the number of Actors that you expect the server-worker instances to spawn at game deployment" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_EntityPoolInitialReservationCount = { "EntityPoolInitialReservationCount", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialGDKSettings, EntityPoolInitialReservationCount), METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_EntityPoolInitialReservationCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_EntityPoolInitialReservationCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpatialGDKSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCTypeAllowUnresolvedParamMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCTypeAllowUnresolvedParamMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCTypeAllowUnresolvedParamMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCTypeAllowUnresolvedParamMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableMultiWorkerDebuggingWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseSpatialView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableClientQueriesOnServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseSecureServerConnection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseSecureClientConnection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_InterestRangeFrequencyPairs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_InterestRangeFrequencyPairs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_FullFrequencyNetCullDistanceRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableNetCullDistanceFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableNetCullDistanceInterest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCQueueWarningDefaultTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCQueueWarningTimeouts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCQueueWarningTimeouts_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCQueueWarningTimeouts_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCQueueWarningTimeouts_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bAsyncLoadNewClassesOnEntityCheckout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bWorkerFlushAfterOutgoingNetworkOp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_UdpClientDownstreamUpdateIntervalMS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_UdpServerDownstreamUpdateIntervalMS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bTcpNoDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_MaxRPCRingBufferSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCRingBufferSizeMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCRingBufferSizeMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCRingBufferSizeMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_RPCRingBufferSizeMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_DefaultRPCRingBufferSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseRPCRingBuffers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bRunSpatialWorkerConnectionOnGameThread,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_SpatialDebugger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_WorkerLogLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_ServicesRegion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bPreventClientCloudDeploymentAutoConnect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_DefaultReceptionistHost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_MaxDynamicallyAttachedSubobjectsPerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bBatchSpatialPositionUpdates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseFrameTimeAsLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_MetricsReportRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableMetricsDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableMetrics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_PositionDistanceThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_PositionUpdateFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_QueuedOutgoingRPCRetryTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_QueuedIncomingRPCRetryTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_QueuedIncomingRPCWaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_MaxNetCullDistanceSquared,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bEnableHandover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_OpsUpdateRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_bUseIsActorRelevantForConnection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_EntityCreationRateLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_ActorReplicationRateLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_HeartbeatTimeoutWithEditorSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_HeartbeatTimeoutSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_HeartbeatIntervalSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_EntityPoolRefreshCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_EntityPoolRefreshThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialGDKSettings_Statics::NewProp_EntityPoolInitialReservationCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpatialGDKSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpatialGDKSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpatialGDKSettings_Statics::ClassParams = {
		&USpatialGDKSettings::StaticClass,
		"SpatialGDKSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpatialGDKSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		0x00000000u,
		METADATA_PARAMS(Z_Construct_UClass_USpatialGDKSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialGDKSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpatialGDKSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpatialGDKSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpatialGDKSettings, 2564373869);
	template<> SPATIALGDK_API UClass* StaticClass<USpatialGDKSettings>()
	{
		return USpatialGDKSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpatialGDKSettings(Z_Construct_UClass_USpatialGDKSettings, &USpatialGDKSettings::StaticClass, TEXT("/Script/SpatialGDK"), TEXT("USpatialGDKSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpatialGDKSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
