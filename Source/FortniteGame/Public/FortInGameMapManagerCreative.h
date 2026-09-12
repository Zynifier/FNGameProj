#pragma once
#include "CoreMinimal.h"
#include "FortInGameMapManagerAthena.h"
#include "FortInGameMapManagerCreative.generated.h"

class UMaterialInterface;

class AFortMinigame;
class AFortVolume;

UCLASS(Abstract, Blueprintable)
class AFortInGameMapManagerCreative : public AFortInGameMapManagerAthena {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* HeatmapEnabledMapMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* HeatmapDisabledMapMaterial;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CreativeMapMaterial;
    
public:
    AFortInGameMapManagerCreative();
protected:
    UFUNCTION(BlueprintCallable)
    void SetCreativeMapMaterial(UMaterialInterface* NewCreativeMapMaterial);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayModeChanged(AFortMinigame* Minigame, bool bIsInPlayMode);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetCurrentVolume(AFortVolume* InVolume);
    
};

