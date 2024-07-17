// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
//Memo : #include "Structures/MU_Structures.h"

//Ue5
#include "CoreMinimal.h"

//MU
#include "Structures/MU_Enumertateurs.h"

//Parent
#include "MU_Structures.generated.h"

////////////////////////////////
// Game Instance Joueurs
////////////////////////////////

USTRUCT(Blueprintable)
struct FMU_Joueur_Info 
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString SteamId;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString SteamNom;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 Niveau;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 Xp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 Argent;	
};

USTRUCT(Blueprintable)
struct FTest
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString Texte;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 Chiffre;	

};

USTRUCT(Blueprintable)
struct FCaserne
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EMU_Caserne_Type Type;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 Id;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString Nom;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector Position;
};



///////