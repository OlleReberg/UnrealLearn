// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventoryStructs.h"
#include "Components/ActorComponent.h"
#include "InventoryBase.generated.h"

//DECLARE_DYNAMIC_DELEGATE(FDelegateSignature);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMultiCastDelegateSignature);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable)
class INVENTORYPLUGIN_API UInventoryBase : public UActorComponent
{
	GENERATED_BODY()

	FItemStruct Item;
public:
	// Sets default values for this component's properties
	UInventoryBase();

	UPROPERTY(BlueprintAssignable)
	FMultiCastDelegateSignature DelegateSignature;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	TArray<FItemStruct>& GetItems();

	UFUNCTION(BlueprintCallable)
	bool AddItem(const FItemStruct& NewItem);
	
private:
	TArray<FItemStruct> Items;
};

