// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorizonUI/Public/FileSystem/HorizonFileSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorizonFileSystem() {}
// Cross Module References
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonFileSystem_NoRegister();
	HORIZONUI_API UClass* Z_Construct_UClass_UHorizonFileSystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HorizonUI();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHorizonFileSystem::execLoadUAsset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_packageFilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->LoadUAsset(Z_Param_packageFilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHorizonFileSystem::execLoadFont)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_packageFilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFont**)Z_Param__Result=P_THIS->LoadFont(Z_Param_packageFilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHorizonFileSystem::execLoadSound)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_packageFilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundBase**)Z_Param__Result=P_THIS->LoadSound(Z_Param_packageFilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHorizonFileSystem::execLoadMaterial)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_packageFilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterial**)Z_Param__Result=P_THIS->LoadMaterial(Z_Param_packageFilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHorizonFileSystem::execLoadPaperFlipbook)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_packageFilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPaperFlipbook**)Z_Param__Result=P_THIS->LoadPaperFlipbook(Z_Param_packageFilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHorizonFileSystem::execLoadTexture2D)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_packageFilePath);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutWidth);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutHeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->LoadTexture2D(Z_Param_packageFilePath,Z_Param_Out_OutWidth,Z_Param_Out_OutHeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHorizonFileSystem::execCreateDirectoryRecursively)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FolderToMake);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateDirectoryRecursively(Z_Param_FolderToMake);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHorizonFileSystem::execDestroyInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UHorizonFileSystem::DestroyInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHorizonFileSystem::execGetInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UHorizonFileSystem**)Z_Param__Result=UHorizonFileSystem::GetInstance();
		P_NATIVE_END;
	}
	void UHorizonFileSystem::StaticRegisterNativesUHorizonFileSystem()
	{
		UClass* Class = UHorizonFileSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateDirectoryRecursively", &UHorizonFileSystem::execCreateDirectoryRecursively },
			{ "DestroyInstance", &UHorizonFileSystem::execDestroyInstance },
			{ "GetInstance", &UHorizonFileSystem::execGetInstance },
			{ "LoadFont", &UHorizonFileSystem::execLoadFont },
			{ "LoadMaterial", &UHorizonFileSystem::execLoadMaterial },
			{ "LoadPaperFlipbook", &UHorizonFileSystem::execLoadPaperFlipbook },
			{ "LoadSound", &UHorizonFileSystem::execLoadSound },
			{ "LoadTexture2D", &UHorizonFileSystem::execLoadTexture2D },
			{ "LoadUAsset", &UHorizonFileSystem::execLoadUAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHorizonFileSystem_CreateDirectoryRecursively_Statics
	{
		struct HorizonFileSystem_eventCreateDirectoryRecursively_Parms
		{
			FString FolderToMake;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FolderToMake;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonFileSystem_CreateDirectoryRecursively_Statics::NewProp_FolderToMake = { "FolderToMake", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonFileSystem_eventCreateDirectoryRecursively_Parms, FolderToMake), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonFileSystem_CreateDirectoryRecursively_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonFileSystem_CreateDirectoryRecursively_Statics::NewProp_FolderToMake,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonFileSystem_CreateDirectoryRecursively_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorizonPlugin|UI|FileSystem" },
		{ "Comment", "//UFUNCTION(BlueprintCallable, Category = \"HorizonPlugin|FileSystem\", meta = (Keywords = \"Get File Search Path\"))\n//\x09""const TArray<FString>& GetFileSearchPathList();\n" },
		{ "Keywords", "Create Folder recursively" },
		{ "ModuleRelativePath", "Public/FileSystem/HorizonFileSystem.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"HorizonPlugin|FileSystem\", meta = (Keywords = \"Get File Search Path\"))\n       const TArray<FString>& GetFileSearchPathList();" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonFileSystem_CreateDirectoryRecursively_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFileSystem, nullptr, "CreateDirectoryRecursively", nullptr, nullptr, sizeof(HorizonFileSystem_eventCreateDirectoryRecursively_Parms), Z_Construct_UFunction_UHorizonFileSystem_CreateDirectoryRecursively_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonFileSystem_CreateDirectoryRecursively_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonFileSystem_CreateDirectoryRecursively_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonFileSystem_CreateDirectoryRecursively_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonFileSystem_CreateDirectoryRecursively()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonFileSystem_CreateDirectoryRecursively_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonFileSystem_DestroyInstance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonFileSystem_DestroyInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorizonPlugin|UI|FileSystem" },
		{ "Keywords", "DestroyInstance" },
		{ "ModuleRelativePath", "Public/FileSystem/HorizonFileSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonFileSystem_DestroyInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFileSystem, nullptr, "DestroyInstance", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonFileSystem_DestroyInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonFileSystem_DestroyInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonFileSystem_DestroyInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonFileSystem_DestroyInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonFileSystem_GetInstance_Statics
	{
		struct HorizonFileSystem_eventGetInstance_Parms
		{
			UHorizonFileSystem* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonFileSystem_GetInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonFileSystem_eventGetInstance_Parms, ReturnValue), Z_Construct_UClass_UHorizonFileSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonFileSystem_GetInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonFileSystem_GetInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonFileSystem_GetInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorizonPlugin|UI|FileSystem" },
		{ "Keywords", "GetInstance" },
		{ "ModuleRelativePath", "Public/FileSystem/HorizonFileSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonFileSystem_GetInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFileSystem, nullptr, "GetInstance", nullptr, nullptr, sizeof(HorizonFileSystem_eventGetInstance_Parms), Z_Construct_UFunction_UHorizonFileSystem_GetInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonFileSystem_GetInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonFileSystem_GetInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonFileSystem_GetInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonFileSystem_GetInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonFileSystem_GetInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonFileSystem_LoadFont_Statics
	{
		struct HorizonFileSystem_eventLoadFont_Parms
		{
			FString packageFilePath;
			UFont* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_packageFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_packageFilePath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonFileSystem_LoadFont_Statics::NewProp_packageFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonFileSystem_LoadFont_Statics::NewProp_packageFilePath = { "packageFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonFileSystem_eventLoadFont_Parms, packageFilePath), METADATA_PARAMS(Z_Construct_UFunction_UHorizonFileSystem_LoadFont_Statics::NewProp_packageFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonFileSystem_LoadFont_Statics::NewProp_packageFilePath_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonFileSystem_LoadFont_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonFileSystem_eventLoadFont_Parms, ReturnValue), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonFileSystem_LoadFont_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonFileSystem_LoadFont_Statics::NewProp_packageFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonFileSystem_LoadFont_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonFileSystem_LoadFont_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorizonPlugin|UI|FileSystem" },
		{ "Keywords", "LoadSound" },
		{ "ModuleRelativePath", "Public/FileSystem/HorizonFileSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonFileSystem_LoadFont_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFileSystem, nullptr, "LoadFont", nullptr, nullptr, sizeof(HorizonFileSystem_eventLoadFont_Parms), Z_Construct_UFunction_UHorizonFileSystem_LoadFont_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonFileSystem_LoadFont_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonFileSystem_LoadFont_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonFileSystem_LoadFont_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonFileSystem_LoadFont()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonFileSystem_LoadFont_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonFileSystem_LoadMaterial_Statics
	{
		struct HorizonFileSystem_eventLoadMaterial_Parms
		{
			FString packageFilePath;
			UMaterial* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_packageFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_packageFilePath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonFileSystem_LoadMaterial_Statics::NewProp_packageFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonFileSystem_LoadMaterial_Statics::NewProp_packageFilePath = { "packageFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonFileSystem_eventLoadMaterial_Parms, packageFilePath), METADATA_PARAMS(Z_Construct_UFunction_UHorizonFileSystem_LoadMaterial_Statics::NewProp_packageFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonFileSystem_LoadMaterial_Statics::NewProp_packageFilePath_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonFileSystem_LoadMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonFileSystem_eventLoadMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonFileSystem_LoadMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonFileSystem_LoadMaterial_Statics::NewProp_packageFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonFileSystem_LoadMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonFileSystem_LoadMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorizonPlugin|UI|FileSystem" },
		{ "Keywords", "LoadMaterial" },
		{ "ModuleRelativePath", "Public/FileSystem/HorizonFileSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonFileSystem_LoadMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFileSystem, nullptr, "LoadMaterial", nullptr, nullptr, sizeof(HorizonFileSystem_eventLoadMaterial_Parms), Z_Construct_UFunction_UHorizonFileSystem_LoadMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonFileSystem_LoadMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonFileSystem_LoadMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonFileSystem_LoadMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonFileSystem_LoadMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonFileSystem_LoadMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonFileSystem_LoadPaperFlipbook_Statics
	{
		struct HorizonFileSystem_eventLoadPaperFlipbook_Parms
		{
			FString packageFilePath;
			UPaperFlipbook* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_packageFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_packageFilePath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonFileSystem_LoadPaperFlipbook_Statics::NewProp_packageFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonFileSystem_LoadPaperFlipbook_Statics::NewProp_packageFilePath = { "packageFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonFileSystem_eventLoadPaperFlipbook_Parms, packageFilePath), METADATA_PARAMS(Z_Construct_UFunction_UHorizonFileSystem_LoadPaperFlipbook_Statics::NewProp_packageFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonFileSystem_LoadPaperFlipbook_Statics::NewProp_packageFilePath_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonFileSystem_LoadPaperFlipbook_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonFileSystem_eventLoadPaperFlipbook_Parms, ReturnValue), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonFileSystem_LoadPaperFlipbook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonFileSystem_LoadPaperFlipbook_Statics::NewProp_packageFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonFileSystem_LoadPaperFlipbook_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonFileSystem_LoadPaperFlipbook_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorizonPlugin|UI|FileSystem" },
		{ "Keywords", "LoadFlipBook" },
		{ "ModuleRelativePath", "Public/FileSystem/HorizonFileSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonFileSystem_LoadPaperFlipbook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFileSystem, nullptr, "LoadPaperFlipbook", nullptr, nullptr, sizeof(HorizonFileSystem_eventLoadPaperFlipbook_Parms), Z_Construct_UFunction_UHorizonFileSystem_LoadPaperFlipbook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonFileSystem_LoadPaperFlipbook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonFileSystem_LoadPaperFlipbook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonFileSystem_LoadPaperFlipbook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonFileSystem_LoadPaperFlipbook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonFileSystem_LoadPaperFlipbook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonFileSystem_LoadSound_Statics
	{
		struct HorizonFileSystem_eventLoadSound_Parms
		{
			FString packageFilePath;
			USoundBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_packageFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_packageFilePath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonFileSystem_LoadSound_Statics::NewProp_packageFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonFileSystem_LoadSound_Statics::NewProp_packageFilePath = { "packageFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonFileSystem_eventLoadSound_Parms, packageFilePath), METADATA_PARAMS(Z_Construct_UFunction_UHorizonFileSystem_LoadSound_Statics::NewProp_packageFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonFileSystem_LoadSound_Statics::NewProp_packageFilePath_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonFileSystem_LoadSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonFileSystem_eventLoadSound_Parms, ReturnValue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonFileSystem_LoadSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonFileSystem_LoadSound_Statics::NewProp_packageFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonFileSystem_LoadSound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonFileSystem_LoadSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorizonPlugin|UI|FileSystem" },
		{ "Comment", "//UFUNCTION(BlueprintCallable, Category = \"HorizonPlugin|FileSystem\", meta = (Keywords = \"LoadUserWidget\"))\n//\x09UUserWidget* LoadUserWidget(UWorld* pWorld, const FString& packageFilePath);\n" },
		{ "Keywords", "LoadFont" },
		{ "ModuleRelativePath", "Public/FileSystem/HorizonFileSystem.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"HorizonPlugin|FileSystem\", meta = (Keywords = \"LoadUserWidget\"))\n       UUserWidget* LoadUserWidget(UWorld* pWorld, const FString& packageFilePath);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonFileSystem_LoadSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFileSystem, nullptr, "LoadSound", nullptr, nullptr, sizeof(HorizonFileSystem_eventLoadSound_Parms), Z_Construct_UFunction_UHorizonFileSystem_LoadSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonFileSystem_LoadSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonFileSystem_LoadSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonFileSystem_LoadSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonFileSystem_LoadSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonFileSystem_LoadSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonFileSystem_LoadTexture2D_Statics
	{
		struct HorizonFileSystem_eventLoadTexture2D_Parms
		{
			FString packageFilePath;
			int32 OutWidth;
			int32 OutHeight;
			UTexture2D* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_packageFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_packageFilePath;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutWidth;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutHeight;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonFileSystem_LoadTexture2D_Statics::NewProp_packageFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonFileSystem_LoadTexture2D_Statics::NewProp_packageFilePath = { "packageFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonFileSystem_eventLoadTexture2D_Parms, packageFilePath), METADATA_PARAMS(Z_Construct_UFunction_UHorizonFileSystem_LoadTexture2D_Statics::NewProp_packageFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonFileSystem_LoadTexture2D_Statics::NewProp_packageFilePath_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHorizonFileSystem_LoadTexture2D_Statics::NewProp_OutWidth = { "OutWidth", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonFileSystem_eventLoadTexture2D_Parms, OutWidth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHorizonFileSystem_LoadTexture2D_Statics::NewProp_OutHeight = { "OutHeight", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonFileSystem_eventLoadTexture2D_Parms, OutHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonFileSystem_LoadTexture2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonFileSystem_eventLoadTexture2D_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonFileSystem_LoadTexture2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonFileSystem_LoadTexture2D_Statics::NewProp_packageFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonFileSystem_LoadTexture2D_Statics::NewProp_OutWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonFileSystem_LoadTexture2D_Statics::NewProp_OutHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonFileSystem_LoadTexture2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonFileSystem_LoadTexture2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorizonPlugin|UI|FileSystem" },
		{ "Keywords", "LoadTexture2D" },
		{ "ModuleRelativePath", "Public/FileSystem/HorizonFileSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonFileSystem_LoadTexture2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFileSystem, nullptr, "LoadTexture2D", nullptr, nullptr, sizeof(HorizonFileSystem_eventLoadTexture2D_Parms), Z_Construct_UFunction_UHorizonFileSystem_LoadTexture2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonFileSystem_LoadTexture2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonFileSystem_LoadTexture2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonFileSystem_LoadTexture2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonFileSystem_LoadTexture2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonFileSystem_LoadTexture2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizonFileSystem_LoadUAsset_Statics
	{
		struct HorizonFileSystem_eventLoadUAsset_Parms
		{
			FString packageFilePath;
			UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_packageFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_packageFilePath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonFileSystem_LoadUAsset_Statics::NewProp_packageFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHorizonFileSystem_LoadUAsset_Statics::NewProp_packageFilePath = { "packageFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonFileSystem_eventLoadUAsset_Parms, packageFilePath), METADATA_PARAMS(Z_Construct_UFunction_UHorizonFileSystem_LoadUAsset_Statics::NewProp_packageFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonFileSystem_LoadUAsset_Statics::NewProp_packageFilePath_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHorizonFileSystem_LoadUAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HorizonFileSystem_eventLoadUAsset_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizonFileSystem_LoadUAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonFileSystem_LoadUAsset_Statics::NewProp_packageFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizonFileSystem_LoadUAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizonFileSystem_LoadUAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "HorizonPlugin|UI|FileSystem" },
		{ "Keywords", "LoadUAsset" },
		{ "ModuleRelativePath", "Public/FileSystem/HorizonFileSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizonFileSystem_LoadUAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizonFileSystem, nullptr, "LoadUAsset", nullptr, nullptr, sizeof(HorizonFileSystem_eventLoadUAsset_Parms), Z_Construct_UFunction_UHorizonFileSystem_LoadUAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonFileSystem_LoadUAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizonFileSystem_LoadUAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizonFileSystem_LoadUAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizonFileSystem_LoadUAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHorizonFileSystem_LoadUAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHorizonFileSystem_NoRegister()
	{
		return UHorizonFileSystem::StaticClass();
	}
	struct Z_Construct_UClass_UHorizonFileSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHorizonFileSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HorizonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHorizonFileSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHorizonFileSystem_CreateDirectoryRecursively, "CreateDirectoryRecursively" }, // 4091165969
		{ &Z_Construct_UFunction_UHorizonFileSystem_DestroyInstance, "DestroyInstance" }, // 3413528516
		{ &Z_Construct_UFunction_UHorizonFileSystem_GetInstance, "GetInstance" }, // 3279020214
		{ &Z_Construct_UFunction_UHorizonFileSystem_LoadFont, "LoadFont" }, // 814553067
		{ &Z_Construct_UFunction_UHorizonFileSystem_LoadMaterial, "LoadMaterial" }, // 2083973497
		{ &Z_Construct_UFunction_UHorizonFileSystem_LoadPaperFlipbook, "LoadPaperFlipbook" }, // 2938517931
		{ &Z_Construct_UFunction_UHorizonFileSystem_LoadSound, "LoadSound" }, // 3183244782
		{ &Z_Construct_UFunction_UHorizonFileSystem_LoadTexture2D, "LoadTexture2D" }, // 2531468877
		{ &Z_Construct_UFunction_UHorizonFileSystem_LoadUAsset, "LoadUAsset" }, // 599630054
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizonFileSystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FileSystem/HorizonFileSystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FileSystem/HorizonFileSystem.h" },
		{ "ShortTooltip", "HorizonFileSystem" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHorizonFileSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHorizonFileSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHorizonFileSystem_Statics::ClassParams = {
		&UHorizonFileSystem::StaticClass,
		"HorizonPlugin",
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
		METADATA_PARAMS(Z_Construct_UClass_UHorizonFileSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHorizonFileSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHorizonFileSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHorizonFileSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHorizonFileSystem, 838454003);
	template<> HORIZONUI_API UClass* StaticClass<UHorizonFileSystem>()
	{
		return UHorizonFileSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHorizonFileSystem(Z_Construct_UClass_UHorizonFileSystem, &UHorizonFileSystem::StaticClass, TEXT("/Script/HorizonUI"), TEXT("UHorizonFileSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHorizonFileSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
