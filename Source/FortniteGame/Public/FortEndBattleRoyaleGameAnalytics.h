#pragma once
#include "CoreMinimal.h"
#include "FortEndBattleRoyaleGameAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FFortEndBattleRoyaleGameAnalytics {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CallStack;
    
    FORTNITEGAME_API FFortEndBattleRoyaleGameAnalytics();
};
