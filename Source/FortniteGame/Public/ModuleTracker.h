#pragma once
#include "CoreMinimal.h"
#include "ModuleTracker.generated.h"

USTRUCT(BlueprintType)
struct FModuleTracker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ContentTrackerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBeInstalled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasAttemptedActivation;
    
    FORTNITEGAME_API FModuleTracker();
};
