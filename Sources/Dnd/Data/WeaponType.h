#ifndef WEAPONTYPE_H
#define WEAPONTYPE_H

#include <string>
#include <vector>

namespace dnd::model {
struct WeaponType {
    std::string name;
};

inline const char* SIMPLE_MELEE_WEAPON_TYPE = "Simple melee";
inline const char* SIMPLE_RANGED_WEAPON_TYPE = "Simple ranged";
inline const char* MILITARY_MELEE_WEAPON_TYPE = "Military melee";
inline const char* MILITARY_RANGED_WEAPON_TYPE = "Military ranged";

std::vector<WeaponType> getDefaultWeaponTypes();
}

#endif // WEAPONTYPE_H
