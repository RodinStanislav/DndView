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

namespace RPEngine::dnd::model {
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Attribute, name);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(ArmorType, name);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Armor, name, armorType);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Background, name, skills);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(DamageType, name);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Damage, baseHit, maxHit, damageType);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Feat, name);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(WeaponType, name);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Weapon, name, weaponType, damage);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(SpellSchool, name);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(SpellComponents, verbal, somatic, material);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Spell, name, spellSchool, components, level);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Class, name, armorTypes, armors, weaponTypes, weapons, skills, skillCount,
                                   spells, savingThrows, hitPoints);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Skill, name, attribute);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Race, name, speed, inherits, attributeModifiers);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Character, name, background, history, race, classes, attributes, skills, level,
                                   experience, hitPoints, maximumHitPoints, additionalHitPoints);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Project, damageTypes, attributes, armorTypes, weaponTypes, armors, weapons,
                                   spellSchools, spells, races, skills, classes, backgrounds, feats, characters);
}
#endif // SERIALIZER_H
