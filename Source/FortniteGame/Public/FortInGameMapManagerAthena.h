#pragma once
#include "CoreMinimal.h"
#include "FortInGameMapManager.h"
#include "Engine/EngineTypes.h"
#include "FortInGameMapManagerAthena.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;

class AActor;
class AFortPlayerControllerZone;

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API AFortInGameMapManagerAthena : public AFortInGameMapManager {
    GENERATED_BODY()
public:
private:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawMapLocationsIfFogged: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawSpecialActorIconsIfFogged: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawSquadPinsIfFogged: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawMapIndicatorsIfFogged: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawEliminationsIfFogged: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MapMaskMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MapMaskMaterialMID;
    
public:
    AFortInGameMapManagerAthena();
    UFUNCTION(BlueprintCallable)
    void HandleLocalPlayerStateSet();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePlayerTeamIndexChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnAthenaPlayerControllerEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginSkydivingFromBus(AFortPlayerControllerZone* FortPC);
    
    UFUNCTION(BlueprintCallable)
    void OnEndSkydivingFromBus(AFortPlayerControllerZone* FortPC);
    
};

