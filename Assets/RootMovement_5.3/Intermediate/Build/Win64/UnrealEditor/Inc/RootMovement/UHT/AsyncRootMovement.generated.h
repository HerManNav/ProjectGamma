// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncRootMovement.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAsyncRootMovement;
class UCharacterMovementComponent;
class UCurveFloat;
class UObject;
enum class ERootMotionFinishVelocityMode : uint8;
#ifdef ROOTMOVEMENT_AsyncRootMovement_generated_h
#error "AsyncRootMovement.generated.h already included, missing '#pragma once' in AsyncRootMovement.h"
#endif
#define ROOTMOVEMENT_AsyncRootMovement_generated_h

#define FID_Users_Gitschi_Downloads_RootMovement_5_3_RootMovement_HostProject_Plugins_RootMovement_Source_RootMovement_Public_AsyncRootMovement_h_11_DELEGATE \
ROOTMOVEMENT_API void FMovementEvent_DelegateWrapper(const FMulticastScriptDelegate& MovementEvent);


#define FID_Users_Gitschi_Downloads_RootMovement_5_3_RootMovement_HostProject_Plugins_RootMovement_Source_RootMovement_Public_AsyncRootMovement_h_19_SPARSE_DATA
#define FID_Users_Gitschi_Downloads_RootMovement_5_3_RootMovement_HostProject_Plugins_RootMovement_Source_RootMovement_Public_AsyncRootMovement_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Gitschi_Downloads_RootMovement_5_3_RootMovement_HostProject_Plugins_RootMovement_Source_RootMovement_Public_AsyncRootMovement_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Gitschi_Downloads_RootMovement_5_3_RootMovement_HostProject_Plugins_RootMovement_Source_RootMovement_Public_AsyncRootMovement_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAsyncRootMovement);


#define FID_Users_Gitschi_Downloads_RootMovement_5_3_RootMovement_HostProject_Plugins_RootMovement_Source_RootMovement_Public_AsyncRootMovement_h_19_ACCESSORS
#define FID_Users_Gitschi_Downloads_RootMovement_5_3_RootMovement_HostProject_Plugins_RootMovement_Source_RootMovement_Public_AsyncRootMovement_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncRootMovement(); \
	friend struct Z_Construct_UClass_UAsyncRootMovement_Statics; \
public: \
	DECLARE_CLASS(UAsyncRootMovement, UCancellableAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RootMovement"), NO_API) \
	DECLARE_SERIALIZER(UAsyncRootMovement)


#define FID_Users_Gitschi_Downloads_RootMovement_5_3_RootMovement_HostProject_Plugins_RootMovement_Source_RootMovement_Public_AsyncRootMovement_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncRootMovement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncRootMovement(UAsyncRootMovement&&); \
	NO_API UAsyncRootMovement(const UAsyncRootMovement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncRootMovement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncRootMovement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncRootMovement) \
	NO_API virtual ~UAsyncRootMovement();


#define FID_Users_Gitschi_Downloads_RootMovement_5_3_RootMovement_HostProject_Plugins_RootMovement_Source_RootMovement_Public_AsyncRootMovement_h_16_PROLOG
#define FID_Users_Gitschi_Downloads_RootMovement_5_3_RootMovement_HostProject_Plugins_RootMovement_Source_RootMovement_Public_AsyncRootMovement_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Gitschi_Downloads_RootMovement_5_3_RootMovement_HostProject_Plugins_RootMovement_Source_RootMovement_Public_AsyncRootMovement_h_19_SPARSE_DATA \
	FID_Users_Gitschi_Downloads_RootMovement_5_3_RootMovement_HostProject_Plugins_RootMovement_Source_RootMovement_Public_AsyncRootMovement_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Gitschi_Downloads_RootMovement_5_3_RootMovement_HostProject_Plugins_RootMovement_Source_RootMovement_Public_AsyncRootMovement_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Gitschi_Downloads_RootMovement_5_3_RootMovement_HostProject_Plugins_RootMovement_Source_RootMovement_Public_AsyncRootMovement_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Gitschi_Downloads_RootMovement_5_3_RootMovement_HostProject_Plugins_RootMovement_Source_RootMovement_Public_AsyncRootMovement_h_19_ACCESSORS \
	FID_Users_Gitschi_Downloads_RootMovement_5_3_RootMovement_HostProject_Plugins_RootMovement_Source_RootMovement_Public_AsyncRootMovement_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_Gitschi_Downloads_RootMovement_5_3_RootMovement_HostProject_Plugins_RootMovement_Source_RootMovement_Public_AsyncRootMovement_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROOTMOVEMENT_API UClass* StaticClass<class UAsyncRootMovement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Gitschi_Downloads_RootMovement_5_3_RootMovement_HostProject_Plugins_RootMovement_Source_RootMovement_Public_AsyncRootMovement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
