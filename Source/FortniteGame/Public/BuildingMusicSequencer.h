#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BuildingTrapFloor.h"
#include "BuildingMusicSequencer.generated.h"

class AController;

UCLASS(Blueprintable)
class ABuildingMusicSequencer : public ABuildingTrapFloor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AController* TriggerInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AController* CachedTriggerInstigator;
    
public:
    ABuildingMusicSequencer();
protected:
    UFUNCTION(BlueprintCallable)
    void ResetHitActors();
    
    UFUNCTION(BlueprintCallable)
    void HitActorsAsync(const FTransform& Transform, const FBoxSphereBounds& Bounds);
    
};

