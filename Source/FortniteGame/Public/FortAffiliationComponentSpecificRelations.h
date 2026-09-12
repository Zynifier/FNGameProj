#pragma once
#include "CoreMinimal.h"
#include "FortAffiliationActorIdentifierList.h"
#include "FortAffiliationComponentSpecificRelations.generated.h"

class UFortActorComponent_Affiliation;

USTRUCT(BlueprintType)
struct FFortAffiliationComponentSpecificRelations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortAffiliationActorIdentifierList Identifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortActorComponent_Affiliation*> Components;
    
    FORTNITEGAME_API FFortAffiliationComponentSpecificRelations();
};
