#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "FortMetaTagToPreviewActorMapping.generated.h"

class UObject;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMetaTagToPreviewActorMapping : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftClassPtr<UObject>> MetaTagToPreviewActor;
    
    UFortMetaTagToPreviewActorMapping();
    
};
