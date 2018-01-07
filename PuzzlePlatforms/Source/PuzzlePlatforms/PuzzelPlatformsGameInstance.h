// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "PuzzelPlatformsGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class PUZZLEPLATFORMS_API UPuzzelPlatformsGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:

	UPuzzelPlatformsGameInstance(const FObjectInitializer & ObjectInitializer);

	virtual void Init();
	
	
};
