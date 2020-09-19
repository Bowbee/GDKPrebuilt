// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpatialGDK/Public/LoadBalancing/GridBasedLBStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridBasedLBStrategy() {}
// Cross Module References
	SPATIALGDK_API UClass* Z_Construct_UClass_UGridBasedLBStrategy_NoRegister();
	SPATIALGDK_API UClass* Z_Construct_UClass_UGridBasedLBStrategy();
	SPATIALGDK_API UClass* Z_Construct_UClass_UAbstractLBStrategy();
	UPackage* Z_Construct_UPackage__Script_SpatialGDK();
	SPATIALGDK_API UClass* Z_Construct_UClass_USingleWorkerStrategy_NoRegister();
	SPATIALGDK_API UClass* Z_Construct_UClass_USingleWorkerStrategy();
// End Cross Module References
	void UGridBasedLBStrategy::StaticRegisterNativesUGridBasedLBStrategy()
	{
	}
	UClass* Z_Construct_UClass_UGridBasedLBStrategy_NoRegister()
	{
		return UGridBasedLBStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UGridBasedLBStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterestBorder_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterestBorder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorldWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cols_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Cols;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rows_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Rows;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridBasedLBStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbstractLBStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridBasedLBStrategy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A load balancing strategy that divides the world into a grid.\n * Divides the load between Rows * Cols number of workers, each handling a\n * square of the world (WorldWidth / Cols)cm by (WorldHeight / Rows)cm\n *\n * Given a Point, for each Cell:\n * Point is inside Cell iff Min(Cell) <= Point < Max(Cell)\n *\n * Intended Usage: Create a data-only blueprint subclass and change\n * the Cols, Rows, WorldWidth, WorldHeight.\n */" },
		{ "IncludePath", "LoadBalancing/GridBasedLBStrategy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LoadBalancing/GridBasedLBStrategy.h" },
		{ "ToolTip", "A load balancing strategy that divides the world into a grid.\nDivides the load between Rows * Cols number of workers, each handling a\nsquare of the world (WorldWidth / Cols)cm by (WorldHeight / Rows)cm\n\nGiven a Point, for each Cell:\nPoint is inside Cell iff Min(Cell) <= Point < Max(Cell)\n\nIntended Usage: Create a data-only blueprint subclass and change\nthe Cols, Rows, WorldWidth, WorldHeight." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridBasedLBStrategy_Statics::NewProp_InterestBorder_MetaData[] = {
		{ "Category", "Grid Based Load Balancing" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/LoadBalancing/GridBasedLBStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridBasedLBStrategy_Statics::NewProp_InterestBorder = { "InterestBorder", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridBasedLBStrategy, InterestBorder), METADATA_PARAMS(Z_Construct_UClass_UGridBasedLBStrategy_Statics::NewProp_InterestBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridBasedLBStrategy_Statics::NewProp_InterestBorder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridBasedLBStrategy_Statics::NewProp_WorldHeight_MetaData[] = {
		{ "Category", "Grid Based Load Balancing" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/LoadBalancing/GridBasedLBStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridBasedLBStrategy_Statics::NewProp_WorldHeight = { "WorldHeight", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridBasedLBStrategy, WorldHeight), METADATA_PARAMS(Z_Construct_UClass_UGridBasedLBStrategy_Statics::NewProp_WorldHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridBasedLBStrategy_Statics::NewProp_WorldHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridBasedLBStrategy_Statics::NewProp_WorldWidth_MetaData[] = {
		{ "Category", "Grid Based Load Balancing" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/LoadBalancing/GridBasedLBStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridBasedLBStrategy_Statics::NewProp_WorldWidth = { "WorldWidth", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridBasedLBStrategy, WorldWidth), METADATA_PARAMS(Z_Construct_UClass_UGridBasedLBStrategy_Statics::NewProp_WorldWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridBasedLBStrategy_Statics::NewProp_WorldWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridBasedLBStrategy_Statics::NewProp_Cols_MetaData[] = {
		{ "Category", "Grid Based Load Balancing" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/LoadBalancing/GridBasedLBStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UGridBasedLBStrategy_Statics::NewProp_Cols = { "Cols", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridBasedLBStrategy, Cols), METADATA_PARAMS(Z_Construct_UClass_UGridBasedLBStrategy_Statics::NewProp_Cols_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridBasedLBStrategy_Statics::NewProp_Cols_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridBasedLBStrategy_Statics::NewProp_Rows_MetaData[] = {
		{ "Category", "Grid Based Load Balancing" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/LoadBalancing/GridBasedLBStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UGridBasedLBStrategy_Statics::NewProp_Rows = { "Rows", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGridBasedLBStrategy, Rows), METADATA_PARAMS(Z_Construct_UClass_UGridBasedLBStrategy_Statics::NewProp_Rows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridBasedLBStrategy_Statics::NewProp_Rows_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridBasedLBStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridBasedLBStrategy_Statics::NewProp_InterestBorder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridBasedLBStrategy_Statics::NewProp_WorldHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridBasedLBStrategy_Statics::NewProp_WorldWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridBasedLBStrategy_Statics::NewProp_Cols,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridBasedLBStrategy_Statics::NewProp_Rows,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridBasedLBStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridBasedLBStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGridBasedLBStrategy_Statics::ClassParams = {
		&UGridBasedLBStrategy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGridBasedLBStrategy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridBasedLBStrategy_Statics::PropPointers),
		0,
		0x041000A0u,
		0x00000000u,
		METADATA_PARAMS(Z_Construct_UClass_UGridBasedLBStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridBasedLBStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridBasedLBStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGridBasedLBStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGridBasedLBStrategy, 3284896474);
	template<> SPATIALGDK_API UClass* StaticClass<UGridBasedLBStrategy>()
	{
		return UGridBasedLBStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGridBasedLBStrategy(Z_Construct_UClass_UGridBasedLBStrategy, &UGridBasedLBStrategy::StaticClass, TEXT("/Script/SpatialGDK"), TEXT("UGridBasedLBStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridBasedLBStrategy);
	void USingleWorkerStrategy::StaticRegisterNativesUSingleWorkerStrategy()
	{
	}
	UClass* Z_Construct_UClass_USingleWorkerStrategy_NoRegister()
	{
		return USingleWorkerStrategy::StaticClass();
	}
	struct Z_Construct_UClass_USingleWorkerStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USingleWorkerStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGridBasedLBStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_SpatialGDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USingleWorkerStrategy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LoadBalancing/GridBasedLBStrategy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LoadBalancing/GridBasedLBStrategy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USingleWorkerStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USingleWorkerStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USingleWorkerStrategy_Statics::ClassParams = {
		&USingleWorkerStrategy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		0x00000000u,
		METADATA_PARAMS(Z_Construct_UClass_USingleWorkerStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USingleWorkerStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USingleWorkerStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USingleWorkerStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USingleWorkerStrategy, 2201848219);
	template<> SPATIALGDK_API UClass* StaticClass<USingleWorkerStrategy>()
	{
		return USingleWorkerStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USingleWorkerStrategy(Z_Construct_UClass_USingleWorkerStrategy, &USingleWorkerStrategy::StaticClass, TEXT("/Script/SpatialGDK"), TEXT("USingleWorkerStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USingleWorkerStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
