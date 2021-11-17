// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorizonUI/Public/Decorator/HorizonDialogueMsgDecorator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorizonDialogueMsgDecorator() {}
// Cross Module References
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonDialogueMsgDecorator_NoRegister();
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonDialogueMsgDecorator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HorizonUI();
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonDialogueMsgTextBlock_NoRegister();
	HORIZONUI_API UScriptStruct* Z_Construct_UScriptStruct_FHorizonDialogueBlockInfo();
	HORIZONUI_API UScriptStruct* Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo();
// End Cross Module References
	DEFINE_FUNCTION(UHorizonDialogueMsgDecorator::execRun)
	{
		P_GET_OBJECT(UHorizonDialogueMsgTextBlock,Z_Param_InMsgTextBlock);
		P_GET_STRUCT_REF(FHorizonDialogueBlockInfo,Z_Param_Out_InDialogueBlockInfo);
		P_GET_STRUCT_REF(FHorizonDialogueSegmentInfo,Z_Param_Out_InSegInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Run_Implementation(Z_Param_InMsgTextBlock,Z_Param_Out_InDialogueBlockInfo,Z_Param_Out_InSegInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHorizonDialogueMsgDecorator::execPreRun)
	{
		P_GET_OBJECT(UHorizonDialogueMsgTextBlock,Z_Param_InMsgTextBlock);
		P_GET_STRUCT_REF(FHorizonDialogueBlockInfo,Z_Param_Out_InDialogueBlockInfo);
		P_GET_STRUCT_REF(FHorizonDialogueSegmentInfo,Z_Param_Out_InSegInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->PreRun_Implementation(Z_Param_InMsgTextBlock,Z_Param_Out_InDialogueBlockInfo,Z_Param_Out_InSegInfo);
		P_NATIVE_END;
	}
	static FName NAME_UHorizonDialogueMsgDecorator_PreRun = FName(TEXT("PreRun"));
	bool UHorizonDialogueMsgDecorator::PreRun(UHorizonDialogueMsgTextBlock* InMsgTextBlock, FHorizonDialogueBlockInfo& InDialogueBlockInfo, FHorizonDialogueSegmentInfo& InSegInfo)
	{
		HorizonDialogueMsgDecorator_eventPreRun_Parms Parms;
		Parms.InMsgTextBlock=InMsgTextBlock;
		Parms.InDialogueBlockInfo=InDialogueBlockInfo;
		Parms.InSegInfo=InSegInfo;
		ProcessEvent(FindFunctionChecked(NAME_UHorizonDialogueMsgDecorator_PreRun),&Parms);
		InDialogueBlockInfo=Parms.InDialogueBlockInfo;
		InSegInfo=Parms.InSegInfo;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UHorizonDialogueMsgDecorator_Run = FName(TEXT("Run"));
	bool UHorizonDialogueMsgDecorator::Run(UHorizonDialogueMsgTextBlock* InMsgTextBlock, FHorizonDialogueBlockInfo& InDialogueBlockInfo, FHorizonDialogueSegmentInfo& InSegInfo)
	{
		HorizonDialogueMsgDecorator_eventRun_Parms Parms;
		Parms.InMsgTextBlock=InMsgTextBlock;
		Parms.InDialogueBlockInfo=InDialogueBlockInfo;
		Parms.InSegInfo=InSegInfo;
		ProcessEvent(FindFunctionChecked(NAME_UHorizonDialogueMsgDecorator_Run),&Parms);
		InDialogueBlockInfo=Parms.InDialogueBlockInfo;
		InSegInfo=Parms.InSegInfo;
		return !!Parms.ReturnValue;
	}
	void UHorizonDialogueMsgDecorator::StaticRegisterNativesUHorizonDialogueMsgDecorator()
	{
		UClass* Class = UHorizonDialogueMsgDecorator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PreRun", &UHorizonDialogueMsgDecorator::execPreRun },
			{ "Run", &UHorizonDialogueMsgDecorator::execRun },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHorizonDialogueMsgDecorator_PreRun_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMsgTextBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMsgTextBlock;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InDialogueBlockInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSegInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonDialogueMsgDecorator_PreRun_Statics::NewProp_InMsgTextBlock_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonDialogueMsgDecorator_PreRun_Statics::NewProp_InMsgTextBlock = { "InMsgTextBlock", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonDialogueMsgDecorator_eventPreRun_Parms, InMsgTextBlock), Z_Construct_UClass_UHorizonDialogueMsgTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHorizonDialogueMsgDecorator_PreRun_Statics::NewProp_InMsgTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonDialogueMsgDecorator_PreRun_Statics::NewProp_InMsgTextBlock_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHorizonDialogueMsgDecorator_PreRun_Statics::NewProp_InDialogueBlockInfo = { "InDialogueBlockInfo", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonDialogueMsgDecorator_eventPreRun_Parms, InDialogueBlockInfo), Z_Construct_UScriptStruct_FHorizonDialogueBlockInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHorizonDialogueMsgDecorator_PreRun_Statics::NewProp_InSegInfo = { "InSegInfo", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonDialogueMsgDecorator_eventPreRun_Parms, InSegInfo), Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHorizonDialogueMsgDecorator_PreRun_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HorizonDialogueMsgDecorator_eventPreRun_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonDialogueMsgDecorator_PreRun_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HorizonDialogueMsgDecorator_eventPreRun_Parms), &Z_Construct_UFunction_UHorizonDialogueMsgDecorator_PreRun_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonDialogueMsgDecorator_PreRun_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonDialogueMsgDecorator_PreRun_Statics::NewProp_InMsgTextBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonDialogueMsgDecorator_PreRun_Statics::NewProp_InDialogueBlockInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonDialogueMsgDecorator_PreRun_Statics::NewProp_InSegInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonDialogueMsgDecorator_PreRun_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonDialogueMsgDecorator_PreRun_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorizonPlugin|UI|DialogueMsgDecorator" },
		{ "ModuleRelativePath", "Public/Decorator/HorizonDialogueMsgDecorator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonDialogueMsgDecorator_PreRun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonDialogueMsgDecorator, nullptr, "PreRun", nullptr, nullptr, sizeof(HorizonDialogueMsgDecorator_eventPreRun_Parms), Z_Construct_UFunction_UHorizonDialogueMsgDecorator_PreRun_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonDialogueMsgDecorator_PreRun_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonDialogueMsgDecorator_PreRun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonDialogueMsgDecorator_PreRun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonDialogueMsgDecorator_PreRun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonDialogueMsgDecorator_PreRun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonDialogueMsgDecorator_Run_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InMsgTextBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMsgTextBlock;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InDialogueBlockInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSegInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonDialogueMsgDecorator_Run_Statics::NewProp_InMsgTextBlock_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonDialogueMsgDecorator_Run_Statics::NewProp_InMsgTextBlock = { "InMsgTextBlock", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonDialogueMsgDecorator_eventRun_Parms, InMsgTextBlock), Z_Construct_UClass_UHorizonDialogueMsgTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHorizonDialogueMsgDecorator_Run_Statics::NewProp_InMsgTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonDialogueMsgDecorator_Run_Statics::NewProp_InMsgTextBlock_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHorizonDialogueMsgDecorator_Run_Statics::NewProp_InDialogueBlockInfo = { "InDialogueBlockInfo", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonDialogueMsgDecorator_eventRun_Parms, InDialogueBlockInfo), Z_Construct_UScriptStruct_FHorizonDialogueBlockInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHorizonDialogueMsgDecorator_Run_Statics::NewProp_InSegInfo = { "InSegInfo", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonDialogueMsgDecorator_eventRun_Parms, InSegInfo), Z_Construct_UScriptStruct_FHorizonDialogueSegmentInfo, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHorizonDialogueMsgDecorator_Run_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HorizonDialogueMsgDecorator_eventRun_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHorizonDialogueMsgDecorator_Run_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HorizonDialogueMsgDecorator_eventRun_Parms), &Z_Construct_UFunction_UHorizonDialogueMsgDecorator_Run_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonDialogueMsgDecorator_Run_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonDialogueMsgDecorator_Run_Statics::NewProp_InMsgTextBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonDialogueMsgDecorator_Run_Statics::NewProp_InDialogueBlockInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonDialogueMsgDecorator_Run_Statics::NewProp_InSegInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonDialogueMsgDecorator_Run_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonDialogueMsgDecorator_Run_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorizonPlugin|UI|DialogueMsgDecorator" },
		{ "ModuleRelativePath", "Public/Decorator/HorizonDialogueMsgDecorator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonDialogueMsgDecorator_Run_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonDialogueMsgDecorator, nullptr, "Run", nullptr, nullptr, sizeof(HorizonDialogueMsgDecorator_eventRun_Parms), Z_Construct_UFunction_UHorizonDialogueMsgDecorator_Run_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonDialogueMsgDecorator_Run_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonDialogueMsgDecorator_Run_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonDialogueMsgDecorator_Run_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonDialogueMsgDecorator_Run()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonDialogueMsgDecorator_Run_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHorizonDialogueMsgDecorator_NoRegister()
	{
		return UHorizonDialogueMsgDecorator::StaticClass();
	}
	struct Z_Construct_UClass_UHorizonDialogueMsgDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHorizonDialogueMsgDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHorizonDialogueMsgDecorator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHorizonDialogueMsgDecorator_PreRun, "PreRun" }, // 841232405
		{ &Z_Construct_UFunction_UHorizonDialogueMsgDecorator_Run, "Run" }, // 1002222430
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonDialogueMsgDecorator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Decorator/HorizonDialogueMsgDecorator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Decorator/HorizonDialogueMsgDecorator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHorizonDialogueMsgDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHorizonDialogueMsgDecorator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHorizonDialogueMsgDecorator_Statics::ClassParams = {
		&UHorizonDialogueMsgDecorator::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UHorizonDialogueMsgDecorator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonDialogueMsgDecorator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHorizonDialogueMsgDecorator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHorizonDialogueMsgDecorator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHorizonDialogueMsgDecorator, 1339132167);
	template<> HORIZONUI_API UClass* StaticClass<UHorizonDialogueMsgDecorator>()
	{
		return UHorizonDialogueMsgDecorator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHorizonDialogueMsgDecorator(Z_Construct_UClass_UHorizonDialogueMsgDecorator, &UHorizonDialogueMsgDecorator::StaticClass, TEXT("/Script/HorizonUI"), TEXT("UHorizonDialogueMsgDecorator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHorizonDialogueMsgDecorator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
