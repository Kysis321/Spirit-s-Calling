// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHorizonDialogueBlockInfo;
struct FHorizonDialogueSegmentInfo;
struct FHorizonDialogueDialoguePageResult;
struct FHorizonDialogueHypertextResult;
enum class EHorizonDialogueTextOverflowWrapMethod : uint8;
struct FSlateFontInfo;
struct FVector2D;
struct FLinearColor;
struct FSlateColor;
#ifdef HORIZONUI_HorizonDialogueMsgTextBlock_generated_h
#error "HorizonDialogueMsgTextBlock.generated.h already included, missing '#pragma once' in HorizonDialogueMsgTextBlock.h"
#endif
#define HORIZONUI_HorizonDialogueMsgTextBlock_generated_h

#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonDialogueMsgTextBlock_h_244_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHorizonDialogueDialoguePageResult_Statics; \
	HORIZONUI_API static class UScriptStruct* StaticStruct();


template<> HORIZONUI_API UScriptStruct* StaticStruct<struct FHorizonDialogueDialoguePageResult>();

#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonDialogueMsgTextBlock_h_218_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHorizonDialogueHypertextResult_Statics; \
	HORIZONUI_API static class UScriptStruct* StaticStruct();


template<> HORIZONUI_API UScriptStruct* StaticStruct<struct FHorizonDialogueHypertextResult>();

#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonDialogueMsgTextBlock_h_202_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHorizonDialoguePageInfo_Statics; \
	HORIZONUI_API static class UScriptStruct* StaticStruct();


template<> HORIZONUI_API UScriptStruct* StaticStruct<struct FHorizonDialoguePageInfo>();

#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonDialogueMsgTextBlock_h_132_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo_Statics; \
	HORIZONUI_API static class UScriptStruct* StaticStruct();


template<> HORIZONUI_API UScriptStruct* StaticStruct<struct FHorizonDialogueSegmentInfo>();

#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonDialogueMsgTextBlock_h_113_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHorizonDialogueRubyTextInfo_Statics; \
	HORIZONUI_API static class UScriptStruct* StaticStruct();


template<> HORIZONUI_API UScriptStruct* StaticStruct<struct FHorizonDialogueRubyTextInfo>();

#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonDialogueMsgTextBlock_h_94_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHorizonDialogueLineInfo_Statics; \
	HORIZONUI_API static class UScriptStruct* StaticStruct();


template<> HORIZONUI_API UScriptStruct* StaticStruct<struct FHorizonDialogueLineInfo>();

#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonDialogueMsgTextBlock_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHorizonDialogueBlockInfo_Statics; \
	HORIZONUI_API static class UScriptStruct* StaticStruct();


template<> HORIZONUI_API UScriptStruct* StaticStruct<struct FHorizonDialogueBlockInfo>();

#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonDialogueMsgTextBlock_h_278_DELEGATE \
struct HorizonDialogueMsgTextBlock_eventOnHorizonDialogueCharAdvancedEvent_Parms \
{ \
	FHorizonDialogueBlockInfo InCurrentBlockInfo; \
}; \
static inline void FOnHorizonDialogueCharAdvancedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonDialogueCharAdvancedEvent, FHorizonDialogueBlockInfo const& InCurrentBlockInfo) \
{ \
	HorizonDialogueMsgTextBlock_eventOnHorizonDialogueCharAdvancedEvent_Parms Parms; \
	Parms.InCurrentBlockInfo=InCurrentBlockInfo; \
	OnHorizonDialogueCharAdvancedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonDialogueMsgTextBlock_h_273_DELEGATE \
struct HorizonDialogueMsgTextBlock_eventOnHorizonDialogueCustomEvent_Parms \
{ \
	FString InEventName; \
	FHorizonDialogueSegmentInfo InSegInfo; \
}; \
static inline void FOnHorizonDialogueCustomEvent_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonDialogueCustomEvent, const FString& InEventName, FHorizonDialogueSegmentInfo const& InSegInfo) \
{ \
	HorizonDialogueMsgTextBlock_eventOnHorizonDialogueCustomEvent_Parms Parms; \
	Parms.InEventName=InEventName; \
	Parms.InSegInfo=InSegInfo; \
	OnHorizonDialogueCustomEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonDialogueMsgTextBlock_h_269_DELEGATE \
struct HorizonDialogueMsgTextBlock_eventOnHorizonDialoguePageEvent_Parms \
{ \
	FHorizonDialogueDialoguePageResult InResult; \
}; \
static inline void FOnHorizonDialoguePageEvent_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonDialoguePageEvent, FHorizonDialogueDialoguePageResult const& InResult) \
{ \
	HorizonDialogueMsgTextBlock_eventOnHorizonDialoguePageEvent_Parms Parms; \
	Parms.InResult=InResult; \
	OnHorizonDialoguePageEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonDialogueMsgTextBlock_h_265_DELEGATE \
static inline void FOnHorizonDialogueMsgEvent_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonDialogueMsgEvent) \
{ \
	OnHorizonDialogueMsgEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonDialogueMsgTextBlock_h_261_DELEGATE \
struct HorizonDialogueMsgTextBlock_eventOnHorizonHypertextEvent_Parms \
{ \
	FHorizonDialogueHypertextResult InResult; \
}; \
static inline void FOnHorizonHypertextEvent_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonHypertextEvent, FHorizonDialogueHypertextResult const& InResult) \
{ \
	HorizonDialogueMsgTextBlock_eventOnHorizonHypertextEvent_Parms Parms; \
	Parms.InResult=InResult; \
	OnHorizonHypertextEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonDialogueMsgTextBlock_h_260_SPARSE_DATA
#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonDialogueMsgTextBlock_h_260_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetTextOverflowWrapMethod); \
	DECLARE_FUNCTION(execGetTextOverflowWrapMethod); \
	DECLARE_FUNCTION(execIsDialogueMsgCompleted); \
	DECLARE_FUNCTION(execIsDialogueMsgPageEnd); \
	DECLARE_FUNCTION(execSkipCurrentDialoguePage); \
	DECLARE_FUNCTION(execSkipCurrentDialogueMsgPageTick); \
	DECLARE_FUNCTION(execGetPageTextByIndex); \
	DECLARE_FUNCTION(execGetCurrentPageTextLength); \
	DECLARE_FUNCTION(execSetAutoNextDialogueMsgPageIntervalRate); \
	DECLARE_FUNCTION(execSetIsAutoNextDialogueMsgPage); \
	DECLARE_FUNCTION(execSetDialogueMsgPage); \
	DECLARE_FUNCTION(execGetCurrentPageIndex); \
	DECLARE_FUNCTION(execPrevDialogueMsgPage); \
	DECLARE_FUNCTION(execNextDialogueMsgPage); \
	DECLARE_FUNCTION(execResumeDialogue); \
	DECLARE_FUNCTION(execPauseDialogue); \
	DECLARE_FUNCTION(execSkipDialogue); \
	DECLARE_FUNCTION(execStopDialogue); \
	DECLARE_FUNCTION(execStartDialogue); \
	DECLARE_FUNCTION(execRequestRebuildDialogue); \
	DECLARE_FUNCTION(execGetTextLength); \
	DECLARE_FUNCTION(execSetIsRepeatDialogueMsg); \
	DECLARE_FUNCTION(execSetIsStartTickDialogueMsg); \
	DECLARE_FUNCTION(execSetIsDialogueMsgText); \
	DECLARE_FUNCTION(execSetTextAndRebuildDialogue); \
	DECLARE_FUNCTION(execGetText); \
	DECLARE_FUNCTION(execGetJustification); \
	DECLARE_FUNCTION(execSetJustification); \
	DECLARE_FUNCTION(execSetFontSize); \
	DECLARE_FUNCTION(execSetFont); \
	DECLARE_FUNCTION(execSetShadowOffset); \
	DECLARE_FUNCTION(execSetShadowColorAndOpacity); \
	DECLARE_FUNCTION(execSetOpacity); \
	DECLARE_FUNCTION(execSetColorAndOpacity);


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonDialogueMsgTextBlock_h_260_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetTextOverflowWrapMethod); \
	DECLARE_FUNCTION(execGetTextOverflowWrapMethod); \
	DECLARE_FUNCTION(execIsDialogueMsgCompleted); \
	DECLARE_FUNCTION(execIsDialogueMsgPageEnd); \
	DECLARE_FUNCTION(execSkipCurrentDialoguePage); \
	DECLARE_FUNCTION(execSkipCurrentDialogueMsgPageTick); \
	DECLARE_FUNCTION(execGetPageTextByIndex); \
	DECLARE_FUNCTION(execGetCurrentPageTextLength); \
	DECLARE_FUNCTION(execSetAutoNextDialogueMsgPageIntervalRate); \
	DECLARE_FUNCTION(execSetIsAutoNextDialogueMsgPage); \
	DECLARE_FUNCTION(execSetDialogueMsgPage); \
	DECLARE_FUNCTION(execGetCurrentPageIndex); \
	DECLARE_FUNCTION(execPrevDialogueMsgPage); \
	DECLARE_FUNCTION(execNextDialogueMsgPage); \
	DECLARE_FUNCTION(execResumeDialogue); \
	DECLARE_FUNCTION(execPauseDialogue); \
	DECLARE_FUNCTION(execSkipDialogue); \
	DECLARE_FUNCTION(execStopDialogue); \
	DECLARE_FUNCTION(execStartDialogue); \
	DECLARE_FUNCTION(execRequestRebuildDialogue); \
	DECLARE_FUNCTION(execGetTextLength); \
	DECLARE_FUNCTION(execSetIsRepeatDialogueMsg); \
	DECLARE_FUNCTION(execSetIsStartTickDialogueMsg); \
	DECLARE_FUNCTION(execSetIsDialogueMsgText); \
	DECLARE_FUNCTION(execSetTextAndRebuildDialogue); \
	DECLARE_FUNCTION(execGetText); \
	DECLARE_FUNCTION(execGetJustification); \
	DECLARE_FUNCTION(execSetJustification); \
	DECLARE_FUNCTION(execSetFontSize); \
	DECLARE_FUNCTION(execSetFont); \
	DECLARE_FUNCTION(execSetShadowOffset); \
	DECLARE_FUNCTION(execSetShadowColorAndOpacity); \
	DECLARE_FUNCTION(execSetOpacity); \
	DECLARE_FUNCTION(execSetColorAndOpacity);


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonDialogueMsgTextBlock_h_260_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHorizonDialogueMsgTextBlock(); \
	friend struct Z_Construct_UClass_UHorizonDialogueMsgTextBlock_Statics; \
public: \
	DECLARE_CLASS(UHorizonDialogueMsgTextBlock, UCanvasPanel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonDialogueMsgTextBlock)


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonDialogueMsgTextBlock_h_260_INCLASS \
private: \
	static void StaticRegisterNativesUHorizonDialogueMsgTextBlock(); \
	friend struct Z_Construct_UClass_UHorizonDialogueMsgTextBlock_Statics; \
public: \
	DECLARE_CLASS(UHorizonDialogueMsgTextBlock, UCanvasPanel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonDialogueMsgTextBlock)


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonDialogueMsgTextBlock_h_260_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHorizonDialogueMsgTextBlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorizonDialogueMsgTextBlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizonDialogueMsgTextBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizonDialogueMsgTextBlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHorizonDialogueMsgTextBlock(UHorizonDialogueMsgTextBlock&&); \
	NO_API UHorizonDialogueMsgTextBlock(const UHorizonDialogueMsgTextBlock&); \
public:


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonDialogueMsgTextBlock_h_260_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHorizonDialogueMsgTextBlock(UHorizonDialogueMsgTextBlock&&); \
	NO_API UHorizonDialogueMsgTextBlock(const UHorizonDialogueMsgTextBlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizonDialogueMsgTextBlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizonDialogueMsgTextBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHorizonDialogueMsgTextBlock)


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonDialogueMsgTextBlock_h_260_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TextOverFlowWrapMethod() { return STRUCT_OFFSET(UHorizonDialogueMsgTextBlock, TextOverFlowWrapMethod); } \
	FORCEINLINE static uint32 __PPO__TextOverFlowWarpMethod_DEPRECATED() { return STRUCT_OFFSET(UHorizonDialogueMsgTextBlock, TextOverFlowWarpMethod_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__StyleInfoList() { return STRUCT_OFFSET(UHorizonDialogueMsgTextBlock, StyleInfoList); }


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonDialogueMsgTextBlock_h_255_PROLOG
#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonDialogueMsgTextBlock_h_260_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonDialogueMsgTextBlock_h_260_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonDialogueMsgTextBlock_h_260_SPARSE_DATA \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonDialogueMsgTextBlock_h_260_RPC_WRAPPERS \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonDialogueMsgTextBlock_h_260_INCLASS \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonDialogueMsgTextBlock_h_260_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonDialogueMsgTextBlock_h_260_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonDialogueMsgTextBlock_h_260_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonDialogueMsgTextBlock_h_260_SPARSE_DATA \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonDialogueMsgTextBlock_h_260_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonDialogueMsgTextBlock_h_260_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonDialogueMsgTextBlock_h_260_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HORIZONUI_API UClass* StaticClass<class UHorizonDialogueMsgTextBlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonDialogueMsgTextBlock_h


#define FOREACH_ENUM_EHORIZONDIALOGUETEXTOVERFLOWWRAPMETHOD(op) \
	op(EHorizonDialogueTextOverflowWrapMethod::Normal) \
	op(EHorizonDialogueTextOverflowWrapMethod::BreakAll) 

enum class EHorizonDialogueTextOverflowWrapMethod : uint8;
template<> HORIZONUI_API UEnum* StaticEnum<EHorizonDialogueTextOverflowWrapMethod>();

#define FOREACH_ENUM_EHORIZONDIALOGUETEXTOVERFLOWWARPMETHOD_DEPRECATED(op) \
	op(EHorizonDialogueTextOverflowWarpMethod_DEPRECATED::Normal) \
	op(EHorizonDialogueTextOverflowWarpMethod_DEPRECATED::BreakAll) \
	op(EHorizonDialogueTextOverflowWarpMethod_DEPRECATED::Invalidated) 

enum class EHorizonDialogueTextOverflowWarpMethod_DEPRECATED : uint8;
template<> HORIZONUI_API UEnum* StaticEnum<EHorizonDialogueTextOverflowWarpMethod_DEPRECATED>();

#define FOREACH_ENUM_EHORIZONDIALOGUESEGMENTTYPE(op) \
	op(EHorizonDialogueSegmentType::Invalidated) \
	op(EHorizonDialogueSegmentType::Text) \
	op(EHorizonDialogueSegmentType::NewLine) \
	op(EHorizonDialogueSegmentType::NewPage) \
	op(EHorizonDialogueSegmentType::Image) \
	op(EHorizonDialogueSegmentType::PaperFlipbook) \
	op(EHorizonDialogueSegmentType::Material) \
	op(EHorizonDialogueSegmentType::HyperText) \
	op(EHorizonDialogueSegmentType::Custom) 

enum class EHorizonDialogueSegmentType : uint8;
template<> HORIZONUI_API UEnum* StaticEnum<EHorizonDialogueSegmentType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
