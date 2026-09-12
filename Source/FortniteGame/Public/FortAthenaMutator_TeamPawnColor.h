#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "Templates/SubclassOf.h"
#include "TeamPawnColor_VisualData.h"
#include "FortAthenaMutator_TeamPawnColor.generated.h"

class UFortControllerComponent_TeamPawnColor;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_TeamPawnColor : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortControllerComponent_TeamPawnColor> TeamPawnColorControllerComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FTeamPawnColor_VisualData> TeamVisualsMap;
    
public:
    AFortAthenaMutator_TeamPawnColor();
    
};
