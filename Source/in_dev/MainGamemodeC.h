// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MainGameMode.h"
#include "MainGamemodeC.generated.h"

/**
 * 
 */
UCLASS()
class IN_DEV_API AMainGamemodeC : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AMainGamemodeC();
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Actor")
	TSubclassOf<AActor> ActorToSpawn;
protected:
	virtual void BeginPlay() override;
private:
	
	APlayerController* Controller;
	
};
