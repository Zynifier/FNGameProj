#pragma once
#include "CoreMinimal.h"
#include "FortControllerComponent.h"
#include "FortControllerComponent_TeamPawnColor.generated.h"

class AFortAthenaMutator_TeamPawnColor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortControllerComponent_TeamPawnColor : public UFortControllerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_TeamPawnColor* TeamPawnColorMutator;
    
    UFortControllerComponent_TeamPawnColor();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleServerTeamChange();
    
};
