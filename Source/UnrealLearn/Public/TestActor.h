﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TestActor.generated.h"



UCLASS()
class UNREALLEARN_API ATestActor : public AAIController
{
	GENERATED_BODY()
	
public:	

	UFUNCTION(BlueprintCallable, Category = "GP_21 😍")
	void DrawSphereAtTargetDestination(FLinearColor Color, float Time);

	// Sets default values for this actor's properties
	ATestActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
