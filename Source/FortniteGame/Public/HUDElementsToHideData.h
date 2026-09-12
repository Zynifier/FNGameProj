#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhase.h"
#include "GameplayTagContainer.h"
#include "HUDElementsToHideData.generated.h"

USTRUCT(BlueprintType)
struct FHUDElementsToHideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaGamePhase StartHidingGamePhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartHidingSafeZonePhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaGamePhase StopHidingGamePhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StopHidingSafeZonePhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer HUDElementsToHide;
    
    FORTNITEGAME_API FHUDElementsToHideData();
};
