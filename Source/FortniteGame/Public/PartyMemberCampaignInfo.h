#pragma once
#include "CoreMinimal.h"
#include "PartyMemberCampaignInfo.generated.h"

USTRUCT(BlueprintType)
struct FPartyMemberCampaignInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MatchmakingLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ZoneInstanceId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 HomeBaseVersion;
    
    FORTNITEGAME_API FPartyMemberCampaignInfo();
};
