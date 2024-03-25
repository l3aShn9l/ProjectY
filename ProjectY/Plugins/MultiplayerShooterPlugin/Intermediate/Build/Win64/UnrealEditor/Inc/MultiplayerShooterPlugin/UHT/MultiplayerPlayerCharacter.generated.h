// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiplayerPlayerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class UAnimationAsset;
struct FDamageEvent;
#ifdef MULTIPLAYERSHOOTERPLUGIN_MultiplayerPlayerCharacter_generated_h
#error "MultiplayerPlayerCharacter.generated.h already included, missing '#pragma once' in MultiplayerPlayerCharacter.h"
#endif
#define MULTIPLAYERSHOOTERPLUGIN_MultiplayerPlayerCharacter_generated_h

#define FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerPlayerCharacter_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultiplayerGiveWeapon1Replication_Statics; \
	MULTIPLAYERSHOOTERPLUGIN_API static class UScriptStruct* StaticStruct();


template<> MULTIPLAYERSHOOTERPLUGIN_API UScriptStruct* StaticStruct<struct FMultiplayerGiveWeapon1Replication>();

#define FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerPlayerCharacter_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultiplayerGiveWeapon2Replication_Statics; \
	MULTIPLAYERSHOOTERPLUGIN_API static class UScriptStruct* StaticStruct();


template<> MULTIPLAYERSHOOTERPLUGIN_API UScriptStruct* StaticStruct<struct FMultiplayerGiveWeapon2Replication>();

#define FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerPlayerCharacter_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultiplayerSwitchWeaponsReplication_Statics; \
	MULTIPLAYERSHOOTERPLUGIN_API static class UScriptStruct* StaticStruct();


template<> MULTIPLAYERSHOOTERPLUGIN_API UScriptStruct* StaticStruct<struct FMultiplayerSwitchWeaponsReplication>();

#define FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerPlayerCharacter_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultiplayerSwitchWeapons1Replication_Statics; \
	MULTIPLAYERSHOOTERPLUGIN_API static class UScriptStruct* StaticStruct();


template<> MULTIPLAYERSHOOTERPLUGIN_API UScriptStruct* StaticStruct<struct FMultiplayerSwitchWeapons1Replication>();

#define FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerPlayerCharacter_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultiplayerSwitchWeapons2Replication_Statics; \
	MULTIPLAYERSHOOTERPLUGIN_API static class UScriptStruct* StaticStruct();


template<> MULTIPLAYERSHOOTERPLUGIN_API UScriptStruct* StaticStruct<struct FMultiplayerSwitchWeapons2Replication>();

#define FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerPlayerCharacter_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultiplayerRespawnReplication_Statics; \
	MULTIPLAYERSHOOTERPLUGIN_API static class UScriptStruct* StaticStruct();


template<> MULTIPLAYERSHOOTERPLUGIN_API UScriptStruct* StaticStruct<struct FMultiplayerRespawnReplication>();

#define FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerPlayerCharacter_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultiplayerGetRidOfWeaponsReplication_Statics; \
	MULTIPLAYERSHOOTERPLUGIN_API static class UScriptStruct* StaticStruct();


template<> MULTIPLAYERSHOOTERPLUGIN_API UScriptStruct* StaticStruct<struct FMultiplayerGetRidOfWeaponsReplication>();

#define FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerPlayerCharacter_h_80_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultiplayerDieReplication_Statics; \
	MULTIPLAYERSHOOTERPLUGIN_API static class UScriptStruct* StaticStruct();


template<> MULTIPLAYERSHOOTERPLUGIN_API UScriptStruct* StaticStruct<struct FMultiplayerDieReplication>();

#define FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerPlayerCharacter_h_89_SPARSE_DATA
#define FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerPlayerCharacter_h_89_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerPlayerCharacter_h_89_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerPlayerCharacter_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerSwitchWeapons2_Validate(); \
	virtual void ServerSwitchWeapons2_Implementation(); \
	virtual bool ServerSwitchWeapons1_Validate(); \
	virtual void ServerSwitchWeapons1_Implementation(); \
	virtual bool ServerSwitchWeapons_Validate(); \
	virtual void ServerSwitchWeapons_Implementation(); \
	virtual bool ServerGetRidOfWeapons_Validate(); \
	virtual void ServerGetRidOfWeapons_Implementation(); \
	virtual bool ServerGiveWeapon2_Validate(); \
	virtual void ServerGiveWeapon2_Implementation(); \
	virtual bool ServerGiveWeapon1_Validate(); \
	virtual void ServerGiveWeapon1_Implementation(); \
	virtual bool ServerRespawn_Validate(); \
	virtual void ServerRespawn_Implementation(); \
	virtual bool ServerDie_Validate(); \
	virtual void ServerDie_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_DieReplication); \
	DECLARE_FUNCTION(execOnRep_GetRidOfWeaponsReplication); \
	DECLARE_FUNCTION(execOnRep_RespawnReplication); \
	DECLARE_FUNCTION(execOnRep_SwitchWeapons2Replication); \
	DECLARE_FUNCTION(execOnRep_SwitchWeapons1Replication); \
	DECLARE_FUNCTION(execOnRep_SwitchWeaponsReplication); \
	DECLARE_FUNCTION(execOnRep_GiveWeapon2Replication); \
	DECLARE_FUNCTION(execOnRep_GiveWeapon1Replication); \
	DECLARE_FUNCTION(execReload2); \
	DECLARE_FUNCTION(execReload1); \
	DECLARE_FUNCTION(execReload); \
	DECLARE_FUNCTION(execServerSwitchWeapons2); \
	DECLARE_FUNCTION(execSwitchWeapons2); \
	DECLARE_FUNCTION(execServerSwitchWeapons1); \
	DECLARE_FUNCTION(execSwitchWeapons1); \
	DECLARE_FUNCTION(execServerSwitchWeapons); \
	DECLARE_FUNCTION(execSwitchWeapons); \
	DECLARE_FUNCTION(execServerGetRidOfWeapons); \
	DECLARE_FUNCTION(execGetRidOfWeapons); \
	DECLARE_FUNCTION(execServerGiveWeapon2); \
	DECLARE_FUNCTION(execGiveWeapon2); \
	DECLARE_FUNCTION(execServerGiveWeapon1); \
	DECLARE_FUNCTION(execGiveWeapon1); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execServerRespawn); \
	DECLARE_FUNCTION(execRespawn); \
	DECLARE_FUNCTION(execAutoHealthRegen); \
	DECLARE_FUNCTION(execServerDie); \
	DECLARE_FUNCTION(execDie); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execLookUp); \
	DECLARE_FUNCTION(execTurn); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerPlayerCharacter_h_89_ACCESSORS
#define FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerPlayerCharacter_h_89_CALLBACK_WRAPPERS
#define FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerPlayerCharacter_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMultiplayerPlayerCharacter(); \
	friend struct Z_Construct_UClass_AMultiplayerPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(AMultiplayerPlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerShooterPlugin"), NO_API) \
	DECLARE_SERIALIZER(AMultiplayerPlayerCharacter) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		bCanShoot, \
		Weapon1, \
		Weapon2, \
		WeaponBeingUsed, \
		bCanSwitchWeapons, \
		bIsSwitchingWeapons, \
		bIsReloading, \
		GiveWeapon1Replication, \
		GiveWeapon2Replication, \
		SwitchWeaponsReplication, \
		SwitchWeapons1Replication, \
		SwitchWeapons2Replication, \
		RespawnReplication, \
		GetRidOfWeaponsReplication, \
		DieReplication, \
		NETFIELD_REP_END=DieReplication	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerPlayerCharacter_h_89_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMultiplayerPlayerCharacter(AMultiplayerPlayerCharacter&&); \
	NO_API AMultiplayerPlayerCharacter(const AMultiplayerPlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiplayerPlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerPlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMultiplayerPlayerCharacter) \
	NO_API virtual ~AMultiplayerPlayerCharacter();


#define FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerPlayerCharacter_h_86_PROLOG
#define FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerPlayerCharacter_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerPlayerCharacter_h_89_SPARSE_DATA \
	FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerPlayerCharacter_h_89_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerPlayerCharacter_h_89_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerPlayerCharacter_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerPlayerCharacter_h_89_ACCESSORS \
	FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerPlayerCharacter_h_89_CALLBACK_WRAPPERS \
	FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerPlayerCharacter_h_89_INCLASS_NO_PURE_DECLS \
	FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerPlayerCharacter_h_89_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERSHOOTERPLUGIN_API UClass* StaticClass<class AMultiplayerPlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_admin_Desktop_Solution_new_ProjectY_ProjectY_Plugins_MultiplayerShooterPlugin_Source_MultiplayerShooterPlugin_Public_MultiplayerPlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
