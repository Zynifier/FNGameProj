#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "InteriorAudioPlayerInfo.h"
#include "OnRoofStateChangedDelegate.h"
#include "OnInteriorStateChangedDelegate.h"
#include "FortInteriorAudioSubsystem.generated.h"

class AFortPlayerController;
class UBuildingStructuralSupportSystem;
class UFortInteriorAudioSettings;

UCLASS(Blueprintable, Config=Game)
class UFortInteriorAudioSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath InteriorAudioSettingsPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortInteriorAudioSettings* Settings;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteriorStateChanged OnInteriorStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRoofStateChanged OnRoofStateChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerController* FPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteriorAudioPlayerInfo Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBuildingStructuralSupportSystem* BuildingGrid;
    
public:
    UFortInteriorAudioSubsystem();
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bNewEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FInteriorAudioPlayerInfo GetPlayerInfo() const;
    
};

