// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
//MU
#include "Structures/MU_Structures.h"
#include "MenuOptions/Sauvegardes/MU_GamePlaySave.h"
//Parents
#include "Subsystems/EngineSubsystem.h"
#include "MU_GamePlay.generated.h"

/**
 * 
 */
UCLASS()
class MISSIONURGENCE_API UMU_GamePlay : public UEngineSubsystem
{
	GENERATED_BODY()
	

	// Begin USubsystem
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	// End USubsystem
	virtual void Deinitialize() override;

private:

	//File Name
	FString FileName = "MU_Gameplay";

	class UMU_GamePlaySave* MU_GameplaySaveGame;

	void ChargementGameplayOptions();
	void SauvegardeGameplayOptions();


	//Graphisme Options
	UPROPERTY(VisibleAnywhere, Category = "MU|Options|Gameplay")
		FTest test;

public:

	//Get GameplayConfig
	UFUNCTION(BlueprintPure, Category = "MU|Options|Gameplay")
		void GetGameplayConfig(FTest& GameplayConfig);

	/////////////////////////////
	// Setter
	////////////////////////////

	//Inverser Souris
	UFUNCTION(BlueprintCallable, Category = "MU|Options|Gameplay")
	void SetGameplayConfig(FTest GameplayConfig);


};
