#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "FortGameplayAbility.h"
#include "FortGameplayAbility_ZiplineSmashBase.generated.h"

class AActor;
class UClass;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortGameplayAbility_ZiplineSmashBase : public UFortGameplayAbility {
    GENERATED_BODY()
public:
    UFortGameplayAbility_ZiplineSmashBase();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BeginAsyncBreakNearbyStructuresOverlap(const FVector BoxPos, const FVector BoxExtent, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, UClass* ActorClassFilter, const TArray<AActor*>& ActorsToIgnore);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndAsyncBreakNearbyStructuresOverlap(const TArray<AActor*>& OverlapActors);
    
};
