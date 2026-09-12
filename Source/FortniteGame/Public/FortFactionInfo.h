#pragma once
#include "CoreMinimal.h"
#include "EFortFactionAttitude.h"
#include "FortAffiliationActorIdentifierList.h"
#include "FortFactionSharedBBInfo.h"
#include "GameplayTagContainer.h"
#include "FortFactionInfo.generated.h"

class UFortActorComponent_Affiliation;

USTRUCT(BlueprintType)
struct FFortFactionInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag FactionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortFactionAttitude::Type> DefaultAttitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bHasSpecificRelations: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bAreFactionMemberAllies: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bShouldSpecificRelationsApplyToEntireFaction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bMembersCanResetSpecificRelation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ResetSpecificRelationUnawareDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ResetSpecificRelationNoDamageDelay;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer FactionRelations[3];
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortAffiliationActorIdentifierList SpecificRelations[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortActorComponent_Affiliation*> Members;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortFactionSharedBBInfo> SharedBBInfos;
    
public:
    FORTNITEGAME_API FFortFactionInfo();
};
