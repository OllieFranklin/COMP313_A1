// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformerCPP/PlatformerCPPGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformerCPPGameMode() {}
// Cross Module References
	PLATFORMERCPP_API UClass* Z_Construct_UClass_APlatformerCPPGameMode_NoRegister();
	PLATFORMERCPP_API UClass* Z_Construct_UClass_APlatformerCPPGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PlatformerCPP();
// End Cross Module References
	void APlatformerCPPGameMode::StaticRegisterNativesAPlatformerCPPGameMode()
	{
	}
	UClass* Z_Construct_UClass_APlatformerCPPGameMode_NoRegister()
	{
		return APlatformerCPPGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APlatformerCPPGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlatformerCPPGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformerCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformerCPPGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PlatformerCPPGameMode.h" },
		{ "ModuleRelativePath", "PlatformerCPPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlatformerCPPGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformerCPPGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlatformerCPPGameMode_Statics::ClassParams = {
		&APlatformerCPPGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APlatformerCPPGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerCPPGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlatformerCPPGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlatformerCPPGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlatformerCPPGameMode, 1020855831);
	template<> PLATFORMERCPP_API UClass* StaticClass<APlatformerCPPGameMode>()
	{
		return APlatformerCPPGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlatformerCPPGameMode(Z_Construct_UClass_APlatformerCPPGameMode, &APlatformerCPPGameMode::StaticClass, TEXT("/Script/PlatformerCPP"), TEXT("APlatformerCPPGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformerCPPGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
