#pragma once
#include "CoreMinimal.h"
#include "DBNOCustomSettings.h"
#include "DBNOSettingsByActor.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FDBNOSettingsByActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDBNOCustomSettings Settings;
    
    FORTNITEGAME_API FDBNOSettingsByActor();
};
