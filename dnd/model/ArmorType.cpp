#include "ArmorType.h"

namespace dnd::model {
const char* LIGHT_ARMOR_TYPE = "Light armor type";
const char* MEDIUM_ARMOR_TYPE = "Medium armor type";
const char* HEAVY_ARMOR_TYPE = "Heavy armor type";
const char* SHIELD_ARMOR_TYPE = "Shield armor type";

std::vector<ArmorType> getDefaultArmorTypes() {
    std::vector<ArmorType> armorTypes;

    armorTypes.push_back(ArmorType{LIGHT_ARMOR_TYPE});
    armorTypes.push_back(ArmorType{MEDIUM_ARMOR_TYPE});
    armorTypes.push_back(ArmorType{HEAVY_ARMOR_TYPE});
    armorTypes.push_back(ArmorType{SHIELD_ARMOR_TYPE});

    return armorTypes;
}
}
