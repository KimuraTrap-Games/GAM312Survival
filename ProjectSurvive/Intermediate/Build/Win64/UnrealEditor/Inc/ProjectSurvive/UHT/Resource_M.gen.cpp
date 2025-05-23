// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectSurvive/Resource_M.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResource_M() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
PROJECTSURVIVE_API UClass* Z_Construct_UClass_AResource_M();
PROJECTSURVIVE_API UClass* Z_Construct_UClass_AResource_M_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectSurvive();
// End Cross Module References

// Begin Class AResource_M
void AResource_M::StaticRegisterNativesAResource_M()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AResource_M);
UClass* Z_Construct_UClass_AResource_M_NoRegister()
{
	return AResource_M::StaticClass();
}
struct Z_Construct_UClass_AResource_M_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Resource_M.h" },
		{ "ModuleRelativePath", "Resource_M.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_resources_MetaData[] = {
		{ "Category", "Resource_M" },
		{ "ModuleRelativePath", "Resource_M.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_resourceAmount_MetaData[] = {
		{ "Category", "Resource_M" },
		{ "ModuleRelativePath", "Resource_M.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_totalResource_MetaData[] = {
		{ "Category", "Resource_M" },
		{ "ModuleRelativePath", "Resource_M.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_tempText_MetaData[] = {
		{ "ModuleRelativePath", "Resource_M.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResourceNameTxt_MetaData[] = {
		{ "Category", "Resource_M" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Resource_M.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Resource_M" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Resource_M.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_resourceMesh_MetaData[] = {
		{ "Category", "Resource_M" },
		{ "ModuleRelativePath", "Resource_M.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_resources;
	static const UECodeGen_Private::FIntPropertyParams NewProp_resourceAmount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_totalResource;
	static const UECodeGen_Private::FTextPropertyParams NewProp_tempText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResourceNameTxt;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_resourceMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AResource_M>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AResource_M_Statics::NewProp_resources = { "resources", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AResource_M, resources), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_resources_MetaData), NewProp_resources_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AResource_M_Statics::NewProp_resourceAmount = { "resourceAmount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AResource_M, resourceAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_resourceAmount_MetaData), NewProp_resourceAmount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AResource_M_Statics::NewProp_totalResource = { "totalResource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AResource_M, totalResource), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_totalResource_MetaData), NewProp_totalResource_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_AResource_M_Statics::NewProp_tempText = { "tempText", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AResource_M, tempText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_tempText_MetaData), NewProp_tempText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AResource_M_Statics::NewProp_ResourceNameTxt = { "ResourceNameTxt", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AResource_M, ResourceNameTxt), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResourceNameTxt_MetaData), NewProp_ResourceNameTxt_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AResource_M_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AResource_M, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AResource_M_Statics::NewProp_resourceMesh = { "resourceMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AResource_M, resourceMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_resourceMesh_MetaData), NewProp_resourceMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AResource_M_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResource_M_Statics::NewProp_resources,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResource_M_Statics::NewProp_resourceAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResource_M_Statics::NewProp_totalResource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResource_M_Statics::NewProp_tempText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResource_M_Statics::NewProp_ResourceNameTxt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResource_M_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AResource_M_Statics::NewProp_resourceMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AResource_M_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AResource_M_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectSurvive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AResource_M_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AResource_M_Statics::ClassParams = {
	&AResource_M::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AResource_M_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AResource_M_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AResource_M_Statics::Class_MetaDataParams), Z_Construct_UClass_AResource_M_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AResource_M()
{
	if (!Z_Registration_Info_UClass_AResource_M.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AResource_M.OuterSingleton, Z_Construct_UClass_AResource_M_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AResource_M.OuterSingleton;
}
template<> PROJECTSURVIVE_API UClass* StaticClass<AResource_M>()
{
	return AResource_M::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AResource_M);
AResource_M::~AResource_M() {}
// End Class AResource_M

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_scott_Desktop_GAM312Survival_ProjectSurvive_Source_ProjectSurvive_Resource_M_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AResource_M, AResource_M::StaticClass, TEXT("AResource_M"), &Z_Registration_Info_UClass_AResource_M, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AResource_M), 717350263U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_scott_Desktop_GAM312Survival_ProjectSurvive_Source_ProjectSurvive_Resource_M_h_49990724(TEXT("/Script/ProjectSurvive"),
	Z_CompiledInDeferFile_FID_Users_scott_Desktop_GAM312Survival_ProjectSurvive_Source_ProjectSurvive_Resource_M_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_scott_Desktop_GAM312Survival_ProjectSurvive_Source_ProjectSurvive_Resource_M_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
