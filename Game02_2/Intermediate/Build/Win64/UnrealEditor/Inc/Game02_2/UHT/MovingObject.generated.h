// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MovingObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAME02_2_MovingObject_generated_h
#error "MovingObject.generated.h already included, missing '#pragma once' in MovingObject.h"
#endif
#define GAME02_2_MovingObject_generated_h

#define FID_Users_Robert_J_Berryhill_Documents_GitHub_Game02_2_Game02_2_Source_Game02_2_Public_MovingObject_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMovingObject(); \
	friend struct Z_Construct_UClass_AMovingObject_Statics; \
public: \
	DECLARE_CLASS(AMovingObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Game02_2"), NO_API) \
	DECLARE_SERIALIZER(AMovingObject)


#define FID_Users_Robert_J_Berryhill_Documents_GitHub_Game02_2_Game02_2_Source_Game02_2_Public_MovingObject_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMovingObject(AMovingObject&&); \
	AMovingObject(const AMovingObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMovingObject) \
	NO_API virtual ~AMovingObject();


#define FID_Users_Robert_J_Berryhill_Documents_GitHub_Game02_2_Game02_2_Source_Game02_2_Public_MovingObject_h_9_PROLOG
#define FID_Users_Robert_J_Berryhill_Documents_GitHub_Game02_2_Game02_2_Source_Game02_2_Public_MovingObject_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Robert_J_Berryhill_Documents_GitHub_Game02_2_Game02_2_Source_Game02_2_Public_MovingObject_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_Robert_J_Berryhill_Documents_GitHub_Game02_2_Game02_2_Source_Game02_2_Public_MovingObject_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAME02_2_API UClass* StaticClass<class AMovingObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Robert_J_Berryhill_Documents_GitHub_Game02_2_Game02_2_Source_Game02_2_Public_MovingObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
