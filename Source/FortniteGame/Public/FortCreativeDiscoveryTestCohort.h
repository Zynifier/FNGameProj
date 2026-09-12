#pragma once
#include "CoreMinimal.h"
#include "EFortCreativeDiscoveryDeterminism.h"
#include "FortCreativeDiscoveryContentPanel.h"
#include "FortCreativeDiscoveryTestCohort.generated.h"

USTRUCT(BlueprintType)
struct FFortCreativeDiscoveryTestCohort {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TestName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCreativeDiscoveryDeterminism CohortSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelectionChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCreativeDiscoveryContentPanel> ContentPanels;
    
    FORTNITEGAME_API FFortCreativeDiscoveryTestCohort();
};
