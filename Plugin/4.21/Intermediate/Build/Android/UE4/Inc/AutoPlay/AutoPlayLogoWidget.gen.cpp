// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoPlay/Private/AutoPlayLogoWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoPlayLogoWidget() {}
// Cross Module References
	AUTOPLAY_API UClass* Z_Construct_UClass_UAutoPlayLogoWidget_NoRegister();
	AUTOPLAY_API UClass* Z_Construct_UClass_UAutoPlayLogoWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_AutoPlay();
// End Cross Module References
	void UAutoPlayLogoWidget::StaticRegisterNativesUAutoPlayLogoWidget()
	{
	}
	UClass* Z_Construct_UClass_UAutoPlayLogoWidget_NoRegister()
	{
		return UAutoPlayLogoWidget::StaticClass();
	}
	struct Z_Construct_UClass_UAutoPlayLogoWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutoPlayLogoWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoPlay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoPlayLogoWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AutoPlayLogoWidget.h" },
		{ "ModuleRelativePath", "Private/AutoPlayLogoWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutoPlayLogoWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoPlayLogoWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAutoPlayLogoWidget_Statics::ClassParams = {
		&UAutoPlayLogoWidget::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00A010A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAutoPlayLogoWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAutoPlayLogoWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutoPlayLogoWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAutoPlayLogoWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAutoPlayLogoWidget, 1106087621);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAutoPlayLogoWidget(Z_Construct_UClass_UAutoPlayLogoWidget, &UAutoPlayLogoWidget::StaticClass, TEXT("/Script/AutoPlay"), TEXT("UAutoPlayLogoWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoPlayLogoWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
