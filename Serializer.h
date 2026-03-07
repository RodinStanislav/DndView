#ifndef SERIALIZER_H
#define SERIALIZER_H

#include "Project.h"
#include "nlohmann/json.hpp"

// partial specialization (full specialization works too)
namespace nlohmann {
template <typename T>
struct adl_serializer<std::optional<T>> {
    static void to_json(json& j, const std::optional<T>& opt) {
        if (opt == std::nullopt) {
            j = nullptr;
        } else {
            j = *opt; // this will call adl_serializer<T>::to_json which will
            // find the free function to_json in T's namespace!
        }
    }

    static void from_json(const json& j, std::optional<T>& opt) {
        if (j.is_null()) {
            opt = std::nullopt;
        } else {
            opt = j.get<T>(); // same as above, but with
            // adl_serializer<T>::from_json
        }
    }
};
}

namespace dnd::model {
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(ArmorType, name);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Armor, name, armorType);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(WeaponType, name);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Weapon, name, weaponType);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(SpellSchool, name);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Spell, name, spellSchool, level);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Class, name, armorTypes, armors, weaponTypes, weapons, proficiencySkills,
                                   spells, savingThrows, hitPoints);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Attribute, name);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Skill, name, dependentAttribute);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Race, name, inherits, attributeModifiers);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Character, name, race, classes, attributes, proficiencies);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Project, attributes, armorTypes, weaponTypes, armors, weapons, spellSchools, spells, races, skills, classes, characters);
}
#endif // SERIALIZER_H
