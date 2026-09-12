#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "FortCollisionResponseSwapperComponent.generated.h"

class AActor;
class AFortPawn;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortCollisionResponseSwapperComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* CollisionPrimitiveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* OverlapPrimitiveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPawn*> PawnsListenedTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat VisibilityModifiedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionResponse> NewCollisionResponse;
    
public:
    UFortCollisionResponseSwapperComponent();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void HandleEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void RegisterCallbacksForOverlap(UPrimitiveComponent* InCollisionPrimitiveComponent, UPrimitiveComponent* InOverlapPrimitiveComponent);
    
    UFUNCTION(BlueprintCallable)
    void RestoreCollisionResponses();
    
    UFUNCTION(BlueprintCallable)
    void UnregisterCallbacksForOverlap();
    
};
