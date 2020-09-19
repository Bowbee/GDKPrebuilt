// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDK/Public/Utils/SpatialMetricsDisplay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpatialMetricsDisplay() {}
// Cross Module References
	SPATIALGDK_API UScriptStruct* Z_Construct_UScriptStruct_FWorkerStats();
	UPackage* Z_Construct_UPackage__Script_SpatialGDK();
	SPATIALGDK_API UClass* Z_Construct_UClass_ASpatialMetricsDisplay_NoRegister();
	SPATIALGDK_API UClass* Z_Construct_UClass_ASpatialMetricsDisplay();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
// End Cross Module References
class UScriptStruct* FWorkerStats::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SPATIALGDK_API uint32 Get_Z_Construct_UScriptStruct_FWorkerStats_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorkerStats, Z_Construct_UPackage__Script_SpatialGDK(), TEXT("WorkerStats"), sizeof(FWorkerStats), Get_Z_Construct_UScriptStruct_FWorkerStats_Hash());
	}
	return Singleton;
}
template<> SPATIALGDK_API UScriptStruct* StaticStruct<FWorkerStats>()
{
	return FWorkerStats::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWorkerStats(FWorkerStats::StaticStruct, TEXT("/Script/SpatialGDK"), TEXT("WorkerStats"), false, nullptr, nullptr);
static struct FScriptStruct_SpatialGDK_StaticRegisterNativesFWorkerStats
{
	FScriptStruct_SpatialGDK_StaticRegisterNativesFWorkerStats()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WorkerStats")),new UScriptStruct::TCppStructOps<FWorkerStats>);
	}
} ScriptStruct_SpatialGDK_StaticRegisterNativesFWorkerStats;
	struct Z_Construct_UScriptStruct_FWorkerStats_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerReplicationLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ServerReplicationLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerConsiderListSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ServerConsiderListSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerMovementCorrections_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ServerMovementCorrections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AverageFPS_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AverageFPS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorkerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WorkerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkerStats_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils/SpatialMetricsDisplay.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorkerStats_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorkerStats>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkerStats_Statics::NewProp_ServerReplicationLimit_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utils/SpatialMetricsDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FWorkerStats_Statics::NewProp_ServerReplicationLimit = { "ServerReplicationLimit", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorkerStats, ServerReplicationLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkerStats_Statics::NewProp_ServerReplicationLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkerStats_Statics::NewProp_ServerReplicationLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkerStats_Statics::NewProp_ServerConsiderListSize_MetaData[] = {
		{ "Comment", "// per second\n" },
		{ "ModuleRelativePath", "Public/Utils/SpatialMetricsDisplay.h" },
		{ "ToolTip", "per second" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWorkerStats_Statics::NewProp_ServerConsiderListSize = { "ServerConsiderListSize", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorkerStats, ServerConsiderListSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkerStats_Statics::NewProp_ServerConsiderListSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkerStats_Statics::NewProp_ServerConsiderListSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkerStats_Statics::NewProp_ServerMovementCorrections_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utils/SpatialMetricsDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWorkerStats_Statics::NewProp_ServerMovementCorrections = { "ServerMovementCorrections", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorkerStats, ServerMovementCorrections), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkerStats_Statics::NewProp_ServerMovementCorrections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkerStats_Statics::NewProp_ServerMovementCorrections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkerStats_Statics::NewProp_AverageFPS_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utils/SpatialMetricsDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWorkerStats_Statics::NewProp_AverageFPS = { "AverageFPS", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorkerStats, AverageFPS), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkerStats_Statics::NewProp_AverageFPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkerStats_Statics::NewProp_AverageFPS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkerStats_Statics::NewProp_WorkerName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utils/SpatialMetricsDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWorkerStats_Statics::NewProp_WorkerName = { "WorkerName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorkerStats, WorkerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkerStats_Statics::NewProp_WorkerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkerStats_Statics::NewProp_WorkerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorkerStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkerStats_Statics::NewProp_ServerReplicationLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkerStats_Statics::NewProp_ServerConsiderListSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkerStats_Statics::NewProp_ServerMovementCorrections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkerStats_Statics::NewProp_AverageFPS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkerStats_Statics::NewProp_WorkerName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorkerStats_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDK,
		nullptr,
		&NewStructOps,
		"WorkerStats",
		sizeof(FWorkerStats),
		alignof(FWorkerStats),
		Z_Construct_UScriptStruct_FWorkerStats_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkerStats_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkerStats_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkerStats_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorkerStats()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWorkerStats_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SpatialGDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WorkerStats"), sizeof(FWorkerStats), Get_Z_Construct_UScriptStruct_FWorkerStats_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWorkerStats_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWorkerStats_Hash() { return 1453700424U; }
	DEFINE_FUNCTION(ASpatialMetricsDisplay::execServerUpdateWorkerStats)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_STRUCT(FWorkerStats,Z_Param_OneWorkerStats);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerUpdateWorkerStats_Validate(Z_Param_Time,Z_Param_OneWorkerStats))
		{
			RPC_ValidateFailed(TEXT("ServerUpdateWorkerStats_Validate"));
			return;
		}
		P_THIS->ServerUpdateWorkerStats_Implementation(Z_Param_Time,Z_Param_OneWorkerStats);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpatialMetricsDisplay::execSpatialToggleStatDisplay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpatialToggleStatDisplay();
		P_NATIVE_END;
	}
	static FName NAME_ASpatialMetricsDisplay_ServerUpdateWorkerStats = FName(TEXT("ServerUpdateWorkerStats"));
	void ASpatialMetricsDisplay::ServerUpdateWorkerStats(const float Time, FWorkerStats const& OneWorkerStats)
	{
		SpatialMetricsDisplay_eventServerUpdateWorkerStats_Parms Parms;
		Parms.Time=Time;
		Parms.OneWorkerStats=OneWorkerStats;
		ProcessEvent(FindFunctionChecked(NAME_ASpatialMetricsDisplay_ServerUpdateWorkerStats),&Parms);
	}
	void ASpatialMetricsDisplay::StaticRegisterNativesASpatialMetricsDisplay()
	{
		UClass* Class = ASpatialMetricsDisplay::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerUpdateWorkerStats", &ASpatialMetricsDisplay::execServerUpdateWorkerStats },
			{ "SpatialToggleStatDisplay", &ASpatialMetricsDisplay::execSpatialToggleStatDisplay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpatialMetricsDisplay_ServerUpdateWorkerStats_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OneWorkerStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OneWorkerStats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialMetricsDisplay_ServerUpdateWorkerStats_Statics::NewProp_OneWorkerStats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpatialMetricsDisplay_ServerUpdateWorkerStats_Statics::NewProp_OneWorkerStats = { "OneWorkerStats", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialMetricsDisplay_eventServerUpdateWorkerStats_Parms, OneWorkerStats), Z_Construct_UScriptStruct_FWorkerStats, METADATA_PARAMS(Z_Construct_UFunction_ASpatialMetricsDisplay_ServerUpdateWorkerStats_Statics::NewProp_OneWorkerStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialMetricsDisplay_ServerUpdateWorkerStats_Statics::NewProp_OneWorkerStats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialMetricsDisplay_ServerUpdateWorkerStats_Statics::NewProp_Time_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpatialMetricsDisplay_ServerUpdateWorkerStats_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialMetricsDisplay_eventServerUpdateWorkerStats_Parms, Time), METADATA_PARAMS(Z_Construct_UFunction_ASpatialMetricsDisplay_ServerUpdateWorkerStats_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialMetricsDisplay_ServerUpdateWorkerStats_Statics::NewProp_Time_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpatialMetricsDisplay_ServerUpdateWorkerStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialMetricsDisplay_ServerUpdateWorkerStats_Statics::NewProp_OneWorkerStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialMetricsDisplay_ServerUpdateWorkerStats_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialMetricsDisplay_ServerUpdateWorkerStats_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// seconds\n" },
		{ "ModuleRelativePath", "Public/Utils/SpatialMetricsDisplay.h" },
		{ "ToolTip", "seconds" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialMetricsDisplay_ServerUpdateWorkerStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpatialMetricsDisplay, nullptr, "ServerUpdateWorkerStats", nullptr, nullptr, sizeof(SpatialMetricsDisplay_eventServerUpdateWorkerStats_Parms), Z_Construct_UFunction_ASpatialMetricsDisplay_ServerUpdateWorkerStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialMetricsDisplay_ServerUpdateWorkerStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80040C51, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpatialMetricsDisplay_ServerUpdateWorkerStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialMetricsDisplay_ServerUpdateWorkerStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpatialMetricsDisplay_ServerUpdateWorkerStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpatialMetricsDisplay_ServerUpdateWorkerStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpatialMetricsDisplay_SpatialToggleStatDisplay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialMetricsDisplay_SpatialToggleStatDisplay_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialGDK" },
		{ "ModuleRelativePath", "Public/Utils/SpatialMetricsDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialMetricsDisplay_SpatialToggleStatDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpatialMetricsDisplay, nullptr, "SpatialToggleStatDisplay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpatialMetricsDisplay_SpatialToggleStatDisplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialMetricsDisplay_SpatialToggleStatDisplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpatialMetricsDisplay_SpatialToggleStatDisplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpatialMetricsDisplay_SpatialToggleStatDisplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpatialMetricsDisplay_NoRegister()
	{
		return ASpatialMetricsDisplay::StaticClass();
	}
	struct Z_Construct_UClass_ASpatialMetricsDisplay_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorkerStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WorkerStats;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorkerStats_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpatialMetricsDisplay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpatialMetricsDisplay_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpatialMetricsDisplay_ServerUpdateWorkerStats, "ServerUpdateWorkerStats" }, // 3755906130
		{ &Z_Construct_UFunction_ASpatialMetricsDisplay_SpatialToggleStatDisplay, "SpatialToggleStatDisplay" }, // 1668252905
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialMetricsDisplay_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Utils/SpatialMetricsDisplay.h" },
		{ "ModuleRelativePath", "Public/Utils/SpatialMetricsDisplay.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialMetricsDisplay_Statics::NewProp_WorkerStats_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utils/SpatialMetricsDisplay.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASpatialMetricsDisplay_Statics::NewProp_WorkerStats = { "WorkerStats", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpatialMetricsDisplay, WorkerStats), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASpatialMetricsDisplay_Statics::NewProp_WorkerStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialMetricsDisplay_Statics::NewProp_WorkerStats_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpatialMetricsDisplay_Statics::NewProp_WorkerStats_Inner = { "WorkerStats", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FWorkerStats, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpatialMetricsDisplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialMetricsDisplay_Statics::NewProp_WorkerStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialMetricsDisplay_Statics::NewProp_WorkerStats_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpatialMetricsDisplay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpatialMetricsDisplay>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpatialMetricsDisplay_Statics::ClassParams = {
		&ASpatialMetricsDisplay::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASpatialMetricsDisplay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialMetricsDisplay_Statics::PropPointers),
		0,
		0x009000A4u,
		0x00000010u,
		METADATA_PARAMS(Z_Construct_UClass_ASpatialMetricsDisplay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialMetricsDisplay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpatialMetricsDisplay()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpatialMetricsDisplay_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpatialMetricsDisplay, 1764288932);
	template<> SPATIALGDK_API UClass* StaticClass<ASpatialMetricsDisplay>()
	{
		return ASpatialMetricsDisplay::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpatialMetricsDisplay(Z_Construct_UClass_ASpatialMetricsDisplay, &ASpatialMetricsDisplay::StaticClass, TEXT("/Script/SpatialGDK"), TEXT("ASpatialMetricsDisplay"), false, nullptr, nullptr, nullptr);

	void ASpatialMetricsDisplay::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_WorkerStats(TEXT("WorkerStats"));

		const bool bIsValid = true
			&& Name_WorkerStats == ClassReps[(int32)ENetFields_Private::WorkerStats].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASpatialMetricsDisplay"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpatialMetricsDisplay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
