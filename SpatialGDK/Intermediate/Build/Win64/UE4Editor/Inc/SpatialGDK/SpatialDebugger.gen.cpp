// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDK/Public/Utils/SpatialDebugger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpatialDebugger() {}
// Cross Module References
	SPATIALGDK_API UScriptStruct* Z_Construct_UScriptStruct_FWorkerRegionInfo();
	UPackage* Z_Construct_UPackage__Script_SpatialGDK();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	SPATIALGDK_API UClass* Z_Construct_UClass_ASpatialDebugger_NoRegister();
	SPATIALGDK_API UClass* Z_Construct_UClass_ASpatialDebugger();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FWorkerRegionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SPATIALGDK_API uint32 Get_Z_Construct_UScriptStruct_FWorkerRegionInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorkerRegionInfo, Z_Construct_UPackage__Script_SpatialGDK(), TEXT("WorkerRegionInfo"), sizeof(FWorkerRegionInfo), Get_Z_Construct_UScriptStruct_FWorkerRegionInfo_Hash());
	}
	return Singleton;
}
template<> SPATIALGDK_API UScriptStruct* StaticStruct<FWorkerRegionInfo>()
{
	return FWorkerRegionInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWorkerRegionInfo(FWorkerRegionInfo::StaticStruct, TEXT("/Script/SpatialGDK"), TEXT("WorkerRegionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SpatialGDK_StaticRegisterNativesFWorkerRegionInfo
{
	FScriptStruct_SpatialGDK_StaticRegisterNativesFWorkerRegionInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WorkerRegionInfo")),new UScriptStruct::TCppStructOps<FWorkerRegionInfo>);
	}
} ScriptStruct_SpatialGDK_StaticRegisterNativesFWorkerRegionInfo;
	struct Z_Construct_UScriptStruct_FWorkerRegionInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Extents_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Extents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkerRegionInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils/SpatialDebugger.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorkerRegionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorkerRegionInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkerRegionInfo_Statics::NewProp_Extents_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utils/SpatialDebugger.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorkerRegionInfo_Statics::NewProp_Extents = { "Extents", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorkerRegionInfo, Extents), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkerRegionInfo_Statics::NewProp_Extents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkerRegionInfo_Statics::NewProp_Extents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorkerRegionInfo_Statics::NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utils/SpatialDebugger.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorkerRegionInfo_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWorkerRegionInfo, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkerRegionInfo_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkerRegionInfo_Statics::NewProp_Color_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorkerRegionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkerRegionInfo_Statics::NewProp_Extents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorkerRegionInfo_Statics::NewProp_Color,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorkerRegionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDK,
		nullptr,
		&NewStructOps,
		"WorkerRegionInfo",
		sizeof(FWorkerRegionInfo),
		alignof(FWorkerRegionInfo),
		Z_Construct_UScriptStruct_FWorkerRegionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkerRegionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWorkerRegionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorkerRegionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorkerRegionInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWorkerRegionInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SpatialGDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WorkerRegionInfo"), sizeof(FWorkerRegionInfo), Get_Z_Construct_UScriptStruct_FWorkerRegionInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWorkerRegionInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWorkerRegionInfo_Hash() { return 4131330065U; }
	DEFINE_FUNCTION(ASpatialDebugger::execOnRep_SetWorkerRegions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SetWorkerRegions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpatialDebugger::execSpatialToggleDebugger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpatialToggleDebugger();
		P_NATIVE_END;
	}
	void ASpatialDebugger::StaticRegisterNativesASpatialDebugger()
	{
		UClass* Class = ASpatialDebugger::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_SetWorkerRegions", &ASpatialDebugger::execOnRep_SetWorkerRegions },
			{ "SpatialToggleDebugger", &ASpatialDebugger::execSpatialToggleDebugger },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpatialDebugger_OnRep_SetWorkerRegions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialDebugger_OnRep_SetWorkerRegions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils/SpatialDebugger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialDebugger_OnRep_SetWorkerRegions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpatialDebugger, nullptr, "OnRep_SetWorkerRegions", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpatialDebugger_OnRep_SetWorkerRegions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialDebugger_OnRep_SetWorkerRegions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpatialDebugger_OnRep_SetWorkerRegions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpatialDebugger_OnRep_SetWorkerRegions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpatialDebugger_SpatialToggleDebugger_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialDebugger_SpatialToggleDebugger_Statics::Function_MetaDataParams[] = {
		{ "Category", "SpatialGDK" },
		{ "ModuleRelativePath", "Public/Utils/SpatialDebugger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialDebugger_SpatialToggleDebugger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpatialDebugger, nullptr, "SpatialToggleDebugger", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, (ESpatialFunctionFlags)0x00000000, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpatialDebugger_SpatialToggleDebugger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialDebugger_SpatialToggleDebugger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpatialDebugger_SpatialToggleDebugger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpatialDebugger_SpatialToggleDebugger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpatialDebugger_NoRegister()
	{
		return ASpatialDebugger::StaticClass();
	}
	struct Z_Construct_UClass_ASpatialDebugger_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorkerRegions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WorkerRegions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorkerRegions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorkerRegionVerticalScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorkerRegionVerticalScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvalidServerTintColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InvalidServerTintColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldSpaceActorTagOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldSpaceActorTagOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LockedTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockedTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnlockedTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthIntentTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AuthIntentTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AuthTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowWorkerRegions_MetaData[];
#endif
		static void NewProp_bShowWorkerRegions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowWorkerRegions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoStart_MetaData[];
#endif
		static void NewProp_bAutoStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowActorName_MetaData[];
#endif
		static void NewProp_bShowActorName_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowActorName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowEntityId_MetaData[];
#endif
		static void NewProp_bShowEntityId_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowEntityId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowLock_MetaData[];
#endif
		static void NewProp_bShowLock_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowLock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowAuthIntent_MetaData[];
#endif
		static void NewProp_bShowAuthIntent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowAuthIntent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowAuth_MetaData[];
#endif
		static void NewProp_bShowAuth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowAuth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerPanelStartY_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PlayerPanelStartY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerPanelStartX_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PlayerPanelStartX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpatialDebugger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpatialDebugger_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpatialDebugger_OnRep_SetWorkerRegions, "OnRep_SetWorkerRegions" }, // 3373608017
		{ &Z_Construct_UFunction_ASpatialDebugger_SpatialToggleDebugger, "SpatialToggleDebugger" }, // 2906607796
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialDebugger_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Utils/SpatialDebugger.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Utils/SpatialDebugger.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_WorkerRegions_MetaData[] = {
		{ "ModuleRelativePath", "Public/Utils/SpatialDebugger.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_WorkerRegions = { "WorkerRegions", "OnRep_SetWorkerRegions", (EPropertyFlags)0x0010000100000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpatialDebugger, WorkerRegions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_WorkerRegions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_WorkerRegions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_WorkerRegions_Inner = { "WorkerRegions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FWorkerRegionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_WorkerRegionVerticalScale_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ModuleRelativePath", "Public/Utils/SpatialDebugger.h" },
		{ "ToolTip", "Vertical scale to apply to each worker region cuboid" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_WorkerRegionVerticalScale = { "WorkerRegionVerticalScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpatialDebugger, WorkerRegionVerticalScale), METADATA_PARAMS(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_WorkerRegionVerticalScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_WorkerRegionVerticalScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_InvalidServerTintColor_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ModuleRelativePath", "Public/Utils/SpatialDebugger.h" },
		{ "ToolTip", "Color used for any server with an unresolved name" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_InvalidServerTintColor = { "InvalidServerTintColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpatialDebugger, InvalidServerTintColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_InvalidServerTintColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_InvalidServerTintColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_WorldSpaceActorTagOffset_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ModuleRelativePath", "Public/Utils/SpatialDebugger.h" },
		{ "ToolTip", "WorldSpace offset of tag from actor pivot" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_WorldSpaceActorTagOffset = { "WorldSpaceActorTagOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpatialDebugger, WorldSpaceActorTagOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_WorldSpaceActorTagOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_WorldSpaceActorTagOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_BoxTexture_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ModuleRelativePath", "Public/Utils/SpatialDebugger.h" },
		{ "ToolTip", "Texture to use for the Box Icon" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_BoxTexture = { "BoxTexture", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpatialDebugger, BoxTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_BoxTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_BoxTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_LockedTexture_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ModuleRelativePath", "Public/Utils/SpatialDebugger.h" },
		{ "ToolTip", "Texture to use for the Locked Icon" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_LockedTexture = { "LockedTexture", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpatialDebugger, LockedTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_LockedTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_LockedTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_UnlockedTexture_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ModuleRelativePath", "Public/Utils/SpatialDebugger.h" },
		{ "ToolTip", "Texture to use for the Unlocked Icon" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_UnlockedTexture = { "UnlockedTexture", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpatialDebugger, UnlockedTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_UnlockedTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_UnlockedTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_AuthIntentTexture_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ModuleRelativePath", "Public/Utils/SpatialDebugger.h" },
		{ "ToolTip", "Texture to use for the Auth Intent Icon" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_AuthIntentTexture = { "AuthIntentTexture", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpatialDebugger, AuthIntentTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_AuthIntentTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_AuthIntentTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_AuthTexture_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ModuleRelativePath", "Public/Utils/SpatialDebugger.h" },
		{ "ToolTip", "Texture to use for the Auth Icon" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_AuthTexture = { "AuthTexture", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpatialDebugger, AuthTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_AuthTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_AuthTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowWorkerRegions_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ModuleRelativePath", "Public/Utils/SpatialDebugger.h" },
		{ "ToolTip", "Show a transparent Worker Region cuboid representing the area of authority for each server worker" },
	};
#endif
	void Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowWorkerRegions_SetBit(void* Obj)
	{
		((ASpatialDebugger*)Obj)->bShowWorkerRegions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowWorkerRegions = { "bShowWorkerRegions", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASpatialDebugger), &Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowWorkerRegions_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowWorkerRegions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowWorkerRegions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bAutoStart_MetaData[] = {
		{ "Category", "StartUp" },
		{ "ModuleRelativePath", "Public/Utils/SpatialDebugger.h" },
		{ "ToolTip", "Show the Spatial Debugger automatically at startup" },
	};
#endif
	void Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bAutoStart_SetBit(void* Obj)
	{
		((ASpatialDebugger*)Obj)->bAutoStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bAutoStart = { "bAutoStart", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASpatialDebugger), &Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bAutoStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bAutoStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bAutoStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowActorName_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ModuleRelativePath", "Public/Utils/SpatialDebugger.h" },
		{ "ToolTip", "Show Actor Name for every entity in range" },
	};
#endif
	void Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowActorName_SetBit(void* Obj)
	{
		((ASpatialDebugger*)Obj)->bShowActorName = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowActorName = { "bShowActorName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASpatialDebugger), &Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowActorName_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowActorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowActorName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowEntityId_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ModuleRelativePath", "Public/Utils/SpatialDebugger.h" },
		{ "ToolTip", "Show EntityId for every entity in range" },
	};
#endif
	void Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowEntityId_SetBit(void* Obj)
	{
		((ASpatialDebugger*)Obj)->bShowEntityId = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowEntityId = { "bShowEntityId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASpatialDebugger), &Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowEntityId_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowEntityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowEntityId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowLock_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ModuleRelativePath", "Public/Utils/SpatialDebugger.h" },
		{ "ToolTip", "Show lock status for every entity in range" },
	};
#endif
	void Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowLock_SetBit(void* Obj)
	{
		((ASpatialDebugger*)Obj)->bShowLock = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowLock = { "bShowLock", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASpatialDebugger), &Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowLock_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowLock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowLock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowAuthIntent_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ModuleRelativePath", "Public/Utils/SpatialDebugger.h" },
		{ "ToolTip", "Show authority intent for every entity in range" },
	};
#endif
	void Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowAuthIntent_SetBit(void* Obj)
	{
		((ASpatialDebugger*)Obj)->bShowAuthIntent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowAuthIntent = { "bShowAuthIntent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASpatialDebugger), &Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowAuthIntent_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowAuthIntent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowAuthIntent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowAuth_MetaData[] = {
		{ "Category", "Visualization" },
		{ "ModuleRelativePath", "Public/Utils/SpatialDebugger.h" },
		{ "ToolTip", "Show server authority for every entity in range" },
	};
#endif
	void Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowAuth_SetBit(void* Obj)
	{
		((ASpatialDebugger*)Obj)->bShowAuth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowAuth = { "bShowAuth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASpatialDebugger), &Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowAuth_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowAuth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowAuth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_MaxRange_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/Utils/SpatialDebugger.h" },
		{ "ToolTip", "Maximum range from local player that tags will be drawn out to" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpatialDebugger, MaxRange), METADATA_PARAMS(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_MaxRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_MaxRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_PlayerPanelStartY_MetaData[] = {
		{ "Category", "LocalPlayer" },
		{ "ModuleRelativePath", "Public/Utils/SpatialDebugger.h" },
		{ "ToolTip", "Y location of player data panel" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_PlayerPanelStartY = { "PlayerPanelStartY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpatialDebugger, PlayerPanelStartY), METADATA_PARAMS(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_PlayerPanelStartY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_PlayerPanelStartY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_PlayerPanelStartX_MetaData[] = {
		{ "Category", "LocalPlayer" },
		{ "ModuleRelativePath", "Public/Utils/SpatialDebugger.h" },
		{ "ToolTip", "X location of player data panel" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_PlayerPanelStartX = { "PlayerPanelStartX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpatialDebugger, PlayerPanelStartX), METADATA_PARAMS(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_PlayerPanelStartX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_PlayerPanelStartX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpatialDebugger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_WorkerRegions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_WorkerRegions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_WorkerRegionVerticalScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_InvalidServerTintColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_WorldSpaceActorTagOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_BoxTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_LockedTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_UnlockedTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_AuthIntentTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_AuthTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowWorkerRegions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bAutoStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowActorName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowEntityId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowLock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowAuthIntent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_bShowAuth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_MaxRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_PlayerPanelStartY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialDebugger_Statics::NewProp_PlayerPanelStartX,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpatialDebugger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpatialDebugger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpatialDebugger_Statics::ClassParams = {
		&ASpatialDebugger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASpatialDebugger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialDebugger_Statics::PropPointers),
		0,
		0x009002A4u,
		0x00000030u,
		METADATA_PARAMS(Z_Construct_UClass_ASpatialDebugger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialDebugger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpatialDebugger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpatialDebugger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpatialDebugger, 3452592031);
	template<> SPATIALGDK_API UClass* StaticClass<ASpatialDebugger>()
	{
		return ASpatialDebugger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpatialDebugger(Z_Construct_UClass_ASpatialDebugger, &ASpatialDebugger::StaticClass, TEXT("/Script/SpatialGDK"), TEXT("ASpatialDebugger"), false, nullptr, nullptr, nullptr);

	void ASpatialDebugger::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_WorkerRegions(TEXT("WorkerRegions"));

		const bool bIsValid = true
			&& Name_WorkerRegions == ClassReps[(int32)ENetFields_Private::WorkerRegions].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASpatialDebugger"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpatialDebugger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
