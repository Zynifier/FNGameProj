#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "BuildingProp.h"
#include "Templates/SubclassOf.h"
#include "BuildingProp_ConversationCompatible.generated.h"

class UAthenaSpecialActorComponent;
class UWidget;

UCLASS(Blueprintable)
class FORTNITEGAME_API ABuildingProp_ConversationCompatible : public ABuildingProp {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat UseSpecialActorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaSpecialActorComponent> SpecialActorComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* CustomInteractionWidget;
    
public:
    ABuildingProp_ConversationCompatible();
    
};
