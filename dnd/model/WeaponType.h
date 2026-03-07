#ifndef WEAPONTYPE_H
#define WEAPONTYPE_H

#include <string>
#include <vector>

namespace dnd::model {
struct WeaponType {
    std::string name;
};

extern const char* SIMPLE_MELEE_WEAPON_TYPE;
extern const char* SIMPLE_RANGED_WEAPON_TYPE;
extern const char* MILITARY_MELEE_WEAPON_TYPE;
extern const char* MILITARY_RANGED_WEAPON_TYPE;

std::vector<WeaponType> getDefaultWeaponTypes();
}

#endif // WEAPONTYPE_H
