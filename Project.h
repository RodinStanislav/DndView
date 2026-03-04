#ifndef PROJECT_H
#define PROJECT_H

#include "Character.h"
#include "Skill.h"
#include "Class.h"
#include "ArmorType.h"
#include "WeaponType.h"
#include "Armor.h"
#include "Weapon.h"

namespace dnd::model {
struct Project {
    std::vector<Attribute> attributes;
    std::vector<WeaponType> weaponTypes;
    std::vector<Weapon> weapons;
    std::vector<ArmorType> armorTypes;
    std::vector<Armor> armors;
    std::vector<Race> races;
    std::vector<Skill> skills;
    std::vector<Class> classes;
    std::vector<Character> characters;
};
}

#endif // PROJECT_H
