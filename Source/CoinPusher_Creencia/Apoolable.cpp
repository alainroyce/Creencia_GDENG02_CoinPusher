// Fill out your copyright notice in the Description page of Project Settings.


#include "Apoolable.h"

// Sets default values
AApoolable::AApoolable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AApoolable::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AApoolable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

