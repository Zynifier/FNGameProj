#pragma once
#include "CoreMinimal.h"
#include "FortPresenceSocialStatus.generated.h"

USTRUCT(BlueprintType)
struct FFortPresenceSocialStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<int32> AttendingRTIds;
    
    FORTNITEGAME_API FFortPresenceSocialStatus();
};
