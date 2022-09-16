#pragma once
#include "ItemPDABase.h"
#include "InventoryStructs.generated.h"

USTRUCT()
struct FItemStruct
{
	GENERATED_BODY()

	UPROPERTY()
	UItemPDABase* ItemPDA;

	UPROPERTY()
	float Durability;
};
