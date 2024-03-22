// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiplayerProjectileMasterClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UParticleSystem;
#ifdef MULTIPLAYERSHOOTERPLUGIN_MultiplayerProjectileMasterClass_generated_h
#error "MultiplayerProjectileMasterClass.generated.h already included, missing '#pragma once' in MultiplayerProjectileMasterClass.h"
#endif
#define MULTIPLAYERSHOOTERPLUGIN_MultiplayerProjectileMasterClass_generated_h

#define FID_MyProject7_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerProjectileMasterClass_h_18_SPARSE_DATA
#define FID_MyProject7_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerProjectileMasterClass_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyProject7_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerProjectileMasterClass_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_MyProject7_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerProjectileMasterClass_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_MyProject7_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerProjectileMasterClass_h_18_ACCESSORS
#define FID_MyProject7_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerProjectileMasterClass_h_18_CALLBACK_WRAPPERS
#define FID_MyProject7_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerProjectileMasterClass_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMultiplayerProjectileMasterClass(); \
	friend struct Z_Construct_UClass_AMultiplayerProjectileMasterClass_Statics; \
public: \
	DECLARE_CLASS(AMultiplayerProjectileMasterClass, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerShooterPlugin"), NO_API) \
	DECLARE_SERIALIZER(AMultiplayerProjectileMasterClass) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MinimumVelocity=NETFIELD_REP_START, \
		NETFIELD_REP_END=MinimumVelocity	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_MyProject7_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerProjectileMasterClass_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMultiplayerProjectileMasterClass(AMultiplayerProjectileMasterClass&&); \
	NO_API AMultiplayerProjectileMasterClass(const AMultiplayerProjectileMasterClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiplayerProjectileMasterClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerProjectileMasterClass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMultiplayerProjectileMasterClass) \
	NO_API virtual ~AMultiplayerProjectileMasterClass();


#define FID_MyProject7_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerProjectileMasterClass_h_15_PROLOG
#define FID_MyProject7_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerProjectileMasterClass_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject7_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerProjectileMasterClass_h_18_SPARSE_DATA \
	FID_MyProject7_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerProjectileMasterClass_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyProject7_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerProjectileMasterClass_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_MyProject7_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerProjectileMasterClass_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject7_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerProjectileMasterClass_h_18_ACCESSORS \
	FID_MyProject7_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerProjectileMasterClass_h_18_CALLBACK_WRAPPERS \
	FID_MyProject7_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerProjectileMasterClass_h_18_INCLASS_NO_PURE_DECLS \
	FID_MyProject7_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerProjectileMasterClass_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERSHOOTERPLUGIN_API UClass* StaticClass<class AMultiplayerProjectileMasterClass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject7_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerProjectileMasterClass_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
