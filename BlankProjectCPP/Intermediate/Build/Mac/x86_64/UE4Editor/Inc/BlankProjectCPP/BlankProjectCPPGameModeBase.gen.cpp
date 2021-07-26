// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlankProjectCPP/BlankProjectCPPGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlankProjectCPPGameModeBase() {}
// Cross Module References
	BLANKPROJECTCPP_API UClass* Z_Construct_UClass_ABlankProjectCPPGameModeBase_NoRegister();
	BLANKPROJECTCPP_API UClass* Z_Construct_UClass_ABlankProjectCPPGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BlankProjectCPP();
// End Cross Module References
	void ABlankProjectCPPGameModeBase::StaticRegisterNativesABlankProjectCPPGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABlankProjectCPPGameModeBase_NoRegister()
	{
		return ABlankProjectCPPGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABlankProjectCPPGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlankProjectCPPGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BlankProjectCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlankProjectCPPGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BlankProjectCPPGameModeBase.h" },
		{ "ModuleRelativePath", "BlankProjectCPPGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlankProjectCPPGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlankProjectCPPGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlankProjectCPPGameModeBase_Statics::ClassParams = {
		&ABlankProjectCPPGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABlankProjectCPPGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABlankProjectCPPGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlankProjectCPPGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlankProjectCPPGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlankProjectCPPGameModeBase, 4111315123);
	template<> BLANKPROJECTCPP_API UClass* StaticClass<ABlankProjectCPPGameModeBase>()
	{
		return ABlankProjectCPPGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlankProjectCPPGameModeBase(Z_Construct_UClass_ABlankProjectCPPGameModeBase, &ABlankProjectCPPGameModeBase::StaticClass, TEXT("/Script/BlankProjectCPP"), TEXT("ABlankProjectCPPGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlankProjectCPPGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
