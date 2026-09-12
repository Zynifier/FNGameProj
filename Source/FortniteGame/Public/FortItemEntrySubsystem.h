#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "FortItemEntryAbilityData.h"
#include "FortItemEntryTaggedFloatData.h"
#include "FortItemEntryTaggedIntegerData.h"
#include "FortItemEntrySubsystem.generated.h"

UCLASS(Blueprintable)
class UFortItemEntrySubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FFortItemEntryAbilityData> ItemAbilityCooldownMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FFortItemEntryTaggedIntegerData> ItemTaggedIntegerMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FFortItemEntryTaggedFloatData> ItemTaggedFloatMap;
    
public:
    UFortItemEntrySubsystem();
};

