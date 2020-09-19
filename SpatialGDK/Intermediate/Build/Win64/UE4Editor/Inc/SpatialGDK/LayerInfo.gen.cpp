// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDK/Public/Utils/LayerInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLayerInfo() {}
// Cross Module References
	SPATIALGDK_API UScriptStruct* Z_Construct_UScriptStruct_FLayerInfo();
	UPackage* Z_Construct_UPackage__Script_SpatialGDK();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SPATIALGDK_API UClass* Z_Construct_UClass_UAbstractLBStrategy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FLayerInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SPATIALGDK_API uint32 Get_Z_Construct_UScriptStruct_FLayerInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLayerInfo, Z_Construct_UPackage__Script_SpatialGDK(), TEXT("LayerInfo"), sizeof(FLayerInfo), Get_Z_Construct_UScriptStruct_FLayerInfo_Hash());
	}
	return Singleton;
}
template<> SPATIALGDK_API UScriptStruct* StaticStruct<FLayerInfo>()
{
	return FLayerInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLayerInfo(FLayerInfo::StaticStruct, TEXT("/Script/SpatialGDK"), TEXT("LayerInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SpatialGDK_StaticRegisterNativesFLayerInfo
{
	FScriptStruct_SpatialGDK_StaticRegisterNativesFLayerInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LayerInfo")),new UScriptStruct::TCppStructOps<FLayerInfo>);
	}
} ScriptStruct_SpatialGDK_StaticRegisterNativesFLayerInfo;
	struct Z_Construct_UScriptStruct_FLayerInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadBalanceStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LoadBalanceStrategy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_ActorClasses;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_ActorClasses_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayerInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils/LayerInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLayerInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLayerInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayerInfo_Statics::NewProp_LoadBalanceStrategy_MetaData[] = {
		{ "Category", "Load Balancing" },
		{ "ModuleRelativePath", "Public/Utils/LayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLayerInfo_Statics::NewProp_LoadBalanceStrategy = { "LoadBalanceStrategy", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLayerInfo, LoadBalanceStrategy), Z_Construct_UClass_UAbstractLBStrategy_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FLayerInfo_Statics::NewProp_LoadBalanceStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerInfo_Statics::NewProp_LoadBalanceStrategy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayerInfo_Statics::NewProp_ActorClasses_MetaData[] = {
		{ "Category", "Load Balancing" },
		{ "Comment", "/** The Actor classes contained within this group. Children of these classes will also be included. */" },
		{ "ModuleRelativePath", "Public/Utils/LayerInfo.h" },
		{ "ToolTip", "The Actor classes contained within this group. Children of these classes will also be included." },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FLayerInfo_Statics::NewProp_ActorClasses = { "ActorClasses", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLayerInfo, ActorClasses), METADATA_PARAMS(Z_Construct_UScriptStruct_FLayerInfo_Statics::NewProp_ActorClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerInfo_Statics::NewProp_ActorClasses_MetaData)) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FLayerInfo_Statics::NewProp_ActorClasses_ElementProp = { "ActorClasses", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayerInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Load Balancing" },
		{ "ModuleRelativePath", "Public/Utils/LayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLayerInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLayerInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FLayerInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerInfo_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLayerInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerInfo_Statics::NewProp_LoadBalanceStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerInfo_Statics::NewProp_ActorClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerInfo_Statics::NewProp_ActorClasses_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerInfo_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLayerInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDK,
		nullptr,
		&NewStructOps,
		"LayerInfo",
		sizeof(FLayerInfo),
		alignof(FLayerInfo),
		Z_Construct_UScriptStruct_FLayerInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLayerInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLayerInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLayerInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SpatialGDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LayerInfo"), sizeof(FLayerInfo), Get_Z_Construct_UScriptStruct_FLayerInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLayerInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLayerInfo_Hash() { return 3795194573U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
