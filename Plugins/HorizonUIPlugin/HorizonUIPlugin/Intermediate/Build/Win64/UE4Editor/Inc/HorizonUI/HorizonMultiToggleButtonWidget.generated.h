// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HORIZONUI_HorizonMultiToggleButtonWidget_generated_h
#error "HorizonMultiToggleButtonWidget.generated.h already included, missing '#pragma once' in HorizonMultiToggleButtonWidget.h"
#endif
#define HORIZONUI_HorizonMultiToggleButtonWidget_generated_h

#define Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonMultiToggleButtonWidget_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHorizonMultiToggleButtonState_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HORIZONUI_API UScriptStruct* StaticStruct<struct FHorizonMultiToggleButtonState>();

#define Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonMultiToggleButtonWidget_h_40_DELEGATE \
struct HorizonMultiToggleButtonWidget_eventOnHorizonMultiToggleButtonEvent_Parms \
{ \
	int32 InCurrentStateIndex; \
	int32 InToStateIndex; \
}; \
static inline void FOnHorizonMultiToggleButtonEvent_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonMultiToggleButtonEvent, int32 InCurrentStateIndex, int32 InToStateIndex) \
{ \
	HorizonMultiToggleButtonWidget_eventOnHorizonMultiToggleButtonEvent_Parms Parms; \
	Parms.InCurrentStateIndex=InCurrentStateIndex; \
	Parms.InToStateIndex=InToStateIndex; \
	OnHorizonMultiToggleButtonEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonMultiToggleButtonWidget_h_37_DELEGATE \
struct HorizonMultiToggleButtonWidget_eventOnHorizonMultiToggleButtonSyncEvent_Parms \
{ \
	int32 InCurrentStateIndex; \
}; \
static inline void FOnHorizonMultiToggleButtonSyncEvent_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonMultiToggleButtonSyncEvent, int32 InCurrentStateIndex) \
{ \
	HorizonMultiToggleButtonWidget_eventOnHorizonMultiToggleButtonSyncEvent_Parms Parms; \
	Parms.InCurrentStateIndex=InCurrentStateIndex; \
	OnHorizonMultiToggleButtonSyncEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonMultiToggleButtonWidget_h_35_SPARSE_DATA
#define Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonMultiToggleButtonWidget_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetToggleState_NextIndex); \
	DECLARE_FUNCTION(execGetToggleState_PrevIndex); \
	DECLARE_FUNCTION(execGetLoopToggleState); \
	DECLARE_FUNCTION(execSetLoopToggleState); \
	DECLARE_FUNCTION(execGetCurrentStateIndex); \
	DECLARE_FUNCTION(execSetCurrentStateIndex); \
	DECLARE_FUNCTION(execToggleState_Next); \
	DECLARE_FUNCTION(execToggleState_Prev);


#define Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonMultiToggleButtonWidget_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetToggleState_NextIndex); \
	DECLARE_FUNCTION(execGetToggleState_PrevIndex); \
	DECLARE_FUNCTION(execGetLoopToggleState); \
	DECLARE_FUNCTION(execSetLoopToggleState); \
	DECLARE_FUNCTION(execGetCurrentStateIndex); \
	DECLARE_FUNCTION(execSetCurrentStateIndex); \
	DECLARE_FUNCTION(execToggleState_Next); \
	DECLARE_FUNCTION(execToggleState_Prev);


#define Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonMultiToggleButtonWidget_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHorizonMultiToggleButtonWidget(); \
	friend struct Z_Construct_UClass_UHorizonMultiToggleButtonWidget_Statics; \
public: \
	DECLARE_CLASS(UHorizonMultiToggleButtonWidget, UHorizonDesignableUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonMultiToggleButtonWidget)


#define Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonMultiToggleButtonWidget_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUHorizonMultiToggleButtonWidget(); \
	friend struct Z_Construct_UClass_UHorizonMultiToggleButtonWidget_Statics; \
public: \
	DECLARE_CLASS(UHorizonMultiToggleButtonWidget, UHorizonDesignableUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonMultiToggleButtonWidget)


#define Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonMultiToggleButtonWidget_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHorizonMultiToggleButtonWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorizonMultiToggleButtonWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizonMultiToggleButtonWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizonMultiToggleButtonWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHorizonMultiToggleButtonWidget(UHorizonMultiToggleButtonWidget&&); \
	NO_API UHorizonMultiToggleButtonWidget(const UHorizonMultiToggleButtonWidget&); \
public:


#define Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonMultiToggleButtonWidget_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHorizonMultiToggleButtonWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHorizonMultiToggleButtonWidget(UHorizonMultiToggleButtonWidget&&); \
	NO_API UHorizonMultiToggleButtonWidget(const UHorizonMultiToggleButtonWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizonMultiToggleButtonWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizonMultiToggleButtonWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorizonMultiToggleButtonWidget)


#define Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonMultiToggleButtonWidget_h_35_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bLoopToggleState() { return STRUCT_OFFSET(UHorizonMultiToggleButtonWidget, bLoopToggleState); } \
	FORCEINLINE static uint32 __PPO__CurrentStateIndex() { return STRUCT_OFFSET(UHorizonMultiToggleButtonWidget, CurrentStateIndex); }


#define Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonMultiToggleButtonWidget_h_32_PROLOG
#define Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonMultiToggleButtonWidget_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonMultiToggleButtonWidget_h_35_PRIVATE_PROPERTY_OFFSET \
	Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonMultiToggleButtonWidget_h_35_SPARSE_DATA \
	Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonMultiToggleButtonWidget_h_35_RPC_WRAPPERS \
	Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonMultiToggleButtonWidget_h_35_INCLASS \
	Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonMultiToggleButtonWidget_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonMultiToggleButtonWidget_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonMultiToggleButtonWidget_h_35_PRIVATE_PROPERTY_OFFSET \
	Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonMultiToggleButtonWidget_h_35_SPARSE_DATA \
	Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonMultiToggleButtonWidget_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonMultiToggleButtonWidget_h_35_INCLASS_NO_PURE_DECLS \
	Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonMultiToggleButtonWidget_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HORIZONUI_API UClass* StaticClass<class UHorizonMultiToggleButtonWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Spirit_s_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonMultiToggleButtonWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
