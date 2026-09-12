#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_CenterSafeZonesOnAircraft.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_CenterSafeZonesOnAircraft : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScalableFloat> SafeZoneIndicesToCenter;
    
public:
    AFortAthenaMutator_CenterSafeZonesOnAircraft();
    
};
