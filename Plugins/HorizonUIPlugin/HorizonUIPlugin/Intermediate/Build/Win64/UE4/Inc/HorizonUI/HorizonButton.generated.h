// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHorizonButton;
#ifdef HORIZONUI_HorizonButton_generated_h
#error "HorizonButton.generated.h already included, missing '#pragma once' in HorizonButton.h"
#endif
#define HORIZONUI_HorizonButton_generated_h

#define Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonButton_h_21_DELEGATE \
struct HorizonButton_eventOnHorizonButtonEvent_Parms \
{ \
	UHorizonButton* Button; \
}; \
static inline void FOnHorizonButtonEvent_DelegateWrapper(const FMulticastScriptDelegate& OnHorizonButtonEvent, UHorizonButton* Button) \
{ \
	HorizonButton_eventOnHorizonButtonEvent_Parms Parms; \
	Parms.Button=Button; \
	OnHorizonButtonEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonButton_h_20_SPARSE_DATA
#define Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonButton_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnUnhoveredButton); \
	DECLARE_FUNCTION(execOnHoveredButton); \
	DECLARE_FUNCTION(execOnClickedButton); \
	DECLARE_FUNCTION(execOnReleasedButton); \
	DECLARE_FUNCTION(execOnPressedButton);


#define Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonButton_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnUnhoveredButton); \
	DECLARE_FUNCTION(execOnHoveredButton); \
	DECLARE_FUNCTION(execOnClickedButton); \
	DECLARE_FUNCTION(execOnReleasedButton); \
	DECLARE_FUNCTION(execOnPressedButton);


#define Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonButton_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHorizonButton(); \
	friend struct Z_Construct_UClass_UHorizonButton_Statics; \
public: \
	DECLARE_CLASS(UHorizonButton, UButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonButton)


#define Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonButton_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUHorizonButton(); \
	friend struct Z_Construct_UClass_UHorizonButton_Statics; \
public: \
	DECLARE_CLASS(UHorizonButton, UButton, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HorizonUI"), NO_API) \
	DECLARE_SERIALIZER(UHorizonButton)


#define Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonButton_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHorizonButton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorizonButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizonButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizonButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHorizonButton(UHorizonButton&&); \
	NO_API UHorizonButton(const UHorizonButton&); \
public:


#define Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonButton_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHorizonButton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHorizonButton(UHorizonButton&&); \
	NO_API UHorizonButton(const UHorizonButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHorizonButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHorizonButton); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHorizonButton)


#define Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonButton_h_20_PRIVATE_PROPERTY_OFFSET
#define Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonButton_h_17_PROLOG
#define Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonButton_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonButton_h_20_PRIVATE_PROPERTY_OFFSET \
	Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonButton_h_20_SPARSE_DATA \
	Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonButton_h_20_RPC_WRAPPERS \
	Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonButton_h_20_INCLASS \
	Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonButton_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonButton_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonButton_h_20_PRIVATE_PROPERTY_OFFSET \
	Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonButton_h_20_SPARSE_DATA \
	Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonButton_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonButton_h_20_INCLASS_NO_PURE_DECLS \
	Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonButton_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HORIZONUI_API UClass* StaticClass<class UHorizonButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Spirits_Calling_Plugins_HorizonUIPlugin_HorizonUIPlugin_Source_HorizonUI_Public_Widget_Components_HorizonButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
