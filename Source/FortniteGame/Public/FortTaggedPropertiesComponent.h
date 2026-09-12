#pragma once
#include "CoreMinimal.h"
#include "GameFrameworkComponent.h"
#include "GameplayTagContainer.h"
#include "FortTaggedPropertiesComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortTaggedPropertiesComponent : public UGameFrameworkComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayTagQuery> TagQueries;
    
public:
    UFortTaggedPropertiesComponent();
    
};
