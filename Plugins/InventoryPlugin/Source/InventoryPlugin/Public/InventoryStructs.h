﻿#pragma once
#include "ItemPDABase.h"
#include "InventoryStructs.generated.h"

USTRUCT(BlueprintType)
struct FItemStruct
{
	GENERATED_BODY()

	FItemStruct(UItemPDABase* Itempda): ItemPDA(nullptr), Durability(100){}
	
	FItemStruct(UItemPDABase* ItemPda, float Durability) : ItemPDA(ItemPda), Durability(Durability)
	{
		
	}
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UItemPDABase* ItemPDA;

	UPROPERTY(BlueprintReadWrite)
	float Durability;
};
