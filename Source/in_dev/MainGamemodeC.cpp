// Fill out your copyright notice in the Description page of Project Settings.


#include "MainGamemodeC.h"
#include "MainGameMode.h"
#include<string>
AMainGamemodeC::AMainGamemodeC(){

}
void AMainGamemodeC::BeginPlay() {
	Super::BeginPlay();
	auto CurrentLevel=GetWorld()->GetMapName();
	if (CurrentLevel == "UEDPIE_0_TopDownExampleMap") {
		for (int i = 1; i < 10; i++) {
			for (int j = 1; j <= FMath::RandRange(2, 5); j++) {

				FVector Location = FVector(700*i, 400*j+50+FMath::FRandRange(-200,100)-500, 160);
				FRotator Rotation = FRotator(0, 0, 0);
				GetWorld()->SpawnActor<AActor>(ActorToSpawn, Location, Rotation);
			}
		}
	}

 }
