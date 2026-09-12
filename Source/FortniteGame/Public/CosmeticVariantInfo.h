#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CosmeticVariantInfo.generated.h"

USTRUCT(BlueprintType)
struct FCosmeticVariantInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VariantChannelTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ActiveVariantTag;
    
    FORTNITEGAME_API FCosmeticVariantInfo();

    // Needed as a TMap key (UAthenaCosmeticItemDefinition::ReactivePreviewDrivers)
    bool operator==(const FCosmeticVariantInfo& Other) const {
        return VariantChannelTag == Other.VariantChannelTag && ActiveVariantTag == Other.ActiveVariantTag;
    }

    friend uint32 GetTypeHash(const FCosmeticVariantInfo& Info) {
        return HashCombine(GetTypeHash(Info.VariantChannelTag), GetTypeHash(Info.ActiveVariantTag));
    }
};

