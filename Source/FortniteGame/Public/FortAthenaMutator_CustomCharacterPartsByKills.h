#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator_CustomCharacterParts.h"
#include "CustomCharacterPartsByKillOverrideData.h"
#include "FortAthenaMutator_CustomCharacterPartsByKills.generated.h"

class AFortPlayerStateAthena;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_CustomCharacterPartsByKills : public AFortAthenaMutator_CustomCharacterParts {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomCharacterPartsByKillOverrideData> PartOverrideByKillsCustomizations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AFortPlayerStateAthena*, int32> TotalKillsPerPlayerMap;
    
public:
    AFortAthenaMutator_CustomCharacterPartsByKills();
    
};
