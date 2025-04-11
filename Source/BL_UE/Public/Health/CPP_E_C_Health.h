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
	UFUNCTION(BlueprintCallable, Category="Health|GetHealthValue")
	float GetCurrentHealthValue() const;

	UFUNCTION(BlueprintCallable, Category="Health|GetHealthValue")
	float GetMaxHealthValue() const;

	UFUNCTION(BlueprintCallable, Category="Health|GetHealthValue")
	float GetRegenHealthValue() const;

	UFUNCTION(BlueprintCallable, Category="Health|GetHealthValue")
	float GetTimeBeforeHealValue() const;
#pragma endregion
	
#pragma region Setter Functions
	UFUNCTION(BlueprintCallable, Category="Health|SetHealthValue")
    	void SetHealthValue(float NewHealthValue);
	
	UFUNCTION(BlueprintCallable, Category="Health|SetHealthValue")
		void SetMaxHealthValue(float NewMaxHealthValue);
	
	UFUNCTION(BlueprintCallable, Category="Health|SetHealthValue")
		void SetRegenHealthValue(float NewRegenHealthValue);

	UFUNCTION(BlueprintCallable, Category="Health|SetHealthValue")
		void SetTimeBeforeHealValue(float NewTimeBeforeHealValue);
#pragma endregion
	

#pragma region Base Functions
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="Health|HealthFunctions")
	void Heal(float HealAmount);
	

	#pragma endregion

#pragma region Event Distpatcher
	UDELEGATE(BlueprintAuthorityOnly)
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTakeAnyDMG, float, Damage, AActor*, DamagedActor, AActor*, DamageCauser);
	
	UPROPERTY(BlueprintAssignable, Category = "Test")
	FTakeAnyDMG OnTestDelegate;

#pragma endregion
};
