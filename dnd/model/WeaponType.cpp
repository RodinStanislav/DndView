#include "WeaponType.h"

namespace dnd::model {
const char* SIMPLE_MELEE_WEAPON_TYPE = "Simple melee weapon";
const char* SIMPLE_RANGED_WEAPON_TYPE = "Simple ranged weapon";
const char* MILITARY_MELEE_WEAPON_TYPE = "Military melee weapon";
const char* MILITARY_RANGED_WEAPON_TYPE = "Military ranged weapon";

std::vector<WeaponType> getDefaultWeaponTypes() {
    std::vector<WeaponType> weaponTypes;

    weaponTypes.push_back(WeaponType{SIMPLE_MELEE_WEAPON_TYPE});
    weaponTypes.push_back(WeaponType{SIMPLE_RANGED_WEAPON_TYPE});
    weaponTypes.push_back(WeaponType{MILITARY_MELEE_WEAPON_TYPE});
    weaponTypes.push_back(WeaponType{MILITARY_RANGED_WEAPON_TYPE});

    return weaponTypes;
}
}
