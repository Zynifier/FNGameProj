#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "BuildingTimeOfDayLights.h"
#include "MarkedActorDisplayInfo.h"
#include "BuildingProp.generated.h"

class AActor;
class AController;

UCLASS(Blueprintable)
class FORTNITEGAME_API ABuildingProp : public ABuildingTimeOfDayLights {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDoNotBlockMarkerTraceWhenOverlappingPlayer: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AnalyticsTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSuppressSimpleInteractionWidgetForTouch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanBeMarked: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBlockMarking: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMarkedActorDisplayInfo MarkerDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MarkerPositionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bKeepWhenUnderwater: 1;
    
public:
    ABuildingProp();
protected:
    UFUNCTION(BlueprintCallable)
    bool DestroyIfUnderwater(float MinSubmergedPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_GetEyesViewpoint(FVector& OutLocation, FRotator& OutRotation) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float BlueprintModifyIncomingDamage(float Damage, const FGameplayTagContainer& InTags, const FGameplayEffectContextHandle& EffectContext, AController* EventInstigator, AActor* DamageCauser);
    
};

