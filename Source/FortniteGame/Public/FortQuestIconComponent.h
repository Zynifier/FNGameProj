#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "TInteractionType.h"
#include "FortMapIconDefinition.h"
#include "FortQuestIconComponent.generated.h"

class AFortPlayerController;
class IFortInteractInterface;
class UFortInteractInterface;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortQuestIconComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bControlVisibilityFromOwnerQuestObjectiveState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInteractiveStateRequiredForVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<TInteractionType> ExplicitInteractionTypeToTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMapIconDefinition MapIconData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IFortInteractInterface> CachedOwnerInteractInterface;
    
public:
    UFortQuestIconComponent();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOwnerCustomUpdateObjective(AFortPlayerController* PlayerController, int32 AchievedCount, int32 RequiredCount);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerQuestNotReady(AFortPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerQuestReady(AFortPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void PerformVisibilityDistanceCheck();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIcon(UObject* MiniMapIcon);
    
    UFUNCTION(BlueprintCallable)
    void SetIconLocationOffset(const FVector& LocationOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetIconScale(const FVector2D& IconScale);
    
    UFUNCTION(BlueprintCallable)
    void SetIconVisibilityOnMap(const bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetIconVisibilityOnMiniMap(const bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetViewDistanceRadius(const float ViewDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibility(const bool bVisible);
    
};
