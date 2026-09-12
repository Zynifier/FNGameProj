#pragma once
#include "CoreMinimal.h"
#include "FortAthenaSpawnerDataBase.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaActorSpawnerData.generated.h"

class AActor;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAthenaActorSpawnerData : public UFortAthenaSpawnerDataBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorClass;
    
public:
    UFortAthenaActorSpawnerData();
    
};
