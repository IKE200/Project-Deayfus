// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CameraPawn.generated.h"

UCLASS()
class PROJECTDEAYFUS_API ACameraPawn : public APawn
{
	GENERATED_BODY()

private:

public:
	// Sets default values for this pawn's properties
	ACameraPawn();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MoveCamBorderPercentage = 0.05f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float CamMaxMoveSpeed = 1000;

	UFUNCTION(BlueprintCallable)
		void MoveRight(float Speed, float DeltaTime);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};
