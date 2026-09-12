#pragma once
#include "CoreMinimal.h"
#include "FortConversationTaskNode_Service.h"
#include "GameplayTagContainer.h"
#include "FindActorByClassData.h"
#include "FortConversationTaskNode_FindActorByClass.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortConversationTaskNode_FindActorByClass : public UFortConversationTaskNode_Service {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFindActorByClassData> FilterDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AnalyticsTag;
    
public:
    UFortConversationTaskNode_FindActorByClass();
    
};
