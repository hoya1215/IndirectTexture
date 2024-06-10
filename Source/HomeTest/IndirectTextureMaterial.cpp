// Fill out your copyright notice in the Description page of Project Settings.


#include "IndirectTextureMaterial.h"

int32 UIndirectTextureMaterial::Compile(FMaterialCompiler* Compiler, int32 OutputIndex)
{
	uint32 VirtualTextureResolutionWidth = IndirectTexture->IndirectTextureResolutionWidth * TileSize;
	uint32 VirtualTextureResolutionHeight = IndirectTexture->IndirectTextureResolutionHeight * TileSize;
	
	//TextureSample()
	return 1;
}

