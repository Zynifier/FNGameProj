#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AdHocSquadData.generated.h"

class AFortPlayerStateAthena;

UCLASS(Blueprintable)
class FORTNITEGAME_API UAdHocSquadData : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerStateAthena*> PlayerStates;
    
public:
    UAdHocSquadData();
    
};
