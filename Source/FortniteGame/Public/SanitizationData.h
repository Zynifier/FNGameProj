#pragma once
#include "CoreMinimal.h"
#include "SanitizationData.generated.h"

class UAsyncTaskQueue;

USTRUCT(BlueprintType)
struct FSanitizationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAsyncTaskQueue* TaskQueue;
    
    FORTNITEGAME_API FSanitizationData();
};
