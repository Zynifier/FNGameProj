#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "EQSActorSpawnerHelperDestroyActorsInArea.generated.h"

class AActor;

UCLASS(Blueprintable)
class FORTNITEGAME_API UEQSActorSpawnerHelperDestroyActorsInArea : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OverlapCheckExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> ActorClassesToDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyBuildingActorsOnSpawn;
    
    UEQSActorSpawnerHelperDestroyActorsInArea();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EQSActorSpawnerHelperDestroyActorsInArea(TArray<AActor*>& OutDestroyedActors, const FTransform& Transform);
    
};
