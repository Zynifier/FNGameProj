#pragma once
#include "CoreMinimal.h"
#include "FortPlayspaceComponent.h"
#include "PapayaLiveEventComponent.generated.h"

class UAthenaDanceItemDefinition;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UPapayaLiveEventComponent : public UFortPlayspaceComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAthenaDanceItemDefinition*> ActiveCustomEmotes;
    
public:
    UPapayaLiveEventComponent();
};

