// Fill out your copyright notice in the Description page of Project Settings.


#include "StealthGame/Public/SPickupActor.h"


// Sets default values
ASPickupActor::ASPickupActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ASPickupActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASPickupActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

