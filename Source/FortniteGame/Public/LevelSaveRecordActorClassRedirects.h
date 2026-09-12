#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/AssetManagerSettings.h"
#include "LevelSaveRecordActorClassRedirects.generated.h"

UCLASS(Blueprintable, Config=Game)
class FORTNITEGAME_API ULevelSaveRecordActorClassRedirects : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAssetManagerRedirect> LevelSaveRecordActorClassRedirects;
    
public:
    ULevelSaveRecordActorClassRedirects();
    
};
