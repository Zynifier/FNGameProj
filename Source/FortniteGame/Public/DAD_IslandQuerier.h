#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnWellKnownIslandsUpdatedDelegate.h"
#include "DAD_IslandQuerier.generated.h"

class UDAD_WellKnownIslands;

UCLASS(Blueprintable, Config=Game)
class FORTNITEGAME_API UDAD_IslandQuerier : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWellKnownIslandsUpdated OnWellKnownIslandsUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDAD_WellKnownIslands* WellKnownIslands;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResolveMetrics;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateMetricsInterval;
    
public:
    UDAD_IslandQuerier();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetIslandCodeByWellKnownName(const FString& WellKnownIslandName) const;
    
};
