#include "BuildingTextureData.h"

UBuildingTextureData::UBuildingTextureData() {
    Diffuse = NULL;
    Normal = NULL;
    Specular = NULL;
    OverrideMaterial = NULL;
    Type = EFortTextureDataType::None;
    ResourceType = EFortResourceType::None;
}

