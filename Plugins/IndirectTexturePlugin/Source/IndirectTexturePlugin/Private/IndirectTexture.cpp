// Fill out your copyright notice in the Description page of Project Settings.


#include "IndirectTexture.h"

UIndirectTexture::UIndirectTexture()
{
	IndirectTextureResolutionWidth = 512;
	IndirectTextureResolutionHeight = 512;
	int32 PixelSize = IndirectTextureResolutionWidth * IndirectTextureResolutionHeight;
	

	PixelData.Init(-1, PixelSize);

	int32 MinPixel = 0;
	int32 MaxPixel = PixelSize - 1;
	int32 bias = 0;

	// 타일 인덱스 균일하게 부여
	for (uint32 index = 0; index < TilesetTilesCount; index++)
	{
		for (uint32 count = 0; count < PixelSize / TilesetTilesCount; count++)
		{
			

			int32 PixelIndex = (FMath::RandRange(0, PixelSize - 1) + bias) % PixelSize;
			bias += FMath::RandRange(0, 10000);
			PixelData[PixelIndex] = index;
			if (PixelData[PixelIndex] != -1)
			{
				int32 MinPixelDist = FMath::Abs(PixelIndex - MinPixel);
				int32 MaxPixelDist = FMath::Abs(PixelIndex - MaxPixel);

				if (MinPixelDist > MaxPixelDist)
				{
					PixelData[MinPixel] = index;
					MinPixel++;
				}
				else
				{
					PixelData[MaxPixel] = index;
					MaxPixel--;
				}
			}
			else
			{
				PixelData[PixelIndex] = index;
				if (PixelIndex == MinPixel)
					MinPixel++;
				else if (PixelIndex == MaxPixel)
					MaxPixel--;
			}
		}
	}
	
	for (int32 pixel = 0; pixel < PixelSize; pixel++)
	{
		if (PixelData[pixel] == -1)
			PixelData[pixel] = TilesetTilesCount - 1;
	}
	//for (int32 i = 0; i < PixelSize; i++)
	//	PixelData[i] = FMath::RandRange(0, TilesetTilesCount);
}



