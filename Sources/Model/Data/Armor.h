#ifndef ARMOR_H
#define ARMOR_H

#include <string>
#include <vector>

namespace RPEngine::dnd::model {
struct Armor {
    std::string name;
    std::string armorType;
};

inline const char* QUILTED_ARMOR = "Quilted armor";
inline const char* LEATHER_ARMOR = "Leather armor";
inline const char* STUDDED_LEATHER_ARMOR = "Studded leather armor";
inline const char* HIDE_ARMOR = "Hide armor";
inline const char* CHAINMAIL_SHIRT_ARMOR = "Chainmail shirt";
inline const char* SCALY_ARMOR = "Scaly armor";
inline const char* CUIRASS_ARMOR = "Cuirass";
inline const char* HALF_ARMOR = "Half armor";
inline const char* RING_ARMOR = "Ring armor";
inline const char* CHAINMAIL_ARMOR = "Chainmail";
inline const char* STACKED_ARMOR = "Stacked armor";
inline const char* ARMOR_ARMOR = "Armor";
inline const char* SHIELD_ARMOR = "Shield";

std::vector<Armor> getDefaultArmors();
std::vector<Armor> getDefaultArmors(const std::string& armorType);
}

#endif // ARMOR_H
