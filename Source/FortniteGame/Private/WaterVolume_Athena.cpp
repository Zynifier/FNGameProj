#include "WaterVolume_Athena.h"
#include "Components/BrushComponent.h"

AWaterVolume_Athena::AWaterVolume_Athena() {
    if (UBrushComponent* Brush = GetBrushComponent()) {
        static FName FortWaterProfileName(TEXT("FortWater"));
        Brush->SetCollisionProfileName(FortWaterProfileName);
    }
}

