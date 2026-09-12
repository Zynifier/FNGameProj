#pragma once
#include "CoreMinimal.h"
#include "BuildingGameplayActor.h"
#include "FortAthenaZiplineBase.generated.h"

class AFortPlayerPawn;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaZiplineBase : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerPawn> CurrentInteractingPawn;
    
public:
    AFortAthenaZiplineBase();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UseInteractToEnterZipline() const;
    
};
