// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyCharacterMovementComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTY_MyCharacterMovementComponent_generated_h
#error "MyCharacterMovementComponent.generated.h already included, missing '#pragma once' in MyCharacterMovementComponent.h"
#endif
#define PROJECTY_MyCharacterMovementComponent_generated_h

#define FID_ProjectY_Source_ProjectY_MyCharacterMovementComponent_h_15_SPARSE_DATA
#define FID_ProjectY_Source_ProjectY_MyCharacterMovementComponent_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectY_Source_ProjectY_MyCharacterMovementComponent_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectY_Source_ProjectY_MyCharacterMovementComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetGravityDirection);


#define FID_ProjectY_Source_ProjectY_MyCharacterMovementComponent_h_15_ACCESSORS
#define FID_ProjectY_Source_ProjectY_MyCharacterMovementComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UMyCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UMyCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectY"), NO_API) \
	DECLARE_SERIALIZER(UMyCharacterMovementComponent)


#define FID_ProjectY_Source_ProjectY_MyCharacterMovementComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyCharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyCharacterMovementComponent(UMyCharacterMovementComponent&&); \
	NO_API UMyCharacterMovementComponent(const UMyCharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyCharacterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyCharacterMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyCharacterMovementComponent) \
	NO_API virtual ~UMyCharacterMovementComponent();


#define FID_ProjectY_Source_ProjectY_MyCharacterMovementComponent_h_12_PROLOG
#define FID_ProjectY_Source_ProjectY_MyCharacterMovementComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectY_Source_ProjectY_MyCharacterMovementComponent_h_15_SPARSE_DATA \
	FID_ProjectY_Source_ProjectY_MyCharacterMovementComponent_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectY_Source_ProjectY_MyCharacterMovementComponent_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectY_Source_ProjectY_MyCharacterMovementComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectY_Source_ProjectY_MyCharacterMovementComponent_h_15_ACCESSORS \
	FID_ProjectY_Source_ProjectY_MyCharacterMovementComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_ProjectY_Source_ProjectY_MyCharacterMovementComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTY_API UClass* StaticClass<class UMyCharacterMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectY_Source_ProjectY_MyCharacterMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
