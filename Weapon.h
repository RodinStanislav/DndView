#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include <vector>

namespace dnd::model {
struct Weapon {
    std::string name;
    std::string weaponType;
};

extern const char* QUARTERSTAFF_WEAPON;
extern const char* MACE_WEAPON;
extern const char* CLUB_WEAPON;
extern const char* DAGGER_WEAPON;
extern const char* SPEAR_WEAPON;
extern const char* LIGHT_HAMMER_WEAPON;
extern const char* JAVELIN_WEAPON;
extern const char* GREATCLUB_WEAPON;
extern const char* HANDAXE_WEAPON;
extern const char* SICKLE_WEAPON;

extern const char* LIGHT_CROSSBOW_WEAPON;
extern const char* DART_WEAPON;
extern const char* SHORTBOW_WEAPON;
extern const char* SLING_WEAPON;

extern const char* HALBERD_WEAPON;
extern const char* WAR_PICK_WEAPON;
extern const char* WARHAMMER_WEAPON;
extern const char* BATTLEAXE_WEAPON;
extern const char* GLAIVE_WEAPON;
extern const char* GREATSWORD_WEAPON;
extern const char* LANCE_WEAPON;
extern const char* LONGSWORD_WEAPON;
extern const char* WHIP_WEAPON;
extern const char* SHORTSWORD_WEAPON;
extern const char* MAUL_WEAPON;
extern const char* MORNINGSTAR_WEAPON;
extern const char* PIKE_WEAPON;
extern const char* RAPIER_WEAPON;
extern const char* GREATAXE_WEAPON;
extern const char* SCIMITAR_WEAPON;
extern const char* TRIDENT_WEAPON;
extern const char* FLAIL_WEAPON;

extern const char* HAND_CROSSBOW_WEAPON;
extern const char* HEAVY_CROSSBOW_WEAPON;
extern const char* LONGBOW_WEAPON;
extern const char* BLOWGUN_WEAPON;
extern const char* NET_WEAPON;

std::vector<Weapon> getDefaultWeapons();
std::vector<Weapon> getDefaultWeapons(const std::string& weaponType);

}

#endif // WEAPON_H
