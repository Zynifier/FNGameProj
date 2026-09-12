#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortAthenaMutator_WeaponSettings.h"
#include "FortAthenaMutator_CreativeWeaponSettings.generated.h"

class AFortVolume;
class APlayerState;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_CreativeWeaponSettings : public AFortAthenaMutator_WeaponSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryAssetId EmptyHandsWeaponAssetId;
    
public:
    AFortAthenaMutator_CreativeWeaponSettings();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerEnterVolume(APlayerState* Client, AFortVolume* Volume);
    
};
