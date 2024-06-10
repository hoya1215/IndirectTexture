// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IndirectTexture.generated.h"

/**
 * 
 */
UCLASS()
class INDIRECTTEXTUREPLUGIN_API UIndirectTexture : public UObject
{
	GENERATED_BODY()

public:
	UIndirectTexture();

	UPROPERTY(EditAnyWhere)
		UTexture2D* TilesetTexture;

	UPROPERTY(EditAnyWhere)
		uint32 TilesetTilesCount = 16;

	UPROPERTY(EditAnyWhere)
		uint32 IndirectTextureResolutionWidth = 512;

	UPROPERTY(EditAnyWhere)
		uint32 IndirectTextureResolutionHeight = 512;
	

	UPROPERTY(EditAnyWhere)
		TArray<int32> PixelData;


	
};
