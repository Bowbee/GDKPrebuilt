// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPATIALGDK_EntityPool_generated_h
#error "EntityPool.generated.h already included, missing '#pragma once' in EntityPool.h"
#endif
#define SPATIALGDK_EntityPool_generated_h

#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_EntityPool_h_28_DELEGATE \
static inline void FEntityPoolReadyEvent_DelegateWrapper(const FMulticastScriptDelegate& EntityPoolReadyEvent) \
{ \
	EntityPoolReadyEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_EntityPool_h_33_SPARSE_DATA
#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_EntityPool_h_33_RPC_WRAPPERS
#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_EntityPool_h_33_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_EntityPool_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEntityPool(); \
	friend struct Z_Construct_UClass_UEntityPool_Statics; \
public: \
	DECLARE_CLASS(UEntityPool, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpatialGDK"), NO_API) \
	DECLARE_SERIALIZER(UEntityPool)


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_EntityPool_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUEntityPool(); \
	friend struct Z_Construct_UClass_UEntityPool_Statics; \
public: \
	DECLARE_CLASS(UEntityPool, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SpatialGDK"), NO_API) \
	DECLARE_SERIALIZER(UEntityPool)


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_EntityPool_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEntityPool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEntityPool) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEntityPool); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEntityPool); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEntityPool(UEntityPool&&); \
	NO_API UEntityPool(const UEntityPool&); \
public:


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_EntityPool_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEntityPool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEntityPool(UEntityPool&&); \
	NO_API UEntityPool(const UEntityPool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEntityPool); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEntityPool); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEntityPool)


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_EntityPool_h_33_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NetDriver() { return STRUCT_OFFSET(UEntityPool, NetDriver); } \
	FORCEINLINE static uint32 __PPO__Receiver() { return STRUCT_OFFSET(UEntityPool, Receiver); }


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_EntityPool_h_30_PROLOG
#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_EntityPool_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_EntityPool_h_33_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_EntityPool_h_33_SPARSE_DATA \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_EntityPool_h_33_RPC_WRAPPERS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_EntityPool_h_33_INCLASS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_EntityPool_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_EntityPool_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_EntityPool_h_33_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_EntityPool_h_33_SPARSE_DATA \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_EntityPool_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_EntityPool_h_33_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_EntityPool_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPATIALGDK_API UClass* StaticClass<class UEntityPool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDK_Public_Utils_EntityPool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
