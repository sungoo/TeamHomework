// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TeamHomework/Effect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffect() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AEffect();
TEAMHOMEWORK_API UClass* Z_Construct_UClass_AEffect_NoRegister();
UPackage* Z_Construct_UPackage__Script_TeamHomework();
// End Cross Module References

// Begin Class AEffect Function EndNiagara
struct Z_Construct_UFunction_AEffect_EndNiagara_Statics
{
	struct Effect_eventEndNiagara_Parms
	{
		UNiagaraComponent* niagara;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Effect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_niagara_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_niagara;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEffect_EndNiagara_Statics::NewProp_niagara = { "niagara", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Effect_eventEndNiagara_Parms, niagara), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_niagara_MetaData), NewProp_niagara_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEffect_EndNiagara_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEffect_EndNiagara_Statics::NewProp_niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEffect_EndNiagara_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEffect_EndNiagara_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEffect, nullptr, "EndNiagara", nullptr, nullptr, Z_Construct_UFunction_AEffect_EndNiagara_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEffect_EndNiagara_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEffect_EndNiagara_Statics::Effect_eventEndNiagara_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEffect_EndNiagara_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEffect_EndNiagara_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEffect_EndNiagara_Statics::Effect_eventEndNiagara_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEffect_EndNiagara()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEffect_EndNiagara_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEffect::execEndNiagara)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_niagara);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndNiagara(Z_Param_niagara);
	P_NATIVE_END;
}
// End Class AEffect Function EndNiagara

// Begin Class AEffect Function EndParticle
struct Z_Construct_UFunction_AEffect_EndParticle_Statics
{
	struct Effect_eventEndParticle_Parms
	{
		UParticleSystemComponent* particle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Effect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_particle_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_particle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEffect_EndParticle_Statics::NewProp_particle = { "particle", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Effect_eventEndParticle_Parms, particle), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_particle_MetaData), NewProp_particle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEffect_EndParticle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEffect_EndParticle_Statics::NewProp_particle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AEffect_EndParticle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEffect_EndParticle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEffect, nullptr, "EndParticle", nullptr, nullptr, Z_Construct_UFunction_AEffect_EndParticle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AEffect_EndParticle_Statics::PropPointers), sizeof(Z_Construct_UFunction_AEffect_EndParticle_Statics::Effect_eventEndParticle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEffect_EndParticle_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEffect_EndParticle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AEffect_EndParticle_Statics::Effect_eventEndParticle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AEffect_EndParticle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEffect_EndParticle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AEffect::execEndParticle)
{
	P_GET_OBJECT(UParticleSystemComponent,Z_Param_particle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndParticle(Z_Param_particle);
	P_NATIVE_END;
}
// End Class AEffect Function EndParticle

// Begin Class AEffect
void AEffect::StaticRegisterNativesAEffect()
{
	UClass* Class = AEffect::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndNiagara", &AEffect::execEndNiagara },
		{ "EndParticle", &AEffect::execEndParticle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEffect);
UClass* Z_Construct_UClass_AEffect_NoRegister()
{
	return AEffect::StaticClass();
}
struct Z_Construct_UClass_AEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Effect.h" },
		{ "ModuleRelativePath", "Effect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__particleCom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Effect" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Effect.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__niagaraCom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Effect" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Effect.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__particleCom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__niagaraCom;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AEffect_EndNiagara, "EndNiagara" }, // 230179969
		{ &Z_Construct_UFunction_AEffect_EndParticle, "EndParticle" }, // 1243948801
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEffect>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEffect_Statics::NewProp__particleCom = { "_particleCom", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEffect, _particleCom), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__particleCom_MetaData), NewProp__particleCom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEffect_Statics::NewProp__niagaraCom = { "_niagaraCom", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEffect, _niagaraCom), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__niagaraCom_MetaData), NewProp__niagaraCom_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffect_Statics::NewProp__particleCom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEffect_Statics::NewProp__niagaraCom,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEffect_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEffect_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TeamHomework,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEffect_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEffect_Statics::ClassParams = {
	&AEffect::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AEffect_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AEffect_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_AEffect_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEffect()
{
	if (!Z_Registration_Info_UClass_AEffect.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEffect.OuterSingleton, Z_Construct_UClass_AEffect_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEffect.OuterSingleton;
}
template<> TEAMHOMEWORK_API UClass* StaticClass<AEffect>()
{
	return AEffect::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEffect);
AEffect::~AEffect() {}
// End Class AEffect

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Effect_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEffect, AEffect::StaticClass, TEXT("AEffect"), &Z_Registration_Info_UClass_AEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEffect), 601666458U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Effect_h_2941669755(TEXT("/Script/TeamHomework"),
	Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Effect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Desktop_TeamProject_TeamHomework_TeamHomework_Source_TeamHomework_Effect_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
