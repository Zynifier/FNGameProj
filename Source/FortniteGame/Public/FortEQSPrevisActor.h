#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortEQSPrevisActor.generated.h"

class UEnvQuery;
class USceneComponent;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortEQSPrevisActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
public:
    AFortEQSPrevisActor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PrepForPrevis();
    
    UFUNCTION(BlueprintCallable)
    void SetQueryTemplate(UEnvQuery* InPrevisQueryTemplate);
    
};
