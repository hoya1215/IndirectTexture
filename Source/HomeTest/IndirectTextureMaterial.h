// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Materials/MaterialExpression.h"
#include "MaterialCompiler.h"
#include "IndirectTexture.h"
#include "IndirectTextureMaterial.generated.h"

/**
 * 
 */
UCLASS()
class HOMETEST_API UIndirectTextureMaterial : public UMaterialExpression
{
	GENERATED_BODY()

public:
	virtual int32 Compile(FMaterialCompiler* Compiler, int32 OutputIndex) override;

	UPROPERTY(EditAnyWhere)
	UIndirectTexture* IndirectTexture;

	UPROPERTY(EditAnyWhere)
	uint32 TileSize;
	
};
