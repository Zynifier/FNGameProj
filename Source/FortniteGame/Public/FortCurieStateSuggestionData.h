#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortCurieStateSuggestionData.generated.h"

USTRUCT(BlueprintType)
struct FFortCurieStateSuggestionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StateTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery AttachedStatesQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeStateParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDiscardOnResolve;
    
    FORTNITEGAME_API FFortCurieStateSuggestionData();
};
