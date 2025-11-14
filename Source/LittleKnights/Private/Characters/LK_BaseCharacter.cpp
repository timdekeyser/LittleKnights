// Fill out your copyright notice in the Description page of Project Settings.


#include "LittleKnights/Public/Characters/LK_BaseCharacter.h"


ALK_BaseCharacter::ALK_BaseCharacter()
{
	PrimaryActorTick.bCanEverTick = false;

	// Used to triggered hit boxes using anim notify 
	GetMesh()->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
}



