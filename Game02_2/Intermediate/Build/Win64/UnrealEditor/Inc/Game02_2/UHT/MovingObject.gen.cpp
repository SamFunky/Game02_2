// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game02_2/Public/MovingObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingObject() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
GAME02_2_API UClass* Z_Construct_UClass_AMovingObject();
GAME02_2_API UClass* Z_Construct_UClass_AMovingObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game02_2();
// End Cross Module References

// Begin Class AMovingObject
void AMovingObject::StaticRegisterNativesAMovingObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovingObject);
UClass* Z_Construct_UClass_AMovingObject_NoRegister()
{
	return AMovingObject::StaticClass();
}
struct Z_Construct_UClass_AMovingObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MovingObject.h" },
		{ "ModuleRelativePath", "Public/MovingObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectVelocity_MetaData[] = {
		{ "Category", "Moving" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use this to move an object in a certain direction\n" },
#endif
		{ "ModuleRelativePath", "Public/MovingObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use this to move an object in a certain direction" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveDistance_MetaData[] = {
		{ "Category", "Moving" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use this to set a distance for the object to move.\n" },
#endif
		{ "ModuleRelativePath", "Public/MovingObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use this to set a distance for the object to move." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveShouldReturn_MetaData[] = {
		{ "Category", "Moving" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The object it will return to its original position. then back again.\n" },
#endif
		{ "ModuleRelativePath", "Public/MovingObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The object it will return to its original position. then back again." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationVelocity_MetaData[] = {
		{ "Category", "Rotation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Use this to rotate an object.\n" },
#endif
		{ "ModuleRelativePath", "Public/MovingObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use this to rotate an object." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotateShouldReturn_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Public/MovingObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRotation_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Public/MovingObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveDistance;
	static void NewProp_MoveShouldReturn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MoveShouldReturn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationVelocity;
	static void NewProp_RotateShouldReturn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RotateShouldReturn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovingObject_Statics::NewProp_ObjectVelocity = { "ObjectVelocity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingObject, ObjectVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectVelocity_MetaData), NewProp_ObjectVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingObject_Statics::NewProp_MoveDistance = { "MoveDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingObject, MoveDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveDistance_MetaData), NewProp_MoveDistance_MetaData) };
void Z_Construct_UClass_AMovingObject_Statics::NewProp_MoveShouldReturn_SetBit(void* Obj)
{
	((AMovingObject*)Obj)->MoveShouldReturn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovingObject_Statics::NewProp_MoveShouldReturn = { "MoveShouldReturn", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMovingObject), &Z_Construct_UClass_AMovingObject_Statics::NewProp_MoveShouldReturn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveShouldReturn_MetaData), NewProp_MoveShouldReturn_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovingObject_Statics::NewProp_RotationVelocity = { "RotationVelocity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingObject, RotationVelocity), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationVelocity_MetaData), NewProp_RotationVelocity_MetaData) };
void Z_Construct_UClass_AMovingObject_Statics::NewProp_RotateShouldReturn_SetBit(void* Obj)
{
	((AMovingObject*)Obj)->RotateShouldReturn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovingObject_Statics::NewProp_RotateShouldReturn = { "RotateShouldReturn", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMovingObject), &Z_Construct_UClass_AMovingObject_Statics::NewProp_RotateShouldReturn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotateShouldReturn_MetaData), NewProp_RotateShouldReturn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingObject_Statics::NewProp_MaxRotation = { "MaxRotation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingObject, MaxRotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRotation_MetaData), NewProp_MaxRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingObject_Statics::NewProp_ObjectVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingObject_Statics::NewProp_MoveDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingObject_Statics::NewProp_MoveShouldReturn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingObject_Statics::NewProp_RotationVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingObject_Statics::NewProp_RotateShouldReturn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingObject_Statics::NewProp_MaxRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMovingObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Game02_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingObject_Statics::ClassParams = {
	&AMovingObject::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMovingObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMovingObject_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingObject_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovingObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMovingObject()
{
	if (!Z_Registration_Info_UClass_AMovingObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovingObject.OuterSingleton, Z_Construct_UClass_AMovingObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMovingObject.OuterSingleton;
}
template<> GAME02_2_API UClass* StaticClass<AMovingObject>()
{
	return AMovingObject::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingObject);
AMovingObject::~AMovingObject() {}
// End Class AMovingObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Robert_J_Berryhill_Documents_GitHub_Game02_2_Game02_2_Source_Game02_2_Public_MovingObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMovingObject, AMovingObject::StaticClass, TEXT("AMovingObject"), &Z_Registration_Info_UClass_AMovingObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingObject), 3307672042U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Robert_J_Berryhill_Documents_GitHub_Game02_2_Game02_2_Source_Game02_2_Public_MovingObject_h_2408080938(TEXT("/Script/Game02_2"),
	Z_CompiledInDeferFile_FID_Users_Robert_J_Berryhill_Documents_GitHub_Game02_2_Game02_2_Source_Game02_2_Public_MovingObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Robert_J_Berryhill_Documents_GitHub_Game02_2_Game02_2_Source_Game02_2_Public_MovingObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
