#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "EContextRequirementMatchPolicy.h"
#include "FortConversationContextRequirement.h"
#include "ContextualMessageCandidate.generated.h"

USTRUCT(BlueprintType)
struct FContextualMessageCandidate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EContextRequirementMatchPolicy RequirementMatchPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortConversationContextRequirement> ContextRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Weight;
    
    FORTNITEGAME_API FContextualMessageCandidate();
};
