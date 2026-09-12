#pragma once
#include "CoreMinimal.h"
#include "PlayspaceComponent_PlayerSpawning.h"
#include "PapayaPlayerSpawningComponent.generated.h"

class AFortPlayerStartWarmup;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UPapayaPlayerSpawningComponent : public UPlayspaceComponent_PlayerSpawning {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerStartWarmup*> BestSpawnPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerStartWarmup*> HighPrioritySpawnPoints;
    
public:
    UPapayaPlayerSpawningComponent();
};

