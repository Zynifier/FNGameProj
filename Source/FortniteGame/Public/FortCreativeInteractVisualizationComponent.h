#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "FortCreativeInteractVisualizationComponent.generated.h"

class AFortMinigame;
class UCurveFloat;
class UMaterialInterface;
class UNavAreaBase;
class UShapeComponent;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortCreativeInteractVisualizationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UShapeComponent> CollisionComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavAreaBase> CollisionComponentAreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FloatCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* StaticMeshMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ComponentRelativeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionInterval;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float VisualizationDiameterStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float VisualizationDiameterDesired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float InteractRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPendingShow;
    
public:
    UFortCreativeInteractVisualizationComponent();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnCollisionComponentCreated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnUpdateCollision();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnUpdateVisibility();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnVisualMeshComponentCreated();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayModeChanged(AFortMinigame* InMinigame, bool bIsInPlayMode);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetRadius(const float InInteractRadius);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UShapeComponent* GetCollisionComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInteractRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPendingShow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVisualizationDiameterDesired() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVisualizationDiameterStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStaticMeshComponent* GetVisualMeshComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasInteractRadius() const;
    
};
