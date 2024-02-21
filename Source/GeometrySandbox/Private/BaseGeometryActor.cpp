// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGeometryActor.h"
#include "Engine/Engine.h"

DEFINE_LOG_CATEGORY_STATIC(LogBasedGeometry, All, All)

// Sets default values
ABaseGeometryActor::ABaseGeometryActor()
{
  // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
  PrimaryActorTick.bCanEverTick = true;

  BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>("BaseMesh");
  SetRootComponent(BaseMesh);
}

// Called when the game starts or when spawned
void ABaseGeometryActor::BeginPlay()
{
  Super::BeginPlay();

  InitialLocation = GetActorLocation();

  //PrintTransform();
  //PrintStringType();
  //PrintTypes();


}

// Called every frame
void ABaseGeometryActor::Tick(float DeltaTime)
{
  Super::Tick(DeltaTime);
  HandleMovement();
}



void ABaseGeometryActor::HandleMovement()
{
  switch (GeometryData.MoveType) {
  case EMovementType::Sin:
  {
	FVector CurrentLocation = GetActorLocation();
	float Time = GetWorld()->GetTimeSeconds();
	CurrentLocation.Z = InitialLocation.Z + GeometryData.Amplitude * FMath::Sin(GeometryData.Frequency * Time);
	SetActorLocation(CurrentLocation);
	break;
  }
  case EMovementType::Static: break;
  default: break;
  }
}

void ABaseGeometryActor::PrintTypes()
{
  UE_LOG(LogBasedGeometry, Warning, TEXT("Actor name %s"), *GetName());
  UE_LOG(LogBasedGeometry, Warning, TEXT("Weapons num: %d, kills num %i"), WeaponsNum, KillsNum);
  UE_LOG(LogBasedGeometry, Warning, TEXT("Health: %.f"), Health);
  UE_LOG(LogBasedGeometry, Warning, TEXT("isDead: %d"), IsDead);
  UE_LOG(LogBasedGeometry, Warning, TEXT("HasWeapon: %d"), static_cast<int>(HasWeapon));
}

void ABaseGeometryActor::PrintStringType() {
  FString name = "John Connor";
  UE_LOG(LogBasedGeometry, Display, TEXT("Name: %s"), *name);

  FString weaponsNumStr = "Weapons num = " + FString::FromInt(WeaponsNum);
  FString healthStr = "Healths = " + FString::SanitizeFloat(Health);
  FString isDeadStr = "Is dead = " + FString(IsDead ? "true" : "false");

  FString stat = FString::Printf(TEXT(" \n == All Stat == \n %s \n %s \n %s "), *weaponsNumStr, *healthStr, *isDeadStr);
  UE_LOG(LogBasedGeometry, Warning, TEXT("%s"), *stat);

  GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, name);
  GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, stat, true, FVector2D(1.5f, 1.5f));
}

void ABaseGeometryActor::PrintTransform()
{
  FTransform Transform = GetActorTransform();
  FVector Location = Transform.GetLocation();
  FRotator Rotation = Transform.Rotator();
  FVector Scale = Transform.GetScale3D();

  UE_LOG(LogBasedGeometry, Warning, TEXT("Actor name %s"), *GetName());
  UE_LOG(LogBasedGeometry, Warning, TEXT("Transform %s"), *Transform.ToString());
  UE_LOG(LogBasedGeometry, Warning, TEXT("Location %s"), *Location.ToString());
  UE_LOG(LogBasedGeometry, Warning, TEXT("Rotation %s"), *Rotation.ToString());
  UE_LOG(LogBasedGeometry, Warning, TEXT("Scale %s"), *Scale.ToString());

  UE_LOG(LogBasedGeometry, Error, TEXT("Human transform %s"), *Transform.ToHumanReadableString());
}

