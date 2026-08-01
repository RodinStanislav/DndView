#include "WeaponType.h"

namespace RPEngine::dnd::model {
std::vector<WeaponType> getDefaultWeaponTypes() {
    std::vector<WeaponType> weaponTypes;

    weaponTypes.push_back(WeaponType{SIMPLE_MELEE_WEAPON_TYPE});
    weaponTypes.push_back(WeaponType{SIMPLE_RANGED_WEAPON_TYPE});
    weaponTypes.push_back(WeaponType{MILITARY_MELEE_WEAPON_TYPE});
    weaponTypes.push_back(WeaponType{MILITARY_RANGED_WEAPON_TYPE});

    return weaponTypes;
}
}
