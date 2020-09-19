// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPATIALGDK_SpatialWorkerFlags_generated_h
#error "SpatialWorkerFlags.generated.h already included, missing '#pragma once' in SpatialWorkerFlags.h"
#endif
#define SPATIALGDK_SpatialWorkerFlags_generated_h

#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Interop_SpatialWorkerFlags_h_9_DELEGATE \
struct _Script_SpatialGDK_eventOnWorkerFlagsUpdated_Parms \
{ \
	FString FlagName; \
	FString FlagValue; \
}; \
static inline void FOnWorkerFlagsUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnWorkerFlagsUpdated, const FString& FlagName, const FString& FlagValue) \
{ \
	_Script_SpatialGDK_eventOnWorkerFlagsUpdated_Parms Parms; \
	Parms.FlagName=FlagName; \
	Parms.FlagValue=FlagValue; \
	OnWorkerFlagsUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Interop_SpatialWorkerFlags_h_8_DELEGATE \
struct _Script_SpatialGDK_eventOnWorkerFlagsUpdatedBP_Parms \
{ \
	FString FlagName; \
	FString FlagValue; \
}; \
static inline void FOnWorkerFlagsUpdatedBP_DelegateWrapper(const FScriptDelegate& OnWorkerFlagsUpdatedBP, const FString& FlagName, const FString& FlagValue) \
{ \
	_Script_SpatialGDK_eventOnWorkerFlagsUpdatedBP_Parms Parms; \
	Parms.FlagName=FlagName; \
	Parms.FlagValue=FlagValue; \
	OnWorkerFlagsUpdatedBP.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Interop_SpatialWorkerFlags_h_14_SPARSE_DATA
#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Interop_SpatialWorkerFlags_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUnbindFromOnWorkerFlagsUpdated); \
	DECLARE_FUNCTION(execBindToOnWorkerFlagsUpdated);


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Interop_SpatialWorkerFlags_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnbindFromOnWorkerFlagsUpdated); \
	DECLARE_FUNCTION(execBindToOnWorkerFlagsUpdated);


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Interop_SpatialWorkerFlags_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpatialWorkerFlags(); \
	friend struct Z_Construct_UClass_USpatialWorkerFlags_Statics; \
public: \
	DECLARE_CLASS(USpatialWorkerFlags, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpatialGDK"), NO_API) \
	DECLARE_SERIALIZER(USpatialWorkerFlags)


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Interop_SpatialWorkerFlags_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSpatialWorkerFlags(); \
	friend struct Z_Construct_UClass_USpatialWorkerFlags_Statics; \
public: \
	DECLARE_CLASS(USpatialWorkerFlags, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpatialGDK"), NO_API) \
	DECLARE_SERIALIZER(USpatialWorkerFlags)


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Interop_SpatialWorkerFlags_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpatialWorkerFlags(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpatialWorkerFlags) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpatialWorkerFlags); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpatialWorkerFlags); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpatialWorkerFlags(USpatialWorkerFlags&&); \
	NO_API USpatialWorkerFlags(const USpatialWorkerFlags&); \
public:


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Interop_SpatialWorkerFlags_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpatialWorkerFlags(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpatialWorkerFlags(USpatialWorkerFlags&&); \
	NO_API USpatialWorkerFlags(const USpatialWorkerFlags&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpatialWorkerFlags); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpatialWorkerFlags); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpatialWorkerFlags)


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Interop_SpatialWorkerFlags_h_14_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Interop_SpatialWorkerFlags_h_11_PROLOG
#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Interop_SpatialWorkerFlags_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Interop_SpatialWorkerFlags_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Interop_SpatialWorkerFlags_h_14_SPARSE_DATA \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Interop_SpatialWorkerFlags_h_14_RPC_WRAPPERS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Interop_SpatialWorkerFlags_h_14_INCLASS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Interop_SpatialWorkerFlags_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Interop_SpatialWorkerFlags_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Interop_SpatialWorkerFlags_h_14_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Interop_SpatialWorkerFlags_h_14_SPARSE_DATA \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Interop_SpatialWorkerFlags_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Interop_SpatialWorkerFlags_h_14_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Interop_SpatialWorkerFlags_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPATIALGDK_API UClass* StaticClass<class USpatialWorkerFlags>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Interop_SpatialWorkerFlags_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
