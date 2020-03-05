// articy Software GmbH & Co. KG
/** This code file was generated by ArticyImporter. Changes to this file will get lost once the code is regenerated. */

#pragma once

#include "CoreUObject.h"
#include "PluginshowcaseInterfaces.generated.h"


/** UNINTERFACE generated from Articy Basic Character Properties Feature */
UINTERFACE(MinimalAPI, BlueprintType, Category="Pluginshowcase Feature Interfaces", meta=(CannotImplementInterfaceInBlueprint))
class UPluginshowcaseObjectWithDefaultBasicCharacterFeature8Feature : public UInterface { GENERATED_BODY() };
class IPluginshowcaseObjectWithDefaultBasicCharacterFeature8Feature
{
	GENERATED_BODY()
	
public:
	
	UFUNCTION(BlueprintCallable)
	virtual class UPluginshowcaseDefaultBasicCharacterFeature8Feature* GetFeatureDefaultBasicCharacterFeature8() const
	{
		return nullptr;
	}
};

/** UNINTERFACE generated from Articy Extended Character Properties Feature */
UINTERFACE(MinimalAPI, BlueprintType, Category="Pluginshowcase Feature Interfaces", meta=(CannotImplementInterfaceInBlueprint))
class UPluginshowcaseObjectWithDefaultExtendedCharacterFeature2Feature : public UInterface { GENERATED_BODY() };
class IPluginshowcaseObjectWithDefaultExtendedCharacterFeature2Feature
{
	GENERATED_BODY()
	
public:
	
	UFUNCTION(BlueprintCallable)
	virtual class UPluginshowcaseDefaultExtendedCharacterFeature2Feature* GetFeatureDefaultExtendedCharacterFeature2() const
	{
		return nullptr;
	}
};

/** UNINTERFACE generated from Articy NPCDialogueFeature Feature */
UINTERFACE(MinimalAPI, BlueprintType, Category="Pluginshowcase Feature Interfaces", meta=(CannotImplementInterfaceInBlueprint))
class UPluginshowcaseObjectWithNPCDialogueFeatureFeature : public UInterface { GENERATED_BODY() };
class IPluginshowcaseObjectWithNPCDialogueFeatureFeature
{
	GENERATED_BODY()
	
public:
	
	UFUNCTION(BlueprintCallable)
	virtual class UPluginshowcaseNPCDialogueFeatureFeature* GetFeatureNPCDialogueFeature() const
	{
		return nullptr;
	}
};
