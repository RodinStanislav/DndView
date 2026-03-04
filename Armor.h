#ifndef ARMOR_H
#define ARMOR_H

#include <string>
#include <vector>

namespace dnd::model {
struct Armor {
    std::string name;
    std::string armorType;
};

extern const char* QUILTED_ARMOR;
extern const char* LEATHER_ARMOR;
extern const char* STUDDED_LEATHER_ARMOR;
extern const char* HIDE_ARMOR;
extern const char* CHAINMAIL_SHIRT_ARMOR;
extern const char* SCALY_ARMOR;
extern const char* CUIRASS_ARMOR;
extern const char* HALF_ARMOR;
extern const char* RING_ARMOR;
extern const char* CHAINMAIL_ARMOR;
extern const char* STACKED_ARMOR;
extern const char* ARMOR_ARMOR;
extern const char* SHIELD_ARMOR;

std::vector<Armor> getDefaultArmors();
std::vector<Armor> getDefaultArmors(const std::string& armorType);
}

#endif // ARMOR_H
