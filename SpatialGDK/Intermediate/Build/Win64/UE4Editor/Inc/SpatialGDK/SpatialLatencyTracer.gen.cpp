// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDK/Public/Utils/SpatialLatencyTracer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpatialLatencyTracer() {}
// Cross Module References
	SPATIALGDK_API UEnum* Z_Construct_UEnum_SpatialGDK_ETraceType();
	UPackage* Z_Construct_UPackage__Script_SpatialGDK();
	SPATIALGDK_API UClass* Z_Construct_UClass_USpatialLatencyTracer_NoRegister();
	SPATIALGDK_API UClass* Z_Construct_UClass_USpatialLatencyTracer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SPATIALGDK_API UScriptStruct* Z_Construct_UScriptStruct_FSpatialLatencyPayload();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static UEnum* ETraceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SpatialGDK_ETraceType, Z_Construct_UPackage__Script_SpatialGDK(), TEXT("ETraceType"));
		}
		return Singleton;
	}
	template<> SPATIALGDK_API UEnum* StaticEnum<ETraceType::Type>()
	{
		return ETraceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETraceType(ETraceType_StaticEnum, TEXT("/Script/SpatialGDK"), TEXT("ETraceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SpatialGDK_ETraceType_Hash() { return 1054610954U; }
	UEnum* Z_Construct_UEnum_SpatialGDK_ETraceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SpatialGDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETraceType"), 0, Get_Z_Construct_UEnum_SpatialGDK_ETraceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETraceType::RPC", (int64)ETraceType::RPC },
				{ "ETraceType::Property", (int64)ETraceType::Property },
				{ "ETraceType::Tagged", (int64)ETraceType::Tagged },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/**\n * Enum that maps Unreal's log verbosity to allow use in settings.\n**/" },
				{ "ModuleRelativePath", "Public/Utils/SpatialLatencyTracer.h" },
				{ "Property.Name", "ETraceType::Property" },
				{ "RPC.Name", "ETraceType::RPC" },
				{ "Tagged.Name", "ETraceType::Tagged" },
				{ "ToolTip", "Enum that maps Unreal's log verbosity to allow use in settings." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SpatialGDK,
				nullptr,
				"ETraceType",
				"ETraceType::Type",
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
	DEFINE_FUNCTION(USpatialLatencyTracer::execDebug_SendTestTrace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		USpatialLatencyTracer::Debug_SendTestTrace();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpatialLatencyTracer::execRetrievePayload)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FStrProperty,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSpatialLatencyPayload*)Z_Param__Result=USpatialLatencyTracer::RetrievePayload(Z_Param_WorldContextObject,Z_Param_Actor,Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpatialLatencyTracer::execEndLatencyTrace)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FSpatialLatencyPayload,Z_Param_Out_LatencyPayLoad);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USpatialLatencyTracer::EndLatencyTrace(Z_Param_WorldContextObject,Z_Param_Out_LatencyPayLoad);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpatialLatencyTracer::execContinueLatencyTraceTagged)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FStrProperty,Z_Param_Tag);
		P_GET_PROPERTY(FStrProperty,Z_Param_TraceDesc);
		P_GET_STRUCT_REF(FSpatialLatencyPayload,Z_Param_Out_LatencyPayload);
		P_GET_STRUCT_REF(FSpatialLatencyPayload,Z_Param_Out_OutContinuedLatencyPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USpatialLatencyTracer::ContinueLatencyTraceTagged(Z_Param_WorldContextObject,Z_Param_Actor,Z_Param_Tag,Z_Param_TraceDesc,Z_Param_Out_LatencyPayload,Z_Param_Out_OutContinuedLatencyPayload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpatialLatencyTracer::execContinueLatencyTraceProperty)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FStrProperty,Z_Param_Property);
		P_GET_PROPERTY(FStrProperty,Z_Param_TraceDesc);
		P_GET_STRUCT_REF(FSpatialLatencyPayload,Z_Param_Out_LatencyPayload);
		P_GET_STRUCT_REF(FSpatialLatencyPayload,Z_Param_Out_OutContinuedLatencyPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USpatialLatencyTracer::ContinueLatencyTraceProperty(Z_Param_WorldContextObject,Z_Param_Actor,Z_Param_Property,Z_Param_TraceDesc,Z_Param_Out_LatencyPayload,Z_Param_Out_OutContinuedLatencyPayload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpatialLatencyTracer::execContinueLatencyTraceRPC)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FStrProperty,Z_Param_Function);
		P_GET_PROPERTY(FStrProperty,Z_Param_TraceDesc);
		P_GET_STRUCT_REF(FSpatialLatencyPayload,Z_Param_Out_LatencyPayload);
		P_GET_STRUCT_REF(FSpatialLatencyPayload,Z_Param_Out_OutContinuedLatencyPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USpatialLatencyTracer::ContinueLatencyTraceRPC(Z_Param_WorldContextObject,Z_Param_Actor,Z_Param_Function,Z_Param_TraceDesc,Z_Param_Out_LatencyPayload,Z_Param_Out_OutContinuedLatencyPayload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpatialLatencyTracer::execBeginLatencyTrace)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_TraceDesc);
		P_GET_STRUCT_REF(FSpatialLatencyPayload,Z_Param_Out_OutLatencyPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USpatialLatencyTracer::BeginLatencyTrace(Z_Param_WorldContextObject,Z_Param_TraceDesc,Z_Param_Out_OutLatencyPayload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpatialLatencyTracer::execSetTraceMetadata)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewTraceMetadata);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USpatialLatencyTracer::SetTraceMetadata(Z_Param_WorldContextObject,Z_Param_NewTraceMetadata);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpatialLatencyTracer::execRegisterProject)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_ProjectId);
		P_FINISH;
		P_NATIVE_BEGIN;
		USpatialLatencyTracer::RegisterProject(Z_Param_WorldContextObject,Z_Param_ProjectId);
		P_NATIVE_END;
	}
	void USpatialLatencyTracer::StaticRegisterNativesUSpatialLatencyTracer()
	{
		UClass* Class = USpatialLatencyTracer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginLatencyTrace", &USpatialLatencyTracer::execBeginLatencyTrace },
			{ "ContinueLatencyTraceProperty", &USpatialLatencyTracer::execContinueLatencyTraceProperty },
			{ "ContinueLatencyTraceRPC", &USpatialLatencyTracer::execContinueLatencyTraceRPC },
			{ "ContinueLatencyTraceTagged", &USpatialLatencyTracer::execContinueLatencyTraceTagged },
			{ "Debug_SendTestTrace", &USpatialLatencyTracer::execDebug_SendTestTrace },
			{ "EndLatencyTrace", &USpatialLatencyTracer::execEndLatencyTrace },
			{ "RegisterProject", &USpatialLatencyTracer::execRegisterProject },
			{ "RetrievePayload", &USpatialLatencyTracer::execRetrievePayload },
			{ "SetTraceMetadata", &USpatialLatencyTracer::execSetTraceMetadata },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpatialLatencyTracer_BeginLatencyTrace_Statics
	{
		struct SpatialLatencyTracer_eventBeginLatencyTrace_Parms
		{
			UObject* WorldContextObject;
			FString TraceDesc;
			FSpatialLatencyPayload OutLatencyPayload;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutLatencyPayload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceDesc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TraceDesc;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USpatialLatencyTracer_BeginLatencyTrace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpatialLatencyTracer_eventBeginLatencyTrace_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpatialLatencyTracer_BeginLatencyTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpatialLatencyTracer_eventBeginLatencyTrace_Parms), &Z_Construct_UFunction_USpatialLatencyTracer_BeginLatencyTrace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpatialLatencyTracer_BeginLatencyTrace_Statics::NewProp_OutLatencyPayload = { "OutLatencyPayload", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialLatencyTracer_eventBeginLatencyTrace_Parms, OutLatencyPayload), Z_Construct_UScriptStruct_FSpatialLatencyPayload, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialLatencyTracer_BeginLatencyTrace_Statics::NewProp_TraceDesc_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpatialLatencyTracer_BeginLatencyTrace_Statics::NewProp_TraceDesc = { "TraceDesc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialLatencyTracer_eventBeginLatencyTrace_Parms, TraceDesc), METADATA_PARAMS(Z_Construct_UFunction_USpatialLatencyTracer_BeginLatencyTrace_Statics::NewProp_TraceDesc_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialLatencyTracer_BeginLatencyTrace_Statics::NewProp_TraceDesc_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpatialLatencyTracer_BeginLatencyTrace_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialLatencyTracer_eventBeginLatencyTrace_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialLatencyTracer_BeginLatencyTrace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialLatencyTracer_BeginLatencyTrace_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialLatencyTracer_BeginLatencyTrace_Statics::NewProp_OutLatencyPayload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialLatencyTracer_BeginLatencyTrace_Statics::NewProp_TraceDesc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialLatencyTracer_BeginLatencyTrace_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialLatencyTracer_BeginLatencyTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialOS" },
		{ "Comment", "// Start a latency trace. This will start the latency timer and return you a LatencyPayload object. This payload can then be \"continued\" via a ContinueLatencyTrace call.\n" },
		{ "ModuleRelativePath", "Public/Utils/SpatialLatencyTracer.h" },
		{ "ToolTip", "Start a latency trace. This will start the latency timer and return you a LatencyPayload object. This payload can then be \"continued\" via a ContinueLatencyTrace call." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialLatencyTracer_BeginLatencyTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpatialLatencyTracer, nullptr, "BeginLatencyTrace", nullptr, nullptr, sizeof(SpatialLatencyTracer_eventBeginLatencyTrace_Parms), Z_Construct_UFunction_USpatialLatencyTracer_BeginLatencyTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialLatencyTracer_BeginLatencyTrace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpatialLatencyTracer_BeginLatencyTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialLatencyTracer_BeginLatencyTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpatialLatencyTracer_BeginLatencyTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpatialLatencyTracer_BeginLatencyTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty_Statics
	{
		struct SpatialLatencyTracer_eventContinueLatencyTraceProperty_Parms
		{
			UObject* WorldContextObject;
			const AActor* Actor;
			FString Property;
			FString TraceDesc;
			FSpatialLatencyPayload LatencyPayload;
			FSpatialLatencyPayload OutContinuedLatencyPayload;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutContinuedLatencyPayload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LatencyPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatencyPayload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceDesc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TraceDesc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Property;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpatialLatencyTracer_eventContinueLatencyTraceProperty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpatialLatencyTracer_eventContinueLatencyTraceProperty_Parms), &Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty_Statics::NewProp_OutContinuedLatencyPayload = { "OutContinuedLatencyPayload", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialLatencyTracer_eventContinueLatencyTraceProperty_Parms, OutContinuedLatencyPayload), Z_Construct_UScriptStruct_FSpatialLatencyPayload, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty_Statics::NewProp_LatencyPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty_Statics::NewProp_LatencyPayload = { "LatencyPayload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialLatencyTracer_eventContinueLatencyTraceProperty_Parms, LatencyPayload), Z_Construct_UScriptStruct_FSpatialLatencyPayload, METADATA_PARAMS(Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty_Statics::NewProp_LatencyPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty_Statics::NewProp_LatencyPayload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty_Statics::NewProp_TraceDesc_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty_Statics::NewProp_TraceDesc = { "TraceDesc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialLatencyTracer_eventContinueLatencyTraceProperty_Parms, TraceDesc), METADATA_PARAMS(Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty_Statics::NewProp_TraceDesc_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty_Statics::NewProp_TraceDesc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty_Statics::NewProp_Property_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialLatencyTracer_eventContinueLatencyTraceProperty_Parms, Property), METADATA_PARAMS(Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty_Statics::NewProp_Property_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty_Statics::NewProp_Property_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialLatencyTracer_eventContinueLatencyTraceProperty_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty_Statics::NewProp_Actor_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialLatencyTracer_eventContinueLatencyTraceProperty_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty_Statics::NewProp_OutContinuedLatencyPayload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty_Statics::NewProp_LatencyPayload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty_Statics::NewProp_TraceDesc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty_Statics::NewProp_Property,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialOS" },
		{ "Comment", "// Attach a LatencyPayload to an Property/Actor pair. The next time that Property is executed on that Actor, the timings will be measured.\n// The property being measured should be a FSpatialLatencyPayload and should be set to OutContinuedLatencyPayload.\n" },
		{ "ModuleRelativePath", "Public/Utils/SpatialLatencyTracer.h" },
		{ "ToolTip", "Attach a LatencyPayload to an Property/Actor pair. The next time that Property is executed on that Actor, the timings will be measured.\nThe property being measured should be a FSpatialLatencyPayload and should be set to OutContinuedLatencyPayload." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpatialLatencyTracer, nullptr, "ContinueLatencyTraceProperty", nullptr, nullptr, sizeof(SpatialLatencyTracer_eventContinueLatencyTraceProperty_Parms), Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC_Statics
	{
		struct SpatialLatencyTracer_eventContinueLatencyTraceRPC_Parms
		{
			UObject* WorldContextObject;
			const AActor* Actor;
			FString Function;
			FString TraceDesc;
			FSpatialLatencyPayload LatencyPayload;
			FSpatialLatencyPayload OutContinuedLatencyPayload;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutContinuedLatencyPayload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LatencyPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatencyPayload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceDesc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TraceDesc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Function;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpatialLatencyTracer_eventContinueLatencyTraceRPC_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpatialLatencyTracer_eventContinueLatencyTraceRPC_Parms), &Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC_Statics::NewProp_OutContinuedLatencyPayload = { "OutContinuedLatencyPayload", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialLatencyTracer_eventContinueLatencyTraceRPC_Parms, OutContinuedLatencyPayload), Z_Construct_UScriptStruct_FSpatialLatencyPayload, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC_Statics::NewProp_LatencyPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC_Statics::NewProp_LatencyPayload = { "LatencyPayload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialLatencyTracer_eventContinueLatencyTraceRPC_Parms, LatencyPayload), Z_Construct_UScriptStruct_FSpatialLatencyPayload, METADATA_PARAMS(Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC_Statics::NewProp_LatencyPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC_Statics::NewProp_LatencyPayload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC_Statics::NewProp_TraceDesc_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC_Statics::NewProp_TraceDesc = { "TraceDesc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialLatencyTracer_eventContinueLatencyTraceRPC_Parms, TraceDesc), METADATA_PARAMS(Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC_Statics::NewProp_TraceDesc_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC_Statics::NewProp_TraceDesc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC_Statics::NewProp_Function_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialLatencyTracer_eventContinueLatencyTraceRPC_Parms, Function), METADATA_PARAMS(Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC_Statics::NewProp_Function_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC_Statics::NewProp_Function_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialLatencyTracer_eventContinueLatencyTraceRPC_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC_Statics::NewProp_Actor_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialLatencyTracer_eventContinueLatencyTraceRPC_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC_Statics::NewProp_OutContinuedLatencyPayload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC_Statics::NewProp_LatencyPayload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC_Statics::NewProp_TraceDesc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC_Statics::NewProp_Function,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialOS" },
		{ "Comment", "// Attach a LatencyPayload to an RPC/Actor pair. The next time that RPC is executed on that Actor, the timings will be measured.\n// You must also send the OutContinuedLatencyPayload as a parameter in the RPC.\n" },
		{ "ModuleRelativePath", "Public/Utils/SpatialLatencyTracer.h" },
		{ "ToolTip", "Attach a LatencyPayload to an RPC/Actor pair. The next time that RPC is executed on that Actor, the timings will be measured.\nYou must also send the OutContinuedLatencyPayload as a parameter in the RPC." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpatialLatencyTracer, nullptr, "ContinueLatencyTraceRPC", nullptr, nullptr, sizeof(SpatialLatencyTracer_eventContinueLatencyTraceRPC_Parms), Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged_Statics
	{
		struct SpatialLatencyTracer_eventContinueLatencyTraceTagged_Parms
		{
			UObject* WorldContextObject;
			const AActor* Actor;
			FString Tag;
			FString TraceDesc;
			FSpatialLatencyPayload LatencyPayload;
			FSpatialLatencyPayload OutContinuedLatencyPayload;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutContinuedLatencyPayload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LatencyPayload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatencyPayload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceDesc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TraceDesc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpatialLatencyTracer_eventContinueLatencyTraceTagged_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpatialLatencyTracer_eventContinueLatencyTraceTagged_Parms), &Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged_Statics::NewProp_OutContinuedLatencyPayload = { "OutContinuedLatencyPayload", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialLatencyTracer_eventContinueLatencyTraceTagged_Parms, OutContinuedLatencyPayload), Z_Construct_UScriptStruct_FSpatialLatencyPayload, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged_Statics::NewProp_LatencyPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged_Statics::NewProp_LatencyPayload = { "LatencyPayload", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialLatencyTracer_eventContinueLatencyTraceTagged_Parms, LatencyPayload), Z_Construct_UScriptStruct_FSpatialLatencyPayload, METADATA_PARAMS(Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged_Statics::NewProp_LatencyPayload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged_Statics::NewProp_LatencyPayload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged_Statics::NewProp_TraceDesc_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged_Statics::NewProp_TraceDesc = { "TraceDesc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialLatencyTracer_eventContinueLatencyTraceTagged_Parms, TraceDesc), METADATA_PARAMS(Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged_Statics::NewProp_TraceDesc_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged_Statics::NewProp_TraceDesc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialLatencyTracer_eventContinueLatencyTraceTagged_Parms, Tag), METADATA_PARAMS(Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged_Statics::NewProp_Tag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialLatencyTracer_eventContinueLatencyTraceTagged_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged_Statics::NewProp_Actor_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialLatencyTracer_eventContinueLatencyTraceTagged_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged_Statics::NewProp_OutContinuedLatencyPayload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged_Statics::NewProp_LatencyPayload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged_Statics::NewProp_TraceDesc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialOS" },
		{ "Comment", "// Store a LatencyPayload to an Tag/Actor pair. This payload will be stored internally until the user is ready to retrieve it.\n// Use RetrievePayload to retrieve the Payload\n" },
		{ "ModuleRelativePath", "Public/Utils/SpatialLatencyTracer.h" },
		{ "ToolTip", "Store a LatencyPayload to an Tag/Actor pair. This payload will be stored internally until the user is ready to retrieve it.\nUse RetrievePayload to retrieve the Payload" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpatialLatencyTracer, nullptr, "ContinueLatencyTraceTagged", nullptr, nullptr, sizeof(SpatialLatencyTracer_eventContinueLatencyTraceTagged_Parms), Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpatialLatencyTracer_Debug_SendTestTrace_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialLatencyTracer_Debug_SendTestTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialOS" },
		{ "Comment", "// Used for testing trace functionality, will send a debug trace in three parts from this worker\n" },
		{ "ModuleRelativePath", "Public/Utils/SpatialLatencyTracer.h" },
		{ "ToolTip", "Used for testing trace functionality, will send a debug trace in three parts from this worker" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialLatencyTracer_Debug_SendTestTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpatialLatencyTracer, nullptr, "Debug_SendTestTrace", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpatialLatencyTracer_Debug_SendTestTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialLatencyTracer_Debug_SendTestTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpatialLatencyTracer_Debug_SendTestTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpatialLatencyTracer_Debug_SendTestTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpatialLatencyTracer_EndLatencyTrace_Statics
	{
		struct SpatialLatencyTracer_eventEndLatencyTrace_Parms
		{
			UObject* WorldContextObject;
			FSpatialLatencyPayload LatencyPayLoad;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LatencyPayLoad_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatencyPayLoad;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USpatialLatencyTracer_EndLatencyTrace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpatialLatencyTracer_eventEndLatencyTrace_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpatialLatencyTracer_EndLatencyTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpatialLatencyTracer_eventEndLatencyTrace_Parms), &Z_Construct_UFunction_USpatialLatencyTracer_EndLatencyTrace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialLatencyTracer_EndLatencyTrace_Statics::NewProp_LatencyPayLoad_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpatialLatencyTracer_EndLatencyTrace_Statics::NewProp_LatencyPayLoad = { "LatencyPayLoad", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialLatencyTracer_eventEndLatencyTrace_Parms, LatencyPayLoad), Z_Construct_UScriptStruct_FSpatialLatencyPayload, METADATA_PARAMS(Z_Construct_UFunction_USpatialLatencyTracer_EndLatencyTrace_Statics::NewProp_LatencyPayLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialLatencyTracer_EndLatencyTrace_Statics::NewProp_LatencyPayLoad_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpatialLatencyTracer_EndLatencyTrace_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialLatencyTracer_eventEndLatencyTrace_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialLatencyTracer_EndLatencyTrace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialLatencyTracer_EndLatencyTrace_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialLatencyTracer_EndLatencyTrace_Statics::NewProp_LatencyPayLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialLatencyTracer_EndLatencyTrace_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialLatencyTracer_EndLatencyTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialOS" },
		{ "Comment", "// End a latency trace. This will terminate the trace, and can be called on multiple workers all operating on the same trace but the worker\n// that called BeginLatencyTrace must call this at some point to ensure correct e2e latency timings.\n" },
		{ "ModuleRelativePath", "Public/Utils/SpatialLatencyTracer.h" },
		{ "ToolTip", "End a latency trace. This will terminate the trace, and can be called on multiple workers all operating on the same trace but the worker\nthat called BeginLatencyTrace must call this at some point to ensure correct e2e latency timings." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialLatencyTracer_EndLatencyTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpatialLatencyTracer, nullptr, "EndLatencyTrace", nullptr, nullptr, sizeof(SpatialLatencyTracer_eventEndLatencyTrace_Parms), Z_Construct_UFunction_USpatialLatencyTracer_EndLatencyTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialLatencyTracer_EndLatencyTrace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpatialLatencyTracer_EndLatencyTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialLatencyTracer_EndLatencyTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpatialLatencyTracer_EndLatencyTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpatialLatencyTracer_EndLatencyTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpatialLatencyTracer_RegisterProject_Statics
	{
		struct SpatialLatencyTracer_eventRegisterProject_Parms
		{
			UObject* WorldContextObject;
			FString ProjectId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProjectId;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialLatencyTracer_RegisterProject_Statics::NewProp_ProjectId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpatialLatencyTracer_RegisterProject_Statics::NewProp_ProjectId = { "ProjectId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialLatencyTracer_eventRegisterProject_Parms, ProjectId), METADATA_PARAMS(Z_Construct_UFunction_USpatialLatencyTracer_RegisterProject_Statics::NewProp_ProjectId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialLatencyTracer_RegisterProject_Statics::NewProp_ProjectId_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpatialLatencyTracer_RegisterProject_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialLatencyTracer_eventRegisterProject_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialLatencyTracer_RegisterProject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialLatencyTracer_RegisterProject_Statics::NewProp_ProjectId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialLatencyTracer_RegisterProject_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialLatencyTracer_RegisterProject_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialOS" },
		{ "Comment", "// Call with your google project id. This must be called before latency trace calls are made.\n" },
		{ "ModuleRelativePath", "Public/Utils/SpatialLatencyTracer.h" },
		{ "ToolTip", "Call with your google project id. This must be called before latency trace calls are made." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialLatencyTracer_RegisterProject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpatialLatencyTracer, nullptr, "RegisterProject", nullptr, nullptr, sizeof(SpatialLatencyTracer_eventRegisterProject_Parms), Z_Construct_UFunction_USpatialLatencyTracer_RegisterProject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialLatencyTracer_RegisterProject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpatialLatencyTracer_RegisterProject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialLatencyTracer_RegisterProject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpatialLatencyTracer_RegisterProject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpatialLatencyTracer_RegisterProject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpatialLatencyTracer_RetrievePayload_Statics
	{
		struct SpatialLatencyTracer_eventRetrievePayload_Parms
		{
			UObject* WorldContextObject;
			const AActor* Actor;
			FString Tag;
			FSpatialLatencyPayload ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpatialLatencyTracer_RetrievePayload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialLatencyTracer_eventRetrievePayload_Parms, ReturnValue), Z_Construct_UScriptStruct_FSpatialLatencyPayload, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialLatencyTracer_RetrievePayload_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpatialLatencyTracer_RetrievePayload_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialLatencyTracer_eventRetrievePayload_Parms, Tag), METADATA_PARAMS(Z_Construct_UFunction_USpatialLatencyTracer_RetrievePayload_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialLatencyTracer_RetrievePayload_Statics::NewProp_Tag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialLatencyTracer_RetrievePayload_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpatialLatencyTracer_RetrievePayload_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialLatencyTracer_eventRetrievePayload_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USpatialLatencyTracer_RetrievePayload_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialLatencyTracer_RetrievePayload_Statics::NewProp_Actor_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpatialLatencyTracer_RetrievePayload_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialLatencyTracer_eventRetrievePayload_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialLatencyTracer_RetrievePayload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialLatencyTracer_RetrievePayload_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialLatencyTracer_RetrievePayload_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialLatencyTracer_RetrievePayload_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialLatencyTracer_RetrievePayload_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialLatencyTracer_RetrievePayload_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialOS" },
		{ "Comment", "// Returns a previously saved payload from ContinueLatencyTraceTagged\n" },
		{ "ModuleRelativePath", "Public/Utils/SpatialLatencyTracer.h" },
		{ "ToolTip", "Returns a previously saved payload from ContinueLatencyTraceTagged" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialLatencyTracer_RetrievePayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpatialLatencyTracer, nullptr, "RetrievePayload", nullptr, nullptr, sizeof(SpatialLatencyTracer_eventRetrievePayload_Parms), Z_Construct_UFunction_USpatialLatencyTracer_RetrievePayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialLatencyTracer_RetrievePayload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpatialLatencyTracer_RetrievePayload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialLatencyTracer_RetrievePayload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpatialLatencyTracer_RetrievePayload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpatialLatencyTracer_RetrievePayload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpatialLatencyTracer_SetTraceMetadata_Statics
	{
		struct SpatialLatencyTracer_eventSetTraceMetadata_Parms
		{
			UObject* WorldContextObject;
			FString NewTraceMetadata;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewTraceMetadata_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NewTraceMetadata;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USpatialLatencyTracer_SetTraceMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpatialLatencyTracer_eventSetTraceMetadata_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpatialLatencyTracer_SetTraceMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpatialLatencyTracer_eventSetTraceMetadata_Parms), &Z_Construct_UFunction_USpatialLatencyTracer_SetTraceMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialLatencyTracer_SetTraceMetadata_Statics::NewProp_NewTraceMetadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpatialLatencyTracer_SetTraceMetadata_Statics::NewProp_NewTraceMetadata = { "NewTraceMetadata", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialLatencyTracer_eventSetTraceMetadata_Parms, NewTraceMetadata), METADATA_PARAMS(Z_Construct_UFunction_USpatialLatencyTracer_SetTraceMetadata_Statics::NewProp_NewTraceMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialLatencyTracer_SetTraceMetadata_Statics::NewProp_NewTraceMetadata_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpatialLatencyTracer_SetTraceMetadata_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialLatencyTracer_eventSetTraceMetadata_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialLatencyTracer_SetTraceMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialLatencyTracer_SetTraceMetadata_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialLatencyTracer_SetTraceMetadata_Statics::NewProp_NewTraceMetadata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialLatencyTracer_SetTraceMetadata_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialLatencyTracer_SetTraceMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialOS" },
		{ "Comment", "// Set metadata string to be included in all span names. Resulting uploaded span names are of the format \"USER_SPECIFIED_NAME (METADATA : WORKER_ID)\".\n" },
		{ "ModuleRelativePath", "Public/Utils/SpatialLatencyTracer.h" },
		{ "ToolTip", "Set metadata string to be included in all span names. Resulting uploaded span names are of the format \"USER_SPECIFIED_NAME (METADATA : WORKER_ID)\"." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialLatencyTracer_SetTraceMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpatialLatencyTracer, nullptr, "SetTraceMetadata", nullptr, nullptr, sizeof(SpatialLatencyTracer_eventSetTraceMetadata_Parms), Z_Construct_UFunction_USpatialLatencyTracer_SetTraceMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialLatencyTracer_SetTraceMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpatialLatencyTracer_SetTraceMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialLatencyTracer_SetTraceMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpatialLatencyTracer_SetTraceMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpatialLatencyTracer_SetTraceMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USpatialLatencyTracer_NoRegister()
	{
		return USpatialLatencyTracer::StaticClass();
	}
	struct Z_Construct_UClass_USpatialLatencyTracer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpatialLatencyTracer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USpatialLatencyTracer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpatialLatencyTracer_BeginLatencyTrace, "BeginLatencyTrace" }, // 1124049566
		{ &Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceProperty, "ContinueLatencyTraceProperty" }, // 2646183160
		{ &Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceRPC, "ContinueLatencyTraceRPC" }, // 2672630427
		{ &Z_Construct_UFunction_USpatialLatencyTracer_ContinueLatencyTraceTagged, "ContinueLatencyTraceTagged" }, // 3667182287
		{ &Z_Construct_UFunction_USpatialLatencyTracer_Debug_SendTestTrace, "Debug_SendTestTrace" }, // 1812009218
		{ &Z_Construct_UFunction_USpatialLatencyTracer_EndLatencyTrace, "EndLatencyTrace" }, // 3328311176
		{ &Z_Construct_UFunction_USpatialLatencyTracer_RegisterProject, "RegisterProject" }, // 3345970247
		{ &Z_Construct_UFunction_USpatialLatencyTracer_RetrievePayload, "RetrievePayload" }, // 2411296951
		{ &Z_Construct_UFunction_USpatialLatencyTracer_SetTraceMetadata, "SetTraceMetadata" }, // 2099532023
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialLatencyTracer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utils/SpatialLatencyTracer.h" },
		{ "ModuleRelativePath", "Public/Utils/SpatialLatencyTracer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpatialLatencyTracer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpatialLatencyTracer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpatialLatencyTracer_Statics::ClassParams = {
		&USpatialLatencyTracer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		0x00000000u,
		METADATA_PARAMS(Z_Construct_UClass_USpatialLatencyTracer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialLatencyTracer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpatialLatencyTracer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpatialLatencyTracer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpatialLatencyTracer, 4021954228);
	template<> SPATIALGDK_API UClass* StaticClass<USpatialLatencyTracer>()
	{
		return USpatialLatencyTracer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpatialLatencyTracer(Z_Construct_UClass_USpatialLatencyTracer, &USpatialLatencyTracer::StaticClass, TEXT("/Script/SpatialGDK"), TEXT("USpatialLatencyTracer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpatialLatencyTracer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
