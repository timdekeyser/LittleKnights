// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LK_BaseCharacter.h"
#include "LK_PlayerCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;

UCLASS()
class LITTLEKNIGHTS_API ALK_PlayerCharacter : public ALK_BaseCharacter
{
	GENERATED_BODY()

public:
	ALK_PlayerCharacter();

private:

	UPROPERTY(VisibleAnywhere, Category = "Camera")
	TObjectPtr<USpringArmComponent> CameraBoom;

	UPROPERTY(VisibleAnywhere, Category = "Camera")
	TObjectPtr<UCameraComponent> FollowCamera;

	
};
