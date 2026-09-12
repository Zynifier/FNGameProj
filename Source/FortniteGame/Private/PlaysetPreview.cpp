#include "PlaysetPreview.h"
#include "Net/UnrealNetwork.h"

void UPlaysetPreview::UpdatePreviewMeshScale() {
}

void UPlaysetPreview::OnRep_PlaysetToPlace() {
}

void UPlaysetPreview::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPlaysetPreview, PlaysetToPlace);
}

void UPlaysetPreview::ServerSetPreviewLocation_Implementation(const FVector& NewPreviewLocation) {
}
bool UPlaysetPreview::ServerSetPreviewLocation_Validate(const FVector& NewPreviewLocation) {
    return true;
}

UPlaysetPreview::UPlaysetPreview() {
    PreviewPlaysetStaticMeshActor = NULL;
    PlaysetMesh = NULL;
    PlaysetMaterial = NULL;
}

