#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FortWorldMultiItemXPComponent.generated.h"

class AFortPawn;
class AFortWeapon;
class UFortWorldMultiItem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortWorldMultiItemXPComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortWeapon* OwningWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPawn* OwnerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortWorldMultiItem* OwningMultiItem;
    
public:
    UFortWorldMultiItemXPComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortWorldMultiItem* GetOwningMultiItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPawn* GetOwningPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortWeapon* GetWeaponActor() const;
    
};
