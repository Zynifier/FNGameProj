#pragma once
#include "CoreMinimal.h"
#include "ReplicatedVkResolvedModule.generated.h"

USTRUCT(BlueprintType)
struct FReplicatedVkResolvedModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBeInstalled;
    
    FORTNITEGAME_API FReplicatedVkResolvedModule();
};
