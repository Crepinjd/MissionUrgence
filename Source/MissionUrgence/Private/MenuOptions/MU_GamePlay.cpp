// Fill out your copyright notice in the Description page of Project Settings.


#include "MenuOptions/MU_GamePlay.h"

void UMU_GamePlay::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	MU_GameplaySaveGame = Cast<UMU_GamePlaySave>(UGameplayStatics::CreateSaveGameObject(UMU_GamePlaySave::StaticClass()));
	if (UGameplayStatics::DoesSaveGameExist(FileName, 0))
	{
		ChargementGameplayOptions();
	}
	else
	{
		SauvegardeGameplayOptions();
	}
}

void UMU_GamePlay::Deinitialize()
{
	Super::Deinitialize();
}

///////////////////////////////////

void UMU_GamePlay::ChargementGameplayOptions()
{
	MU_GameplaySaveGame = Cast<UMU_GamePlaySave>(UGameplayStatics::LoadGameFromSlot(FileName, 0));
	test = MU_GameplaySaveGame->test;

	UE_LOG(LogTemp, Warning, TEXT("|ZOD_GamePlay : GamePlay Options Charger !"));
}

void UMU_GamePlay::SauvegardeGameplayOptions()
{
	MU_GameplaySaveGame = Cast<UMU_GamePlaySave>(UGameplayStatics::CreateSaveGameObject(UMU_GamePlaySave::StaticClass()));
	if (MU_GameplaySaveGame)
	{
		/*
		FTest Test1;
		FTest Test2;

		Test1 = Test2; 

		TArray<FTest> MesTest;
		MesTest.Add(Test1);

		MesTest[0].Chiffre = 1;		
		
		//test.Texte = "BlaBla";
		//MU_GameplaySaveGame->test2 = test;
		
		hjgjhgjhhgbjh
		jhgjhgjhgjhg
		
		*/

		MU_GameplaySaveGame->test = test;
		if (UGameplayStatics::SaveGameToSlot(MU_GameplaySaveGame, FileName, 0))
		{
			UE_LOG(LogTemp, Warning, TEXT("|ZOD_GamePlay : GamePlay Options Sauvegarder"));
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("|ZOD_GamePlay : Erreur de sauvegarde GamePlay Options"));
		}
	}
	UE_LOG(LogTemp, Error, TEXT("|ZOD_GamePlay : Erreur de sauvegarde GamePlay Options"));
}

//////////////////////////////////


void UMU_GamePlay::GetGameplayConfig(FTest& GameplayConfig)
{
	GameplayConfig = test;
}

void UMU_GamePlay::SetGameplayConfig(FTest GameplayConfig)
{
	test = GameplayConfig;
	SauvegardeGameplayOptions();
}
