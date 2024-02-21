// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGeometryActor.h"
#include "Engine/Engine.h"

DEFINE_LOG_CATEGORY_STATIC(LogBasedGeometry, All, All)

// Sets default values
ABaseGeometryActor::ABaseGeometryActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseGeometryActor::BeginPlay()
{
	Super::BeginPlay();

	//printStringType();
	printTypes();
}

// Called every frame
void ABaseGeometryActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseGeometryActor::printTypes()
{
  UE_LOG(LogBasedGeometry, Warning, TEXT("Actor name %s"), *GetName());
  UE_LOG(LogBasedGeometry, Warning, TEXT("Weapons num: %d, kills num %i"), weaponsNum, killsNum);
  UE_LOG(LogBasedGeometry, Warning, TEXT("Health: %.f"), health);
  UE_LOG(LogBasedGeometry, Warning, TEXT("isDead: %d"), isDead);
  UE_LOG(LogBasedGeometry, Warning, TEXT("HasWeapon: %d"), static_cast<int>(hasWeapon));
}

void ABaseGeometryActor::printStringType() {
  FString name = "John Connor";
  UE_LOG(LogBasedGeometry, Display, TEXT("Name: %s"), *name);

  FString weaponsNumStr = "Weapons num = " + FString::FromInt(weaponsNum);
  FString healthStr = "Healths = " + FString::SanitizeFloat(health);
  FString isDeadStr = "Is dead = " + FString(isDead ? "true" : "false");

  FString stat = FString::Printf(TEXT(" \n == All Stat == \n %s \n %s \n %s "), *weaponsNumStr, *healthStr, *isDeadStr);
  UE_LOG(LogBasedGeometry, Warning, TEXT("%s"), *stat);

  GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, name);
  GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, stat, true, FVector2D(1.5f, 1.5f));
}

