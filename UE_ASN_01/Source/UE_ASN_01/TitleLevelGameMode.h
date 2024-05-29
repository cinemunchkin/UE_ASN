// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "TitleLevelGameMode.generated.h"

/**
 * 
 */
UCLASS()
class UE_ASN_01_API ATitleLevelGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	ATitleLevelGameMode();

protected:
	void BeginPlay();
	void Tick(float _DeltaTime) override;
};
