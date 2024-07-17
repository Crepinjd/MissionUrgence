// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

// Memo : #include "Structures/MU_Enumertateurs.h"

#include "CoreMinimal.h"

/////////////////////////////
// HUD Menu Principal 
/////////////////////////////
UENUM(BlueprintType)
enum class EMU_Hud_MenuPrincipal : uint8
{
	PAS_DE_FENETRE			UMETA(DisplayName = "Pas de Fenetre"),
	MENU_PRINCIPAL			UMETA(DisplayName = "Menu Principal"),
	OPTIONS					UMETA(DisplayName = "Menu Option"),
	STEAM_ERREUR			UMETA(DisplayName = "Steam Erreur")
};

/////////////////////////////
// Jeu 
/////////////////////////////

UENUM(BlueprintType)
enum class EMU_Caserne_Type : uint8
{
	GENDARME				UMETA(DisplayName = "Gendarme"),
	POMPIER					UMETA(DisplayName = "Pompier"),
	SAMU					UMETA(DisplayName = "Samu"),
	AUTOROUTE				UMETA(DisplayName = "Autoroute")
};