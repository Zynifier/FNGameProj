#pragma once
#include "CoreMinimal.h"
#include "GameFrameworkComponent.h"
#include "Templates/SubclassOf.h"
#include "FortPickupInteractOverrideComponent.generated.h"

class UFortInteractContextInfoWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortPickupInteractOverrideComponent : public UGameFrameworkComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortInteractContextInfoWidget> ContextOverrideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortInteractContextInfoWidget> SecondContextOverrideWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bContextOverrideWidgetApplied;
    
public:
    UFortPickupInteractOverrideComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPriority() const;
    
};
