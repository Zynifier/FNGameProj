#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortConversationTaskNode_Service.h"
#include "GameplayTagContainer.h"
#include "ESupplyDropSpawnLocationPolicy.h"
#include "FortConversationTaskNode_SupplyDrop.generated.h"

class UFortSupplyDropInfo;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortConversationTaskNode_SupplyDrop : public UFortConversationTaskNode_Service {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortSupplyDropInfo> SupplyDropInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SupplyDropCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ProcessPendingSupplyDropInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat GuaranteedCloseRangeSupplyDropCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ServiceUsedTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat GuaranteedCloseRangeRadiusAroundNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESupplyDropSpawnLocationPolicy SupplyDropLocationPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RadiusAroundNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SpawnInPreviousSafeAreaChanceZeroToOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLimitedStock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat LimitedStockCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CustomFeedMessageTag;
    
public:
    UFortConversationTaskNode_SupplyDrop();
    
};
