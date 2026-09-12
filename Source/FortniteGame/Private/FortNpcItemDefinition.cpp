#include "FortNpcItemDefinition.h"

TArray<TSoftObjectPtr<UFortChallengeBundleItemDefinition>> UFortNpcItemDefinition::GetChallengeBundles() {
    return TArray<TSoftObjectPtr<UFortChallengeBundleItemDefinition>>();
}

UFortNpcItemDefinition::UFortNpcItemDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}
