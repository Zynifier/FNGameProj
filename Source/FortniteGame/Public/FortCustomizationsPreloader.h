#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortCustomizationsPreloader.generated.h"

class UCustomCharacterPart;
class UFortAIPawnCustomizationDefinition;

UCLASS(Blueprintable)
class UFortCustomizationsPreloader : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<UCustomCharacterPart*> PrioritizedCharacterPartsNPCBudget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<UCustomCharacterPart*> PrioritizedCharacterPartsPlayerBudget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortAIPawnCustomizationDefinition*> PrioritizedAIPawnCustomizations;
    
public:
    UFortCustomizationsPreloader();
};

