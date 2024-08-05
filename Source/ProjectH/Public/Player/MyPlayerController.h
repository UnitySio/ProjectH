// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

class AUser;

UCLASS()
class PROJECTH_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AMyPlayerController();

	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

private:
	UPROPERTY(EditAnywhere, Category = Input)
	TObjectPtr<class UInputMappingContext> InputContext;

	UPROPERTY(EditAnywhere, Category = Input)
	TObjectPtr<class UInputAction> Move;

	UPROPERTY(EditAnywhere, Category = Input)
	TObjectPtr<class UInputAction> Look;


	UPROPERTY()
	TObjectPtr<AUser> User;

	UFUNCTION()
	void MoveFunc(const FInputActionValue& value);

	UFUNCTION()
	void LookFunc(const FInputActionValue& value);
	
};
