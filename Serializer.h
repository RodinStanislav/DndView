#ifndef SERIALIZER_H
#define SERIALIZER_H

#include "Project.h"
#include "nlohmann/json.hpp"

namespace dnd::model {
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(ArmorType, name);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Armor, name, armorType);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(WeaponType, name);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Weapon, name, weaponType);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Class, name, armorTypes, armors, weaponTypes, weapons, avaliableProficiencySkillCount, avaliableProficiencySkills, savingThrows, hitPoints);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Attribute, name);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Skill, name, dependentAttribute);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Race, name, attributeModifiers);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Character, name, race, classes, attributes, proficiencies);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Project, attributes, armorTypes, weaponTypes, armors, weapons, races, skills, classes, characters);
}
#endif // SERIALIZER_H
