#pragma once
#include "CoreMinimal.h"
#include "FortPresenceSocialStatus.h"
#include "GameFramework/OnlineReplStructs.h"
#include "SocialStatusSerialized.generated.h"

USTRUCT(BlueprintType)
struct FSocialStatusSerialized {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl LocalUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl OtherUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPresenceSocialStatus SocialStatus;
    
    FORTNITEGAME_API FSocialStatusSerialized();
};
