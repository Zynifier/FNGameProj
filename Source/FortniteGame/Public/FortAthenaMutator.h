#pragma once
#include "CoreMinimal.h"
#include "FortGameplayMutator.h"
#include "EFortMutatorOverridePriority.h"
#include "FortAthenaMutator.generated.h"

class AFortGameModeAthena;
class AFortGameStateAthena;

class APlayerController;

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator : public AFortGameplayMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMutatesGameMode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMutatesGameState: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortGameModeAthena* CachedGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortGameStateAthena* CachedGameState;
    
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<TWeakObjectPtr<APlayerController>> InitializedPlayerControllers;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortMutatorOverridePriority OverridePriority;
    
public:

};

