// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPATIALGDK_SpatialDebugger_generated_h
#error "SpatialDebugger.generated.h already included, missing '#pragma once' in SpatialDebugger.h"
#endif
#define SPATIALGDK_SpatialDebugger_generated_h

#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialDebugger_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWorkerRegionInfo_Statics; \
	SPATIALGDK_API static class UScriptStruct* StaticStruct();


template<> SPATIALGDK_API UScriptStruct* StaticStruct<struct FWorkerRegionInfo>();

#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialDebugger_h_55_SPARSE_DATA
#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialDebugger_h_55_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_SetWorkerRegions); \
	DECLARE_FUNCTION(execSpatialToggleDebugger);


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialDebugger_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_SetWorkerRegions); \
	DECLARE_FUNCTION(execSpatialToggleDebugger);


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialDebugger_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpatialDebugger(); \
	friend struct Z_Construct_UClass_ASpatialDebugger_Statics; \
public: \
	DECLARE_CLASS(ASpatialDebugger, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpatialGDK"), NO_API) \
	DECLARE_SERIALIZER(ASpatialDebugger) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WorkerRegions=NETFIELD_REP_START, \
		NETFIELD_REP_END=WorkerRegions	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialDebugger_h_55_INCLASS \
private: \
	static void StaticRegisterNativesASpatialDebugger(); \
	friend struct Z_Construct_UClass_ASpatialDebugger_Statics; \
public: \
	DECLARE_CLASS(ASpatialDebugger, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpatialGDK"), NO_API) \
	DECLARE_SERIALIZER(ASpatialDebugger) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WorkerRegions=NETFIELD_REP_START, \
		NETFIELD_REP_END=WorkerRegions	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialDebugger_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpatialDebugger(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpatialDebugger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpatialDebugger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpatialDebugger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpatialDebugger(ASpatialDebugger&&); \
	NO_API ASpatialDebugger(const ASpatialDebugger&); \
public:


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialDebugger_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpatialDebugger(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpatialDebugger(ASpatialDebugger&&); \
	NO_API ASpatialDebugger(const ASpatialDebugger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpatialDebugger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpatialDebugger); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpatialDebugger)


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialDebugger_h_55_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialDebugger_h_51_PROLOG
#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialDebugger_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialDebugger_h_55_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialDebugger_h_55_SPARSE_DATA \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialDebugger_h_55_RPC_WRAPPERS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialDebugger_h_55_INCLASS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialDebugger_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialDebugger_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialDebugger_h_55_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialDebugger_h_55_SPARSE_DATA \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialDebugger_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialDebugger_h_55_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialDebugger_h_55_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SpatialDebugger."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPATIALGDK_API UClass* StaticClass<class ASpatialDebugger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialDebugger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
