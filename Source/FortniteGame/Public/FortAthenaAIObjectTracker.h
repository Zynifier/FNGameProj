#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "AITrackedObjectsSet.h"
#include "FortAthenaAIObjectTracker.generated.h"

class UClass;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAthenaAIObjectTracker : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UClass*, FAITrackedObjectsSet> TrackedObjects;
    
public:
    UFortAthenaAIObjectTracker();
    
};
