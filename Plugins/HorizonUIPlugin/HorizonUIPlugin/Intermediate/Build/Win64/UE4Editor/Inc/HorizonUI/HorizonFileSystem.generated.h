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

#define Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_SPARSE_DATA
#define Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_RPC_WRAPPERS \
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


#define Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHorizonFileSystem(); \
	friend struct Z_Construct_UClass_UHorizonFileSystem_Statics; \
public: \
	DECLARE_CLASS(UHorizonFileSystem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonFileSystem) \
	static const TCHAR* StaticConfigName() {return TEXT("HorizonPlugin");} \



#define Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUHorizonFileSystem(); \
	friend struct Z_Construct_UClass_UHorizonFileSystem_Statics; \
public: \
	DECLARE_CLASS(UHorizonFileSystem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonFileSystem) \
	static const TCHAR* StaticConfigName() {return TEXT("HorizonPlugin");} \



#define Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_STANDARD_CONSTRUCTORS \
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


#define Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_ENHANCED_CONSTRUCTORS \
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


#define Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_PRIVATE_PROPERTY_OFFSET
#define Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_14_PROLOG
#define Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_PRIVATE_PROPERTY_OFFSET \
	Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_SPARSE_DATA \
	Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_RPC_WRAPPERS \
	Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_INCLASS \
	Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_PRIVATE_PROPERTY_OFFSET \
	Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_SPARSE_DATA \
	Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_INCLASS_NO_PURE_DECLS \
	Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HORIZONUI_API UClass* StaticClass<class UHorizonFileSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_FileSystem_HorizonFileSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
