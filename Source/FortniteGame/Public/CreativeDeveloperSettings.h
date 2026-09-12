#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "CreativeDeveloperSettings.generated.h"

class UObject;

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class UCreativeDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> PlaysetThumbnailEditorStage;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> ValidPermissionTags;
    
    UCreativeDeveloperSettings();
};

