#pragma once
#include "CoreMinimal.h"
#include "FortAttributeSet.h"
#include "FortGameplayAttributeData.h"
#include "FortCowVehicleSet.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortCowVehicleSet : public UFortAttributeSet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData MaxFuel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Fuel, meta=(AllowPrivateAccess=true))
    FFortGameplayAttributeData Fuel;
    
public:
    UFortCowVehicleSet();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Fuel(const FFortGameplayAttributeData& OldValue);
    
};
