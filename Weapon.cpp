#include "Weapon.h"
#include "WeaponType.h"

namespace dnd::model {
const char* QUARTERSTAFF_WEAPON = "Quarterstaff";
const char* MACE_WEAPON = "Mace";
const char* CLUB_WEAPON = "Club";
const char* DAGGER_WEAPON = "Dagger";
const char* SPEAR_WEAPON = "Spear";
const char* LIGHT_HAMMER_WEAPON = "Light hammer";
const char* JAVELIN_WEAPON = "Javelin";
const char* GREATCLUB_WEAPON = "Greatclub";
const char* HANDAXE_WEAPON = "Handaxe";
const char* SICKLE_WEAPON = "Sickle";

const char* LIGHT_CROSSBOW_WEAPON = "Light crossbow";
const char* DART_WEAPON = "Dart";
const char* SHORTBOW_WEAPON = "Shortbox";
const char* SLING_WEAPON = "Sling";

const char* HALBERD_WEAPON = "Halberd";
const char* WAR_PICK_WEAPON = "War pick";
const char* WARHAMMER_WEAPON = "Warhammer";
const char* BATTLEAXE_WEAPON = "Battleaxe";
const char* GLAIVE_WEAPON = "Glaive";
const char* GREATSWORD_WEAPON = "Greatsword";
const char* LANCE_WEAPON = "Lance";
const char* LONGSWORD_WEAPON = "Longsword";
const char* WHIP_WEAPON = "Whip";
const char* SHORTSWORD_WEAPON = "Shortsword";
const char* MAUL_WEAPON = "Maul";
const char* MORNINGSTAR_WEAPON = "Morningstar";
const char* PIKE_WEAPON = "Pike";
const char* RAPIER_WEAPON = "Rapier";
const char* GREATAXE_WEAPON = "Greataxe";
const char* SCIMITAR_WEAPON = "Scimitar";
const char* TRIDENT_WEAPON = "Trident";
const char* FLAIL_WEAPON = "Flail";

const char* HAND_CROSSBOW_WEAPON = "Hand crossbow";
const char* HEAVY_CROSSBOW_WEAPON = "Heavy crossbow";
const char* LONGBOW_WEAPON = "Longbow";
const char* BLOWGUN_WEAPON = "Blowgun";
const char* NET_WEAPON = "Net";

std::vector<Weapon> getDefaultWeapons() {
    std::vector<Weapon> weapons;

    Weapon quarterstaff;
    quarterstaff.name = QUARTERSTAFF_WEAPON;
    quarterstaff.weaponType = SIMPLE_MELEE_WEAPON_TYPE;

    Weapon mace;
    mace.name = MACE_WEAPON;
    mace.weaponType = SIMPLE_MELEE_WEAPON_TYPE;

    Weapon club;
    club.name = CLUB_WEAPON;
    club.weaponType = SIMPLE_MELEE_WEAPON_TYPE;

    Weapon dagger;
    dagger.name = DAGGER_WEAPON;
    dagger.weaponType = SIMPLE_MELEE_WEAPON_TYPE;

    Weapon spear;
    spear.name = SPEAR_WEAPON;
    spear.weaponType = SIMPLE_MELEE_WEAPON_TYPE;

    Weapon lightHammer;
    lightHammer.name = LIGHT_HAMMER_WEAPON;
    lightHammer.weaponType = SIMPLE_MELEE_WEAPON_TYPE;

    Weapon javelin;
    javelin.name = JAVELIN_WEAPON;
    javelin.weaponType = SIMPLE_MELEE_WEAPON_TYPE;

    Weapon greatclub;
    greatclub.name = GREATCLUB_WEAPON;
    greatclub.weaponType = SIMPLE_MELEE_WEAPON_TYPE;

    Weapon handaxe;
    handaxe.name = HANDAXE_WEAPON;
    handaxe.weaponType = SIMPLE_MELEE_WEAPON_TYPE;

    Weapon sickle;
    sickle.name = SICKLE_WEAPON;
    sickle.weaponType = SIMPLE_MELEE_WEAPON_TYPE;

    Weapon lightCrossbow;
    lightCrossbow.name = LIGHT_CROSSBOW_WEAPON;
    lightCrossbow.weaponType = SIMPLE_RANGED_WEAPON_TYPE;

    Weapon dart;
    dart.name = DART_WEAPON;
    dart.weaponType = SIMPLE_RANGED_WEAPON_TYPE;

    Weapon shortbow;
    shortbow.name = SHORTBOW_WEAPON;
    shortbow.weaponType = SIMPLE_RANGED_WEAPON_TYPE;

    Weapon sling;
    sling.name = SLING_WEAPON;
    sling.weaponType = SIMPLE_RANGED_WEAPON_TYPE;

    Weapon halberd;
    halberd.name = HALBERD_WEAPON;
    halberd.weaponType = MILITARY_MELEE_WEAPON_TYPE;

    Weapon warPick;
    warPick.name = WAR_PICK_WEAPON;
    warPick.weaponType = MILITARY_MELEE_WEAPON_TYPE;

    Weapon warhammer;
    warhammer.name = WARHAMMER_WEAPON;
    warhammer.weaponType = MILITARY_MELEE_WEAPON_TYPE;

    Weapon battleaxe;
    battleaxe.name = BATTLEAXE_WEAPON;
    battleaxe.weaponType = MILITARY_MELEE_WEAPON_TYPE;

    Weapon glaive;
    glaive.name = GLAIVE_WEAPON;
    glaive.weaponType = MILITARY_MELEE_WEAPON_TYPE;

    Weapon greatsword;
    greatsword.name = GREATSWORD_WEAPON;
    greatsword.weaponType = MILITARY_MELEE_WEAPON_TYPE;

    Weapon lance;
    lance.name = LANCE_WEAPON;
    lance.weaponType = MILITARY_MELEE_WEAPON_TYPE;

    Weapon longsword;
    longsword.name = LONGSWORD_WEAPON;
    longsword.weaponType = MILITARY_MELEE_WEAPON_TYPE;

    Weapon whip;
    whip.name = WHIP_WEAPON;
    whip.weaponType = MILITARY_MELEE_WEAPON_TYPE;

    Weapon shortsword;
    shortsword.name = SHORTSWORD_WEAPON;
    shortsword.weaponType = MILITARY_MELEE_WEAPON_TYPE;

    Weapon maul;
    maul.name = MAUL_WEAPON;
    maul.weaponType = MILITARY_MELEE_WEAPON_TYPE;

    Weapon morningstar;
    morningstar.name = MORNINGSTAR_WEAPON;
    morningstar.weaponType = MILITARY_MELEE_WEAPON_TYPE;

    Weapon pike;
    pike.name = PIKE_WEAPON;
    pike.weaponType = MILITARY_MELEE_WEAPON_TYPE;

    Weapon rapier;
    rapier.name = RAPIER_WEAPON;
    rapier.weaponType = MILITARY_MELEE_WEAPON_TYPE;

    Weapon greataxe;
    greataxe.name = GREATAXE_WEAPON;
    greataxe.weaponType = MILITARY_MELEE_WEAPON_TYPE;

    Weapon scimitar;
    scimitar.name = SCIMITAR_WEAPON;
    scimitar.weaponType = MILITARY_MELEE_WEAPON_TYPE;

    Weapon trident;
    trident.name = TRIDENT_WEAPON;
    trident.weaponType = MILITARY_MELEE_WEAPON_TYPE;

    Weapon flail;
    flail.name = FLAIL_WEAPON;
    flail.weaponType = MILITARY_MELEE_WEAPON_TYPE;

    Weapon handCrossbow;
    handCrossbow.name = HAND_CROSSBOW_WEAPON;
    handCrossbow.weaponType = MILITARY_RANGED_WEAPON_TYPE;

    Weapon heavyCrossbow;
    heavyCrossbow.name = HEAVY_CROSSBOW_WEAPON;
    heavyCrossbow.weaponType = MILITARY_RANGED_WEAPON_TYPE;

    Weapon longbow;
    longbow.name = LONGBOW_WEAPON;
    longbow.weaponType = MILITARY_RANGED_WEAPON_TYPE;

    Weapon blowgun;
    blowgun.name = BLOWGUN_WEAPON;
    blowgun.weaponType = MILITARY_RANGED_WEAPON_TYPE;

    Weapon net;
    net.name = NET_WEAPON;
    net.weaponType = MILITARY_RANGED_WEAPON_TYPE;

    weapons.push_back(quarterstaff);
    weapons.push_back(mace);
    weapons.push_back(club);
    weapons.push_back(dagger);
    weapons.push_back(spear);
    weapons.push_back(lightHammer);
    weapons.push_back(javelin);
    weapons.push_back(greatclub);
    weapons.push_back(handaxe);
    weapons.push_back(sickle);
    weapons.push_back(lightCrossbow);
    weapons.push_back(dart);
    weapons.push_back(shortbow);
    weapons.push_back(sling);
    weapons.push_back(halberd);
    weapons.push_back(warPick);
    weapons.push_back(warhammer);
    weapons.push_back(battleaxe);
    weapons.push_back(glaive);
    weapons.push_back(greatsword);
    weapons.push_back(lance);
    weapons.push_back(longsword);
    weapons.push_back(whip);
    weapons.push_back(shortsword);
    weapons.push_back(maul);
    weapons.push_back(morningstar);
    weapons.push_back(pike);
    weapons.push_back(rapier);
    weapons.push_back(greataxe);
    weapons.push_back(scimitar);
    weapons.push_back(trident);
    weapons.push_back(flail);
    weapons.push_back(handCrossbow);
    weapons.push_back(heavyCrossbow);
    weapons.push_back(longbow);
    weapons.push_back(blowgun);
    weapons.push_back(net);

    return weapons;
}

std::vector<Weapon> getDefaultWeapons(const std::string& weaponType) {
    auto allWeapons = getDefaultWeapons();
    std::vector<Weapon> weaponsByType;

    for (const auto& weapon : allWeapons) {
        if (weapon.weaponType == weaponType) {
            weaponsByType.push_back(weapon);
        }
    }

    return weaponsByType;
}

}
