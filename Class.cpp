#include "Class.h"
#include "Armor.h"
#include "ArmorType.h"
#include "Weapon.h"
#include "WeaponType.h"
#include "Attribute.h"
#include "Skill.h"

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

    bard.savingThrows.push_back(DEXTERITY_ATTRIBUTE);
    bard.savingThrows.push_back(CHARISMA_ATTRIBUTE);

    bard.avaliableProficiencySkillCount = 3;
    bard.avaliableProficiencySkills.push_back(ATLETICS_SKILL);
    bard.avaliableProficiencySkills.push_back(ACROBATICS_SKILL);
    bard.avaliableProficiencySkills.push_back(SLEIGHT_OF_HAND_SKILL);
    bard.avaliableProficiencySkills.push_back(STEALTH_SKILL);
    bard.avaliableProficiencySkills.push_back(HISTORY_SKILL);
    bard.avaliableProficiencySkills.push_back(MAGIC_SKILL);
    bard.avaliableProficiencySkills.push_back(NATURE_SKILL);
    bard.avaliableProficiencySkills.push_back(INVESTIGATION_SKILL);
    bard.avaliableProficiencySkills.push_back(RELIGION_SKILL);
    bard.avaliableProficiencySkills.push_back(PERCEPTION_SKILL);
    bard.avaliableProficiencySkills.push_back(SURVIVAL_SKILL);
    bard.avaliableProficiencySkills.push_back(MEDICINE_SKILL);
    bard.avaliableProficiencySkills.push_back(INSIGHT_SKILL);
    bard.avaliableProficiencySkills.push_back(ANIMAL_CARE_SKILL);
    bard.avaliableProficiencySkills.push_back(PERFOMANCE_SKILL);
    bard.avaliableProficiencySkills.push_back(INTIMIDATION_SKILL);
    bard.avaliableProficiencySkills.push_back(DECEPTION_SKILL);
    bard.avaliableProficiencySkills.push_back(PERSUASION_SKILL);

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

    barbarian.savingThrows.push_back(STRENGHT_ATTRIBUTE);
    barbarian.savingThrows.push_back(CONSTITUTION_ATTRIBUTE);

    barbarian.avaliableProficiencySkillCount = 2;
    barbarian.avaliableProficiencySkills.push_back(ATLETICS_SKILL);
    barbarian.avaliableProficiencySkills.push_back(PERCEPTION_SKILL);
    barbarian.avaliableProficiencySkills.push_back(SURVIVAL_SKILL);
    barbarian.avaliableProficiencySkills.push_back(INTIMIDATION_SKILL);
    barbarian.avaliableProficiencySkills.push_back(NATURE_SKILL);
    barbarian.avaliableProficiencySkills.push_back(ANIMAL_CARE_SKILL);

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

    fighter.savingThrows.push_back(STRENGHT_ATTRIBUTE);
    fighter.savingThrows.push_back(CONSTITUTION_ATTRIBUTE);

    fighter.avaliableProficiencySkillCount = 2;
    fighter.avaliableProficiencySkills.push_back(ACROBATICS_SKILL);
    fighter.avaliableProficiencySkills.push_back(ATLETICS_SKILL);
    fighter.avaliableProficiencySkills.push_back(PERCEPTION_SKILL);
    fighter.avaliableProficiencySkills.push_back(SURVIVAL_SKILL);
    fighter.avaliableProficiencySkills.push_back(INTIMIDATION_SKILL);
    fighter.avaliableProficiencySkills.push_back(HISTORY_SKILL);
    fighter.avaliableProficiencySkills.push_back(INSIGHT_SKILL);
    fighter.avaliableProficiencySkills.push_back(ANIMAL_CARE_SKILL);

    Class wizard;
    wizard.name = WIZARD_CLASS;
    wizard.hitPoints = 6;

    wizard.weapons.push_back(DAGGER_WEAPON);
    wizard.weapons.push_back(DART_WEAPON);
    wizard.weapons.push_back(SLING_WEAPON);
    wizard.weapons.push_back(QUARTERSTAFF_WEAPON);
    wizard.weapons.push_back(LIGHT_CROSSBOW_WEAPON);

    wizard.savingThrows.push_back(INTELLIGENCE_ATTRIBUTE);
    wizard.savingThrows.push_back(WISDOM_ATTRIBUTE);

    wizard.avaliableProficiencySkillCount = 2;
    wizard.avaliableProficiencySkills.push_back(INVESTIGATION_SKILL);
    wizard.avaliableProficiencySkills.push_back(HISTORY_SKILL);
    wizard.avaliableProficiencySkills.push_back(MAGIC_SKILL);
    wizard.avaliableProficiencySkills.push_back(MEDICINE_SKILL);
    wizard.avaliableProficiencySkills.push_back(INSIGHT_SKILL);
    wizard.avaliableProficiencySkills.push_back(RELIGION_SKILL);

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

    druid.savingThrows.push_back(INTELLIGENCE_ATTRIBUTE);
    druid.savingThrows.push_back(WISDOM_ATTRIBUTE);

    druid.avaliableProficiencySkillCount = 2;
    druid.avaliableProficiencySkills.push_back(PERCEPTION_SKILL);
    druid.avaliableProficiencySkills.push_back(SURVIVAL_SKILL);
    druid.avaliableProficiencySkills.push_back(MAGIC_SKILL);
    druid.avaliableProficiencySkills.push_back(MEDICINE_SKILL);
    druid.avaliableProficiencySkills.push_back(ANIMAL_CARE_SKILL);
    druid.avaliableProficiencySkills.push_back(NATURE_SKILL);
    druid.avaliableProficiencySkills.push_back(INSIGHT_SKILL);
    druid.avaliableProficiencySkills.push_back(RELIGION_SKILL);

    Class cleric;
    cleric.name = CLERIC_CLASS;
    cleric.hitPoints = 8;

    cleric.armorTypes.push_back(LIGHT_ARMOR_TYPE);
    cleric.armorTypes.push_back(MEDIUM_ARMOR_TYPE);
    cleric.armorTypes.push_back(SHIELD_ARMOR_TYPE);

    cleric.weaponTypes.push_back(SIMPLE_MELEE_WEAPON_TYPE);
    cleric.weaponTypes.push_back(SIMPLE_RANGED_WEAPON_TYPE);

    cleric.savingThrows.push_back(CHARISMA_ATTRIBUTE);
    cleric.savingThrows.push_back(WISDOM_ATTRIBUTE);

    cleric.avaliableProficiencySkillCount = 2;
    cleric.avaliableProficiencySkills.push_back(HISTORY_SKILL);
    cleric.avaliableProficiencySkills.push_back(MEDICINE_SKILL);
    cleric.avaliableProficiencySkills.push_back(INSIGHT_SKILL);
    cleric.avaliableProficiencySkills.push_back(RELIGION_SKILL);
    cleric.avaliableProficiencySkills.push_back(PERSUASION_SKILL);

    Class artificer;
    artificer.name = ARTIFICER_CLASS;
    artificer.hitPoints = 8;

    artificer.armorTypes.push_back(LIGHT_ARMOR_TYPE);
    artificer.armorTypes.push_back(MEDIUM_ARMOR_TYPE);
    artificer.armorTypes.push_back(SHIELD_ARMOR_TYPE);

    artificer.weaponTypes.push_back(SIMPLE_MELEE_WEAPON_TYPE);
    artificer.weaponTypes.push_back(SIMPLE_RANGED_WEAPON_TYPE);

    artificer.savingThrows.push_back(INTELLIGENCE_ATTRIBUTE);
    artificer.savingThrows.push_back(CONSTITUTION_ATTRIBUTE);

    artificer.avaliableProficiencySkillCount = 2;
    artificer.avaliableProficiencySkills.push_back(MAGIC_SKILL);
    artificer.avaliableProficiencySkills.push_back(HISTORY_SKILL);
    artificer.avaliableProficiencySkills.push_back(INVESTIGATION_SKILL);
    artificer.avaliableProficiencySkills.push_back(MEDICINE_SKILL);
    artificer.avaliableProficiencySkills.push_back(NATURE_SKILL);
    artificer.avaliableProficiencySkills.push_back(PERCEPTION_SKILL);
    artificer.avaliableProficiencySkills.push_back(SLEIGHT_OF_HAND_SKILL);

    Class warlock;
    warlock.name = WARLOCK_CLASS;
    warlock.hitPoints = 8;

    warlock.armorTypes.push_back(LIGHT_ARMOR_TYPE);

    warlock.weaponTypes.push_back(SIMPLE_MELEE_WEAPON_TYPE);
    warlock.weaponTypes.push_back(SIMPLE_RANGED_WEAPON_TYPE);

    warlock.savingThrows.push_back(CHARISMA_ATTRIBUTE);
    warlock.savingThrows.push_back(WISDOM_ATTRIBUTE);

    warlock.avaliableProficiencySkillCount = 2;
    warlock.avaliableProficiencySkills.push_back(INVESTIGATION_SKILL);
    warlock.avaliableProficiencySkills.push_back(INTIMIDATION_SKILL);
    warlock.avaliableProficiencySkills.push_back(HISTORY_SKILL);
    warlock.avaliableProficiencySkills.push_back(MAGIC_SKILL);
    warlock.avaliableProficiencySkills.push_back(DECEPTION_SKILL);
    warlock.avaliableProficiencySkills.push_back(NATURE_SKILL);
    warlock.avaliableProficiencySkills.push_back(RELIGION_SKILL);

    Class monk;
    monk.name = MONK_CLASS;
    monk.hitPoints = 8;

    monk.weaponTypes.push_back(SIMPLE_MELEE_WEAPON_TYPE);
    monk.weaponTypes.push_back(SIMPLE_RANGED_WEAPON_TYPE);

    monk.weapons.push_back(SHORTSWORD_WEAPON);

    monk.savingThrows.push_back(STRENGHT_ATTRIBUTE);
    monk.savingThrows.push_back(DEXTERITY_ATTRIBUTE);

    monk.avaliableProficiencySkillCount = 2;
    monk.avaliableProficiencySkills.push_back(ACROBATICS_SKILL);
    monk.avaliableProficiencySkills.push_back(ATLETICS_SKILL);
    monk.avaliableProficiencySkills.push_back(HISTORY_SKILL);
    monk.avaliableProficiencySkills.push_back(INSIGHT_SKILL);
    monk.avaliableProficiencySkills.push_back(RELIGION_SKILL);
    monk.avaliableProficiencySkills.push_back(STEALTH_SKILL);

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

    paladin.savingThrows.push_back(CHARISMA_ATTRIBUTE);
    paladin.savingThrows.push_back(WISDOM_ATTRIBUTE);

    paladin.avaliableProficiencySkillCount = 2;
    paladin.avaliableProficiencySkills.push_back(ATLETICS_SKILL);
    paladin.avaliableProficiencySkills.push_back(INTIMIDATION_SKILL);
    paladin.avaliableProficiencySkills.push_back(MEDICINE_SKILL);
    paladin.avaliableProficiencySkills.push_back(INSIGHT_SKILL);
    paladin.avaliableProficiencySkills.push_back(RELIGION_SKILL);
    paladin.avaliableProficiencySkills.push_back(PERSUASION_SKILL);

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

    rogue.savingThrows.push_back(INTELLIGENCE_ATTRIBUTE);
    rogue.savingThrows.push_back(DEXTERITY_ATTRIBUTE);

    rogue.avaliableProficiencySkillCount = 4;
    rogue.avaliableProficiencySkills.push_back(ACROBATICS_SKILL);
    rogue.avaliableProficiencySkills.push_back(INVESTIGATION_SKILL);
    rogue.avaliableProficiencySkills.push_back(ATLETICS_SKILL);
    rogue.avaliableProficiencySkills.push_back(PERCEPTION_SKILL);
    rogue.avaliableProficiencySkills.push_back(PERFOMANCE_SKILL);
    rogue.avaliableProficiencySkills.push_back(INTIMIDATION_SKILL);
    rogue.avaliableProficiencySkills.push_back(SLEIGHT_OF_HAND_SKILL);
    rogue.avaliableProficiencySkills.push_back(DECEPTION_SKILL);
    rogue.avaliableProficiencySkills.push_back(INSIGHT_SKILL);
    rogue.avaliableProficiencySkills.push_back(STEALTH_SKILL);
    rogue.avaliableProficiencySkills.push_back(PERSUASION_SKILL);

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

    ranger.savingThrows.push_back(STRENGHT_ATTRIBUTE);
    ranger.savingThrows.push_back(DEXTERITY_ATTRIBUTE);

    ranger.avaliableProficiencySkillCount = 3;
    ranger.avaliableProficiencySkills.push_back(INVESTIGATION_SKILL);
    ranger.avaliableProficiencySkills.push_back(ATLETICS_SKILL);
    ranger.avaliableProficiencySkills.push_back(PERCEPTION_SKILL);
    ranger.avaliableProficiencySkills.push_back(SURVIVAL_SKILL);
    ranger.avaliableProficiencySkills.push_back(NATURE_SKILL);
    ranger.avaliableProficiencySkills.push_back(INSIGHT_SKILL);
    ranger.avaliableProficiencySkills.push_back(STEALTH_SKILL);
    ranger.avaliableProficiencySkills.push_back(ANIMAL_CARE_SKILL);

    Class sorcerer;
    sorcerer.name = SORCERER_CLASS;
    sorcerer.hitPoints = 6;

    sorcerer.weapons.push_back(DAGGER_WEAPON);
    sorcerer.weapons.push_back(DART_WEAPON);
    sorcerer.weapons.push_back(SLING_WEAPON);
    sorcerer.weapons.push_back(QUARTERSTAFF_WEAPON);
    sorcerer.weapons.push_back(LIGHT_CROSSBOW_WEAPON);

    sorcerer.savingThrows.push_back(CONSTITUTION_ATTRIBUTE);
    sorcerer.savingThrows.push_back(CHARISMA_ATTRIBUTE);

    sorcerer.avaliableProficiencySkillCount = 2;
    sorcerer.avaliableProficiencySkills.push_back(INTIMIDATION_SKILL);
    sorcerer.avaliableProficiencySkills.push_back(MAGIC_SKILL);
    sorcerer.avaliableProficiencySkills.push_back(DECEPTION_SKILL);
    sorcerer.avaliableProficiencySkills.push_back(INSIGHT_SKILL);
    sorcerer.avaliableProficiencySkills.push_back(RELIGION_SKILL);
    sorcerer.avaliableProficiencySkills.push_back(PERSUASION_SKILL);

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
