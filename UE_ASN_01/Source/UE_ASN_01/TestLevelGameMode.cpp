// Fill out your copyright notice in the Description page of Project Settings.


#include "TestLevelGameMode.h"

// ������ �Ҹ������ �翬��

ATestLevelGameMode::ATestLevelGameMode()
{
	int a = 0;
}

ATestLevelGameMode::~ATestLevelGameMode()
{
	int a = 0;
}

void ATestLevelGameMode::BeginPlay()
{
	int a = 0;
	Super::BeginPlay();

	int b = 0;
	// GetWorld()->SpawnActor<>

}

void ATestLevelGameMode::Tick(float _DeltaTime)
{
	Super::Tick(_DeltaTime);

	if (MonsterCount == 0)
	{
		int a = 0;
	}
	--MonsterCount;

}