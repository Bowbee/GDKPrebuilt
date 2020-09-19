// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FWorkerStats;
#ifdef SPATIALGDK_SpatialMetricsDisplay_generated_h
#error "SpatialMetricsDisplay.generated.h already included, missing '#pragma once' in SpatialMetricsDisplay.h"
#endif
#define SPATIALGDK_SpatialMetricsDisplay_generated_h

#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialMetricsDisplay_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWorkerStats_Statics; \
	SPATIALGDK_API static class UScriptStruct* StaticStruct();


template<> SPATIALGDK_API UScriptStruct* StaticStruct<struct FWorkerStats>();

#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialMetricsDisplay_h_37_SPARSE_DATA
#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialMetricsDisplay_h_37_RPC_WRAPPERS \
	virtual bool ServerUpdateWorkerStats_Validate(const float , FWorkerStats const& ); \
	virtual void ServerUpdateWorkerStats_Implementation(const float Time, FWorkerStats const& OneWorkerStats); \
 \
	DECLARE_FUNCTION(execServerUpdateWorkerStats); \
	DECLARE_FUNCTION(execSpatialToggleStatDisplay);


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialMetricsDisplay_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerUpdateWorkerStats_Validate(const float , FWorkerStats const& ); \
	virtual void ServerUpdateWorkerStats_Implementation(const float Time, FWorkerStats const& OneWorkerStats); \
 \
	DECLARE_FUNCTION(execServerUpdateWorkerStats); \
	DECLARE_FUNCTION(execSpatialToggleStatDisplay);


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialMetricsDisplay_h_37_EVENT_PARMS \
	struct SpatialMetricsDisplay_eventServerUpdateWorkerStats_Parms \
	{ \
		float Time; \
		FWorkerStats OneWorkerStats; \
	};


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialMetricsDisplay_h_37_CALLBACK_WRAPPERS
#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialMetricsDisplay_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpatialMetricsDisplay(); \
	friend struct Z_Construct_UClass_ASpatialMetricsDisplay_Statics; \
public: \
	DECLARE_CLASS(ASpatialMetricsDisplay, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpatialGDK"), NO_API) \
	DECLARE_SERIALIZER(ASpatialMetricsDisplay) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WorkerStats=NETFIELD_REP_START, \
		NETFIELD_REP_END=WorkerStats	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialMetricsDisplay_h_37_INCLASS \
private: \
	static void StaticRegisterNativesASpatialMetricsDisplay(); \
	friend struct Z_Construct_UClass_ASpatialMetricsDisplay_Statics; \
public: \
	DECLARE_CLASS(ASpatialMetricsDisplay, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpatialGDK"), NO_API) \
	DECLARE_SERIALIZER(ASpatialMetricsDisplay) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WorkerStats=NETFIELD_REP_START, \
		NETFIELD_REP_END=WorkerStats	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialMetricsDisplay_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpatialMetricsDisplay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpatialMetricsDisplay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpatialMetricsDisplay); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpatialMetricsDisplay); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpatialMetricsDisplay(ASpatialMetricsDisplay&&); \
	NO_API ASpatialMetricsDisplay(const ASpatialMetricsDisplay&); \
public:


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialMetricsDisplay_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpatialMetricsDisplay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpatialMetricsDisplay(ASpatialMetricsDisplay&&); \
	NO_API ASpatialMetricsDisplay(const ASpatialMetricsDisplay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpatialMetricsDisplay); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpatialMetricsDisplay); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpatialMetricsDisplay)


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialMetricsDisplay_h_37_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WorkerStats() { return STRUCT_OFFSET(ASpatialMetricsDisplay, WorkerStats); }


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialMetricsDisplay_h_33_PROLOG \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialMetricsDisplay_h_37_EVENT_PARMS


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialMetricsDisplay_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialMetricsDisplay_h_37_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialMetricsDisplay_h_37_SPARSE_DATA \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialMetricsDisplay_h_37_RPC_WRAPPERS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialMetricsDisplay_h_37_CALLBACK_WRAPPERS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialMetricsDisplay_h_37_INCLASS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialMetricsDisplay_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialMetricsDisplay_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialMetricsDisplay_h_37_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialMetricsDisplay_h_37_SPARSE_DATA \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialMetricsDisplay_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialMetricsDisplay_h_37_CALLBACK_WRAPPERS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialMetricsDisplay_h_37_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialMetricsDisplay_h_37_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SpatialMetricsDisplay."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPATIALGDK_API UClass* StaticClass<class ASpatialMetricsDisplay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialMetricsDisplay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
