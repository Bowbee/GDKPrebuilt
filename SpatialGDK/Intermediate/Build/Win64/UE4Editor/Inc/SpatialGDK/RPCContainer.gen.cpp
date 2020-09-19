// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDK/Public/Utils/RPCContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPCContainer() {}
// Cross Module References
	SPATIALGDK_API UEnum* Z_Construct_UEnum_SpatialGDK_ERPCResult();
	UPackage* Z_Construct_UPackage__Script_SpatialGDK();
// End Cross Module References
	static UEnum* ERPCResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SpatialGDK_ERPCResult, Z_Construct_UPackage__Script_SpatialGDK(), TEXT("ERPCResult"));
		}
		return Singleton;
	}
	template<> SPATIALGDK_API UEnum* StaticEnum<ERPCResult>()
	{
		return ERPCResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERPCResult(ERPCResult_StaticEnum, TEXT("/Script/SpatialGDK"), TEXT("ERPCResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SpatialGDK_ERPCResult_Hash() { return 960478953U; }
	UEnum* Z_Construct_UEnum_SpatialGDK_ERPCResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SpatialGDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERPCResult"), 0, Get_Z_Construct_UEnum_SpatialGDK_ERPCResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERPCResult::Success", (int64)ERPCResult::Success },
				{ "ERPCResult::UnresolvedTargetObject", (int64)ERPCResult::UnresolvedTargetObject },
				{ "ERPCResult::MissingFunctionInfo", (int64)ERPCResult::MissingFunctionInfo },
				{ "ERPCResult::UnresolvedParameters", (int64)ERPCResult::UnresolvedParameters },
				{ "ERPCResult::NoAuthority", (int64)ERPCResult::NoAuthority },
				{ "ERPCResult::NoActorChannel", (int64)ERPCResult::NoActorChannel },
				{ "ERPCResult::SpatialActorChannelNotListening", (int64)ERPCResult::SpatialActorChannelNotListening },
				{ "ERPCResult::NoNetConnection", (int64)ERPCResult::NoNetConnection },
				{ "ERPCResult::InvalidRPCType", (int64)ERPCResult::InvalidRPCType },
				{ "ERPCResult::NoOwningController", (int64)ERPCResult::NoOwningController },
				{ "ERPCResult::NoControllerChannel", (int64)ERPCResult::NoControllerChannel },
				{ "ERPCResult::ControllerChannelNotListening", (int64)ERPCResult::ControllerChannelNotListening },
				{ "ERPCResult::RPCServiceFailure", (int64)ERPCResult::RPCServiceFailure },
				{ "ERPCResult::Unknown", (int64)ERPCResult::Unknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ControllerChannelNotListening.Name", "ERPCResult::ControllerChannelNotListening" },
				{ "InvalidRPCType.Name", "ERPCResult::InvalidRPCType" },
				{ "MissingFunctionInfo.Name", "ERPCResult::MissingFunctionInfo" },
				{ "ModuleRelativePath", "Public/Utils/RPCContainer.h" },
				{ "NoActorChannel.Comment", "// Sender specific\n" },
				{ "NoActorChannel.Name", "ERPCResult::NoActorChannel" },
				{ "NoActorChannel.ToolTip", "Sender specific" },
				{ "NoAuthority.Name", "ERPCResult::NoAuthority" },
				{ "NoControllerChannel.Name", "ERPCResult::NoControllerChannel" },
				{ "NoNetConnection.Name", "ERPCResult::NoNetConnection" },
				{ "NoOwningController.Comment", "// Specific to packing\n" },
				{ "NoOwningController.Name", "ERPCResult::NoOwningController" },
				{ "NoOwningController.ToolTip", "Specific to packing" },
				{ "RPCServiceFailure.Name", "ERPCResult::RPCServiceFailure" },
				{ "SpatialActorChannelNotListening.Name", "ERPCResult::SpatialActorChannelNotListening" },
				{ "Success.Name", "ERPCResult::Success" },
				{ "Unknown.Name", "ERPCResult::Unknown" },
				{ "UnresolvedParameters.Name", "ERPCResult::UnresolvedParameters" },
				{ "UnresolvedTargetObject.Comment", "// Shared across Sender and Receiver\n" },
				{ "UnresolvedTargetObject.Name", "ERPCResult::UnresolvedTargetObject" },
				{ "UnresolvedTargetObject.ToolTip", "Shared across Sender and Receiver" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SpatialGDK,
				nullptr,
				"ERPCResult",
				"ERPCResult",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
