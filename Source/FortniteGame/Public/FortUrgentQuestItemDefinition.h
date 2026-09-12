#pragma once
#include "CoreMinimal.h"
#include "FortQuestItemDefinition.h"
#include "UrgentQuestData.h"
#include "FortUrgentQuestItemDefinition.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortUrgentQuestItemDefinition : public UFortQuestItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUrgentQuestData UrgentQuestData;
    
public:
    UFortUrgentQuestItemDefinition(const FObjectInitializer& ObjectInitializer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUrgentQuestData GetUrgentQuestData() const;
    
};
