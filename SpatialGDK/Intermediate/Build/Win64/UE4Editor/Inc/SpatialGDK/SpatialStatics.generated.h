// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FLockingToken;
struct FColor;
struct FDistanceFrequencyPair;
class UObject;
struct FLinearColor;
class UWorld;
#ifdef SPATIALGDK_SpatialStatics_generated_h
#error "SpatialStatics.generated.h already included, missing '#pragma once' in SpatialStatics.h"
#endif
#define SPATIALGDK_SpatialStatics_generated_h

#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialStatics_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLockingToken_Statics; \
	SPATIALGDK_API static class UScriptStruct* StaticStruct();


template<> SPATIALGDK_API UScriptStruct* StaticStruct<struct FLockingToken>();

#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialStatics_h_32_SPARSE_DATA
#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialStatics_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsLocked); \
	DECLARE_FUNCTION(execReleaseLock); \
	DECLARE_FUNCTION(execAcquireLock); \
	DECLARE_FUNCTION(execGetActorEntityIdAsString); \
	DECLARE_FUNCTION(execEntityIdToString); \
	DECLARE_FUNCTION(execGetActorEntityId); \
	DECLARE_FUNCTION(execGetInspectorColorForWorkerName); \
	DECLARE_FUNCTION(execGetFullFrequencyNetCullDistanceRatio); \
	DECLARE_FUNCTION(execGetNCDDistanceRatios); \
	DECLARE_FUNCTION(execGetWorkerFlag); \
	DECLARE_FUNCTION(execPrintTextSpatial); \
	DECLARE_FUNCTION(execPrintStringSpatial); \
	DECLARE_FUNCTION(execIsActorGroupOwnerForClass); \
	DECLARE_FUNCTION(execIsActorGroupOwnerForActor); \
	DECLARE_FUNCTION(execIsSpatialOffloadingEnabled); \
	DECLARE_FUNCTION(execIsSpatialMultiWorkerEnabled); \
	DECLARE_FUNCTION(execIsSpatialNetworkingEnabled);


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialStatics_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsLocked); \
	DECLARE_FUNCTION(execReleaseLock); \
	DECLARE_FUNCTION(execAcquireLock); \
	DECLARE_FUNCTION(execGetActorEntityIdAsString); \
	DECLARE_FUNCTION(execEntityIdToString); \
	DECLARE_FUNCTION(execGetActorEntityId); \
	DECLARE_FUNCTION(execGetInspectorColorForWorkerName); \
	DECLARE_FUNCTION(execGetFullFrequencyNetCullDistanceRatio); \
	DECLARE_FUNCTION(execGetNCDDistanceRatios); \
	DECLARE_FUNCTION(execGetWorkerFlag); \
	DECLARE_FUNCTION(execPrintTextSpatial); \
	DECLARE_FUNCTION(execPrintStringSpatial); \
	DECLARE_FUNCTION(execIsActorGroupOwnerForClass); \
	DECLARE_FUNCTION(execIsActorGroupOwnerForActor); \
	DECLARE_FUNCTION(execIsSpatialOffloadingEnabled); \
	DECLARE_FUNCTION(execIsSpatialMultiWorkerEnabled); \
	DECLARE_FUNCTION(execIsSpatialNetworkingEnabled);


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialStatics_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpatialStatics(); \
	friend struct Z_Construct_UClass_USpatialStatics_Statics; \
public: \
	DECLARE_CLASS(USpatialStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpatialGDK"), NO_API) \
	DECLARE_SERIALIZER(USpatialStatics)


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialStatics_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUSpatialStatics(); \
	friend struct Z_Construct_UClass_USpatialStatics_Statics; \
public: \
	DECLARE_CLASS(USpatialStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpatialGDK"), NO_API) \
	DECLARE_SERIALIZER(USpatialStatics)


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialStatics_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpatialStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpatialStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpatialStatics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpatialStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpatialStatics(USpatialStatics&&); \
	NO_API USpatialStatics(const USpatialStatics&); \
public:


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialStatics_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpatialStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpatialStatics(USpatialStatics&&); \
	NO_API USpatialStatics(const USpatialStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpatialStatics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpatialStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpatialStatics)


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialStatics_h_32_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialStatics_h_29_PROLOG
#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialStatics_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialStatics_h_32_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialStatics_h_32_SPARSE_DATA \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialStatics_h_32_RPC_WRAPPERS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialStatics_h_32_INCLASS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialStatics_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialStatics_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialStatics_h_32_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialStatics_h_32_SPARSE_DATA \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialStatics_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialStatics_h_32_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialStatics_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPATIALGDK_API UClass* StaticClass<class USpatialStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_SpatialStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
