#include "FortPlayerMarkerBase.h"
#include "Components/StaticMeshComponent.h"






void AFortPlayerMarkerBase::SpawnMarkerAnimTimelineProgress_Opacity(float Value) {
}

void AFortPlayerMarkerBase::SpawnMarkerAnimTimelineProgress_SpawnScale(float Value) {
}

void AFortPlayerMarkerBase::SpawnMarkerAnimTimelineProgress_SpawnVerticalScale(float Value) {
}

void AFortPlayerMarkerBase::StartSpawnMarkerAnim() {
}

AFortPlayerMarkerBase::AFortPlayerMarkerBase() {
    CustomMarkerItemDefinition = NULL;
    StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    MID_Main = NULL;
    MID_Target = NULL;
    SpawnMarkerAnimLength = 0.0f;
    SpawnMarkerAnim_Opacity = NULL;
    SpawnMarkerAnim_SpawnScale = NULL;
    SpawnMarkerAnim_SpawnVerticalScale = NULL;
}

