// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDK/Public/Utils/SpatialStatics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpatialStatics() {}
// Cross Module References
	SPATIALGDK_API UScriptStruct* Z_Construct_UScriptStruct_FLockingToken();
	UPackage* Z_Construct_UPackage__Script_SpatialGDK();
	SPATIALGDK_API UClass* Z_Construct_UClass_USpatialStatics_NoRegister();
	SPATIALGDK_API UClass* Z_Construct_UClass_USpatialStatics();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	SPATIALGDK_API UScriptStruct* Z_Construct_UScriptStruct_FDistanceFrequencyPair();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
class UScriptStruct* FLockingToken::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SPATIALGDK_API uint32 Get_Z_Construct_UScriptStruct_FLockingToken_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLockingToken, Z_Construct_UPackage__Script_SpatialGDK(), TEXT("LockingToken"), sizeof(FLockingToken), Get_Z_Construct_UScriptStruct_FLockingToken_Hash());
	}
	return Singleton;
}
template<> SPATIALGDK_API UScriptStruct* StaticStruct<FLockingToken>()
{
	return FLockingToken::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLockingToken(FLockingToken::StaticStruct, TEXT("/Script/SpatialGDK"), TEXT("LockingToken"), false, nullptr, nullptr);
static struct FScriptStruct_SpatialGDK_StaticRegisterNativesFLockingToken
{
	FScriptStruct_SpatialGDK_StaticRegisterNativesFLockingToken()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LockingToken")),new UScriptStruct::TCppStructOps<FLockingToken>);
	}
} ScriptStruct_SpatialGDK_StaticRegisterNativesFLockingToken;
	struct Z_Construct_UScriptStruct_FLockingToken_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Token;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLockingToken_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Utils/SpatialStatics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLockingToken_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLockingToken>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLockingToken_Statics::NewProp_Token_MetaData[] = {
		{ "Category", "SpatialGDK|Locking" },
		{ "ModuleRelativePath", "Public/Utils/SpatialStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FLockingToken_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLockingToken, Token), METADATA_PARAMS(Z_Construct_UScriptStruct_FLockingToken_Statics::NewProp_Token_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLockingToken_Statics::NewProp_Token_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLockingToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLockingToken_Statics::NewProp_Token,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLockingToken_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDK,
		nullptr,
		&NewStructOps,
		"LockingToken",
		sizeof(FLockingToken),
		alignof(FLockingToken),
		Z_Construct_UScriptStruct_FLockingToken_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLockingToken_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLockingToken_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLockingToken_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLockingToken()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLockingToken_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SpatialGDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LockingToken"), sizeof(FLockingToken), Get_Z_Construct_UScriptStruct_FLockingToken_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLockingToken_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLockingToken_Hash() { return 843664762U; }
	DEFINE_FUNCTION(USpatialStatics::execIsLocked)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USpatialStatics::IsLocked(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpatialStatics::execReleaseLock)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT(FLockingToken,Z_Param_LockToken);
		P_FINISH;
		P_NATIVE_BEGIN;
		USpatialStatics::ReleaseLock(Z_Param_Actor,Z_Param_LockToken);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpatialStatics::execAcquireLock)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FStrProperty,Z_Param_DebugString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLockingToken*)Z_Param__Result=USpatialStatics::AcquireLock(Z_Param_Actor,Z_Param_DebugString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpatialStatics::execGetActorEntityIdAsString)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USpatialStatics::GetActorEntityIdAsString(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpatialStatics::execEntityIdToString)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_EntityId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USpatialStatics::EntityIdToString(Z_Param_EntityId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpatialStatics::execGetActorEntityId)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=USpatialStatics::GetActorEntityId(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpatialStatics::execGetInspectorColorForWorkerName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_WorkerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=USpatialStatics::GetInspectorColorForWorkerName(Z_Param_WorkerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpatialStatics::execGetFullFrequencyNetCullDistanceRatio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USpatialStatics::GetFullFrequencyNetCullDistanceRatio();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpatialStatics::execGetNCDDistanceRatios)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FDistanceFrequencyPair>*)Z_Param__Result=USpatialStatics::GetNCDDistanceRatios();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpatialStatics::execGetWorkerFlag)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_InFlagName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutFlagValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USpatialStatics::GetWorkerFlag(Z_Param_WorldContextObject,Z_Param_InFlagName,Z_Param_Out_OutFlagValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpatialStatics::execPrintTextSpatial)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FTextProperty,Z_Param_InText);
		P_GET_UBOOL(Z_Param_bPrintToScreen);
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		USpatialStatics::PrintTextSpatial(Z_Param_WorldContextObject,Z_Param_InText,Z_Param_bPrintToScreen,Z_Param_TextColor,Z_Param_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpatialStatics::execPrintStringSpatial)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_InString);
		P_GET_UBOOL(Z_Param_bPrintToScreen);
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		USpatialStatics::PrintStringSpatial(Z_Param_WorldContextObject,Z_Param_InString,Z_Param_bPrintToScreen,Z_Param_TextColor,Z_Param_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpatialStatics::execIsActorGroupOwnerForClass)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USpatialStatics::IsActorGroupOwnerForClass(Z_Param_WorldContextObject,Z_Param_ActorClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpatialStatics::execIsActorGroupOwnerForActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USpatialStatics::IsActorGroupOwnerForActor(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpatialStatics::execIsSpatialOffloadingEnabled)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USpatialStatics::IsSpatialOffloadingEnabled(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpatialStatics::execIsSpatialMultiWorkerEnabled)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USpatialStatics::IsSpatialMultiWorkerEnabled(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpatialStatics::execIsSpatialNetworkingEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USpatialStatics::IsSpatialNetworkingEnabled();
		P_NATIVE_END;
	}
	void USpatialStatics::StaticRegisterNativesUSpatialStatics()
	{
		UClass* Class = USpatialStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AcquireLock", &USpatialStatics::execAcquireLock },
			{ "EntityIdToString", &USpatialStatics::execEntityIdToString },
			{ "GetActorEntityId", &USpatialStatics::execGetActorEntityId },
			{ "GetActorEntityIdAsString", &USpatialStatics::execGetActorEntityIdAsString },
			{ "GetFullFrequencyNetCullDistanceRatio", &USpatialStatics::execGetFullFrequencyNetCullDistanceRatio },
			{ "GetInspectorColorForWorkerName", &USpatialStatics::execGetInspectorColorForWorkerName },
			{ "GetNCDDistanceRatios", &USpatialStatics::execGetNCDDistanceRatios },
			{ "GetWorkerFlag", &USpatialStatics::execGetWorkerFlag },
			{ "IsActorGroupOwnerForActor", &USpatialStatics::execIsActorGroupOwnerForActor },
			{ "IsActorGroupOwnerForClass", &USpatialStatics::execIsActorGroupOwnerForClass },
			{ "IsLocked", &USpatialStatics::execIsLocked },
			{ "IsSpatialMultiWorkerEnabled", &USpatialStatics::execIsSpatialMultiWorkerEnabled },
			{ "IsSpatialNetworkingEnabled", &USpatialStatics::execIsSpatialNetworkingEnabled },
			{ "IsSpatialOffloadingEnabled", &USpatialStatics::execIsSpatialOffloadingEnabled },
			{ "PrintStringSpatial", &USpatialStatics::execPrintStringSpatial },
			{ "PrintTextSpatial", &USpatialStatics::execPrintTextSpatial },
			{ "ReleaseLock", &USpatialStatics::execReleaseLock },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpatialStatics_AcquireLock_Statics
	{
		struct SpatialStatics_eventAcquireLock_Parms
		{
			AActor* Actor;
			FString DebugString;
			FLockingToken ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DebugString;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpatialStatics_AcquireLock_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialStatics_eventAcquireLock_Parms, ReturnValue), Z_Construct_UScriptStruct_FLockingToken, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialStatics_AcquireLock_Statics::NewProp_DebugString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpatialStatics_AcquireLock_Statics::NewProp_DebugString = { "DebugString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialStatics_eventAcquireLock_Parms, DebugString), METADATA_PARAMS(Z_Construct_UFunction_USpatialStatics_AcquireLock_Statics::NewProp_DebugString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_AcquireLock_Statics::NewProp_DebugString_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpatialStatics_AcquireLock_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialStatics_eventAcquireLock_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialStatics_AcquireLock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_AcquireLock_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_AcquireLock_Statics::NewProp_DebugString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_AcquireLock_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialStatics_AcquireLock_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialGDK|Locking" },
		{ "Comment", "/**\n\x09 * AcquireLock should only be called for an authoritative Actor from a server.\n\x09 * If Spatial networking or multi-worker is disabled, this will return an invalid locking token.\n\x09 */" },
		{ "CPP_Default_DebugString", "" },
		{ "ModuleRelativePath", "Public/Utils/SpatialStatics.h" },
		{ "ToolTip", "AcquireLock should only be called for an authoritative Actor from a server.\nIf Spatial networking or multi-worker is disabled, this will return an invalid locking token." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialStatics_AcquireLock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpatialStatics, nullptr, "AcquireLock", nullptr, nullptr, sizeof(SpatialStatics_eventAcquireLock_Parms), Z_Construct_UFunction_USpatialStatics_AcquireLock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_AcquireLock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpatialStatics_AcquireLock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_AcquireLock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpatialStatics_AcquireLock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpatialStatics_AcquireLock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpatialStatics_EntityIdToString_Statics
	{
		struct SpatialStatics_eventEntityIdToString_Parms
		{
			int64 EntityId;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_EntityId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpatialStatics_EntityIdToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialStatics_eventEntityIdToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USpatialStatics_EntityIdToString_Statics::NewProp_EntityId = { "EntityId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialStatics_eventEntityIdToString_Parms, EntityId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialStatics_EntityIdToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_EntityIdToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_EntityIdToString_Statics::NewProp_EntityId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialStatics_EntityIdToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialOS" },
		{ "Comment", "/**\n\x09 * Returns the entity ID as a string if the ID is valid, or \"Invalid\" if not\n\x09 */" },
		{ "ModuleRelativePath", "Public/Utils/SpatialStatics.h" },
		{ "ToolTip", "Returns the entity ID as a string if the ID is valid, or \"Invalid\" if not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialStatics_EntityIdToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpatialStatics, nullptr, "EntityIdToString", nullptr, nullptr, sizeof(SpatialStatics_eventEntityIdToString_Parms), Z_Construct_UFunction_USpatialStatics_EntityIdToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_EntityIdToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpatialStatics_EntityIdToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_EntityIdToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpatialStatics_EntityIdToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpatialStatics_EntityIdToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpatialStatics_GetActorEntityId_Statics
	{
		struct SpatialStatics_eventGetActorEntityId_Parms
		{
			const AActor* Actor;
			int64 ReturnValue;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USpatialStatics_GetActorEntityId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialStatics_eventGetActorEntityId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialStatics_GetActorEntityId_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpatialStatics_GetActorEntityId_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialStatics_eventGetActorEntityId_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USpatialStatics_GetActorEntityId_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_GetActorEntityId_Statics::NewProp_Actor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialStatics_GetActorEntityId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_GetActorEntityId_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_GetActorEntityId_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialStatics_GetActorEntityId_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialOS" },
		{ "Comment", "/**\n\x09 * Returns the entity ID of a given actor, or 0 if we are not using spatial networking or Actor is nullptr.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Utils/SpatialStatics.h" },
		{ "ToolTip", "Returns the entity ID of a given actor, or 0 if we are not using spatial networking or Actor is nullptr." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialStatics_GetActorEntityId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpatialStatics, nullptr, "GetActorEntityId", nullptr, nullptr, sizeof(SpatialStatics_eventGetActorEntityId_Parms), Z_Construct_UFunction_USpatialStatics_GetActorEntityId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_GetActorEntityId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpatialStatics_GetActorEntityId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_GetActorEntityId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpatialStatics_GetActorEntityId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpatialStatics_GetActorEntityId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpatialStatics_GetActorEntityIdAsString_Statics
	{
		struct SpatialStatics_eventGetActorEntityIdAsString_Parms
		{
			const AActor* Actor;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpatialStatics_GetActorEntityIdAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialStatics_eventGetActorEntityIdAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialStatics_GetActorEntityIdAsString_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpatialStatics_GetActorEntityIdAsString_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialStatics_eventGetActorEntityIdAsString_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USpatialStatics_GetActorEntityIdAsString_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_GetActorEntityIdAsString_Statics::NewProp_Actor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialStatics_GetActorEntityIdAsString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_GetActorEntityIdAsString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_GetActorEntityIdAsString_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialStatics_GetActorEntityIdAsString_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialOS" },
		{ "Comment", "/**\n\x09 * Returns the entity ID of a given actor as a string, or \"Invalid\" if we are not using spatial networking or Actor is nullptr.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Utils/SpatialStatics.h" },
		{ "ToolTip", "Returns the entity ID of a given actor as a string, or \"Invalid\" if we are not using spatial networking or Actor is nullptr." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialStatics_GetActorEntityIdAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpatialStatics, nullptr, "GetActorEntityIdAsString", nullptr, nullptr, sizeof(SpatialStatics_eventGetActorEntityIdAsString_Parms), Z_Construct_UFunction_USpatialStatics_GetActorEntityIdAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_GetActorEntityIdAsString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpatialStatics_GetActorEntityIdAsString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_GetActorEntityIdAsString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpatialStatics_GetActorEntityIdAsString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpatialStatics_GetActorEntityIdAsString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpatialStatics_GetFullFrequencyNetCullDistanceRatio_Statics
	{
		struct SpatialStatics_eventGetFullFrequencyNetCullDistanceRatio_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpatialStatics_GetFullFrequencyNetCullDistanceRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialStatics_eventGetFullFrequencyNetCullDistanceRatio_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialStatics_GetFullFrequencyNetCullDistanceRatio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_GetFullFrequencyNetCullDistanceRatio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialStatics_GetFullFrequencyNetCullDistanceRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialOS" },
		{ "Comment", "/**\n\x09 * Returns the full frequency net cull distance ratio used in client qbi-f\n\x09 */" },
		{ "ModuleRelativePath", "Public/Utils/SpatialStatics.h" },
		{ "ToolTip", "Returns the full frequency net cull distance ratio used in client qbi-f" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialStatics_GetFullFrequencyNetCullDistanceRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpatialStatics, nullptr, "GetFullFrequencyNetCullDistanceRatio", nullptr, nullptr, sizeof(SpatialStatics_eventGetFullFrequencyNetCullDistanceRatio_Parms), Z_Construct_UFunction_USpatialStatics_GetFullFrequencyNetCullDistanceRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_GetFullFrequencyNetCullDistanceRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpatialStatics_GetFullFrequencyNetCullDistanceRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_GetFullFrequencyNetCullDistanceRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpatialStatics_GetFullFrequencyNetCullDistanceRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpatialStatics_GetFullFrequencyNetCullDistanceRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpatialStatics_GetInspectorColorForWorkerName_Statics
	{
		struct SpatialStatics_eventGetInspectorColorForWorkerName_Parms
		{
			FString WorkerName;
			FColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorkerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WorkerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpatialStatics_GetInspectorColorForWorkerName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialStatics_eventGetInspectorColorForWorkerName_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialStatics_GetInspectorColorForWorkerName_Statics::NewProp_WorkerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpatialStatics_GetInspectorColorForWorkerName_Statics::NewProp_WorkerName = { "WorkerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialStatics_eventGetInspectorColorForWorkerName_Parms, WorkerName), METADATA_PARAMS(Z_Construct_UFunction_USpatialStatics_GetInspectorColorForWorkerName_Statics::NewProp_WorkerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_GetInspectorColorForWorkerName_Statics::NewProp_WorkerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialStatics_GetInspectorColorForWorkerName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_GetInspectorColorForWorkerName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_GetInspectorColorForWorkerName_Statics::NewProp_WorkerName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialStatics_GetInspectorColorForWorkerName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialOS" },
		{ "Comment", "/**\n\x09 * Returns the inspector colour for the given worker name.\n\x09 * Argument expected in the form: UnrealWorker1a2s3d4f...\n\x09 */" },
		{ "ModuleRelativePath", "Public/Utils/SpatialStatics.h" },
		{ "ToolTip", "Returns the inspector colour for the given worker name.\nArgument expected in the form: UnrealWorker1a2s3d4f..." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialStatics_GetInspectorColorForWorkerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpatialStatics, nullptr, "GetInspectorColorForWorkerName", nullptr, nullptr, sizeof(SpatialStatics_eventGetInspectorColorForWorkerName_Parms), Z_Construct_UFunction_USpatialStatics_GetInspectorColorForWorkerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_GetInspectorColorForWorkerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpatialStatics_GetInspectorColorForWorkerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_GetInspectorColorForWorkerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpatialStatics_GetInspectorColorForWorkerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpatialStatics_GetInspectorColorForWorkerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpatialStatics_GetNCDDistanceRatios_Statics
	{
		struct SpatialStatics_eventGetNCDDistanceRatios_Parms
		{
			TArray<FDistanceFrequencyPair> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USpatialStatics_GetNCDDistanceRatios_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialStatics_eventGetNCDDistanceRatios_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpatialStatics_GetNCDDistanceRatios_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDistanceFrequencyPair, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialStatics_GetNCDDistanceRatios_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_GetNCDDistanceRatios_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_GetNCDDistanceRatios_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialStatics_GetNCDDistanceRatios_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialOS" },
		{ "Comment", "/**\n\x09 * Returns the Net Cull Distance distance/frequency pairs used in client qbi-f\n\x09 */" },
		{ "ModuleRelativePath", "Public/Utils/SpatialStatics.h" },
		{ "ToolTip", "Returns the Net Cull Distance distance/frequency pairs used in client qbi-f" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialStatics_GetNCDDistanceRatios_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpatialStatics, nullptr, "GetNCDDistanceRatios", nullptr, nullptr, sizeof(SpatialStatics_eventGetNCDDistanceRatios_Parms), Z_Construct_UFunction_USpatialStatics_GetNCDDistanceRatios_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_GetNCDDistanceRatios_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpatialStatics_GetNCDDistanceRatios_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_GetNCDDistanceRatios_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpatialStatics_GetNCDDistanceRatios()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpatialStatics_GetNCDDistanceRatios_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpatialStatics_GetWorkerFlag_Statics
	{
		struct SpatialStatics_eventGetWorkerFlag_Parms
		{
			const UObject* WorldContextObject;
			FString InFlagName;
			FString OutFlagValue;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutFlagValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFlagName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InFlagName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USpatialStatics_GetWorkerFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpatialStatics_eventGetWorkerFlag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpatialStatics_GetWorkerFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpatialStatics_eventGetWorkerFlag_Parms), &Z_Construct_UFunction_USpatialStatics_GetWorkerFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpatialStatics_GetWorkerFlag_Statics::NewProp_OutFlagValue = { "OutFlagValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialStatics_eventGetWorkerFlag_Parms, OutFlagValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialStatics_GetWorkerFlag_Statics::NewProp_InFlagName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpatialStatics_GetWorkerFlag_Statics::NewProp_InFlagName = { "InFlagName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialStatics_eventGetWorkerFlag_Parms, InFlagName), METADATA_PARAMS(Z_Construct_UFunction_USpatialStatics_GetWorkerFlag_Statics::NewProp_InFlagName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_GetWorkerFlag_Statics::NewProp_InFlagName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialStatics_GetWorkerFlag_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpatialStatics_GetWorkerFlag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialStatics_eventGetWorkerFlag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USpatialStatics_GetWorkerFlag_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_GetWorkerFlag_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialStatics_GetWorkerFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_GetWorkerFlag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_GetWorkerFlag_Statics::NewProp_OutFlagValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_GetWorkerFlag_Statics::NewProp_InFlagName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_GetWorkerFlag_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialStatics_GetWorkerFlag_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialOS" },
		{ "Comment", "/**\n\x09 * Returns true if worker flag with the given name was found.\n\x09 * Gets value of a worker flag.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Utils/SpatialStatics.h" },
		{ "ToolTip", "Returns true if worker flag with the given name was found.\nGets value of a worker flag." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialStatics_GetWorkerFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpatialStatics, nullptr, "GetWorkerFlag", nullptr, nullptr, sizeof(SpatialStatics_eventGetWorkerFlag_Parms), Z_Construct_UFunction_USpatialStatics_GetWorkerFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_GetWorkerFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpatialStatics_GetWorkerFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_GetWorkerFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpatialStatics_GetWorkerFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpatialStatics_GetWorkerFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForActor_Statics
	{
		struct SpatialStatics_eventIsActorGroupOwnerForActor_Parms
		{
			const AActor* Actor;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpatialStatics_eventIsActorGroupOwnerForActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpatialStatics_eventIsActorGroupOwnerForActor_Parms), &Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForActor_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialStatics_eventIsActorGroupOwnerForActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForActor_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForActor_Statics::NewProp_Actor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForActor_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialOS|Offloading" },
		{ "Comment", "/**\n\x09 * Returns true if the current Worker Type owns the Actor Group this Actor belongs to.\n\x09 * Equivalent to World->GetNetMode() != NM_Client when Spatial Networking is disabled.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Utils/SpatialStatics.h" },
		{ "ToolTip", "Returns true if the current Worker Type owns the Actor Group this Actor belongs to.\nEquivalent to World->GetNetMode() != NM_Client when Spatial Networking is disabled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpatialStatics, nullptr, "IsActorGroupOwnerForActor", nullptr, nullptr, sizeof(SpatialStatics_eventIsActorGroupOwnerForActor_Parms), Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForClass_Statics
	{
		struct SpatialStatics_eventIsActorGroupOwnerForClass_Parms
		{
			const UObject* WorldContextObject;
			const TSubclassOf<AActor>  ActorClass;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpatialStatics_eventIsActorGroupOwnerForClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpatialStatics_eventIsActorGroupOwnerForClass_Parms), &Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForClass_Statics::NewProp_ActorClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForClass_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialStatics_eventIsActorGroupOwnerForClass_Parms, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForClass_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForClass_Statics::NewProp_ActorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForClass_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForClass_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialStatics_eventIsActorGroupOwnerForClass_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForClass_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForClass_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForClass_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForClass_Statics::NewProp_ActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForClass_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialOS|Offloading" },
		{ "Comment", "/**\n\x09 * Returns true if the current Worker Type owns the Actor Group this Actor Class belongs to.\n\x09 * Equivalent to World->GetNetMode() != NM_Client when Spatial Networking is disabled.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Utils/SpatialStatics.h" },
		{ "ToolTip", "Returns true if the current Worker Type owns the Actor Group this Actor Class belongs to.\nEquivalent to World->GetNetMode() != NM_Client when Spatial Networking is disabled." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpatialStatics, nullptr, "IsActorGroupOwnerForClass", nullptr, nullptr, sizeof(SpatialStatics_eventIsActorGroupOwnerForClass_Parms), Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpatialStatics_IsLocked_Statics
	{
		struct SpatialStatics_eventIsLocked_Parms
		{
			const AActor* Actor;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USpatialStatics_IsLocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpatialStatics_eventIsLocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpatialStatics_IsLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpatialStatics_eventIsLocked_Parms), &Z_Construct_UFunction_USpatialStatics_IsLocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialStatics_IsLocked_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpatialStatics_IsLocked_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialStatics_eventIsLocked_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USpatialStatics_IsLocked_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_IsLocked_Statics::NewProp_Actor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialStatics_IsLocked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_IsLocked_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_IsLocked_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialStatics_IsLocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialGDK|Locking" },
		{ "Comment", "/**\n\x09* IsLocked should only be called for an authoritative Actor from a server.\n\x09* If Spatial networking or multi-worker is disabled, this will early.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Utils/SpatialStatics.h" },
		{ "ToolTip", "IsLocked should only be called for an authoritative Actor from a server.\nIf Spatial networking or multi-worker is disabled, this will early." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialStatics_IsLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpatialStatics, nullptr, "IsLocked", nullptr, nullptr, sizeof(SpatialStatics_eventIsLocked_Parms), Z_Construct_UFunction_USpatialStatics_IsLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_IsLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpatialStatics_IsLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_IsLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpatialStatics_IsLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpatialStatics_IsLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpatialStatics_IsSpatialMultiWorkerEnabled_Statics
	{
		struct SpatialStatics_eventIsSpatialMultiWorkerEnabled_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USpatialStatics_IsSpatialMultiWorkerEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpatialStatics_eventIsSpatialMultiWorkerEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpatialStatics_IsSpatialMultiWorkerEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpatialStatics_eventIsSpatialMultiWorkerEnabled_Parms), &Z_Construct_UFunction_USpatialStatics_IsSpatialMultiWorkerEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialStatics_IsSpatialMultiWorkerEnabled_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpatialStatics_IsSpatialMultiWorkerEnabled_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialStatics_eventIsSpatialMultiWorkerEnabled_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USpatialStatics_IsSpatialMultiWorkerEnabled_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_IsSpatialMultiWorkerEnabled_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialStatics_IsSpatialMultiWorkerEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_IsSpatialMultiWorkerEnabled_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_IsSpatialMultiWorkerEnabled_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialStatics_IsSpatialMultiWorkerEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialOS" },
		{ "Comment", "/**\n\x09* Returns true if spatial networking and multi worker are enabled.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Utils/SpatialStatics.h" },
		{ "ToolTip", "Returns true if spatial networking and multi worker are enabled." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialStatics_IsSpatialMultiWorkerEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpatialStatics, nullptr, "IsSpatialMultiWorkerEnabled", nullptr, nullptr, sizeof(SpatialStatics_eventIsSpatialMultiWorkerEnabled_Parms), Z_Construct_UFunction_USpatialStatics_IsSpatialMultiWorkerEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_IsSpatialMultiWorkerEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpatialStatics_IsSpatialMultiWorkerEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_IsSpatialMultiWorkerEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpatialStatics_IsSpatialMultiWorkerEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpatialStatics_IsSpatialMultiWorkerEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpatialStatics_IsSpatialNetworkingEnabled_Statics
	{
		struct SpatialStatics_eventIsSpatialNetworkingEnabled_Parms
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
	void Z_Construct_UFunction_USpatialStatics_IsSpatialNetworkingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpatialStatics_eventIsSpatialNetworkingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpatialStatics_IsSpatialNetworkingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpatialStatics_eventIsSpatialNetworkingEnabled_Parms), &Z_Construct_UFunction_USpatialStatics_IsSpatialNetworkingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialStatics_IsSpatialNetworkingEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_IsSpatialNetworkingEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialStatics_IsSpatialNetworkingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialOS" },
		{ "Comment", "/**\n\x09 * Returns true if SpatialOS Networking is enabled.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Utils/SpatialStatics.h" },
		{ "ToolTip", "Returns true if SpatialOS Networking is enabled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialStatics_IsSpatialNetworkingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpatialStatics, nullptr, "IsSpatialNetworkingEnabled", nullptr, nullptr, sizeof(SpatialStatics_eventIsSpatialNetworkingEnabled_Parms), Z_Construct_UFunction_USpatialStatics_IsSpatialNetworkingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_IsSpatialNetworkingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpatialStatics_IsSpatialNetworkingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_IsSpatialNetworkingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpatialStatics_IsSpatialNetworkingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpatialStatics_IsSpatialNetworkingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpatialStatics_IsSpatialOffloadingEnabled_Statics
	{
		struct SpatialStatics_eventIsSpatialOffloadingEnabled_Parms
		{
			const UWorld* World;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USpatialStatics_IsSpatialOffloadingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpatialStatics_eventIsSpatialOffloadingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpatialStatics_IsSpatialOffloadingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpatialStatics_eventIsSpatialOffloadingEnabled_Parms), &Z_Construct_UFunction_USpatialStatics_IsSpatialOffloadingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialStatics_IsSpatialOffloadingEnabled_Statics::NewProp_World_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpatialStatics_IsSpatialOffloadingEnabled_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialStatics_eventIsSpatialOffloadingEnabled_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USpatialStatics_IsSpatialOffloadingEnabled_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_IsSpatialOffloadingEnabled_Statics::NewProp_World_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialStatics_IsSpatialOffloadingEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_IsSpatialOffloadingEnabled_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_IsSpatialOffloadingEnabled_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialStatics_IsSpatialOffloadingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialOS|Offloading" },
		{ "Comment", "/**\n\x09* Returns true if there is more than one worker layer in the SpatialWorldSettings and IsMultiWorkerEnabled.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Utils/SpatialStatics.h" },
		{ "ToolTip", "Returns true if there is more than one worker layer in the SpatialWorldSettings and IsMultiWorkerEnabled." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialStatics_IsSpatialOffloadingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpatialStatics, nullptr, "IsSpatialOffloadingEnabled", nullptr, nullptr, sizeof(SpatialStatics_eventIsSpatialOffloadingEnabled_Parms), Z_Construct_UFunction_USpatialStatics_IsSpatialOffloadingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_IsSpatialOffloadingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpatialStatics_IsSpatialOffloadingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_IsSpatialOffloadingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpatialStatics_IsSpatialOffloadingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpatialStatics_IsSpatialOffloadingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpatialStatics_PrintStringSpatial_Statics
	{
		struct SpatialStatics_eventPrintStringSpatial_Parms
		{
			UObject* WorldContextObject;
			FString InString;
			bool bPrintToScreen;
			FLinearColor TextColor;
			float Duration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor;
		static void NewProp_bPrintToScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrintToScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InString;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpatialStatics_PrintStringSpatial_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialStatics_eventPrintStringSpatial_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpatialStatics_PrintStringSpatial_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialStatics_eventPrintStringSpatial_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USpatialStatics_PrintStringSpatial_Statics::NewProp_bPrintToScreen_SetBit(void* Obj)
	{
		((SpatialStatics_eventPrintStringSpatial_Parms*)Obj)->bPrintToScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpatialStatics_PrintStringSpatial_Statics::NewProp_bPrintToScreen = { "bPrintToScreen", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpatialStatics_eventPrintStringSpatial_Parms), &Z_Construct_UFunction_USpatialStatics_PrintStringSpatial_Statics::NewProp_bPrintToScreen_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialStatics_PrintStringSpatial_Statics::NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpatialStatics_PrintStringSpatial_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialStatics_eventPrintStringSpatial_Parms, InString), METADATA_PARAMS(Z_Construct_UFunction_USpatialStatics_PrintStringSpatial_Statics::NewProp_InString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_PrintStringSpatial_Statics::NewProp_InString_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpatialStatics_PrintStringSpatial_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialStatics_eventPrintStringSpatial_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialStatics_PrintStringSpatial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_PrintStringSpatial_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_PrintStringSpatial_Statics::NewProp_TextColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_PrintStringSpatial_Statics::NewProp_bPrintToScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_PrintStringSpatial_Statics::NewProp_InString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_PrintStringSpatial_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialStatics_PrintStringSpatial_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Utilities|String" },
		{ "Comment", "/**\n\x09 * Functionally the same as the native Unreal PrintString but also logs to the spatial runtime.\n\x09 */" },
		{ "CPP_Default_bPrintToScreen", "true" },
		{ "CPP_Default_Duration", "2.000000" },
		{ "CPP_Default_InString", "Hello" },
		{ "CPP_Default_TextColor", "(R=0.000000,G=0.660000,B=1.000000,A=1.000000)" },
		{ "DevelopmentOnly", "" },
		{ "Keywords", "log print spatial" },
		{ "ModuleRelativePath", "Public/Utils/SpatialStatics.h" },
		{ "ToolTip", "Functionally the same as the native Unreal PrintString but also logs to the spatial runtime." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialStatics_PrintStringSpatial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpatialStatics, nullptr, "PrintStringSpatial", nullptr, nullptr, sizeof(SpatialStatics_eventPrintStringSpatial_Parms), Z_Construct_UFunction_USpatialStatics_PrintStringSpatial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_PrintStringSpatial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpatialStatics_PrintStringSpatial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_PrintStringSpatial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpatialStatics_PrintStringSpatial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpatialStatics_PrintStringSpatial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpatialStatics_PrintTextSpatial_Statics
	{
		struct SpatialStatics_eventPrintTextSpatial_Parms
		{
			UObject* WorldContextObject;
			FText InText;
			bool bPrintToScreen;
			FLinearColor TextColor;
			float Duration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor;
		static void NewProp_bPrintToScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrintToScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpatialStatics_PrintTextSpatial_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialStatics_eventPrintTextSpatial_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpatialStatics_PrintTextSpatial_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialStatics_eventPrintTextSpatial_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USpatialStatics_PrintTextSpatial_Statics::NewProp_bPrintToScreen_SetBit(void* Obj)
	{
		((SpatialStatics_eventPrintTextSpatial_Parms*)Obj)->bPrintToScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpatialStatics_PrintTextSpatial_Statics::NewProp_bPrintToScreen = { "bPrintToScreen", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpatialStatics_eventPrintTextSpatial_Parms), &Z_Construct_UFunction_USpatialStatics_PrintTextSpatial_Statics::NewProp_bPrintToScreen_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialStatics_PrintTextSpatial_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USpatialStatics_PrintTextSpatial_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialStatics_eventPrintTextSpatial_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_USpatialStatics_PrintTextSpatial_Statics::NewProp_InText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_PrintTextSpatial_Statics::NewProp_InText_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpatialStatics_PrintTextSpatial_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialStatics_eventPrintTextSpatial_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialStatics_PrintTextSpatial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_PrintTextSpatial_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_PrintTextSpatial_Statics::NewProp_TextColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_PrintTextSpatial_Statics::NewProp_bPrintToScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_PrintTextSpatial_Statics::NewProp_InText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_PrintTextSpatial_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialStatics_PrintTextSpatial_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Utilities|Text" },
		{ "Comment", "/**\n\x09 * Functionally the same as the native Unreal PrintText but also logs to the spatial runtime.\n\x09 */" },
		{ "CPP_Default_bPrintToScreen", "true" },
		{ "CPP_Default_Duration", "2.000000" },
		{ "CPP_Default_InText", "INVTEXT(\"Hello\")" },
		{ "CPP_Default_TextColor", "(R=0.000000,G=0.660000,B=1.000000,A=1.000000)" },
		{ "DevelopmentOnly", "" },
		{ "Keywords", "log spatial" },
		{ "ModuleRelativePath", "Public/Utils/SpatialStatics.h" },
		{ "ToolTip", "Functionally the same as the native Unreal PrintText but also logs to the spatial runtime." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialStatics_PrintTextSpatial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpatialStatics, nullptr, "PrintTextSpatial", nullptr, nullptr, sizeof(SpatialStatics_eventPrintTextSpatial_Parms), Z_Construct_UFunction_USpatialStatics_PrintTextSpatial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_PrintTextSpatial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpatialStatics_PrintTextSpatial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_PrintTextSpatial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpatialStatics_PrintTextSpatial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpatialStatics_PrintTextSpatial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpatialStatics_ReleaseLock_Statics
	{
		struct SpatialStatics_eventReleaseLock_Parms
		{
			const AActor* Actor;
			FLockingToken LockToken;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LockToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpatialStatics_ReleaseLock_Statics::NewProp_LockToken = { "LockToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialStatics_eventReleaseLock_Parms, LockToken), Z_Construct_UScriptStruct_FLockingToken, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialStatics_ReleaseLock_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpatialStatics_ReleaseLock_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpatialStatics_eventReleaseLock_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USpatialStatics_ReleaseLock_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_ReleaseLock_Statics::NewProp_Actor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpatialStatics_ReleaseLock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_ReleaseLock_Statics::NewProp_LockToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpatialStatics_ReleaseLock_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpatialStatics_ReleaseLock_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialGDK|Locking" },
		{ "Comment", "/**\n\x09* ReleaseLock should only be called for an authoritative Actor from a server where the LockToken argument\n\x09* was previously returned from a call to AcquireLock.\n\x09* If Spatial networking or multi-worker is disabled, this will early.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Utils/SpatialStatics.h" },
		{ "ToolTip", "ReleaseLock should only be called for an authoritative Actor from a server where the LockToken argument\nwas previously returned from a call to AcquireLock.\nIf Spatial networking or multi-worker is disabled, this will early." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpatialStatics_ReleaseLock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpatialStatics, nullptr, "ReleaseLock", nullptr, nullptr, sizeof(SpatialStatics_eventReleaseLock_Parms), Z_Construct_UFunction_USpatialStatics_ReleaseLock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_ReleaseLock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpatialStatics_ReleaseLock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpatialStatics_ReleaseLock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpatialStatics_ReleaseLock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpatialStatics_ReleaseLock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USpatialStatics_NoRegister()
	{
		return USpatialStatics::StaticClass();
	}
	struct Z_Construct_UClass_USpatialStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpatialStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USpatialStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpatialStatics_AcquireLock, "AcquireLock" }, // 2321856756
		{ &Z_Construct_UFunction_USpatialStatics_EntityIdToString, "EntityIdToString" }, // 1555823457
		{ &Z_Construct_UFunction_USpatialStatics_GetActorEntityId, "GetActorEntityId" }, // 877247966
		{ &Z_Construct_UFunction_USpatialStatics_GetActorEntityIdAsString, "GetActorEntityIdAsString" }, // 1422224173
		{ &Z_Construct_UFunction_USpatialStatics_GetFullFrequencyNetCullDistanceRatio, "GetFullFrequencyNetCullDistanceRatio" }, // 3120181324
		{ &Z_Construct_UFunction_USpatialStatics_GetInspectorColorForWorkerName, "GetInspectorColorForWorkerName" }, // 2126875188
		{ &Z_Construct_UFunction_USpatialStatics_GetNCDDistanceRatios, "GetNCDDistanceRatios" }, // 1846437993
		{ &Z_Construct_UFunction_USpatialStatics_GetWorkerFlag, "GetWorkerFlag" }, // 4018406041
		{ &Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForActor, "IsActorGroupOwnerForActor" }, // 4060996403
		{ &Z_Construct_UFunction_USpatialStatics_IsActorGroupOwnerForClass, "IsActorGroupOwnerForClass" }, // 2758413021
		{ &Z_Construct_UFunction_USpatialStatics_IsLocked, "IsLocked" }, // 3708244281
		{ &Z_Construct_UFunction_USpatialStatics_IsSpatialMultiWorkerEnabled, "IsSpatialMultiWorkerEnabled" }, // 1686496772
		{ &Z_Construct_UFunction_USpatialStatics_IsSpatialNetworkingEnabled, "IsSpatialNetworkingEnabled" }, // 1956546716
		{ &Z_Construct_UFunction_USpatialStatics_IsSpatialOffloadingEnabled, "IsSpatialOffloadingEnabled" }, // 3525304264
		{ &Z_Construct_UFunction_USpatialStatics_PrintStringSpatial, "PrintStringSpatial" }, // 2065832246
		{ &Z_Construct_UFunction_USpatialStatics_PrintTextSpatial, "PrintTextSpatial" }, // 2451949104
		{ &Z_Construct_UFunction_USpatialStatics_ReleaseLock, "ReleaseLock" }, // 2360851452
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpatialStatics_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Utils/SpatialStatics.h" },
		{ "ModuleRelativePath", "Public/Utils/SpatialStatics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpatialStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpatialStatics>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpatialStatics_Statics::ClassParams = {
		&USpatialStatics::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USpatialStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpatialStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpatialStatics()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpatialStatics_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpatialStatics, 772073488);
	template<> SPATIALGDK_API UClass* StaticClass<USpatialStatics>()
	{
		return USpatialStatics::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpatialStatics(Z_Construct_UClass_USpatialStatics, &USpatialStatics::StaticClass, TEXT("/Script/SpatialGDK"), TEXT("USpatialStatics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpatialStatics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
