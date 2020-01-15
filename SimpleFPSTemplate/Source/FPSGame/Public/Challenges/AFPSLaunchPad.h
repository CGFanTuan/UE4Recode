// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AFPSLaunchPad.generated.h"


class UStaticMeshComponent;
class UBoxComponent;
class UArrowComponent;

UCLASS()
class FPSGAME_API AAFPSLaunchPad : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AAFPSLaunchPad();

protected:

	UPROPERTY(VisibleAnywhere, Category = "Components")
		UStaticMeshComponent* MeshComp;

	UPROPERTY(VisibleAnywhere, Category = "Components")
		UBoxComponent* OverlapComp;

	UPROPERTY(VisibleAnywhere, Category = "Components")
		UArrowComponent* ArrowPlane;

	// Marked with ufunction to bind to overlap event
	UFUNCTION()
		void OverlapLaunchPad(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	/*
	Total impulse added to the character on overlap
	Marked 'EditInstanceOnly' to allow in-level editing of this property per instance.
	*/
	UPROPERTY(EditInstanceOnly, Category = "LaunchPad")
		float LaunchStrength;

	/*
	Angle add on top of actor rotation to launch the character.
	Marked 'EditInstanceOnly' to allow in-level editing of this property per instance.
	*/
	UPROPERTY(EditDefaultsOnly, Category = "LaunchPad")
		float LaunchPitchAngle;

	/*Effect to play when activating launch pad*/
	UPROPERTY(EditDefaultsOnly, Category = "LauchPad")
		UParticleSystem* ActivateLaunchPadEffect;

};
