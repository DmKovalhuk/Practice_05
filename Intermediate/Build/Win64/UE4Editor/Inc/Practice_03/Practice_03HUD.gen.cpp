// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Practice_03/Practice_03HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePractice_03HUD() {}
// Cross Module References
	PRACTICE_03_API UClass* Z_Construct_UClass_APractice_03HUD_NoRegister();
	PRACTICE_03_API UClass* Z_Construct_UClass_APractice_03HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Practice_03();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void APractice_03HUD::StaticRegisterNativesAPractice_03HUD()
	{
	}
	UClass* Z_Construct_UClass_APractice_03HUD_NoRegister()
	{
		return APractice_03HUD::StaticClass();
	}
	struct Z_Construct_UClass_APractice_03HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wMainWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_wMainWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APractice_03HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Practice_03,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APractice_03HUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Practice_03HUD.h" },
		{ "ModuleRelativePath", "Practice_03HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APractice_03HUD_Statics::NewProp_wMainWidget_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "Practice_03HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APractice_03HUD_Statics::NewProp_wMainWidget = { UE4CodeGen_Private::EPropertyClass::Class, "wMainWidget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0044000000000001, 1, nullptr, STRUCT_OFFSET(APractice_03HUD, wMainWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APractice_03HUD_Statics::NewProp_wMainWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_APractice_03HUD_Statics::NewProp_wMainWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APractice_03HUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APractice_03HUD_Statics::NewProp_wMainWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APractice_03HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APractice_03HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APractice_03HUD_Statics::ClassParams = {
		&APractice_03HUD::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008002ACu,
		nullptr, 0,
		Z_Construct_UClass_APractice_03HUD_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APractice_03HUD_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APractice_03HUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APractice_03HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APractice_03HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APractice_03HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APractice_03HUD, 2985085300);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APractice_03HUD(Z_Construct_UClass_APractice_03HUD, &APractice_03HUD::StaticClass, TEXT("/Script/Practice_03"), TEXT("APractice_03HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APractice_03HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
