// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CPP_EntityComp_Base.h"
#include "CPP_E_C_Health.generated.h"

/**
 * 
 */
UCLASS()
class BL_UE_API UCPP_E_C_Health : public UCPP_EntityComp_Base
{
	GENERATED_BODY()

public:
	//Variables
#pragma region Health Variables
	//Current Health
	UPROPERTY(blueprintReadWrite)
	float CurrentHealth;

	//Max Health
	UPROPERTY(blueprintReadWrite)
	float MaxHealth;

	//Regen Health
	UPROPERTY(blueprintReadWrite)
	float RegenHealth;

	//Time before Heal starts
	UPROPERTY(blueprintReadWrite)
	float TimeBeforeHeal;
#pragma endregion
	
	// Functions
#pragma region Getter Functions
	UFUNCTION(BlueprintNativeEvent, Category="GetHealthValue")
	float GetCurrentHealthValue() const;

	UFUNCTION(BlueprintNativeEvent, Category="GetHealthValue")
	float GetMaxHealthValue() const;

	UFUNCTION(BlueprintNativeEvent, Category="GetHealthValue")
	float GetRegenHealthValue() const;

	UFUNCTION(BlueprintNativeEvent, Category="GetHealthValue")
	float GetTimeBeforeHealValue() const;
#pragma endregion
	UFUNCTION(BlueprintNativeEvent, Category="SetHealthValue")
	void SetHealthValue(float NewHealthValue);
};
