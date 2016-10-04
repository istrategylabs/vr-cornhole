// Fill out your copyright notice in the Description page of Project Settings.

#include "VR_Cornhole.h"
#include "ProjectVersionBlueprint.h"


FString UProjectVersionBlueprint::GetProjectVersion() {

	FString ProjectVersion;
	GConfig->GetString(
		TEXT("/Script/EngineSettings.GeneralProjectSettings"),
		TEXT("ProjectVersion"),
		ProjectVersion,
		GGameIni
	);
	return ProjectVersion;

}