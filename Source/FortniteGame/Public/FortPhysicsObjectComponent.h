#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameFrameworkComponent.h"
#include "OnComponentHitSignatureDelegate.h"
#include "OnPhysicsObjectAwakeChangedDelegate.h"
#include "EFortPhysicsObjectAwakeState.h"
#include "EFortPhysicsObjectMovementState.h"
#include "PhysicsObjectImpactInstigatorData.h"
#include "PhysicsObjectMovementStateData.h"
#include "FortPhysicsObjectComponent.generated.h"

class AActor;
class AController;
class UBuoyancyComponent;
class UFortPhysicsObjectPreset;
class UPrimitiveComponent;

class AFortPawn;
class UFortPhysicsObjectBuoyancyData;
class UFortPhysicsObjectCollisionEffectsData;
class UFortPhysicsObjectImpactDamageData;
class UFortPhysicsObjectNavigationData;
class UPhysicalMaterial;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortPhysicsObjectComponent : public UGameFrameworkComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPhysicsObjectAwakeChanged OnAwakeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnComponentHitSignature OnReceivedLargeImpulse;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AFortPawn>> IgnoredPawns;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AFortPawn>> IgnoredPawnsPendingRemoval;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPhysicsObjectPreset* PhysicsPreset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPhysicsObjectCollisionEffectsData* EffectsDataOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* PhysicalMaterialOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPhysicsObjectBuoyancyData* BuoyancyAssetOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPhysicsObjectImpactDamageData* ImpactDamageDataOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPhysicsObjectNavigationData* NavigationDataOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bHasSetupPhysicsObject: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bServerHasSetupPhysicsObject: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bForceStartActiveAndAwake: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bHasComponentActivated: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EFortPhysicsObjectAwakeState PhysicsObjectAwakeState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInitializeUsingRootComponent: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* SimulatingComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPhysicsObjectImpactInstigatorData ImpactInstigatorData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBuoyancyComponent* BuoyancyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PreviousLinearVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LinearVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PreviousAngularVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AngularVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CustomGravityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPhysicsObjectMovementStateData MovementStateData;
    
public:
    UFortPhysicsObjectComponent();
    UFUNCTION(BlueprintCallable)
    void WakeUp();
    
    UFUNCTION(BlueprintCallable)
    void SetSimulatePhysics(bool bSimulate);
    
    UFUNCTION(BlueprintCallable)
    void SetPhysicsPreset(const UFortPhysicsObjectPreset* InPhysicsPreset);
    
    UFUNCTION(BlueprintCallable)
    void SetLinearVelocity(FVector NewVel, bool bAddToCurrent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void SetAngularVelocity(FVector NewVel, bool bAddToCurrent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void PutToSleep();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAwake() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializePhysics(UPrimitiveComponent* PrimitiveComponent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleSimulatingComponentWake(UPrimitiveComponent* WakingComponent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void HandleSimulatingComponentSleep(UPrimitiveComponent* SleepingComponent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void HandleSimulatingComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void HandleSimulatingComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPrimitiveComponent* GetSimulatingComponent() const;
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ClientBroadcastHitDetection(AController* EventInstigator, float Radius, float Relevancy, const FVector HalfPoints, const FVector DoublePoints);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastLinearVelocity(FVector NewVel, bool bAddToCurrent, FName BoneName);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastAngularVelocity(FVector NewVel, bool bAddToCurrent, FName BoneName);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    static void ActivatePhysicsObject(AActor* PhysicsObject);
    
    UFUNCTION(BlueprintCallable)
    static void ClearImpactInstigatorFromPhysicsObject(AActor* PhysicsObject);
    
    UFUNCTION(BlueprintCallable)
    static void DeactivatePhysicsObject(AActor* PhysicsObject);
    
    UFUNCTION(BlueprintCallable)
    static void PutToSleepPhysicsObject(AActor* PhysicsObject);
    
    UFUNCTION(BlueprintCallable)
    static void SetImpactInstigatorForPhysicsObject(AActor* PhysicsObject, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    static void WakeUpPhysicsObject(AActor* PhysicsObject);
    
    UFUNCTION(BlueprintCallable)
    void DecrementNeverSleep();
    
private:
    UFUNCTION(BlueprintCallable)
    void DeferredSetupPhysicsObject();
    
public:
    UFUNCTION(BlueprintCallable)
    void IgnorePawnForCollision(AFortPawn* Pawn, bool bIgnore);
    
    UFUNCTION(BlueprintCallable)
    void IncrementNeverSleep();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_AwakeState();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetBuoyancyAssetOverride(const UFortPhysicsObjectBuoyancyData* InBuoyancyAssetOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetCollisionEffectsDataOverride(const UFortPhysicsObjectCollisionEffectsData* InEffectsDataOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetImpactDamageDataOverride(const UFortPhysicsObjectImpactDamageData* InImpactDamageData);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationDataOverride(const UFortPhysicsObjectNavigationData* InNavigationDataOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetPhysicalMaterialOverride(const UPhysicalMaterial* InPhysicalMaterialOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGravity(bool bUseGravityMultiplier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMovingStateData(AActor*& OutInstigator, FHitResult& OutHitResult, float& OutLinearSpeed, EFortPhysicsObjectMovementState& OutMovementState) const;
    
};

