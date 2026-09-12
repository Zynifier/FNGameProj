#include "FortWaterBodyExclusionVolume.h"
#include "Components/BrushComponent.h"

AFortWaterBodyExclusionVolume::AFortWaterBodyExclusionVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    bNetLoadOnClient = true;

    if (UBrushComponent* Brush = GetBrushComponent()) {
        static FName FortTriggerOnlyPawnsProfileName(TEXT("FortTriggerOnlyPawns"));
        Brush->SetCollisionProfileName(FortTriggerOnlyPawnsProfileName);
    }
}

