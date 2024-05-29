// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "TestLevelGameMode.generated.h"

/**
 * 
 */
UCLASS()
class UE_ASN_01_API ATestLevelGameMode : public AGameMode
{
	GENERATED_BODY()
	


public:
	ATestLevelGameMode();
	~ATestLevelGameMode();

protected:
	void BeginPlay();
	void Tick(float _DeltaTime) override;

private:
	int MonsterCount = 1000;

};
