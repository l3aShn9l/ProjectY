// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiplayerGunMasterClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UParticleSystem;
#ifdef MULTIPLAYERSHOOTERPLUGIN_MultiplayerGunMasterClass_generated_h
#error "MultiplayerGunMasterClass.generated.h already included, missing '#pragma once' in MultiplayerGunMasterClass.h"
#endif
#define MULTIPLAYERSHOOTERPLUGIN_MultiplayerGunMasterClass_generated_h

#define FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerGunMasterClass_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultiplayerGunFireReplication_Statics; \
	MULTIPLAYERSHOOTERPLUGIN_API static class UScriptStruct* StaticStruct();


template<> MULTIPLAYERSHOOTERPLUGIN_API UScriptStruct* StaticStruct<struct FMultiplayerGunFireReplication>();

#define FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerGunMasterClass_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultiplayerGunReloadReplication_Statics; \
	MULTIPLAYERSHOOTERPLUGIN_API static class UScriptStruct* StaticStruct();


template<> MULTIPLAYERSHOOTERPLUGIN_API UScriptStruct* StaticStruct<struct FMultiplayerGunReloadReplication>();

#define FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerGunMasterClass_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultiplayerGunBurstFireReplication_Statics; \
	MULTIPLAYERSHOOTERPLUGIN_API static class UScriptStruct* StaticStruct();


template<> MULTIPLAYERSHOOTERPLUGIN_API UScriptStruct* StaticStruct<struct FMultiplayerGunBurstFireReplication>();

#define FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerGunMasterClass_h_51_SPARSE_DATA
#define FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerGunMasterClass_h_51_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerGunMasterClass_h_51_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerGunMasterClass_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerReload_Validate(); \
	virtual void ServerReload_Implementation(); \
	virtual bool ServerBurstFire_Validate(); \
	virtual void ServerBurstFire_Implementation(); \
	virtual bool ServerFire_Validate(); \
	virtual void ServerFire_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_BurstFireReplication); \
	DECLARE_FUNCTION(execOnRep_ReloadReplication); \
	DECLARE_FUNCTION(execOnRep_FireReplication); \
	DECLARE_FUNCTION(execServerReload); \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execGetPickedUp); \
	DECLARE_FUNCTION(execSetCanShootTrue); \
	DECLARE_FUNCTION(execShotgunFire); \
	DECLARE_FUNCTION(execServerBurstFire); \
	DECLARE_FUNCTION(execBurstFire); \
	DECLARE_FUNCTION(execServerFire); \
	DECLARE_FUNCTION(execFire);


#define FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerGunMasterClass_h_51_ACCESSORS
#define FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerGunMasterClass_h_51_CALLBACK_WRAPPERS
#define FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerGunMasterClass_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMultiplayerGunMasterClass(); \
	friend struct Z_Construct_UClass_AMultiplayerGunMasterClass_Statics; \
public: \
	DECLARE_CLASS(AMultiplayerGunMasterClass, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerShooterPlugin"), NO_API) \
	DECLARE_SERIALIZER(AMultiplayerGunMasterClass) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		FireMode=NETFIELD_REP_START, \
		FireRate, \
		bIsBurstFiring, \
		VerticleRecoil, \
		HorizontalRecoil, \
		FireRange, \
		AmmoInMagazine, \
		MaxAmmoInMagazine, \
		DefaultDamage, \
		HeadDamage, \
		TorsoDamage, \
		LegDamage, \
		CameraShakeScale, \
		DefaultHitParticle, \
		HeadHitParticle, \
		ChestHitParticle, \
		TorsoHitParticle, \
		LegHitParticle, \
		HitParticleScale, \
		FireReplication, \
		ReloadReplication, \
		BurstFireReplication, \
		NETFIELD_REP_END=BurstFireReplication	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerGunMasterClass_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMultiplayerGunMasterClass(AMultiplayerGunMasterClass&&); \
	NO_API AMultiplayerGunMasterClass(const AMultiplayerGunMasterClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiplayerGunMasterClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerGunMasterClass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMultiplayerGunMasterClass) \
	NO_API virtual ~AMultiplayerGunMasterClass();


#define FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerGunMasterClass_h_48_PROLOG
#define FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerGunMasterClass_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerGunMasterClass_h_51_SPARSE_DATA \
	FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerGunMasterClass_h_51_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerGunMasterClass_h_51_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerGunMasterClass_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerGunMasterClass_h_51_ACCESSORS \
	FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerGunMasterClass_h_51_CALLBACK_WRAPPERS \
	FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerGunMasterClass_h_51_INCLASS_NO_PURE_DECLS \
	FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerGunMasterClass_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERSHOOTERPLUGIN_API UClass* StaticClass<class AMultiplayerGunMasterClass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerGunMasterClass_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
