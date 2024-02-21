// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseGeometryActor.generated.h"

UCLASS()
class GEOMETRYSANDBOX_API ABaseGeometryActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseGeometryActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Weapon")
	int32 weaponsNum = 4;
	
	UPROPERTY(EditDefaultsOnly, Category = "Stat")
	int32 killsNum = 7;

	UPROPERTY(EditInstanceOnly, Category = "Health")
	float health = 34.344234;

	UPROPERTY(EditAnywhere, Category = "Health")
	bool isDead = false;

	UPROPERTY(VisibleAnywhere, Category = "Weapon")
	bool hasWeapon = true;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
  void printTypes();

  void printStringType();
};
