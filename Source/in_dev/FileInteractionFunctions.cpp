// Fill out your copyright notice in the Description page of Project Settings.


#include "FileInteractionFunctions.h"
#include <Runtime\Core\Public\Misc\Paths.h>
#include <Runtime\Core\Public\HAL\PlatformFileManager.h>
#include <Runtime/Core/Public/HAL/FileManagerGeneric.h>

FString UFileInteractionFunctions::LoadFileToString(FString Filename)
{
	FString directory = FPaths::ProjectContentDir();
	FString result;
	IPlatformFile& file = FPlatformFileManager::Get().GetPlatformFile();

	if (file.CreateDirectory(*directory))
	{
		FString myFile = directory + "/" + Filename;
		FFileHelper::LoadFileToString(result, *myFile);
	}

	return result;
}

TArray<FString> UFileInteractionFunctions::LoadFileToStringArray(FString Filename)
{
	FString directory = FPaths::ProjectContentDir();
	TArray<FString> result;
	IPlatformFile& file = FPlatformFileManager::Get().GetPlatformFile();

	if (file.CreateDirectory(*directory))
	{
		FString myFile = directory + "/" + Filename;
		FFileHelper::LoadFileToStringArray(result, *myFile);
	}

	return result;
}

TArray<FString> UFileInteractionFunctions::LoadFileNamesToStringArray(FString Filename)
{
	FString directory = FPaths::ProjectContentDir();
	TArray<FString> result;
	IPlatformFile& file = FPlatformFileManager::Get().GetPlatformFile();

	if (file.CreateDirectory(*directory))
	{
		FString myFile = directory + "/" + Filename;
		FString fileExt = TEXT(".txt");
		IFileManager::Get().FindFiles(result, *myFile, *fileExt);
	}

	return result;
}
