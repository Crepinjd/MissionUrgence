// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
//MU
#include "Structures/MU_Structures.h"
//Parents
#include "GameFramework/SaveGame.h"
#include "MU_GamePlaySave.generated.h"

/**
 * 
 */
UCLASS()
class MISSIONURGENCE_API UMU_GamePlaySave : public USaveGame
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FTest test;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FTest test2;

};
