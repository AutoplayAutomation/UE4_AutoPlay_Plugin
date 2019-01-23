// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoPlay/Private/UPluginNetworking.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPluginNetworking() {}
// Cross Module References
	AUTOPLAY_API UClass* Z_Construct_UClass_UPluginNetworking_NoRegister();
	AUTOPLAY_API UClass* Z_Construct_UClass_UPluginNetworking();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AutoPlay();
// End Cross Module References
	void UPluginNetworking::StaticRegisterNativesUPluginNetworking()
	{
	}
	UClass* Z_Construct_UClass_UPluginNetworking_NoRegister()
	{
		return UPluginNetworking::StaticClass();
	}
	struct Z_Construct_UClass_UPluginNetworking_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPluginNetworking_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoPlay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPluginNetworking_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UPluginNetworking.h" },
		{ "ModuleRelativePath", "Private/UPluginNetworking.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPluginNetworking_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPluginNetworking>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPluginNetworking_Statics::ClassParams = {
		&UPluginNetworking::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UPluginNetworking_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPluginNetworking_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPluginNetworking()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPluginNetworking_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPluginNetworking, 2699611661);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPluginNetworking(Z_Construct_UClass_UPluginNetworking, &UPluginNetworking::StaticClass, TEXT("/Script/AutoPlay"), TEXT("UPluginNetworking"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPluginNetworking);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
