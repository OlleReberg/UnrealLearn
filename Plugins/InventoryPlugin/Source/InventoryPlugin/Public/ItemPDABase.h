

#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ItemPDABase.generated.h"



UCLASS()
class INVENTORYPLUGIN_API UItemPDABase : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category="Basic😒")
	FText Text;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category="Basic😒")	
	UStaticMesh* Mesh;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category="Basic😒")	
	UTexture2D* Thumbnail;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="Basic😒")
	bool Use(APawn* Pawn);
	
};