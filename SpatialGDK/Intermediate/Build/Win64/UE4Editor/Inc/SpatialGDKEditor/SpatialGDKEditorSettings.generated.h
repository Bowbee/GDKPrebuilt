// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SPATIALGDKEDITOR_SpatialGDKEditorSettings_generated_h
#error "SpatialGDKEditorSettings.generated.h already included, missing '#pragma once' in SpatialGDKEditorSettings.h"
#endif
#define SPATIALGDKEDITOR_SpatialGDKEditorSettings_generated_h

#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKEditor_Public_SpatialGDKEditorSettings_h_231_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRuntimeVariantVersion_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__bUseGDKPinnedRuntimeVersionForLocal() { return STRUCT_OFFSET(FRuntimeVariantVersion, bUseGDKPinnedRuntimeVersionForLocal); } \
	FORCEINLINE static uint32 __PPO__bUseGDKPinnedRuntimeVersionForCloud() { return STRUCT_OFFSET(FRuntimeVariantVersion, bUseGDKPinnedRuntimeVersionForCloud); } \
	FORCEINLINE static uint32 __PPO__LocalRuntimeVersion() { return STRUCT_OFFSET(FRuntimeVariantVersion, LocalRuntimeVersion); } \
	FORCEINLINE static uint32 __PPO__CloudRuntimeVersion() { return STRUCT_OFFSET(FRuntimeVariantVersion, CloudRuntimeVersion); }


template<> SPATIALGDKEDITOR_API UScriptStruct* StaticStruct<struct FRuntimeVariantVersion>();

#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKEditor_Public_SpatialGDKEditorSettings_h_158_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSpatialLaunchConfigDescription_Statics; \
	SPATIALGDKEDITOR_API static class UScriptStruct* StaticStruct();


template<> SPATIALGDKEDITOR_API UScriptStruct* StaticStruct<struct FSpatialLaunchConfigDescription>();

#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKEditor_Public_SpatialGDKEditorSettings_h_118_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWorkerTypeLaunchSection_Statics; \
	SPATIALGDKEDITOR_API static class UScriptStruct* StaticStruct();


template<> SPATIALGDKEDITOR_API UScriptStruct* StaticStruct<struct FWorkerTypeLaunchSection>();

#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKEditor_Public_SpatialGDKEditorSettings_h_98_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLoginRateLimitSection_Statics; \
	SPATIALGDKEDITOR_API static class UScriptStruct* StaticStruct();


template<> SPATIALGDKEDITOR_API UScriptStruct* StaticStruct<struct FLoginRateLimitSection>();

#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKEditor_Public_SpatialGDKEditorSettings_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWorkerPermissionsSection_Statics; \
	SPATIALGDKEDITOR_API static class UScriptStruct* StaticStruct();


template<> SPATIALGDKEDITOR_API UScriptStruct* StaticStruct<struct FWorkerPermissionsSection>();

#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKEditor_Public_SpatialGDKEditorSettings_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWorldLaunchSection_Statics; \
	SPATIALGDKEDITOR_API static class UScriptStruct* StaticStruct();


template<> SPATIALGDKEDITOR_API UScriptStruct* StaticStruct<struct FWorldLaunchSection>();

#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKEditor_Public_SpatialGDKEditorSettings_h_277_SPARSE_DATA
#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKEditor_Public_SpatialGDKEditorSettings_h_277_RPC_WRAPPERS
#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKEditor_Public_SpatialGDKEditorSettings_h_277_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKEditor_Public_SpatialGDKEditorSettings_h_277_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpatialGDKEditorSettings(); \
	friend struct Z_Construct_UClass_USpatialGDKEditorSettings_Statics; \
public: \
	DECLARE_CLASS(USpatialGDKEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpatialGDKEditor"), NO_API) \
	DECLARE_SERIALIZER(USpatialGDKEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("SpatialGDKEditorSettings");} \



#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKEditor_Public_SpatialGDKEditorSettings_h_277_INCLASS \
private: \
	static void StaticRegisterNativesUSpatialGDKEditorSettings(); \
	friend struct Z_Construct_UClass_USpatialGDKEditorSettings_Statics; \
public: \
	DECLARE_CLASS(USpatialGDKEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpatialGDKEditor"), NO_API) \
	DECLARE_SERIALIZER(USpatialGDKEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("SpatialGDKEditorSettings");} \



#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKEditor_Public_SpatialGDKEditorSettings_h_277_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpatialGDKEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpatialGDKEditorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpatialGDKEditorSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpatialGDKEditorSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpatialGDKEditorSettings(USpatialGDKEditorSettings&&); \
	NO_API USpatialGDKEditorSettings(const USpatialGDKEditorSettings&); \
public:


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKEditor_Public_SpatialGDKEditorSettings_h_277_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpatialGDKEditorSettings(USpatialGDKEditorSettings&&); \
	NO_API USpatialGDKEditorSettings(const USpatialGDKEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpatialGDKEditorSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpatialGDKEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpatialGDKEditorSettings)


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKEditor_Public_SpatialGDKEditorSettings_h_277_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpatialOSLaunchConfig() { return STRUCT_OFFSET(USpatialGDKEditorSettings, SpatialOSLaunchConfig); } \
	FORCEINLINE static uint32 __PPO__SpatialOSSnapshotToSave() { return STRUCT_OFFSET(USpatialGDKEditorSettings, SpatialOSSnapshotToSave); } \
	FORCEINLINE static uint32 __PPO__SpatialOSSnapshotToLoad() { return STRUCT_OFFSET(USpatialGDKEditorSettings, SpatialOSSnapshotToLoad); } \
	FORCEINLINE static uint32 __PPO__CookAndGeneratePlatform() { return STRUCT_OFFSET(USpatialGDKEditorSettings, CookAndGeneratePlatform); } \
	FORCEINLINE static uint32 __PPO__CookAndGenerateAdditionalArguments() { return STRUCT_OFFSET(USpatialGDKEditorSettings, CookAndGenerateAdditionalArguments); } \
	FORCEINLINE static uint32 __PPO__SpatialOSCommandLineLaunchFlags() { return STRUCT_OFFSET(USpatialGDKEditorSettings, SpatialOSCommandLineLaunchFlags); } \
	FORCEINLINE static uint32 __PPO__AssemblyName() { return STRUCT_OFFSET(USpatialGDKEditorSettings, AssemblyName); } \
	FORCEINLINE static uint32 __PPO__PrimaryDeploymentName() { return STRUCT_OFFSET(USpatialGDKEditorSettings, PrimaryDeploymentName); } \
	FORCEINLINE static uint32 __PPO__PrimaryLaunchConfigPath() { return STRUCT_OFFSET(USpatialGDKEditorSettings, PrimaryLaunchConfigPath); } \
	FORCEINLINE static uint32 __PPO__SnapshotPath() { return STRUCT_OFFSET(USpatialGDKEditorSettings, SnapshotPath); } \
	FORCEINLINE static uint32 __PPO__PrimaryDeploymentRegionCode() { return STRUCT_OFFSET(USpatialGDKEditorSettings, PrimaryDeploymentRegionCode); } \
	FORCEINLINE static uint32 __PPO__MainDeploymentCluster() { return STRUCT_OFFSET(USpatialGDKEditorSettings, MainDeploymentCluster); } \
	FORCEINLINE static uint32 __PPO__DeploymentTags() { return STRUCT_OFFSET(USpatialGDKEditorSettings, DeploymentTags); } \
	FORCEINLINE static uint32 __PPO__bIsAutoGenerateCloudConfigEnabled() { return STRUCT_OFFSET(USpatialGDKEditorSettings, bIsAutoGenerateCloudConfigEnabled); } \
	FORCEINLINE static uint32 __PPO__SimulatedPlayerDeploymentRegionCode() { return STRUCT_OFFSET(USpatialGDKEditorSettings, SimulatedPlayerDeploymentRegionCode); } \
	FORCEINLINE static uint32 __PPO__SimulatedPlayerCluster() { return STRUCT_OFFSET(USpatialGDKEditorSettings, SimulatedPlayerCluster); } \
	FORCEINLINE static uint32 __PPO__bSimulatedPlayersIsEnabled() { return STRUCT_OFFSET(USpatialGDKEditorSettings, bSimulatedPlayersIsEnabled); } \
	FORCEINLINE static uint32 __PPO__SimulatedPlayerDeploymentName() { return STRUCT_OFFSET(USpatialGDKEditorSettings, SimulatedPlayerDeploymentName); } \
	FORCEINLINE static uint32 __PPO__NumberOfSimulatedPlayers() { return STRUCT_OFFSET(USpatialGDKEditorSettings, NumberOfSimulatedPlayers); }


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKEditor_Public_SpatialGDKEditorSettings_h_274_PROLOG
#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKEditor_Public_SpatialGDKEditorSettings_h_277_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKEditor_Public_SpatialGDKEditorSettings_h_277_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKEditor_Public_SpatialGDKEditorSettings_h_277_SPARSE_DATA \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKEditor_Public_SpatialGDKEditorSettings_h_277_RPC_WRAPPERS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKEditor_Public_SpatialGDKEditorSettings_h_277_INCLASS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKEditor_Public_SpatialGDKEditorSettings_h_277_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKEditor_Public_SpatialGDKEditorSettings_h_277_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKEditor_Public_SpatialGDKEditorSettings_h_277_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKEditor_Public_SpatialGDKEditorSettings_h_277_SPARSE_DATA \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKEditor_Public_SpatialGDKEditorSettings_h_277_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKEditor_Public_SpatialGDKEditorSettings_h_277_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKEditor_Public_SpatialGDKEditorSettings_h_277_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPATIALGDKEDITOR_API UClass* StaticClass<class USpatialGDKEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_UnrealGDK_SpatialGDK_Source_SpatialGDKEditor_Public_SpatialGDKEditorSettings_h


#define FOREACH_ENUM_ESPATIALOSRUNTIMEVARIANT(op) \
	op(ESpatialOSRuntimeVariant::Standard) \
	op(ESpatialOSRuntimeVariant::CompatibilityMode) 
#define FOREACH_ENUM_ESPATIALOSNETFLOW(op) \
	op(ESpatialOSNetFlow::LocalDeployment) \
	op(ESpatialOSNetFlow::CloudDeployment) 
#define FOREACH_ENUM_EREGIONCODE(op) \
	op(ERegionCode::US) \
	op(ERegionCode::EU) \
	op(ERegionCode::AP) \
	op(ERegionCode::CN) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
