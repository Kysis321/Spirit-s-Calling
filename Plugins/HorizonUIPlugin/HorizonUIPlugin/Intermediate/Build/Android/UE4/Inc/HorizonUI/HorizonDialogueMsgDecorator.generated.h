// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHorizonDialogueMsgTextBlock;
struct FHorizonDialogueBlockInfo;
struct FHorizonDialogueSegmentInfo;
#ifdef HORIZONUI_HorizonDialogueMsgDecorator_generated_h
#error "HorizonDialogueMsgDecorator.generated.h already included, missing '#pragma once' in HorizonDialogueMsgDecorator.h"
#endif
#define HORIZONUI_HorizonDialogueMsgDecorator_generated_h

#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_SPARSE_DATA
#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_RPC_WRAPPERS \
	virtual bool Run_Implementation(UHorizonDialogueMsgTextBlock* InMsgTextBlock, FHorizonDialogueBlockInfo& InDialogueBlockInfo, FHorizonDialogueSegmentInfo& InSegInfo); \
	virtual bool PreRun_Implementation(UHorizonDialogueMsgTextBlock* InMsgTextBlock, FHorizonDialogueBlockInfo& InDialogueBlockInfo, FHorizonDialogueSegmentInfo& InSegInfo); \
 \
	DECLARE_FUNCTION(execRun); \
	DECLARE_FUNCTION(execPreRun);


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRun); \
	DECLARE_FUNCTION(execPreRun);


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_EVENT_PARMS \
	struct HorizonDialogueMsgDecorator_eventPreRun_Parms \
	{ \
		UHorizonDialogueMsgTextBlock* InMsgTextBlock; \
		FHorizonDialogueBlockInfo InDialogueBlockInfo; \
		FHorizonDialogueSegmentInfo InSegInfo; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HorizonDialogueMsgDecorator_eventPreRun_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HorizonDialogueMsgDecorator_eventRun_Parms \
	{ \
		UHorizonDialogueMsgTextBlock* InMsgTextBlock; \
		FHorizonDialogueBlockInfo InDialogueBlockInfo; \
		FHorizonDialogueSegmentInfo InSegInfo; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HorizonDialogueMsgDecorator_eventRun_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_CALLBACK_WRAPPERS
#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHorizonDialogueMsgDecorator(); \
	friend struct Z_Construct_UClass_UHorizonDialogueMsgDecorator_Statics; \
public: \
	DECLARE_CLASS(UHorizonDialogueMsgDecorator, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonDialogueMsgDecorator)


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUHorizonDialogueMsgDecorator(); \
	friend struct Z_Construct_UClass_UHorizonDialogueMsgDecorator_Statics; \
public: \
	DECLARE_CLASS(UHorizonDialogueMsgDecorator, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonDialogueMsgDecorator)


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHorizonDialogueMsgDecorator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorizonDialogueMsgDecorator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizonDialogueMsgDecorator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizonDialogueMsgDecorator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHorizonDialogueMsgDecorator(UHorizonDialogueMsgDecorator&&); \
	NO_API UHorizonDialogueMsgDecorator(const UHorizonDialogueMsgDecorator&); \
public:


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHorizonDialogueMsgDecorator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHorizonDialogueMsgDecorator(UHorizonDialogueMsgDecorator&&); \
	NO_API UHorizonDialogueMsgDecorator(const UHorizonDialogueMsgDecorator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizonDialogueMsgDecorator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizonDialogueMsgDecorator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorizonDialogueMsgDecorator)


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_14_PROLOG \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_EVENT_PARMS


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_SPARSE_DATA \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_RPC_WRAPPERS \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_CALLBACK_WRAPPERS \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_INCLASS \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_SPARSE_DATA \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_CALLBACK_WRAPPERS \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HORIZONUI_API UClass* StaticClass<class UHorizonDialogueMsgDecorator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
