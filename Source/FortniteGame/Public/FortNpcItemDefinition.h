#pragma once
#include "CoreMinimal.h"
#include "FortWorldItemDefinition.h"
#include "FortNpcItemDefinition.generated.h"

class UFortChallengeBundleItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortNpcItemDefinition : public UFortWorldItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFortChallengeBundleItemDefinition>> ChallengeBundles;
    
public:
    UFortNpcItemDefinition(const FObjectInitializer& ObjectInitializer);
    
    UFUNCTION(BlueprintCallable)
    TArray<TSoftObjectPtr<UFortChallengeBundleItemDefinition>> GetChallengeBundles();
    
};
