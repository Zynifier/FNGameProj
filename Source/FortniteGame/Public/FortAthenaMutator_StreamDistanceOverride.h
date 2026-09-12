#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "EAthenaGamePhase.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_StreamDistanceOverride.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_StreamDistanceOverride : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat StreamDistanceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyScalability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyAfterWarmup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceOverride;
    
public:
    AFortAthenaMutator_StreamDistanceOverride();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleGamePhaseChanged(EAthenaGamePhase NewPhase);
    
};
