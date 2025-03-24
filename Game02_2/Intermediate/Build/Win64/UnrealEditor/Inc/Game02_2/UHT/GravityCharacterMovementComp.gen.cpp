// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game02_2/Public/GravityCharacterMovementComp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGravityCharacterMovementComp() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
GAME02_2_API UClass* Z_Construct_UClass_UGravityCharacterMovementComp();
GAME02_2_API UClass* Z_Construct_UClass_UGravityCharacterMovementComp_NoRegister();
UPackage* Z_Construct_UPackage__Script_Game02_2();
// End Cross Module References

// Begin Class UGravityCharacterMovementComp
void UGravityCharacterMovementComp::StaticRegisterNativesUGravityCharacterMovementComp()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGravityCharacterMovementComp);
UClass* Z_Construct_UClass_UGravityCharacterMovementComp_NoRegister()
{
	return UGravityCharacterMovementComp::StaticClass();
}
struct Z_Construct_UClass_UGravityCharacterMovementComp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GravityCharacterMovementComp.h" },
		{ "ModuleRelativePath", "Public/GravityCharacterMovementComp.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGravityCharacterMovementComp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGravityCharacterMovementComp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Game02_2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGravityCharacterMovementComp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGravityCharacterMovementComp_Statics::ClassParams = {
	&UGravityCharacterMovementComp::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGravityCharacterMovementComp_Statics::Class_MetaDataParams), Z_Construct_UClass_UGravityCharacterMovementComp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGravityCharacterMovementComp()
{
	if (!Z_Registration_Info_UClass_UGravityCharacterMovementComp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGravityCharacterMovementComp.OuterSingleton, Z_Construct_UClass_UGravityCharacterMovementComp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGravityCharacterMovementComp.OuterSingleton;
}
template<> GAME02_2_API UClass* StaticClass<UGravityCharacterMovementComp>()
{
	return UGravityCharacterMovementComp::StaticClass();
}
UGravityCharacterMovementComp::UGravityCharacterMovementComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGravityCharacterMovementComp);
UGravityCharacterMovementComp::~UGravityCharacterMovementComp() {}
// End Class UGravityCharacterMovementComp

// Begin Registration
struct Z_CompiledInDeferFile_FID_Game02_2_Source_Game02_2_Public_GravityCharacterMovementComp_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGravityCharacterMovementComp, UGravityCharacterMovementComp::StaticClass, TEXT("UGravityCharacterMovementComp"), &Z_Registration_Info_UClass_UGravityCharacterMovementComp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGravityCharacterMovementComp), 4163032426U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Game02_2_Source_Game02_2_Public_GravityCharacterMovementComp_h_1689898113(TEXT("/Script/Game02_2"),
	Z_CompiledInDeferFile_FID_Game02_2_Source_Game02_2_Public_GravityCharacterMovementComp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Game02_2_Source_Game02_2_Public_GravityCharacterMovementComp_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
