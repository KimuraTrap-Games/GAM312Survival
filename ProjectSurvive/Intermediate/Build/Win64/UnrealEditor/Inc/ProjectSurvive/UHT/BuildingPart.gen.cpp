// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectSurvive/BuildingPart.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildingPart() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PROJECTSURVIVE_API UClass* Z_Construct_UClass_ABuildingPart();
PROJECTSURVIVE_API UClass* Z_Construct_UClass_ABuildingPart_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectSurvive();
// End Cross Module References

// Begin Class ABuildingPart
void ABuildingPart::StaticRegisterNativesABuildingPart()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABuildingPart);
UClass* Z_Construct_UClass_ABuildingPart_NoRegister()
{
	return ABuildingPart::StaticClass();
}
struct Z_Construct_UClass_ABuildingPart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BuildingPart.h" },
		{ "ModuleRelativePath", "BuildingPart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "BuildingPart" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BuildingPart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PivotArrow_MetaData[] = {
		{ "Category", "BuildingPart" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BuildingPart.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PivotArrow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuildingPart>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingPart_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABuildingPart, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingPart_Statics::NewProp_PivotArrow = { "PivotArrow", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABuildingPart, PivotArrow), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PivotArrow_MetaData), NewProp_PivotArrow_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuildingPart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingPart_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingPart_Statics::NewProp_PivotArrow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingPart_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABuildingPart_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectSurvive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingPart_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABuildingPart_Statics::ClassParams = {
	&ABuildingPart::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABuildingPart_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingPart_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingPart_Statics::Class_MetaDataParams), Z_Construct_UClass_ABuildingPart_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABuildingPart()
{
	if (!Z_Registration_Info_UClass_ABuildingPart.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABuildingPart.OuterSingleton, Z_Construct_UClass_ABuildingPart_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABuildingPart.OuterSingleton;
}
template<> PROJECTSURVIVE_API UClass* StaticClass<ABuildingPart>()
{
	return ABuildingPart::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildingPart);
ABuildingPart::~ABuildingPart() {}
// End Class ABuildingPart

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_scott_Desktop_GAM312Survival_ProjectSurvive_Source_ProjectSurvive_BuildingPart_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABuildingPart, ABuildingPart::StaticClass, TEXT("ABuildingPart"), &Z_Registration_Info_UClass_ABuildingPart, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABuildingPart), 257019200U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_scott_Desktop_GAM312Survival_ProjectSurvive_Source_ProjectSurvive_BuildingPart_h_1824249032(TEXT("/Script/ProjectSurvive"),
	Z_CompiledInDeferFile_FID_Users_scott_Desktop_GAM312Survival_ProjectSurvive_Source_ProjectSurvive_BuildingPart_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_scott_Desktop_GAM312Survival_ProjectSurvive_Source_ProjectSurvive_BuildingPart_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
