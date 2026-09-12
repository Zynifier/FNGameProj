#include "FortHeroSpecialization.h"

TArray<TSoftObjectPtr<UCustomCharacterPart>> UFortHeroSpecialization::GetCharacterPartPtrs() const {
    return TArray<TSoftObjectPtr<UCustomCharacterPart>>();
}

UFortHeroSpecialization::UFortHeroSpecialization() {
    AlterationType = EFortAlteration::AttributeSlot;
    bForceShowHeadAccessory = false;
    bForceShowBackpack = false;
}

