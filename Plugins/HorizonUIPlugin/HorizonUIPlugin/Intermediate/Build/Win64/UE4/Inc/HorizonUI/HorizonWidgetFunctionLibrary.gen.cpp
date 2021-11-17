// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorizonUI/Public/Widget/HorizonWidgetFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorizonWidgetFunctionLibrary() {}
// Cross Module References
	HORIZONUI_API UEnum* Z_Construct_UEnum_HorizonUI_EHorizonUIInputMode();
	UPackage* Z_Construct_UPackage__Script_HorizonUI();
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonWidgetFunctionLibrary_NoRegister();
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonWidgetFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanelSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
// End Cross Module References
	static UEnum* EHorizonUIInputMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HorizonUI_EHorizonUIInputMode, Z_Construct_UPackage__Script_HorizonUI(), TEXT("EHorizonUIInputMode"));
		}
		return Singleton;
	}
	template<> HORIZONUI_API UEnum* StaticEnum<EHorizonUIInputMode>()
	{
		return EHorizonUIInputMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHorizonUIInputMode(EHorizonUIInputMode_StaticEnum, TEXT("/Script/HorizonUI"), TEXT("EHorizonUIInputMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HorizonUI_EHorizonUIInputMode_Hash() { return 2443201969U; }
	UEnum* Z_Construct_UEnum_HorizonUI_EHorizonUIInputMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HorizonUI();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHorizonUIInputMode"), 0, Get_Z_Construct_UEnum_HorizonUI_EHorizonUIInputMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHorizonUIInputMode::Invalidated", (int64)EHorizonUIInputMode::Invalidated },
				{ "EHorizonUIInputMode::GameAndUI", (int64)EHorizonUIInputMode::GameAndUI },
				{ "EHorizonUIInputMode::UIOnly", (int64)EHorizonUIInputMode::UIOnly },
				{ "EHorizonUIInputMode::GameOnly", (int64)EHorizonUIInputMode::GameOnly },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "GameAndUI.Name", "EHorizonUIInputMode::GameAndUI" },
				{ "GameOnly.Name", "EHorizonUIInputMode::GameOnly" },
				{ "Invalidated.Name", "EHorizonUIInputMode::Invalidated" },
				{ "ModuleRelativePath", "Public/Widget/HorizonWidgetFunctionLibrary.h" },
				{ "UIOnly.Name", "EHorizonUIInputMode::UIOnly" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HorizonUI,
				nullptr,
				"EHorizonUIInputMode",
				"EHorizonUIInputMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UHorizonWidgetFunctionLibrary::execGetUserIndex)
	{
		P_GET_OBJECT(UWidget,Z_Param_InWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UHorizonWidgetFunctionLibrary::GetUserIndex(Z_Param_InWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHorizonWidgetFunctionLibrary::execGetInputMode)
	{
		P_GET_OBJECT(APlayerController,Z_Param_InPC);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EHorizonUIInputMode*)Z_Param__Result=UHorizonWidgetFunctionLibrary::GetInputMode(Z_Param_InPC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHorizonWidgetFunctionLibrary::execSetWidgetVisibility)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_UserWidget);
		P_GET_PROPERTY(FNameProperty,Z_Param_WidgetName);
		P_GET_ENUM(ESlateVisibility,Z_Param_eVisiblity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWidget**)Z_Param__Result=UHorizonWidgetFunctionLibrary::SetWidgetVisibility(Z_Param_UserWidget,Z_Param_WidgetName,ESlateVisibility(Z_Param_eVisiblity));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHorizonWidgetFunctionLibrary::execGetWidgetFromNameRecursively)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_pUserWidget);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InWidgetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWidget**)Z_Param__Result=UHorizonWidgetFunctionLibrary::GetWidgetFromNameRecursively(Z_Param_pUserWidget,Z_Param_Out_InWidgetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHorizonWidgetFunctionLibrary::execGetUserWidgetAnimation)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_pUserWidget);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_animeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWidgetAnimation**)Z_Param__Result=UHorizonWidgetFunctionLibrary::GetUserWidgetAnimation(Z_Param_pUserWidget,Z_Param_Out_animeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHorizonWidgetFunctionLibrary::execGetParentCanvasPanelSlot)
	{
		P_GET_OBJECT(UWidget,Z_Param_pWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCanvasPanelSlot**)Z_Param__Result=UHorizonWidgetFunctionLibrary::GetParentCanvasPanelSlot(Z_Param_pWidget);
		P_NATIVE_END;
	}
	void UHorizonWidgetFunctionLibrary::StaticRegisterNativesUHorizonWidgetFunctionLibrary()
	{
		UClass* Class = UHorizonWidgetFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInputMode", &UHorizonWidgetFunctionLibrary::execGetInputMode },
			{ "GetParentCanvasPanelSlot", &UHorizonWidgetFunctionLibrary::execGetParentCanvasPanelSlot },
			{ "GetUserIndex", &UHorizonWidgetFunctionLibrary::execGetUserIndex },
			{ "GetUserWidgetAnimation", &UHorizonWidgetFunctionLibrary::execGetUserWidgetAnimation },
			{ "GetWidgetFromNameRecursively", &UHorizonWidgetFunctionLibrary::execGetWidgetFromNameRecursively },
			{ "SetWidgetVisibility", &UHorizonWidgetFunctionLibrary::execSetWidgetVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetInputMode_Statics
	{
		struct HorizonWidgetFunctionLibrary_eventGetInputMode_Parms
		{
			const APlayerController* InPC;
			EHorizonUIInputMode ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InPC;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetInputMode_Statics::NewProp_InPC_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetInputMode_Statics::NewProp_InPC = { "InPC", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventGetInputMode_Parms, InPC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetInputMode_Statics::NewProp_InPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetInputMode_Statics::NewProp_InPC_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetInputMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetInputMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventGetInputMode_Parms, ReturnValue), Z_Construct_UEnum_HorizonUI_EHorizonUIInputMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetInputMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetInputMode_Statics::NewProp_InPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetInputMode_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetInputMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetInputMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorizonPlugin|UI|Library" },
		{ "ModuleRelativePath", "Public/Widget/HorizonWidgetFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetInputMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonWidgetFunctionLibrary, nullptr, "GetInputMode", nullptr, nullptr, sizeof(HorizonWidgetFunctionLibrary_eventGetInputMode_Parms), Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetInputMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetInputMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetInputMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetInputMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetInputMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetInputMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics
	{
		struct HorizonWidgetFunctionLibrary_eventGetParentCanvasPanelSlot_Parms
		{
			UWidget* pWidget;
			UCanvasPanelSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics::NewProp_pWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics::NewProp_pWidget = { "pWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventGetParentCanvasPanelSlot_Parms, pWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics::NewProp_pWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics::NewProp_pWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventGetParentCanvasPanelSlot_Parms, ReturnValue), Z_Construct_UClass_UCanvasPanelSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics::NewProp_pWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorizonPlugin|UI|Library" },
		{ "ModuleRelativePath", "Public/Widget/HorizonWidgetFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonWidgetFunctionLibrary, nullptr, "GetParentCanvasPanelSlot", nullptr, nullptr, sizeof(HorizonWidgetFunctionLibrary_eventGetParentCanvasPanelSlot_Parms), Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserIndex_Statics
	{
		struct HorizonWidgetFunctionLibrary_eventGetUserIndex_Parms
		{
			UWidget* InWidget;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InWidget;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserIndex_Statics::NewProp_InWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserIndex_Statics::NewProp_InWidget = { "InWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventGetUserIndex_Parms, InWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserIndex_Statics::NewProp_InWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserIndex_Statics::NewProp_InWidget_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventGetUserIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserIndex_Statics::NewProp_InWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorizonPlugin|UI|Library" },
		{ "ModuleRelativePath", "Public/Widget/HorizonWidgetFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonWidgetFunctionLibrary, nullptr, "GetUserIndex", nullptr, nullptr, sizeof(HorizonWidgetFunctionLibrary_eventGetUserIndex_Parms), Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics
	{
		struct HorizonWidgetFunctionLibrary_eventGetUserWidgetAnimation_Parms
		{
			UUserWidget* pUserWidget;
			FName animeName;
			UWidgetAnimation* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pUserWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pUserWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_animeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_animeName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::NewProp_pUserWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::NewProp_pUserWidget = { "pUserWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventGetUserWidgetAnimation_Parms, pUserWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::NewProp_pUserWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::NewProp_pUserWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::NewProp_animeName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::NewProp_animeName = { "animeName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventGetUserWidgetAnimation_Parms, animeName), METADATA_PARAMS(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::NewProp_animeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::NewProp_animeName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventGetUserWidgetAnimation_Parms, ReturnValue), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::NewProp_pUserWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::NewProp_animeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorizonPlugin|UI|Library" },
		{ "ModuleRelativePath", "Public/Widget/HorizonWidgetFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonWidgetFunctionLibrary, nullptr, "GetUserWidgetAnimation", nullptr, nullptr, sizeof(HorizonWidgetFunctionLibrary_eventGetUserWidgetAnimation_Parms), Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics
	{
		struct HorizonWidgetFunctionLibrary_eventGetWidgetFromNameRecursively_Parms
		{
			UUserWidget* pUserWidget;
			FName InWidgetName;
			UWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pUserWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pUserWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InWidgetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InWidgetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::NewProp_pUserWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::NewProp_pUserWidget = { "pUserWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventGetWidgetFromNameRecursively_Parms, pUserWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::NewProp_pUserWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::NewProp_pUserWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::NewProp_InWidgetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::NewProp_InWidgetName = { "InWidgetName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventGetWidgetFromNameRecursively_Parms, InWidgetName), METADATA_PARAMS(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::NewProp_InWidgetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::NewProp_InWidgetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventGetWidgetFromNameRecursively_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::NewProp_pUserWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::NewProp_InWidgetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorizonPlugin|UI|Library" },
		{ "ModuleRelativePath", "Public/Widget/HorizonWidgetFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonWidgetFunctionLibrary, nullptr, "GetWidgetFromNameRecursively", nullptr, nullptr, sizeof(HorizonWidgetFunctionLibrary_eventGetWidgetFromNameRecursively_Parms), Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics
	{
		struct HorizonWidgetFunctionLibrary_eventSetWidgetVisibility_Parms
		{
			UUserWidget* UserWidget;
			FName WidgetName;
			ESlateVisibility eVisiblity;
			UWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserWidget;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WidgetName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eVisiblity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eVisiblity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eVisiblity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_UserWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_UserWidget = { "UserWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventSetWidgetVisibility_Parms, UserWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_UserWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_UserWidget_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_WidgetName = { "WidgetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventSetWidgetVisibility_Parms, WidgetName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_eVisiblity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_eVisiblity_MetaData[] = {
		{ "DisplayName", "SlateVisibility" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_eVisiblity = { "eVisiblity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventSetWidgetVisibility_Parms, eVisiblity), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_eVisiblity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_eVisiblity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonWidgetFunctionLibrary_eventSetWidgetVisibility_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_UserWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_WidgetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_eVisiblity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_eVisiblity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorizonPlugin|UI|Library" },
		{ "ModuleRelativePath", "Public/Widget/HorizonWidgetFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonWidgetFunctionLibrary, nullptr, "SetWidgetVisibility", nullptr, nullptr, sizeof(HorizonWidgetFunctionLibrary_eventSetWidgetVisibility_Parms), Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHorizonWidgetFunctionLibrary_NoRegister()
	{
		return UHorizonWidgetFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UHorizonWidgetFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHorizonWidgetFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHorizonWidgetFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetInputMode, "GetInputMode" }, // 2986952285
		{ &Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetParentCanvasPanelSlot, "GetParentCanvasPanelSlot" }, // 3947672194
		{ &Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserIndex, "GetUserIndex" }, // 3333971772
		{ &Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetUserWidgetAnimation, "GetUserWidgetAnimation" }, // 4257743594
		{ &Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_GetWidgetFromNameRecursively, "GetWidgetFromNameRecursively" }, // 2934926637
		{ &Z_Construct_UFunction_UHorizonWidgetFunctionLibrary_SetWidgetVisibility, "SetWidgetVisibility" }, // 1576325400
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonWidgetFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widget/HorizonWidgetFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/Widget/HorizonWidgetFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHorizonWidgetFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHorizonWidgetFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHorizonWidgetFunctionLibrary_Statics::ClassParams = {
		&UHorizonWidgetFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHorizonWidgetFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonWidgetFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHorizonWidgetFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHorizonWidgetFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHorizonWidgetFunctionLibrary, 3098169652);
	template<> HORIZONUI_API UClass* StaticClass<UHorizonWidgetFunctionLibrary>()
	{
		return UHorizonWidgetFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHorizonWidgetFunctionLibrary(Z_Construct_UClass_UHorizonWidgetFunctionLibrary, &UHorizonWidgetFunctionLibrary::StaticClass, TEXT("/Script/HorizonUI"), TEXT("UHorizonWidgetFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHorizonWidgetFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
