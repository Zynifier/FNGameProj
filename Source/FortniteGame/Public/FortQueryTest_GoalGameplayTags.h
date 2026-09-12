#pragma once
#include "CoreMinimal.h"
#include "FortQueryTest_GoalBase.h"
#include "GameplayTagContainer.h"
#include "FortQueryTest_GoalGameplayTags.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortQueryTest_GoalGameplayTags : public UFortQueryTest_GoalBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldLookupQueryByTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery TagQueryToMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag QueryLookupTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldPassWhenQueryNotFound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireAllProvidedTagQueriesPass;
    
public:
    UFortQueryTest_GoalGameplayTags();
    
};
