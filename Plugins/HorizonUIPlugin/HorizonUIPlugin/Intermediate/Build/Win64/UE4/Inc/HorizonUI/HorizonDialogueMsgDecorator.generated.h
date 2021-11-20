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

#define Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_SPARSE_DATA
#define Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_RPC_WRAPPERS \
	virtual bool Run_Implementation(UHorizonDialogueMsgTextBlock* InMsgTextBlock, FHorizonDialogueBlockInfo& InDialogueBlockInfo, FHorizonDialogueSegmentInfo& InSegInfo); \
	virtual bool PreRun_Implementation(UHorizonDialogueMsgTextBlock* InMsgTextBlock, FHorizonDialogueBlockInfo& InDialogueBlockInfo, FHorizonDialogueSegmentInfo& InSegInfo); \
 \
	DECLARE_FUNCTION(execRun); \
	DECLARE_FUNCTION(execPreRun);


#define Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRun); \
	DECLARE_FUNCTION(execPreRun);


#define Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_EVENT_PARMS \
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


#define Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_CALLBACK_WRAPPERS
#define Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHorizonDialogueMsgDecorator(); \
	friend struct Z_Construct_UClass_UHorizonDialogueMsgDecorator_Statics; \
public: \
	DECLARE_CLASS(UHorizonDialogueMsgDecorator, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonDialogueMsgDecorator)


#define Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUHorizonDialogueMsgDecorator(); \
	friend struct Z_Construct_UClass_UHorizonDialogueMsgDecorator_Statics; \
public: \
	DECLARE_CLASS(UHorizonDialogueMsgDecorator, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonDialogueMsgDecorator)


#define Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_STANDARD_CONSTRUCTORS \
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


#define Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_ENHANCED_CONSTRUCTORS \
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


#define Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_PRIVATE_PROPERTY_OFFSET
#define Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_14_PROLOG \
	Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_EVENT_PARMS


#define Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_PRIVATE_PROPERTY_OFFSET \
	Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_SPARSE_DATA \
	Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_RPC_WRAPPERS \
	Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_CALLBACK_WRAPPERS \
	Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_INCLASS \
	Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_PRIVATE_PROPERTY_OFFSET \
	Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_SPARSE_DATA \
	Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_CALLBACK_WRAPPERS \
	Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_INCLASS_NO_PURE_DECLS \
	Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HORIZONUI_API UClass* StaticClass<class UHorizonDialogueMsgDecorator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Decorator_HorizonDialogueMsgDecorator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
