// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IndirectTexturePlugin/Public/IndirectTexture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIndirectTexture() {}
// Cross Module References
	INDIRECTTEXTUREPLUGIN_API UClass* Z_Construct_UClass_UIndirectTexture_NoRegister();
	INDIRECTTEXTUREPLUGIN_API UClass* Z_Construct_UClass_UIndirectTexture();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_IndirectTexturePlugin();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void UIndirectTexture::StaticRegisterNativesUIndirectTexture()
	{
	}
	UClass* Z_Construct_UClass_UIndirectTexture_NoRegister()
	{
		return UIndirectTexture::StaticClass();
	}
	struct Z_Construct_UClass_UIndirectTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PixelData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PixelData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PixelData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndirectTextureResolutionHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_IndirectTextureResolutionHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndirectTextureResolutionWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_IndirectTextureResolutionWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TilesetTilesCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_TilesetTilesCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TilesetTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TilesetTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIndirectTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IndirectTexturePlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndirectTexture_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "IndirectTexture.h" },
		{ "ModuleRelativePath", "Public/IndirectTexture.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndirectTexture_Statics::NewProp_PixelData_MetaData[] = {
		{ "Category", "IndirectTexture" },
		{ "ModuleRelativePath", "Public/IndirectTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIndirectTexture_Statics::NewProp_PixelData = { "PixelData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIndirectTexture, PixelData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIndirectTexture_Statics::NewProp_PixelData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndirectTexture_Statics::NewProp_PixelData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIndirectTexture_Statics::NewProp_PixelData_Inner = { "PixelData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndirectTexture_Statics::NewProp_IndirectTextureResolutionHeight_MetaData[] = {
		{ "Category", "IndirectTexture" },
		{ "ModuleRelativePath", "Public/IndirectTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UIndirectTexture_Statics::NewProp_IndirectTextureResolutionHeight = { "IndirectTextureResolutionHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIndirectTexture, IndirectTextureResolutionHeight), METADATA_PARAMS(Z_Construct_UClass_UIndirectTexture_Statics::NewProp_IndirectTextureResolutionHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndirectTexture_Statics::NewProp_IndirectTextureResolutionHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndirectTexture_Statics::NewProp_IndirectTextureResolutionWidth_MetaData[] = {
		{ "Category", "IndirectTexture" },
		{ "ModuleRelativePath", "Public/IndirectTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UIndirectTexture_Statics::NewProp_IndirectTextureResolutionWidth = { "IndirectTextureResolutionWidth", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIndirectTexture, IndirectTextureResolutionWidth), METADATA_PARAMS(Z_Construct_UClass_UIndirectTexture_Statics::NewProp_IndirectTextureResolutionWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndirectTexture_Statics::NewProp_IndirectTextureResolutionWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndirectTexture_Statics::NewProp_TilesetTilesCount_MetaData[] = {
		{ "Category", "IndirectTexture" },
		{ "ModuleRelativePath", "Public/IndirectTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UIndirectTexture_Statics::NewProp_TilesetTilesCount = { "TilesetTilesCount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIndirectTexture, TilesetTilesCount), METADATA_PARAMS(Z_Construct_UClass_UIndirectTexture_Statics::NewProp_TilesetTilesCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndirectTexture_Statics::NewProp_TilesetTilesCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndirectTexture_Statics::NewProp_TilesetTexture_MetaData[] = {
		{ "Category", "IndirectTexture" },
		{ "ModuleRelativePath", "Public/IndirectTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIndirectTexture_Statics::NewProp_TilesetTexture = { "TilesetTexture", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIndirectTexture, TilesetTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIndirectTexture_Statics::NewProp_TilesetTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndirectTexture_Statics::NewProp_TilesetTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIndirectTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndirectTexture_Statics::NewProp_PixelData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndirectTexture_Statics::NewProp_PixelData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndirectTexture_Statics::NewProp_IndirectTextureResolutionHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndirectTexture_Statics::NewProp_IndirectTextureResolutionWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndirectTexture_Statics::NewProp_TilesetTilesCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndirectTexture_Statics::NewProp_TilesetTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIndirectTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIndirectTexture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIndirectTexture_Statics::ClassParams = {
		&UIndirectTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIndirectTexture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIndirectTexture_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIndirectTexture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIndirectTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIndirectTexture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIndirectTexture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIndirectTexture, 2765661091);
	template<> INDIRECTTEXTUREPLUGIN_API UClass* StaticClass<UIndirectTexture>()
	{
		return UIndirectTexture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIndirectTexture(Z_Construct_UClass_UIndirectTexture, &UIndirectTexture::StaticClass, TEXT("/Script/IndirectTexturePlugin"), TEXT("UIndirectTexture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIndirectTexture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
