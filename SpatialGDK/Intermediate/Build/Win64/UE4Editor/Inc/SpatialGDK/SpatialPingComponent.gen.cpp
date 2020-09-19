// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDK/Public/EngineClasses/Components/SpatialPingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpatialPingComponent() {}
// Cross Module References
	SPATIALGDK_API UFunction* Z_Construct_UDelegateFunction_SpatialGDK_OnRecordPing__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SpatialGDK();
	SPATIALGDK_API UScriptStruct* Z_Construct_UScriptStruct_FSpatialPingAverageData();
	SPATIALGDK_API UClass* Z_Construct_UClass_USpatialPingComponent_NoRegister();
	SPATIALGDK_API UClass* Z_Construct_UClass_USpatialPingComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SpatialGDK_OnRecordPing__DelegateSignature_Statics
	{
		struct _Script_SpatialGDK_eventOnRecordPing_Parms
		{
			float Ping;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Ping;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SpatialGDK_OnRecordPing__DelegateSignature_Statics::NewProp_Ping = { "Ping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SpatialGDK_eventOnRecordPing_Parms, Ping), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SpatialGDK_OnRecordPing__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SpatialGDK_OnRecordPing__DelegateSignature_Statics::NewProp_Ping,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SpatialGDK_OnRecordPing__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EngineClasses/Components/SpatialPingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SpatialGDK_OnRecordPing__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SpatialGDK, nullptr, "OnRecordPing__DelegateSignature", nullptr, nullptr, sizeof(_Script_SpatialGDK_eventOnRecordPing_Parms), Z_Construct_UDelegateFunction_SpatialGDK_OnRecordPing__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpatialGDK_OnRecordPing__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SpatialGDK_OnRecordPing__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SpatialGDK_OnRecordPing__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SpatialGDK_OnRecordPing__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SpatialGDK_OnRecordPing__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FSpatialPingAverageData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SPATIALGDK_API uint32 Get_Z_Construct_UScriptStruct_FSpatialPingAverageData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpatialPingAverageData, Z_Construct_UPackage__Script_SpatialGDK(), TEXT("SpatialPingAverageData"), sizeof(FSpatialPingAverageData), Get_Z_Construct_UScriptStruct_FSpatialPingAverageData_Hash());
	}
	return Singleton;
}
template<> SPATIALGDK_API UScriptStruct* StaticStruct<FSpatialPingAverageData>()
{
	return FSpatialPingAverageData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpatialPingAverageData(FSpatialPingAverageData::StaticStruct, TEXT("/Script/SpatialGDK"), TEXT("SpatialPingAverageData"), false, nullptr, nullptr);
static struct FScriptStruct_SpatialGDK_StaticRegisterNativesFSpatialPingAverageData
{
	FScriptStruct_SpatialGDK_StaticRegisterNativesFSpatialPingAverageData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpatialPingAverageData")),new UScriptStruct::TCppStructOps<FSpatialPingAverageData>);
	}
} ScriptStruct_SpatialGDK_StaticRegisterNativesFSpatialPingAverageData;
	struct Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TotalNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalAvg_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalAvg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindowSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_WindowSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastMeasurementsWindow90thPercentile_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastMeasurementsWindow90thPercentile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastMeasurementsWindow50thPercentile_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastMeasurementsWindow50thPercentile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastMeasurementsWindowMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastMeasurementsWindowMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastMeasurementsWindowMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastMeasurementsWindowMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastMeasurementsWindowAvg_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastMeasurementsWindowAvg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EngineClasses/Components/SpatialPingComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpatialPingAverageData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_TotalNum_MetaData[] = {
		{ "Category", "SpatialPing" },
		{ "ModuleRelativePath", "Public/EngineClasses/Components/SpatialPingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_TotalNum = { "TotalNum", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpatialPingAverageData, TotalNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_TotalNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_TotalNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_TotalMax_MetaData[] = {
		{ "Category", "SpatialPing" },
		{ "ModuleRelativePath", "Public/EngineClasses/Components/SpatialPingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_TotalMax = { "TotalMax", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpatialPingAverageData, TotalMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_TotalMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_TotalMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_TotalMin_MetaData[] = {
		{ "Category", "SpatialPing" },
		{ "ModuleRelativePath", "Public/EngineClasses/Components/SpatialPingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_TotalMin = { "TotalMin", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpatialPingAverageData, TotalMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_TotalMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_TotalMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_TotalAvg_MetaData[] = {
		{ "Category", "SpatialPing" },
		{ "ModuleRelativePath", "Public/EngineClasses/Components/SpatialPingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_TotalAvg = { "TotalAvg", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpatialPingAverageData, TotalAvg), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_TotalAvg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_TotalAvg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_WindowSize_MetaData[] = {
		{ "Category", "SpatialPing" },
		{ "ModuleRelativePath", "Public/EngineClasses/Components/SpatialPingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_WindowSize = { "WindowSize", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpatialPingAverageData, WindowSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_WindowSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_WindowSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_LastMeasurementsWindow90thPercentile_MetaData[] = {
		{ "Category", "SpatialPing" },
		{ "ModuleRelativePath", "Public/EngineClasses/Components/SpatialPingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_LastMeasurementsWindow90thPercentile = { "LastMeasurementsWindow90thPercentile", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpatialPingAverageData, LastMeasurementsWindow90thPercentile), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_LastMeasurementsWindow90thPercentile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_LastMeasurementsWindow90thPercentile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_LastMeasurementsWindow50thPercentile_MetaData[] = {
		{ "Category", "SpatialPing" },
		{ "ModuleRelativePath", "Public/EngineClasses/Components/SpatialPingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_LastMeasurementsWindow50thPercentile = { "LastMeasurementsWindow50thPercentile", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpatialPingAverageData, LastMeasurementsWindow50thPercentile), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_LastMeasurementsWindow50thPercentile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_LastMeasurementsWindow50thPercentile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_LastMeasurementsWindowMax_MetaData[] = {
		{ "Category", "SpatialPing" },
		{ "ModuleRelativePath", "Public/EngineClasses/Components/SpatialPingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_LastMeasurementsWindowMax = { "LastMeasurementsWindowMax", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpatialPingAverageData, LastMeasurementsWindowMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_LastMeasurementsWindowMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_LastMeasurementsWindowMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_LastMeasurementsWindowMin_MetaData[] = {
		{ "Category", "SpatialPing" },
		{ "ModuleRelativePath", "Public/EngineClasses/Components/SpatialPingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_LastMeasurementsWindowMin = { "LastMeasurementsWindowMin", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpatialPingAverageData, LastMeasurementsWindowMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_LastMeasurementsWindowMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_LastMeasurementsWindowMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_LastMeasurementsWindowAvg_MetaData[] = {
		{ "Category", "SpatialPing" },
		{ "ModuleRelativePath", "Public/EngineClasses/Components/SpatialPingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_LastMeasurementsWindowAvg = { "LastMeasurementsWindowAvg", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpatialPingAverageData, LastMeasurementsWindowAvg), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_LastMeasurementsWindowAvg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_LastMeasurementsWindowAvg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_TotalNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_TotalMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_TotalMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_TotalAvg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_WindowSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_LastMeasurementsWindow90thPercentile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_LastMeasurementsWindow50thPercentile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_LastMeasurementsWindowMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_LastMeasurementsWindowMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::NewProp_LastMeasurementsWindowAvg,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDK,
		nullptr,
		&NewStructOps,
		"SpatialPingAverageData",
		sizeof(FSpatialPingAverageData),
		alignof(FSpatialPingAverageData),
		Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpatialPingAverageData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpatialPingAverageData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SpatialGDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpatialPingAverageData"), sizeof(FSpatialPingAverageData), Get_Z_Construct_UScriptStruct_FSpatialPingAverageData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpatialPingAverageData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpatialPingAverageData_Hash() { return 3900407890U; }
	DEFINE_FUNCTION(USpatialPingComponent::execSendServerWorkerPingID)
	{
		P_GET_PROPERTY(FUInt16Property,Z_Param_PingID);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->SendServerWorkerPingID_Validate(Z_Param_PingID))
		{
			RPC_ValidateFailed(TEXT("SendServerWorkerPingID_Validate"));
			return;
		}
		P_THIS->SendServerWorkerPingID_Implementation(Z_Param_PingID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpatialPingComponent::execOnRep_ReplicatedPingID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ReplicatedPingID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpatialPingComponent::execGetAverageData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSpatialPingAverageData*)Z_Param__Result=P_THIS->GetAverageData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpatialPingComponent::execGetPing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpatialPingComponent::execSetPingEnabled)
	{
		P_GET_UBOOL(Z_Param_bSetEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPingEnabled(Z_Param_bSetEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpatialPingComponent::execGetIsPingEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsPingEnabled();
		P_NATIVE_END;
	}
	static FName NAME_USpatialPingComponent_SendServerWorkerPingID = FName(TEXT("SendServerWorkerPingID"));
	void USpatialPingComponent::SendServerWorkerPingID(uint16 PingID)
	{
		SpatialPingComponent_eventSendServerWorkerPingID_Parms Parms;
		Parms.PingID=PingID;
		ProcessEvent(FindFunctionChecked(NAME_USpatialPingComponent_SendServerWorkerPingID),&Parms);
	}
	void USpatialPingComponent::StaticRegisterNativesUSpatialPingComponent()
	{
		UClass* Class = USpatialPingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAverageData", &USpatialPingComponent::execGetAverageData },
			{ "GetIsPingEnabled", &USpatialPingComponent::execGetIsPingEnabled },
			{ "GetPing", &USpatialPingComponent::execGetPing },
			{ "OnRep_ReplicatedPingID", &USpatialPingComponent::execOnRep_ReplicatedPingID },
			{ "SendServerWorkerPingID", &USpatialPingComponent::execSendServerWorkerPingID },
			{ "SetPingEnabled", &USpatialPingComponent::execSetPingEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpatialPingComponent_GetAverageData_Statics
	{
		struct SpatialPingComponent_eventGetAverageData_Parms
		{
			FSpatialPingAverageData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpatialPingComponent_GetAverageData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialPingComponent_eventGetAverageData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSpatialPingAverageData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialPingComponent_GetAverageData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialPingComponent_GetAverageData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialPingComponent_GetAverageData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialGDK|Ping" },
		{ "Comment", "// Returns the average, min, and max values for the last PingMeasurementsWindowSize measurements as well as the total average, min, and max.\n" },
		{ "ModuleRelativePath", "Public/EngineClasses/Components/SpatialPingComponent.h" },
		{ "ToolTip", "Returns the average, min, and max values for the last PingMeasurementsWindowSize measurements as well as the total average, min, and max." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialPingComponent_GetAverageData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpatialPingComponent, nullptr, "GetAverageData", nullptr, nullptr, sizeof(SpatialPingComponent_eventGetAverageData_Parms), Z_Construct_UFunction_USpatialPingComponent_GetAverageData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialPingComponent_GetAverageData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpatialPingComponent_GetAverageData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialPingComponent_GetAverageData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpatialPingComponent_GetAverageData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpatialPingComponent_GetAverageData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpatialPingComponent_GetIsPingEnabled_Statics
	{
		struct SpatialPingComponent_eventGetIsPingEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USpatialPingComponent_GetIsPingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpatialPingComponent_eventGetIsPingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpatialPingComponent_GetIsPingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpatialPingComponent_eventGetIsPingEnabled_Parms), &Z_Construct_UFunction_USpatialPingComponent_GetIsPingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialPingComponent_GetIsPingEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialPingComponent_GetIsPingEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialPingComponent_GetIsPingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialGDK|Ping" },
		{ "Comment", "// Returns whether this component can ping.\n" },
		{ "ModuleRelativePath", "Public/EngineClasses/Components/SpatialPingComponent.h" },
		{ "ToolTip", "Returns whether this component can ping." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialPingComponent_GetIsPingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpatialPingComponent, nullptr, "GetIsPingEnabled", nullptr, nullptr, sizeof(SpatialPingComponent_eventGetIsPingEnabled_Parms), Z_Construct_UFunction_USpatialPingComponent_GetIsPingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialPingComponent_GetIsPingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpatialPingComponent_GetIsPingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialPingComponent_GetIsPingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpatialPingComponent_GetIsPingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpatialPingComponent_GetIsPingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpatialPingComponent_GetPing_Statics
	{
		struct SpatialPingComponent_eventGetPing_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpatialPingComponent_GetPing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialPingComponent_eventGetPing_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialPingComponent_GetPing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialPingComponent_GetPing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialPingComponent_GetPing_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialGDK|Ping" },
		{ "Comment", "// Returns the latest raw round-trip ping value in seconds.\n" },
		{ "ModuleRelativePath", "Public/EngineClasses/Components/SpatialPingComponent.h" },
		{ "ToolTip", "Returns the latest raw round-trip ping value in seconds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialPingComponent_GetPing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpatialPingComponent, nullptr, "GetPing", nullptr, nullptr, sizeof(SpatialPingComponent_eventGetPing_Parms), Z_Construct_UFunction_USpatialPingComponent_GetPing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialPingComponent_GetPing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpatialPingComponent_GetPing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialPingComponent_GetPing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpatialPingComponent_GetPing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpatialPingComponent_GetPing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpatialPingComponent_OnRep_ReplicatedPingID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialPingComponent_OnRep_ReplicatedPingID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EngineClasses/Components/SpatialPingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialPingComponent_OnRep_ReplicatedPingID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpatialPingComponent, nullptr, "OnRep_ReplicatedPingID", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpatialPingComponent_OnRep_ReplicatedPingID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialPingComponent_OnRep_ReplicatedPingID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpatialPingComponent_OnRep_ReplicatedPingID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpatialPingComponent_OnRep_ReplicatedPingID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpatialPingComponent_SendServerWorkerPingID_Statics
	{
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_PingID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UFunction_USpatialPingComponent_SendServerWorkerPingID_Statics::NewProp_PingID = { "PingID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialPingComponent_eventSendServerWorkerPingID_Parms, PingID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialPingComponent_SendServerWorkerPingID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialPingComponent_SendServerWorkerPingID_Statics::NewProp_PingID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialPingComponent_SendServerWorkerPingID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EngineClasses/Components/SpatialPingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialPingComponent_SendServerWorkerPingID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpatialPingComponent, nullptr, "SendServerWorkerPingID", nullptr, nullptr, sizeof(SpatialPingComponent_eventSendServerWorkerPingID_Parms), Z_Construct_UFunction_USpatialPingComponent_SendServerWorkerPingID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialPingComponent_SendServerWorkerPingID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240C41, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpatialPingComponent_SendServerWorkerPingID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialPingComponent_SendServerWorkerPingID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpatialPingComponent_SendServerWorkerPingID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpatialPingComponent_SendServerWorkerPingID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpatialPingComponent_SetPingEnabled_Statics
	{
		struct SpatialPingComponent_eventSetPingEnabled_Parms
		{
			bool bSetEnabled;
		};
		static void NewProp_bSetEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USpatialPingComponent_SetPingEnabled_Statics::NewProp_bSetEnabled_SetBit(void* Obj)
	{
		((SpatialPingComponent_eventSetPingEnabled_Parms*)Obj)->bSetEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpatialPingComponent_SetPingEnabled_Statics::NewProp_bSetEnabled = { "bSetEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpatialPingComponent_eventSetPingEnabled_Parms), &Z_Construct_UFunction_USpatialPingComponent_SetPingEnabled_Statics::NewProp_bSetEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialPingComponent_SetPingEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialPingComponent_SetPingEnabled_Statics::NewProp_bSetEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialPingComponent_SetPingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialGDK|Ping" },
		{ "Comment", "// Set whether this component can ping.\n" },
		{ "ModuleRelativePath", "Public/EngineClasses/Components/SpatialPingComponent.h" },
		{ "ToolTip", "Set whether this component can ping." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialPingComponent_SetPingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpatialPingComponent, nullptr, "SetPingEnabled", nullptr, nullptr, sizeof(SpatialPingComponent_eventSetPingEnabled_Parms), Z_Construct_UFunction_USpatialPingComponent_SetPingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialPingComponent_SetPingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpatialPingComponent_SetPingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialPingComponent_SetPingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpatialPingComponent_SetPingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpatialPingComponent_SetPingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USpatialPingComponent_NoRegister()
	{
		return USpatialPingComponent::StaticClass();
	}
	struct Z_Construct_UClass_USpatialPingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedPingID_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_ReplicatedPingID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRecordPing_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRecordPing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PingMeasurementsWindowSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PingMeasurementsWindowSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeoutLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeoutLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinPingInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinPingInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartWithPingEnabled_MetaData[];
#endif
		static void NewProp_bStartWithPingEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartWithPingEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpatialPingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USpatialPingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpatialPingComponent_GetAverageData, "GetAverageData" }, // 972728894
		{ &Z_Construct_UFunction_USpatialPingComponent_GetIsPingEnabled, "GetIsPingEnabled" }, // 3375685551
		{ &Z_Construct_UFunction_USpatialPingComponent_GetPing, "GetPing" }, // 1835204725
		{ &Z_Construct_UFunction_USpatialPingComponent_OnRep_ReplicatedPingID, "OnRep_ReplicatedPingID" }, // 163605818
		{ &Z_Construct_UFunction_USpatialPingComponent_SendServerWorkerPingID, "SendServerWorkerPingID" }, // 2727117403
		{ &Z_Construct_UFunction_USpatialPingComponent_SetPingEnabled, "SetPingEnabled" }, // 568797816
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialPingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "SpatialGDK" },
		{ "Comment", "/*\n Offers a configurable means of measuring round-trip latency in SpatialOS deployments.\n This component should be attached to a player controller.\n */" },
		{ "IncludePath", "EngineClasses/Components/SpatialPingComponent.h" },
		{ "ModuleRelativePath", "Public/EngineClasses/Components/SpatialPingComponent.h" },
		{ "ToolTip", "Offers a configurable means of measuring round-trip latency in SpatialOS deployments.\nThis component should be attached to a player controller." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialPingComponent_Statics::NewProp_OwningController_MetaData[] = {
		{ "ModuleRelativePath", "Public/EngineClasses/Components/SpatialPingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpatialPingComponent_Statics::NewProp_OwningController = { "OwningController", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialPingComponent, OwningController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpatialPingComponent_Statics::NewProp_OwningController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialPingComponent_Statics::NewProp_OwningController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialPingComponent_Statics::NewProp_ReplicatedPingID_MetaData[] = {
		{ "ModuleRelativePath", "Public/EngineClasses/Components/SpatialPingComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_USpatialPingComponent_Statics::NewProp_ReplicatedPingID = { "ReplicatedPingID", "OnRep_ReplicatedPingID", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialPingComponent, ReplicatedPingID), METADATA_PARAMS(Z_Construct_UClass_USpatialPingComponent_Statics::NewProp_ReplicatedPingID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialPingComponent_Statics::NewProp_ReplicatedPingID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialPingComponent_Statics::NewProp_OnRecordPing_MetaData[] = {
		{ "Category", "SpatialGDK|Ping" },
		{ "Comment", "// Multicast delegate that will be broadcast whenever a new ping measurement is recorded.\n" },
		{ "ModuleRelativePath", "Public/EngineClasses/Components/SpatialPingComponent.h" },
		{ "ToolTip", "Multicast delegate that will be broadcast whenever a new ping measurement is recorded." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpatialPingComponent_Statics::NewProp_OnRecordPing = { "OnRecordPing", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialPingComponent, OnRecordPing), Z_Construct_UDelegateFunction_SpatialGDK_OnRecordPing__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USpatialPingComponent_Statics::NewProp_OnRecordPing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialPingComponent_Statics::NewProp_OnRecordPing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialPingComponent_Statics::NewProp_PingMeasurementsWindowSize_MetaData[] = {
		{ "Category", "SpatialPing" },
		{ "Comment", "// The number of ping measurements recorded for the rolling average.\n" },
		{ "ModuleRelativePath", "Public/EngineClasses/Components/SpatialPingComponent.h" },
		{ "ToolTip", "The number of ping measurements recorded for the rolling average." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USpatialPingComponent_Statics::NewProp_PingMeasurementsWindowSize = { "PingMeasurementsWindowSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialPingComponent, PingMeasurementsWindowSize), METADATA_PARAMS(Z_Construct_UClass_USpatialPingComponent_Statics::NewProp_PingMeasurementsWindowSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialPingComponent_Statics::NewProp_PingMeasurementsWindowSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialPingComponent_Statics::NewProp_TimeoutLimit_MetaData[] = {
		{ "Category", "SpatialPing" },
		{ "Comment", "// The maximum time, in seconds, to wait for a reply before sending another ping.\n" },
		{ "ModuleRelativePath", "Public/EngineClasses/Components/SpatialPingComponent.h" },
		{ "ToolTip", "The maximum time, in seconds, to wait for a reply before sending another ping." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpatialPingComponent_Statics::NewProp_TimeoutLimit = { "TimeoutLimit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialPingComponent, TimeoutLimit), METADATA_PARAMS(Z_Construct_UClass_USpatialPingComponent_Statics::NewProp_TimeoutLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialPingComponent_Statics::NewProp_TimeoutLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialPingComponent_Statics::NewProp_MinPingInterval_MetaData[] = {
		{ "Category", "SpatialPing" },
		{ "Comment", "// The minimum time, in seconds, between pings.\n" },
		{ "ModuleRelativePath", "Public/EngineClasses/Components/SpatialPingComponent.h" },
		{ "ToolTip", "The minimum time, in seconds, between pings." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpatialPingComponent_Statics::NewProp_MinPingInterval = { "MinPingInterval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpatialPingComponent, MinPingInterval), METADATA_PARAMS(Z_Construct_UClass_USpatialPingComponent_Statics::NewProp_MinPingInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialPingComponent_Statics::NewProp_MinPingInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialPingComponent_Statics::NewProp_bStartWithPingEnabled_MetaData[] = {
		{ "Category", "SpatialPing" },
		{ "Comment", "// Determines whether the component starts with ping behavior enabled.\n" },
		{ "ModuleRelativePath", "Public/EngineClasses/Components/SpatialPingComponent.h" },
		{ "ToolTip", "Determines whether the component starts with ping behavior enabled." },
	};
#endif
	void Z_Construct_UClass_USpatialPingComponent_Statics::NewProp_bStartWithPingEnabled_SetBit(void* Obj)
	{
		((USpatialPingComponent*)Obj)->bStartWithPingEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpatialPingComponent_Statics::NewProp_bStartWithPingEnabled = { "bStartWithPingEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpatialPingComponent), &Z_Construct_UClass_USpatialPingComponent_Statics::NewProp_bStartWithPingEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpatialPingComponent_Statics::NewProp_bStartWithPingEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialPingComponent_Statics::NewProp_bStartWithPingEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpatialPingComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialPingComponent_Statics::NewProp_OwningController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialPingComponent_Statics::NewProp_ReplicatedPingID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialPingComponent_Statics::NewProp_OnRecordPing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialPingComponent_Statics::NewProp_PingMeasurementsWindowSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialPingComponent_Statics::NewProp_TimeoutLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialPingComponent_Statics::NewProp_MinPingInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpatialPingComponent_Statics::NewProp_bStartWithPingEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpatialPingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpatialPingComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpatialPingComponent_Statics::ClassParams = {
		&USpatialPingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USpatialPingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USpatialPingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		0x00000010u,
		METADATA_PARAMS(Z_Construct_UClass_USpatialPingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialPingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpatialPingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpatialPingComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpatialPingComponent, 3712218097);
	template<> SPATIALGDK_API UClass* StaticClass<USpatialPingComponent>()
	{
		return USpatialPingComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpatialPingComponent(Z_Construct_UClass_USpatialPingComponent, &USpatialPingComponent::StaticClass, TEXT("/Script/SpatialGDK"), TEXT("USpatialPingComponent"), false, nullptr, nullptr, nullptr);

	void USpatialPingComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedPingID(TEXT("ReplicatedPingID"));

		const bool bIsValid = true
			&& Name_ReplicatedPingID == ClassReps[(int32)ENetFields_Private::ReplicatedPingID].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in USpatialPingComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpatialPingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
