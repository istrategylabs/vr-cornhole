// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "ProjectVersionBlueprint.generated.h"

/**
 * 
 */
UCLASS()
class VR_CORNHOLE_API UProjectVersionBlueprint : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintPure, meta = (DisplayName = "Project Version", CompactNodeTitle = "ProjectVersion"), Category = "System Information")
		static FString GetProjectVersion();
	
	
};
