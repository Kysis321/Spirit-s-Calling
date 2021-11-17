// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorizonUI/Public/Widget/Components/HorizonTileView.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorizonTileView() {}
// Cross Module References
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonTileView_NoRegister();
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonTileView();
	UMG_API UClass* Z_Construct_UClass_UTileView();
	UPackage* Z_Construct_UPackage__Script_HorizonUI();
// End Cross Module References
	void UHorizonTileView::StaticRegisterNativesUHorizonTileView()
	{
	}
	UClass* Z_Construct_UClass_UHorizonTileView_NoRegister()
	{
		return UHorizonTileView::StaticClass();
	}
	struct Z_Construct_UClass_UHorizonTileView_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHorizonTileView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTileView,
		(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonTileView_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widget/Components/HorizonTileView.h" },
		{ "ModuleRelativePath", "Public/Widget/Components/HorizonTileView.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHorizonTileView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHorizonTileView>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHorizonTileView_Statics::ClassParams = {
		&UHorizonTileView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHorizonTileView_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonTileView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHorizonTileView()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHorizonTileView_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHorizonTileView, 2386463959);
	template<> HORIZONUI_API UClass* StaticClass<UHorizonTileView>()
	{
		return UHorizonTileView::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHorizonTileView(Z_Construct_UClass_UHorizonTileView, &UHorizonTileView::StaticClass, TEXT("/Script/HorizonUI"), TEXT("UHorizonTileView"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHorizonTileView);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
