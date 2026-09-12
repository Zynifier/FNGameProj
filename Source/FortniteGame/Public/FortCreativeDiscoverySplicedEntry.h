#pragma once
#include "CoreMinimal.h"
#include "EFortCreativeDiscoveryDeterminism.h"
#include "FortCreativeDiscoverySplicedEntry.generated.h"

USTRUCT(BlueprintType)
struct FFortCreativeDiscoverySplicedEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EntryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EntryIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LinkCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCreativeDiscoveryDeterminism VisibilitySelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisibilityChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPushDownExistingEntry;
    
    FORTNITEGAME_API FFortCreativeDiscoverySplicedEntry();
};
