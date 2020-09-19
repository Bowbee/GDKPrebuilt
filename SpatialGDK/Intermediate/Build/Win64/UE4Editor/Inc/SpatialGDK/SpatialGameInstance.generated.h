// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULevel;
class UWorld;
#ifdef SPATIALGDK_SpatialGameInstance_generated_h
#error "SpatialGameInstance.generated.h already included, missing '#pragma once' in SpatialGameInstance.h"
#endif
#define SPATIALGDK_SpatialGameInstance_generated_h

#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_SpatialGameInstance_h_19_DELEGATE \
struct _Script_SpatialGDK_eventOnPlayerSpawnFailedEvent_Parms \
{ \
	FString Reason; \
}; \
static inline void FOnPlayerSpawnFailedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerSpawnFailedEvent, const FString& Reason) \
{ \
	_Script_SpatialGDK_eventOnPlayerSpawnFailedEvent_Parms Parms; \
	Parms.Reason=Reason; \
	OnPlayerSpawnFailedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_SpatialGameInstance_h_18_DELEGATE \
struct _Script_SpatialGDK_eventOnConnectionFailedEvent_Parms \
{ \
	FString Reason; \
}; \
static inline void FOnConnectionFailedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnConnectionFailedEvent, const FString& Reason) \
{ \
	_Script_SpatialGDK_eventOnConnectionFailedEvent_Parms Parms; \
	Parms.Reason=Reason; \
	OnConnectionFailedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_SpatialGameInstance_h_17_DELEGATE \
static inline void FOnConnectedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnConnectedEvent) \
{ \
	OnConnectedEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_SpatialGameInstance_h_24_SPARSE_DATA
#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_SpatialGameInstance_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnLevelInitializedNetworkActors);


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_SpatialGameInstance_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnLevelInitializedNetworkActors);


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_SpatialGameInstance_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpatialGameInstance(); \
	friend struct Z_Construct_UClass_USpatialGameInstance_Statics; \
public: \
	DECLARE_CLASS(USpatialGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SpatialGDK"), NO_API) \
	DECLARE_SERIALIZER(USpatialGameInstance) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_SpatialGameInstance_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUSpatialGameInstance(); \
	friend struct Z_Construct_UClass_USpatialGameInstance_Statics; \
public: \
	DECLARE_CLASS(USpatialGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SpatialGDK"), NO_API) \
	DECLARE_SERIALIZER(USpatialGameInstance) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_SpatialGameInstance_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpatialGameInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpatialGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpatialGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpatialGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpatialGameInstance(USpatialGameInstance&&); \
	NO_API USpatialGameInstance(const USpatialGameInstance&); \
public:


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_SpatialGameInstance_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpatialGameInstance(USpatialGameInstance&&); \
	NO_API USpatialGameInstance(const USpatialGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpatialGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpatialGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USpatialGameInstance)


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_SpatialGameInstance_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpatialConnectionManager() { return STRUCT_OFFSET(USpatialGameInstance, SpatialConnectionManager); } \
	FORCEINLINE static uint32 __PPO__SpatialLatencyTracer() { return STRUCT_OFFSET(USpatialGameInstance, SpatialLatencyTracer); } \
	FORCEINLINE static uint32 __PPO__GlobalStateManager() { return STRUCT_OFFSET(USpatialGameInstance, GlobalStateManager); } \
	FORCEINLINE static uint32 __PPO__StaticComponentView() { return STRUCT_OFFSET(USpatialGameInstance, StaticComponentView); } \
	FORCEINLINE static uint32 __PPO__CachedLevelsForNetworkIntialize() { return STRUCT_OFFSET(USpatialGameInstance, CachedLevelsForNetworkIntialize); }


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_SpatialGameInstance_h_21_PROLOG
#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_SpatialGameInstance_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_SpatialGameInstance_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_SpatialGameInstance_h_24_SPARSE_DATA \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_SpatialGameInstance_h_24_RPC_WRAPPERS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_SpatialGameInstance_h_24_INCLASS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_SpatialGameInstance_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_SpatialGameInstance_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_SpatialGameInstance_h_24_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_SpatialGameInstance_h_24_SPARSE_DATA \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_SpatialGameInstance_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_SpatialGameInstance_h_24_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_SpatialGameInstance_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPATIALGDK_API UClass* StaticClass<class USpatialGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_EngineClasses_SpatialGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
