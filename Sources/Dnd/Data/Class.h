#ifndef CLASS_H
#define CLASS_H

#include <string>
#include <vector>
#include <unordered_map>

namespace dnd::model {
struct Class {
    std::string name;
    std::vector<std::string> armorTypes;
    std::vector<std::string> armors;
    std::vector<std::string> weaponTypes;
    std::vector<std::string> weapons;
    std::vector<std::string> skills;
    uint32_t skillCount = 0;
    std::vector<std::string> spells;
    std::vector<std::string> savingThrows;
    uint32_t hitPoints;
};

inline const char* BARD_CLASS = "Bard";
inline const char* BARBARIAN_CLASS = "Barbarian";
inline const char* FIGHTER_CLASS = "Fighter";
inline const char* WIZARD_CLASS = "Wizard";
inline const char* DRUID_CLASS = "Druid";
inline const char* CLERIC_CLASS = "Cleric";
inline const char* ARTIFICER_CLASS = "Artificer";
inline const char* WARLOCK_CLASS = "Warlock";
inline const char* MONK_CLASS = "Monk";
inline const char* PALADIN_CLASS = "Paladin";
inline const char* ROGUE_CLASS = "Rogue";
inline const char* RANGER_CLASS = "Ranger";
inline const char* SORCERER_CLASS = "Sorcerer";

std::vector<Class> getDefaultClasses();
}

#endif // CLASS_H
