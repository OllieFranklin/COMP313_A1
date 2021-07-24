// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PLATFORMERCPP_PlatformerCPPProjectile_generated_h
#error "PlatformerCPPProjectile.generated.h already included, missing '#pragma once' in PlatformerCPPProjectile.h"
#endif
#define PLATFORMERCPP_PlatformerCPPProjectile_generated_h

#define PlatformerCPP_Source_PlatformerCPP_PlatformerCPPProjectile_h_15_SPARSE_DATA
#define PlatformerCPP_Source_PlatformerCPP_PlatformerCPPProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PlatformerCPP_Source_PlatformerCPP_PlatformerCPPProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PlatformerCPP_Source_PlatformerCPP_PlatformerCPPProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlatformerCPPProjectile(); \
	friend struct Z_Construct_UClass_APlatformerCPPProjectile_Statics; \
public: \
	DECLARE_CLASS(APlatformerCPPProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlatformerCPP"), NO_API) \
	DECLARE_SERIALIZER(APlatformerCPPProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PlatformerCPP_Source_PlatformerCPP_PlatformerCPPProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPlatformerCPPProjectile(); \
	friend struct Z_Construct_UClass_APlatformerCPPProjectile_Statics; \
public: \
	DECLARE_CLASS(APlatformerCPPProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlatformerCPP"), NO_API) \
	DECLARE_SERIALIZER(APlatformerCPPProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PlatformerCPP_Source_PlatformerCPP_PlatformerCPPProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlatformerCPPProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlatformerCPPProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlatformerCPPProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlatformerCPPProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlatformerCPPProjectile(APlatformerCPPProjectile&&); \
	NO_API APlatformerCPPProjectile(const APlatformerCPPProjectile&); \
public:


#define PlatformerCPP_Source_PlatformerCPP_PlatformerCPPProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlatformerCPPProjectile(APlatformerCPPProjectile&&); \
	NO_API APlatformerCPPProjectile(const APlatformerCPPProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlatformerCPPProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlatformerCPPProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlatformerCPPProjectile)


#define PlatformerCPP_Source_PlatformerCPP_PlatformerCPPProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(APlatformerCPPProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(APlatformerCPPProjectile, ProjectileMovement); }


#define PlatformerCPP_Source_PlatformerCPP_PlatformerCPPProjectile_h_12_PROLOG
#define PlatformerCPP_Source_PlatformerCPP_PlatformerCPPProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlatformerCPP_Source_PlatformerCPP_PlatformerCPPProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	PlatformerCPP_Source_PlatformerCPP_PlatformerCPPProjectile_h_15_SPARSE_DATA \
	PlatformerCPP_Source_PlatformerCPP_PlatformerCPPProjectile_h_15_RPC_WRAPPERS \
	PlatformerCPP_Source_PlatformerCPP_PlatformerCPPProjectile_h_15_INCLASS \
	PlatformerCPP_Source_PlatformerCPP_PlatformerCPPProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PlatformerCPP_Source_PlatformerCPP_PlatformerCPPProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlatformerCPP_Source_PlatformerCPP_PlatformerCPPProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	PlatformerCPP_Source_PlatformerCPP_PlatformerCPPProjectile_h_15_SPARSE_DATA \
	PlatformerCPP_Source_PlatformerCPP_PlatformerCPPProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PlatformerCPP_Source_PlatformerCPP_PlatformerCPPProjectile_h_15_INCLASS_NO_PURE_DECLS \
	PlatformerCPP_Source_PlatformerCPP_PlatformerCPPProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMERCPP_API UClass* StaticClass<class APlatformerCPPProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PlatformerCPP_Source_PlatformerCPP_PlatformerCPPProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
