#ifndef CLASS_H
#define CLASS_H

#include <string>
#include <vector>

namespace dnd::model {
struct Class {
    std::string name;
    std::vector<std::string> armorTypes;
    std::vector<std::string> armors;
    std::vector<std::string> weaponTypes;
    std::vector<std::string> weapons;
    uint32_t avaliableProficiencySkillCount = 0;
    std::vector<std::string> avaliableProficiencySkills;
    std::vector<std::string> savingThrows;
    uint32_t hitPoints;
};

extern const char* BARD_CLASS;
extern const char* BARBARIAN_CLASS;
extern const char* FIGHTER_CLASS;
extern const char* WIZARD_CLASS;
extern const char* DRUID_CLASS;
extern const char* CLERIC_CLASS;
extern const char* ARTIFICER_CLASS;
extern const char* WARLOCK_CLASS;
extern const char* MONK_CLASS;
extern const char* PALADIN_CLASS;
extern const char* ROGUE_CLASS;
extern const char* RANGER_CLASS;
extern const char* SORCERER_CLASS;

std::vector<Class> getDefaultClasses();
}

#endif // CLASS_H
