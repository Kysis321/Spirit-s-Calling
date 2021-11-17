// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHorizonButtonUserWidget;
struct FFocusEvent;
#ifdef HORIZONUI_HorizonButtonUserWidget_generated_h
#error "HorizonButtonUserWidget.generated.h already included, missing '#pragma once' in HorizonButtonUserWidget.h"
#endif
#define HORIZONUI_HorizonButtonUserWidget_generated_h

#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonButtonUserWidget_h_27_DELEGATE \
struct HorizonButtonUserWidget_eventOnHorizonButtonFocusEvent_Parms \
{ \
	UHorizonButtonUserWidget* InButton; \
	FFocusEvent InFocusEvent; \
}; \
static inline void FOnHorizonButtonFocusEvent_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonButtonFocusEvent, UHorizonButtonUserWidget* InButton, FFocusEvent const& InFocusEvent) \
{ \
	HorizonButtonUserWidget_eventOnHorizonButtonFocusEvent_Parms Parms; \
	Parms.InButton=InButton; \
	Parms.InFocusEvent=InFocusEvent; \
	OnHorizonButtonFocusEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonButtonUserWidget_h_23_DELEGATE \
struct HorizonButtonUserWidget_eventOnHorizonButtonEvent_Parms \
{ \
	UHorizonButtonUserWidget* InButton; \
}; \
static inline void FOnHorizonButtonEvent_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonButtonEvent, UHorizonButtonUserWidget* InButton) \
{ \
	HorizonButtonUserWidget_eventOnHorizonButtonEvent_Parms Parms; \
	Parms.InButton=InButton; \
	OnHorizonButtonEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonButtonUserWidget_h_21_SPARSE_DATA
#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonButtonUserWidget_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNativeOnButtonUnhovered); \
	DECLARE_FUNCTION(execNativeOnButtonHovered); \
	DECLARE_FUNCTION(execNativeOnButtonClicked); \
	DECLARE_FUNCTION(execNativeOnButtonReleased); \
	DECLARE_FUNCTION(execNativeOnButtonPressed);


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonButtonUserWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNativeOnButtonUnhovered); \
	DECLARE_FUNCTION(execNativeOnButtonHovered); \
	DECLARE_FUNCTION(execNativeOnButtonClicked); \
	DECLARE_FUNCTION(execNativeOnButtonReleased); \
	DECLARE_FUNCTION(execNativeOnButtonPressed);


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonButtonUserWidget_h_21_EVENT_PARMS \
	struct HorizonButtonUserWidget_eventReceiveOnButtonFocus_Parms \
	{ \
		FFocusEvent InFocusEvent; \
	}; \
	struct HorizonButtonUserWidget_eventReceiveOnOnButtonFocusLost_Parms \
	{ \
		FFocusEvent InFocusEvent; \
	};


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonButtonUserWidget_h_21_CALLBACK_WRAPPERS
#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonButtonUserWidget_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHorizonButtonUserWidget(); \
	friend struct Z_Construct_UClass_UHorizonButtonUserWidget_Statics; \
public: \
	DECLARE_CLASS(UHorizonButtonUserWidget, UHorizonDesignableUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonButtonUserWidget)


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonButtonUserWidget_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUHorizonButtonUserWidget(); \
	friend struct Z_Construct_UClass_UHorizonButtonUserWidget_Statics; \
public: \
	DECLARE_CLASS(UHorizonButtonUserWidget, UHorizonDesignableUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonButtonUserWidget)


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonButtonUserWidget_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHorizonButtonUserWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorizonButtonUserWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizonButtonUserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizonButtonUserWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHorizonButtonUserWidget(UHorizonButtonUserWidget&&); \
	NO_API UHorizonButtonUserWidget(const UHorizonButtonUserWidget&); \
public:


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonButtonUserWidget_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHorizonButtonUserWidget(UHorizonButtonUserWidget&&); \
	NO_API UHorizonButtonUserWidget(const UHorizonButtonUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizonButtonUserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizonButtonUserWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHorizonButtonUserWidget)


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonButtonUserWidget_h_21_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonButtonUserWidget_h_18_PROLOG \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonButtonUserWidget_h_21_EVENT_PARMS


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonButtonUserWidget_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonButtonUserWidget_h_21_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonButtonUserWidget_h_21_SPARSE_DATA \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonButtonUserWidget_h_21_RPC_WRAPPERS \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonButtonUserWidget_h_21_CALLBACK_WRAPPERS \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonButtonUserWidget_h_21_INCLASS \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonButtonUserWidget_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonButtonUserWidget_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonButtonUserWidget_h_21_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonButtonUserWidget_h_21_SPARSE_DATA \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonButtonUserWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonButtonUserWidget_h_21_CALLBACK_WRAPPERS \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonButtonUserWidget_h_21_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonButtonUserWidget_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HORIZONUI_API UClass* StaticClass<class UHorizonButtonUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Blueprint_HorizonButtonUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
