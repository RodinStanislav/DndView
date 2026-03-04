#include "Class.h"
#include "Armor.h"
#include "ArmorType.h"
#include "Weapon.h"
#include "WeaponType.h"

namespace dnd::model {
const char* BARD_CLASS = "Bard";
const char* BARBARIAN_CLASS = "Barbarian";
const char* FIGHTER_CLASS = "Fighter";
const char* WIZARD_CLASS = "Wizard";
const char* DRUID_CLASS = "Druid";
const char* CLERIC_CLASS = "Cleric";
const char* ARTIFICER_CLASS = "Artificer";
const char* WARLOCK_CLASS = "Warlock";
const char* MONK_CLASS = "Monk";
const char* PALADIN_CLASS = "Paladin";
const char* ROGUE_CLASS = "Rogue";
const char* RANGER_CLASS = "Ranger";
const char* SORCERER_CLASS = "Sorcerer";

std::vector<Class> getDefaultClasses() {
    std::vector<Class> classes;

    Class bard;
    bard.name = BARD_CLASS;
    bard.hitPoints = 8;

    bard.armorTypes.push_back(LIGHT_ARMOR_TYPE);

    bard.weaponTypes.push_back(SIMPLE_MELEE_WEAPON_TYPE);
    bard.weaponTypes.push_back(SIMPLE_RANGED_WEAPON_TYPE);

    bard.weapons.push_back(LONGSWORD_WEAPON);
    bard.weapons.push_back(SHORTSWORD_WEAPON);
    bard.weapons.push_back(RAPIER_WEAPON);
    bard.weapons.push_back(HAND_CROSSBOW_WEAPON);

    Class barbarian;
    barbarian.name = BARBARIAN_CLASS;
    barbarian.hitPoints = 12;

    barbarian.armorTypes.push_back(LIGHT_ARMOR_TYPE);
    barbarian.armorTypes.push_back(MEDIUM_ARMOR_TYPE);
    barbarian.armorTypes.push_back(SHIELD_ARMOR_TYPE);

    barbarian.weaponTypes.push_back(SIMPLE_MELEE_WEAPON_TYPE);
    barbarian.weaponTypes.push_back(SIMPLE_RANGED_WEAPON_TYPE);
    barbarian.weaponTypes.push_back(MILITARY_MELEE_WEAPON_TYPE);
    barbarian.weaponTypes.push_back(MILITARY_RANGED_WEAPON_TYPE);

    Class fighter;
    fighter.name = FIGHTER_CLASS;
    fighter.hitPoints = 10;

    fighter.armorTypes.push_back(LIGHT_ARMOR_TYPE);
    fighter.armorTypes.push_back(MEDIUM_ARMOR_TYPE);
    fighter.armorTypes.push_back(HEAVY_ARMOR_TYPE);
    fighter.armorTypes.push_back(SHIELD_ARMOR_TYPE);

    fighter.weaponTypes.push_back(SIMPLE_MELEE_WEAPON_TYPE);
    fighter.weaponTypes.push_back(SIMPLE_RANGED_WEAPON_TYPE);
    fighter.weaponTypes.push_back(MILITARY_MELEE_WEAPON_TYPE);
    fighter.weaponTypes.push_back(MILITARY_RANGED_WEAPON_TYPE);

    Class wizard;
    wizard.name = WIZARD_CLASS;
    wizard.hitPoints = 6;

    wizard.weapons.push_back(DAGGER_WEAPON);
    wizard.weapons.push_back(DART_WEAPON);
    wizard.weapons.push_back(SLING_WEAPON);
    wizard.weapons.push_back(QUARTERSTAFF_WEAPON);
    wizard.weapons.push_back(LIGHT_CROSSBOW_WEAPON);

    Class druid;
    druid.name = DRUID_CLASS;
    druid.hitPoints = 8;

    druid.armorTypes.push_back(LIGHT_ARMOR_TYPE);
    druid.armorTypes.push_back(MEDIUM_ARMOR_TYPE);
    druid.armorTypes.push_back(SHIELD_ARMOR_TYPE);

    druid.weapons.push_back(QUARTERSTAFF_WEAPON);
    druid.weapons.push_back(MACE_WEAPON);
    druid.weapons.push_back(DART_WEAPON);
    druid.weapons.push_back(CLUB_WEAPON);
    druid.weapons.push_back(DAGGER_WEAPON);
    druid.weapons.push_back(SPEAR_WEAPON);
    druid.weapons.push_back(JAVELIN_WEAPON);
    druid.weapons.push_back(SLING_WEAPON);
    druid.weapons.push_back(SICKLE_WEAPON);
    druid.weapons.push_back(SCIMITAR_WEAPON);

    Class cleric;
    cleric.name = CLERIC_CLASS;
    cleric.hitPoints = 8;

    cleric.armorTypes.push_back(LIGHT_ARMOR_TYPE);
    cleric.armorTypes.push_back(MEDIUM_ARMOR_TYPE);
    cleric.armorTypes.push_back(SHIELD_ARMOR_TYPE);

    cleric.weaponTypes.push_back(SIMPLE_MELEE_WEAPON_TYPE);
    cleric.weaponTypes.push_back(SIMPLE_RANGED_WEAPON_TYPE);

    Class artificer;
    artificer.name = ARTIFICER_CLASS;
    artificer.hitPoints = 8;

    artificer.armorTypes.push_back(LIGHT_ARMOR_TYPE);
    artificer.armorTypes.push_back(MEDIUM_ARMOR_TYPE);
    artificer.armorTypes.push_back(SHIELD_ARMOR_TYPE);

    artificer.weaponTypes.push_back(SIMPLE_MELEE_WEAPON_TYPE);
    artificer.weaponTypes.push_back(SIMPLE_RANGED_WEAPON_TYPE);

    Class warlock;
    warlock.name = WARLOCK_CLASS;
    warlock.hitPoints = 8;

    warlock.armorTypes.push_back(LIGHT_ARMOR_TYPE);

    warlock.weaponTypes.push_back(SIMPLE_MELEE_WEAPON_TYPE);
    warlock.weaponTypes.push_back(SIMPLE_RANGED_WEAPON_TYPE);

    Class monk;
    monk.name = MONK_CLASS;
    monk.hitPoints = 8;

    monk.weaponTypes.push_back(SIMPLE_MELEE_WEAPON_TYPE);
    monk.weaponTypes.push_back(SIMPLE_RANGED_WEAPON_TYPE);

    monk.weapons.push_back(SHORTSWORD_WEAPON);

    Class paladin;
    paladin.name = PALADIN_CLASS;
    paladin.hitPoints = 10;

    paladin.armorTypes.push_back(LIGHT_ARMOR_TYPE);
    paladin.armorTypes.push_back(MEDIUM_ARMOR_TYPE);
    paladin.armorTypes.push_back(HEAVY_ARMOR_TYPE);
    paladin.armorTypes.push_back(SHIELD_ARMOR_TYPE);

    paladin.weaponTypes.push_back(SIMPLE_MELEE_WEAPON_TYPE);
    paladin.weaponTypes.push_back(SIMPLE_RANGED_WEAPON_TYPE);
    paladin.weaponTypes.push_back(MILITARY_MELEE_WEAPON_TYPE);
    paladin.weaponTypes.push_back(MILITARY_RANGED_WEAPON_TYPE);

    Class rogue;
    rogue.name = ROGUE_CLASS;
    rogue.hitPoints = 8;

    rogue.armorTypes.push_back(LIGHT_ARMOR_TYPE);

    rogue.weaponTypes.push_back(SIMPLE_MELEE_WEAPON_TYPE);
    rogue.weaponTypes.push_back(SIMPLE_RANGED_WEAPON_TYPE);

    rogue.weapons.push_back(HAND_CROSSBOW_WEAPON);
    rogue.weapons.push_back(LONGSWORD_WEAPON);
    rogue.weapons.push_back(RAPIER_WEAPON);
    rogue.weapons.push_back(SHORTSWORD_WEAPON);

    Class ranger;
    ranger.name = RANGER_CLASS;
    ranger.hitPoints = 10;

    ranger.armorTypes.push_back(LIGHT_ARMOR_TYPE);
    ranger.armorTypes.push_back(MEDIUM_ARMOR_TYPE);
    ranger.armorTypes.push_back(SHIELD_ARMOR_TYPE);

    ranger.weaponTypes.push_back(SIMPLE_MELEE_WEAPON_TYPE);
    ranger.weaponTypes.push_back(SIMPLE_RANGED_WEAPON_TYPE);
    ranger.weaponTypes.push_back(MILITARY_MELEE_WEAPON_TYPE);
    ranger.weaponTypes.push_back(MILITARY_RANGED_WEAPON_TYPE);

    Class sorcerer;
    sorcerer.name = SORCERER_CLASS;
    sorcerer.hitPoints = 6;

    sorcerer.weapons.push_back(DAGGER_WEAPON);
    sorcerer.weapons.push_back(DART_WEAPON);
    sorcerer.weapons.push_back(SLING_WEAPON);
    sorcerer.weapons.push_back(QUARTERSTAFF_WEAPON);
    sorcerer.weapons.push_back(LIGHT_CROSSBOW_WEAPON);

    classes.push_back(bard);
    classes.push_back(barbarian);
    classes.push_back(fighter);
    classes.push_back(wizard);
    classes.push_back(druid);
    classes.push_back(cleric);
    classes.push_back(artificer);
    classes.push_back(warlock);
    classes.push_back(monk);
    classes.push_back(paladin);
    classes.push_back(rogue);
    classes.push_back(ranger);
    classes.push_back(sorcerer);

    return classes;
}
}
