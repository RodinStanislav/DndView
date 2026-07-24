#include "ArmorType.h"

namespace dnd::model {
std::vector<ArmorType> getDefaultArmorTypes() {
    std::vector<ArmorType> armorTypes;

    armorTypes.push_back(ArmorType{LIGHT_ARMOR_TYPE});
    armorTypes.push_back(ArmorType{MEDIUM_ARMOR_TYPE});
    armorTypes.push_back(ArmorType{HEAVY_ARMOR_TYPE});
    armorTypes.push_back(ArmorType{SHIELD_ARMOR_TYPE});

    return armorTypes;
}
}
