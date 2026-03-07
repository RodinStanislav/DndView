#ifndef ARMORTYPE_H
#define ARMORTYPE_H

#include <string>
#include <vector>

namespace dnd::model {

struct ArmorType {
    std::string name;
};

extern const char* LIGHT_ARMOR_TYPE;
extern const char* MEDIUM_ARMOR_TYPE;
extern const char* HEAVY_ARMOR_TYPE;
extern const char* SHIELD_ARMOR_TYPE;

std::vector<ArmorType> getDefaultArmorTypes();

}

#endif // ARMORTYPE_H
