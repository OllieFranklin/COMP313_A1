// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformerCPP/PlatformerCPPHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformerCPPHUD() {}
// Cross Module References
	PLATFORMERCPP_API UClass* Z_Construct_UClass_APlatformerCPPHUD_NoRegister();
	PLATFORMERCPP_API UClass* Z_Construct_UClass_APlatformerCPPHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_PlatformerCPP();
// End Cross Module References
	void APlatformerCPPHUD::StaticRegisterNativesAPlatformerCPPHUD()
	{
	}
	UClass* Z_Construct_UClass_APlatformerCPPHUD_NoRegister()
	{
		return APlatformerCPPHUD::StaticClass();
	}
	struct Z_Construct_UClass_APlatformerCPPHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlatformerCPPHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformerCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerCPPHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "PlatformerCPPHUD.h" },
		{ "ModuleRelativePath", "PlatformerCPPHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlatformerCPPHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformerCPPHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlatformerCPPHUD_Statics::ClassParams = {
		&APlatformerCPPHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APlatformerCPPHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerCPPHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlatformerCPPHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlatformerCPPHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlatformerCPPHUD, 2651868730);
	template<> PLATFORMERCPP_API UClass* StaticClass<APlatformerCPPHUD>()
	{
		return APlatformerCPPHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlatformerCPPHUD(Z_Construct_UClass_APlatformerCPPHUD, &APlatformerCPPHUD::StaticClass, TEXT("/Script/PlatformerCPP"), TEXT("APlatformerCPPHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformerCPPHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
