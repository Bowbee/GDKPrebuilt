// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class AActor;
struct FSpatialLatencyPayload;
#ifdef SPATIALGDK_SpatialLatencyTracer_generated_h
#error "SpatialLatencyTracer.generated.h already included, missing '#pragma once' in SpatialLatencyTracer.h"
#endif
#define SPATIALGDK_SpatialLatencyTracer_generated_h

#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialLatencyTracer_h_47_SPARSE_DATA
#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialLatencyTracer_h_47_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDebug_SendTestTrace); \
	DECLARE_FUNCTION(execRetrievePayload); \
	DECLARE_FUNCTION(execEndLatencyTrace); \
	DECLARE_FUNCTION(execContinueLatencyTraceTagged); \
	DECLARE_FUNCTION(execContinueLatencyTraceProperty); \
	DECLARE_FUNCTION(execContinueLatencyTraceRPC); \
	DECLARE_FUNCTION(execBeginLatencyTrace); \
	DECLARE_FUNCTION(execSetTraceMetadata); \
	DECLARE_FUNCTION(execRegisterProject);


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialLatencyTracer_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDebug_SendTestTrace); \
	DECLARE_FUNCTION(execRetrievePayload); \
	DECLARE_FUNCTION(execEndLatencyTrace); \
	DECLARE_FUNCTION(execContinueLatencyTraceTagged); \
	DECLARE_FUNCTION(execContinueLatencyTraceProperty); \
	DECLARE_FUNCTION(execContinueLatencyTraceRPC); \
	DECLARE_FUNCTION(execBeginLatencyTrace); \
	DECLARE_FUNCTION(execSetTraceMetadata); \
	DECLARE_FUNCTION(execRegisterProject);


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialLatencyTracer_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpatialLatencyTracer(); \
	friend struct Z_Construct_UClass_USpatialLatencyTracer_Statics; \
public: \
	DECLARE_CLASS(USpatialLatencyTracer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpatialGDK"), NO_API) \
	DECLARE_SERIALIZER(USpatialLatencyTracer)


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialLatencyTracer_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUSpatialLatencyTracer(); \
	friend struct Z_Construct_UClass_USpatialLatencyTracer_Statics; \
public: \
	DECLARE_CLASS(USpatialLatencyTracer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpatialGDK"), NO_API) \
	DECLARE_SERIALIZER(USpatialLatencyTracer)


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialLatencyTracer_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpatialLatencyTracer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpatialLatencyTracer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpatialLatencyTracer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpatialLatencyTracer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpatialLatencyTracer(USpatialLatencyTracer&&); \
	NO_API USpatialLatencyTracer(const USpatialLatencyTracer&); \
public:


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialLatencyTracer_h_47_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpatialLatencyTracer(USpatialLatencyTracer&&); \
	NO_API USpatialLatencyTracer(const USpatialLatencyTracer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpatialLatencyTracer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpatialLatencyTracer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USpatialLatencyTracer)


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialLatencyTracer_h_47_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialLatencyTracer_h_44_PROLOG
#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialLatencyTracer_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialLatencyTracer_h_47_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialLatencyTracer_h_47_SPARSE_DATA \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialLatencyTracer_h_47_RPC_WRAPPERS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialLatencyTracer_h_47_INCLASS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialLatencyTracer_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialLatencyTracer_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialLatencyTracer_h_47_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialLatencyTracer_h_47_SPARSE_DATA \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialLatencyTracer_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialLatencyTracer_h_47_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialLatencyTracer_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPATIALGDK_API UClass* StaticClass<class USpatialLatencyTracer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialLatencyTracer_h


#define FOREACH_ENUM_ETRACETYPE(op) \
	op(ETraceType::RPC) \
	op(ETraceType::Property) \
	op(ETraceType::Tagged) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
