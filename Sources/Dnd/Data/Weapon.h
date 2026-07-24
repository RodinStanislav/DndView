#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include <vector>

#include "Damage.h"

namespace dnd::model {
struct Weapon {
    std::string name;
    std::string weaponType;
    Damage damage;
};

inline const char* QUARTERSTAFF_WEAPON = "Quarterstaff";
inline const char* MACE_WEAPON = "Mace";
inline const char* CLUB_WEAPON = "Club";
inline const char* DAGGER_WEAPON = "Dagger";
inline const char* SPEAR_WEAPON = "Spear";
inline const char* LIGHT_HAMMER_WEAPON = "Light hammer";
inline const char* JAVELIN_WEAPON = "Javelin";
inline const char* GREATCLUB_WEAPON = "Greatclub";
inline const char* HANDAXE_WEAPON = "Handaxe";
inline const char* SICKLE_WEAPON = "Sickle";

inline const char* LIGHT_CROSSBOW_WEAPON = "Light crossbow";
inline const char* DART_WEAPON = "Dart";
inline const char* SHORTBOW_WEAPON = "Shortbox";
inline const char* SLING_WEAPON = "Sling";

inline const char* HALBERD_WEAPON = "Halberd";
inline const char* WAR_PICK_WEAPON = "War pick";
inline const char* WARHAMMER_WEAPON = "Warhammer";
inline const char* BATTLEAXE_WEAPON = "Battleaxe";
inline const char* GLAIVE_WEAPON = "Glaive";
inline const char* GREATSWORD_WEAPON = "Greatsword";
inline const char* LANCE_WEAPON = "Lance";
inline const char* LONGSWORD_WEAPON = "Longsword";
inline const char* WHIP_WEAPON = "Whip";
inline const char* SHORTSWORD_WEAPON = "Shortsword";
inline const char* MAUL_WEAPON = "Maul";
inline const char* MORNINGSTAR_WEAPON = "Morningstar";
inline const char* PIKE_WEAPON = "Pike";
inline const char* RAPIER_WEAPON = "Rapier";
inline const char* GREATAXE_WEAPON = "Greataxe";
inline const char* SCIMITAR_WEAPON = "Scimitar";
inline const char* TRIDENT_WEAPON = "Trident";
inline const char* FLAIL_WEAPON = "Flail";

inline const char* HAND_CROSSBOW_WEAPON = "Hand crossbow";
inline const char* HEAVY_CROSSBOW_WEAPON = "Heavy crossbow";
inline const char* LONGBOW_WEAPON = "Longbow";
inline const char* BLOWGUN_WEAPON = "Blowgun";
inline const char* NET_WEAPON = "Net";

std::vector<Weapon> getDefaultWeapons();
std::vector<Weapon> getDefaultWeapons(const std::string& weaponType);

}

#endif // WEAPON_H
