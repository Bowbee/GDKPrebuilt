// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDK/Public/SpatialConstants.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpatialConstants() {}
// Cross Module References
	SPATIALGDK_API UEnum* Z_Construct_UEnum_SpatialGDK_ERPCType();
	UPackage* Z_Construct_UPackage__Script_SpatialGDK();
// End Cross Module References
	static UEnum* ERPCType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SpatialGDK_ERPCType, Z_Construct_UPackage__Script_SpatialGDK(), TEXT("ERPCType"));
		}
		return Singleton;
	}
	template<> SPATIALGDK_API UEnum* StaticEnum<ERPCType>()
	{
		return ERPCType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERPCType(ERPCType_StaticEnum, TEXT("/Script/SpatialGDK"), TEXT("ERPCType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SpatialGDK_ERPCType_Hash() { return 54721227U; }
	UEnum* Z_Construct_UEnum_SpatialGDK_ERPCType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SpatialGDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERPCType"), 0, Get_Z_Construct_UEnum_SpatialGDK_ERPCType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERPCType::Invalid", (int64)ERPCType::Invalid },
				{ "ERPCType::ClientReliable", (int64)ERPCType::ClientReliable },
				{ "ERPCType::ClientUnreliable", (int64)ERPCType::ClientUnreliable },
				{ "ERPCType::ServerReliable", (int64)ERPCType::ServerReliable },
				{ "ERPCType::ServerUnreliable", (int64)ERPCType::ServerUnreliable },
				{ "ERPCType::NetMulticast", (int64)ERPCType::NetMulticast },
				{ "ERPCType::CrossServer", (int64)ERPCType::CrossServer },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ClientReliable.Name", "ERPCType::ClientReliable" },
				{ "ClientUnreliable.Name", "ERPCType::ClientUnreliable" },
				{ "CrossServer.Name", "ERPCType::CrossServer" },
				{ "Invalid.Name", "ERPCType::Invalid" },
				{ "ModuleRelativePath", "Public/SpatialConstants.h" },
				{ "NetMulticast.Name", "ERPCType::NetMulticast" },
				{ "ServerReliable.Name", "ERPCType::ServerReliable" },
				{ "ServerUnreliable.Name", "ERPCType::ServerUnreliable" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SpatialGDK,
				nullptr,
				"ERPCType",
				"ERPCType",
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
