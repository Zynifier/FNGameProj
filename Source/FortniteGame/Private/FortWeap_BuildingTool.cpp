#include "FortWeap_BuildingTool.h"
#include "Net/UnrealNetwork.h"

void AFortWeap_BuildingTool::OnRep_DefaultMetadata(UBuildingEditModeMetadata* OldMetadata) {
}

void AFortWeap_BuildingTool::OnBlueprintPaperPulseUpdate(float InCurveVal) {
}

void AFortWeap_BuildingTool::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortWeap_BuildingTool, DefaultMetadata);
}

AFortWeap_BuildingTool::AFortWeap_BuildingTool() {
    BlueprintPaperMaterial = NULL;
    BlueprintPaperPulseCurve = NULL;
    DefaultMetadata = NULL;
    BlueprintPaperMID = NULL;
    LastResourceType = EFortResourceType::None;
}

