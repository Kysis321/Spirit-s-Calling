// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UFont;
class USoundBase;
class UMaterial;
class UPaperFlipbook;
class UTexture2D;
class UHorizonFileSystem;
#ifdef HORIZONUI_HorizonFileSystem_generated_h
#error "HorizonFileSystem.generated.h already included, missing '#pragma once' in HorizonFileSystem.h"
#endif
#define HORIZONUI_HorizonFileSystem_generated_h

#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_SPARSE_DATA
#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadUAsset); \
	DECLARE_FUNCTION(execLoadFont); \
	DECLARE_FUNCTION(execLoadSound); \
	DECLARE_FUNCTION(execLoadMaterial); \
	DECLARE_FUNCTION(execLoadPaperFlipbook); \
	DECLARE_FUNCTION(execLoadTexture2D); \
	DECLARE_FUNCTION(execCreateDirectoryRecursively); \
	DECLARE_FUNCTION(execDestroyInstance); \
	DECLARE_FUNCTION(execGetInstance);


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadUAsset); \
	DECLARE_FUNCTION(execLoadFont); \
	DECLARE_FUNCTION(execLoadSound); \
	DECLARE_FUNCTION(execLoadMaterial); \
	DECLARE_FUNCTION(execLoadPaperFlipbook); \
	DECLARE_FUNCTION(execLoadTexture2D); \
	DECLARE_FUNCTION(execCreateDirectoryRecursively); \
	DECLARE_FUNCTION(execDestroyInstance); \
	DECLARE_FUNCTION(execGetInstance);


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHorizonFileSystem(); \
	friend struct Z_Construct_UClass_UHorizonFileSystem_Statics; \
public: \
	DECLARE_CLASS(UHorizonFileSystem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonFileSystem) \
	static const TCHAR* StaticConfigName() {return TEXT("HorizonPlugin");} \



#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUHorizonFileSystem(); \
	friend struct Z_Construct_UClass_UHorizonFileSystem_Statics; \
public: \
	DECLARE_CLASS(UHorizonFileSystem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonFileSystem) \
	static const TCHAR* StaticConfigName() {return TEXT("HorizonPlugin");} \



#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHorizonFileSystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorizonFileSystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizonFileSystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizonFileSystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHorizonFileSystem(UHorizonFileSystem&&); \
	NO_API UHorizonFileSystem(const UHorizonFileSystem&); \
public:


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHorizonFileSystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHorizonFileSystem(UHorizonFileSystem&&); \
	NO_API UHorizonFileSystem(const UHorizonFileSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizonFileSystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizonFileSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorizonFileSystem)


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_14_PROLOG
#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_SPARSE_DATA \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_RPC_WRAPPERS \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_INCLASS \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_SPARSE_DATA \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HORIZONUI_API UClass* StaticClass<class UHorizonFileSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
