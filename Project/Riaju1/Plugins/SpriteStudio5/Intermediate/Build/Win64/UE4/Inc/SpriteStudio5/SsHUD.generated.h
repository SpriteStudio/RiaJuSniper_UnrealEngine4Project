// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USsPlayerComponent;
struct FVector2D;
#ifdef SPRITESTUDIO5_SsHUD_generated_h
#error "SsHUD.generated.h already included, missing '#pragma once' in SsHUD.h"
#endif
#define SPRITESTUDIO5_SsHUD_generated_h

#define Riaju1_Plugins_SpriteStudio5_Source_SpriteStudio5_Public_Actor_SsHUD_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDrawSsPlayer) \
	{ \
		P_GET_OBJECT(USsPlayerComponent,Z_Param_SsPlayer); \
		P_GET_STRUCT(FVector2D,Z_Param_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rotation); \
		P_GET_STRUCT(FVector2D,Z_Param_Scale); \
		P_FINISH; \
		this->DrawSsPlayer(Z_Param_SsPlayer,Z_Param_Location,Z_Param_Rotation,Z_Param_Scale); \
	}


#define Riaju1_Plugins_SpriteStudio5_Source_SpriteStudio5_Public_Actor_SsHUD_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDrawSsPlayer) \
	{ \
		P_GET_OBJECT(USsPlayerComponent,Z_Param_SsPlayer); \
		P_GET_STRUCT(FVector2D,Z_Param_Location); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Rotation); \
		P_GET_STRUCT(FVector2D,Z_Param_Scale); \
		P_FINISH; \
		this->DrawSsPlayer(Z_Param_SsPlayer,Z_Param_Location,Z_Param_Rotation,Z_Param_Scale); \
	}


#define Riaju1_Plugins_SpriteStudio5_Source_SpriteStudio5_Public_Actor_SsHUD_h_10_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesASsHUD(); \
	friend SPRITESTUDIO5_API class UClass* Z_Construct_UClass_ASsHUD(); \
	public: \
	DECLARE_CLASS(ASsHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, SpriteStudio5, NO_API) \
	DECLARE_SERIALIZER(ASsHUD) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ASsHUD*>(this); }


#define Riaju1_Plugins_SpriteStudio5_Source_SpriteStudio5_Public_Actor_SsHUD_h_10_INCLASS \
	private: \
	static void StaticRegisterNativesASsHUD(); \
	friend SPRITESTUDIO5_API class UClass* Z_Construct_UClass_ASsHUD(); \
	public: \
	DECLARE_CLASS(ASsHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, SpriteStudio5, NO_API) \
	DECLARE_SERIALIZER(ASsHUD) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<ASsHUD*>(this); }


#define Riaju1_Plugins_SpriteStudio5_Source_SpriteStudio5_Public_Actor_SsHUD_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASsHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASsHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASsHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASsHUD); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ASsHUD(const ASsHUD& InCopy); \
public:


#define Riaju1_Plugins_SpriteStudio5_Source_SpriteStudio5_Public_Actor_SsHUD_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASsHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ASsHUD(const ASsHUD& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASsHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASsHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASsHUD)


#define Riaju1_Plugins_SpriteStudio5_Source_SpriteStudio5_Public_Actor_SsHUD_h_7_PROLOG
#define Riaju1_Plugins_SpriteStudio5_Source_SpriteStudio5_Public_Actor_SsHUD_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Riaju1_Plugins_SpriteStudio5_Source_SpriteStudio5_Public_Actor_SsHUD_h_10_RPC_WRAPPERS \
	Riaju1_Plugins_SpriteStudio5_Source_SpriteStudio5_Public_Actor_SsHUD_h_10_INCLASS \
	Riaju1_Plugins_SpriteStudio5_Source_SpriteStudio5_Public_Actor_SsHUD_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Riaju1_Plugins_SpriteStudio5_Source_SpriteStudio5_Public_Actor_SsHUD_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Riaju1_Plugins_SpriteStudio5_Source_SpriteStudio5_Public_Actor_SsHUD_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Riaju1_Plugins_SpriteStudio5_Source_SpriteStudio5_Public_Actor_SsHUD_h_10_INCLASS_NO_PURE_DECLS \
	Riaju1_Plugins_SpriteStudio5_Source_SpriteStudio5_Public_Actor_SsHUD_h_10_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SsHUD."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Riaju1_Plugins_SpriteStudio5_Source_SpriteStudio5_Public_Actor_SsHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
