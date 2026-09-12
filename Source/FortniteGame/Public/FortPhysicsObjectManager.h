#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortPhysicsObjectManager.generated.h"

class UFortPhysicsObjectComponent;
class UObject;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortPhysicsObjectManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UFortPhysicsObjectComponent*> PhysicsObjects;
    
public:
    AFortPhysicsObjectManager();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetPhysicsObjectManager(const UObject* WorldContextObject, AFortPhysicsObjectManager*& Manager);
    
};
