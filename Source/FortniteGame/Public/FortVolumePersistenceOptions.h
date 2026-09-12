#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FortCreativePersistenceOptions.h"
#include "FortVolumePersistenceOptions.generated.h"

class UFortCreativePersistenceComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortVolumePersistenceOptions : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bAllowPlayerToClearData: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 PersistenceDevicesCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UFortCreativePersistenceComponent*, FFortCreativePersistenceOptions> FortCreativePersistenceOptionsMap;
    
public:
    UFortVolumePersistenceOptions();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UnregistryFortCreativePersistenceComponent(const UFortCreativePersistenceComponent* FortCreativePersistenceComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortCreativePersistenceComponent* GetFirstOrderedPersistenceComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerClearDataOptionAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTherePersistenceDevices() const;
    
    UFUNCTION(BlueprintCallable)
    void RegistryFortCreativePersistenceComponent(const UFortCreativePersistenceComponent* FortCreativePersistenceComponent, const FFortCreativePersistenceOptions& FortCreativePersistenceOptions);
    
    UFUNCTION(BlueprintCallable)
    void UpdatePersistenceComponent(const UFortCreativePersistenceComponent* FortCreativePersistenceComponent, const FFortCreativePersistenceOptions& FortCreativePersistenceOptions);
    
};
