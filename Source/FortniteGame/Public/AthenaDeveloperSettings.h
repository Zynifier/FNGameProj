#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "AthenaDeveloperSettings.generated.h"

class UObject;

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class FORTNITEGAME_API UAthenaDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> DefaultMissionGen;
    
    UAthenaDeveloperSettings();
};

