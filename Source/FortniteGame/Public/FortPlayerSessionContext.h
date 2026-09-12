#pragma once
#include "CoreMinimal.h"
#include "FortLocalPlayerSubsystem.h"
#include "GameplayTagContainer.h"
#include "FortPlayerSessionContext.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortPlayerSessionContext : public UFortLocalPlayerSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> DiscoveredPoiTags;
    
public:
    UFortPlayerSessionContext();
    
};
