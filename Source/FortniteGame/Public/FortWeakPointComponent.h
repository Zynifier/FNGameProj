#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "Chaos/ChaosEngineInterface.h"
#include "Components/SceneComponent.h"
#include "FortWeakPointHitDelegate.h"
#include "GameplayTagContainer.h"
#include "FortWeakPointComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortWeakPointComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortWeakPointHit OnWeakpointHit;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPhysicalSurface> PrimarySurfaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseComplexForWeakSpots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWeakPointsEnabled;
    
public:
    UFortWeakPointComponent();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_HandleOwnerDamaged(FGameplayTag MatchingTag, const FGameplayEventData Payload);
    
    UFUNCTION(BlueprintCallable)
    void SetWeakPointsEnabled(bool bEnabled);
    
};
