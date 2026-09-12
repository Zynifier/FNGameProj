#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "EFortPartyMemberReadyCheckStatus.h"
#include "EGameReadiness.h"
#include "PartyMemberLobbyState.generated.h"

USTRUCT(BlueprintType)
struct FPartyMemberLobbyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortPartyMemberReadyCheckStatus InGameReadyCheckStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameReadiness GameReadiness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonInputType ReadyInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonInputType CurrentInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HiddenMatchmakingDelayMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasPreloadedAthena;
    
    FORTNITEGAME_API FPartyMemberLobbyState();
};
