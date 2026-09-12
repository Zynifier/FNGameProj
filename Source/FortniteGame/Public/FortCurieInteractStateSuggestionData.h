#pragma once
#include "CoreMinimal.h"
#include "FortCurieStateSuggestionData.h"
#include "FortCurieInteractStateSuggestionData.generated.h"

USTRUCT(BlueprintType)
struct FFortCurieInteractStateSuggestionData : public FFortCurieStateSuggestionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysSuggest;
    
    FORTNITEGAME_API FFortCurieInteractStateSuggestionData();
};
