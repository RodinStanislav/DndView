#ifndef ARMORTYPE_H
#define ARMORTYPE_H

#include <string>
#include <vector>

namespace RPEngine::dnd::model {

struct ArmorType {
    std::string name;
};

inline const char* LIGHT_ARMOR_TYPE = "Light";
inline const char* MEDIUM_ARMOR_TYPE = "Medium";
inline const char* HEAVY_ARMOR_TYPE = "Heavy";
inline const char* SHIELD_ARMOR_TYPE = "Shield";

std::vector<ArmorType> getDefaultArmorTypes();

}

#endif // ARMORTYPE_H
