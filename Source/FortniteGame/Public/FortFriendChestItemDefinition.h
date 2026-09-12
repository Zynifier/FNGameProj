#pragma once
#include "CoreMinimal.h"
#include "FortAccountItemDefinition.h"
#include "EFriendChestTimePeriod.h"
#include "FortFriendChestItemDefinition.generated.h"

class UFriendChestInstancedDetail;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortFriendChestItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFriendChestInstancedDetail* InstancedDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFriendChestTimePeriod TimePeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GrantsPerPeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GrantsPerSeason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CatchupBankSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowSeasonCatchup;
    
    UFortFriendChestItemDefinition(const FObjectInitializer& ObjectInitializer);
    
};
