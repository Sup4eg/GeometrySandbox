// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGeometryActor.h"
#include "Engine/Engine.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "TimerManager.h"
#include "Components/StaticMeshComponent.h"

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

  SetColor(GeometryData.Color);
  GetWorldTimerManager().SetTimer(TimerHandle, this, &ABaseGeometryActor::OnTimerFired, GeometryData.TimerRate, true);
}

void ABaseGeometryActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
  UE_LOG(LogBasedGeometry, Error, TEXT("Actor is dead %s"), *GetName());
  Super::EndPlay(EndPlayReason);
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
	if (GetWorld()) {
	  float Time = GetWorld()->GetTimeSeconds();
	  CurrentLocation.Z = InitialLocation.Z + GeometryData.Amplitude * FMath::Sin(GeometryData.Frequency * Time);
	  SetActorLocation(CurrentLocation);
	}
	break;
  }
  case EMovementType::Static: break;
  default: break;
  }
}

void ABaseGeometryActor::SetColor(const FLinearColor& Color)
{
  if (!BaseMesh) return;
  UMaterialInstanceDynamic* DynMaterial = BaseMesh->CreateAndSetMaterialInstanceDynamic(0);
  if (DynMaterial) {
	DynMaterial->SetVectorParameterValue("Color", Color);
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

  if (GEngine) {
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, name);
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, stat, true, FVector2D(1.5f, 1.5f));
  }
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

void ABaseGeometryActor::OnTimerFired()
{
  if (++TimerCount <= MaxTimerCount) {
	const FLinearColor NewColor = FLinearColor::MakeRandomColor();
	UE_LOG(LogBasedGeometry, Display, TEXT("TimerCount: %i, Color to set up: %s"), TimerCount, *NewColor.ToString());
	SetColor(NewColor);
	OnColorChanged.Broadcast(NewColor, GetName());
  }
  else {
	UE_LOG(LogBasedGeometry, Warning, TEXT("Timer has been stoppped!"));
	GetWorldTimerManager().ClearTimer(TimerHandle);
	OnTimerFinished.Broadcast(this);
  }
}

FString ABaseGeometryActor::toStringGeometryData() const
{

  FString GeometryDataStr = FString::Printf(TEXT(" \n == All Fields == \n Amplitude : %.f \n Frequency : %.f \n MoveType: %s \n Color: %s \n TimerRate: %.f"),
	GeometryData.Amplitude, GeometryData.Frequency, *UEnum::GetDisplayValueAsText(GeometryData.MoveType).ToString(), *GeometryData.Color.ToString(), GeometryData.TimerRate);

  return GeometryDataStr;
}
