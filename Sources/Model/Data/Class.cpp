#include "Class.h"
#include "ArmorType.h"
#include "Weapon.h"
#include "WeaponType.h"
#include "Attribute.h"
#include "Skill.h"
#include "Spell.h"

namespace RPEngine::dnd::model {
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

    bard.skills.push_back(ATLETICS_SKILL);
    bard.skills.push_back(ACROBATICS_SKILL);
    bard.skills.push_back(SLEIGHT_OF_HAND_SKILL);
    bard.skills.push_back(STEALTH_SKILL);
    bard.skills.push_back(HISTORY_SKILL);
    bard.skills.push_back(MAGIC_SKILL);
    bard.skills.push_back(NATURE_SKILL);
    bard.skills.push_back(INVESTIGATION_SKILL);
    bard.skills.push_back(RELIGION_SKILL);
    bard.skills.push_back(PERCEPTION_SKILL);
    bard.skills.push_back(SURVIVAL_SKILL);
    bard.skills.push_back(MEDICINE_SKILL);
    bard.skills.push_back(INSIGHT_SKILL);
    bard.skills.push_back(ANIMAL_CARE_SKILL);
    bard.skills.push_back(PERFOMANCE_SKILL);
    bard.skills.push_back(INTIMIDATION_SKILL);
    bard.skills.push_back(DECEPTION_SKILL);
    bard.skills.push_back(PERSUASION_SKILL);

    bard.skillCount = 3;

    bard.spells.push_back(MAGE_HAND_SPELL);
    bard.spells.push_back(FRIENDS_SPELL);
    bard.spells.push_back(BLADE_WARD_SPELL);
    bard.spells.push_back(VICIOUS_MOCKERY_SPELL);
    bard.spells.push_back(MINOR_ILLUSION_SPELL);
    bard.spells.push_back(TRUE_STRIKE_SPELL);
    bard.spells.push_back(DANCING_LIGHTS_SPELL);
    bard.spells.push_back(MENDING_SPELL);
    bard.spells.push_back(LIGHT_SPELL);
    bard.spells.push_back(MESSAGE_SPELL);
    bard.spells.push_back(PRESTIDIGITATION_SPELL);

    bard.spells.push_back(THUNDERWAVE_SPELL);
    bard.spells.push_back(HEALING_WORD_SPELL);
    bard.spells.push_back(CURE_WOUNDS_SPELL);
    bard.spells.push_back(FAIRIE_FIRE_SPELL);
    bard.spells.push_back(UNSEEN_SERVANT_SPELL);
    bard.spells.push_back(SILENT_IMAGE_SPELL);
    bard.spells.push_back(DISGUISE_SELF_SPELL);
    bard.spells.push_back(ILLUSORY_SCRIPT_SPELL);
    bard.spells.push_back(COLOR_SPRAY_SPELL);
    bard.spells.push_back(DISSONANT_WHISPERS_SPELL);
    bard.spells.push_back(ANIMAL_FRIENDSHIP_SPELL);
    bard.spells.push_back(TASHAS_HIDEOUS_LAUGHTER_SPELL);
    bard.spells.push_back(CHARM_PERSON_SPELL);
    bard.spells.push_back(BANE_SPELL);
    bard.spells.push_back(COMMAND_SPELL);
    bard.spells.push_back(SLEEP_SPELL);
    bard.spells.push_back(FEATHER_FALL_SPELL);
    bard.spells.push_back(LONGSTRIDER_SPELL);
    bard.spells.push_back(DETECT_MAGIC_SPELL);
    bard.spells.push_back(IDENTIFY_SPELL);
    bard.spells.push_back(COMPREHEND_LANGUAGES_SPELL);
    bard.spells.push_back(SPEAK_WITH_ANIMALS_SPELL);

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

    barbarian.skills.push_back(ATLETICS_SKILL);
    barbarian.skills.push_back(PERCEPTION_SKILL);
    barbarian.skills.push_back(SURVIVAL_SKILL);
    barbarian.skills.push_back(INTIMIDATION_SKILL);
    barbarian.skills.push_back(NATURE_SKILL);
    barbarian.skills.push_back(ANIMAL_CARE_SKILL);

    barbarian.skillCount = 2;


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

    fighter.skills.push_back(ACROBATICS_SKILL);
    fighter.skills.push_back(ATLETICS_SKILL);
    fighter.skills.push_back(PERCEPTION_SKILL);
    fighter.skills.push_back(SURVIVAL_SKILL);
    fighter.skills.push_back(INTIMIDATION_SKILL);
    fighter.skills.push_back(HISTORY_SKILL);
    fighter.skills.push_back(INSIGHT_SKILL);
    fighter.skills.push_back(ANIMAL_CARE_SKILL);

    fighter.skillCount = 2;

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

    wizard.skills.push_back(INVESTIGATION_SKILL);
    wizard.skills.push_back(HISTORY_SKILL);
    wizard.skills.push_back(MAGIC_SKILL);
    wizard.skills.push_back(MEDICINE_SKILL);
    wizard.skills.push_back(INSIGHT_SKILL);
    wizard.skills.push_back(RELIGION_SKILL);

    wizard.skillCount = 2;

    wizard.spells.push_back(ACID_SPLASH_SPELL);
    wizard.spells.push_back(MAGE_HAND_SPELL);
    wizard.spells.push_back(FRIENDS_SPELL);
    wizard.spells.push_back(BLADE_WARD_SPELL);
    wizard.spells.push_back(CHILL_TOUCH_SPELL);
    wizard.spells.push_back(RAY_OF_FROST_SPELL);
    wizard.spells.push_back(MINOR_ILLUSION_SPELL);
    wizard.spells.push_back(TRUE_STRIKE_SPELL);
    wizard.spells.push_back(FIRE_BOLT_SPELL);
    wizard.spells.push_back(DANCING_LIGHTS_SPELL);
    wizard.spells.push_back(MENDING_SPELL);
    wizard.spells.push_back(LIGHT_SPELL);
    wizard.spells.push_back(MESSAGE_SPELL);
    wizard.spells.push_back(PRESTIDIGITATION_SPELL);
    wizard.spells.push_back(SHOCKING_GRASP_SPELL);
    wizard.spells.push_back(POISON_SPRAY_SPELL);

    wizard.spells.push_back(WITCH_BOLT_SPELL);
    wizard.spells.push_back(THUNDERWAVE_SPELL);
    wizard.spells.push_back(MAGIC_MISSILE_SPELL);
    wizard.spells.push_back(BURNING_HANDS_SPELL);
    wizard.spells.push_back(CHROMATIC_ORB_SPELL);
    wizard.spells.push_back(UNSEEN_SERVANT_SPELL);
    wizard.spells.push_back(FIND_FAMILIAR_SPELL);
    wizard.spells.push_back(GREASE_SPELL);
    wizard.spells.push_back(TENSERS_FLOATING_DISK_SPELL);
    wizard.spells.push_back(FOG_CLOUD_SPELL);
    wizard.spells.push_back(SILENT_IMAGE_SPELL);
    wizard.spells.push_back(DISGUISE_SELF_SPELL);
    wizard.spells.push_back(ILLUSORY_SCRIPT_SPELL);
    wizard.spells.push_back(COLOR_SPRAY_SPELL);
    wizard.spells.push_back(RAY_OF_SICKNESS_SPELL);
    wizard.spells.push_back(FALSE_LIFE_SPELL);
    wizard.spells.push_back(MAGE_ARMOR_SPELL);
    wizard.spells.push_back(PROTECTION_FROM_EVIL_AND_GOOD_SPELL);
    wizard.spells.push_back(ALARM_SPELL);
    wizard.spells.push_back(SHIELD_SPELL);
    wizard.spells.push_back(TASHAS_HIDEOUS_LAUGHTER_SPELL);
    wizard.spells.push_back(CHARM_PERSON_SPELL);
    wizard.spells.push_back(SLEEP_SPELL);
    wizard.spells.push_back(FEATHER_FALL_SPELL);
    wizard.spells.push_back(EXPEDITIOUS_RETREAT_SPELL);
    wizard.spells.push_back(JUMP_SPELL);
    wizard.spells.push_back(LONGSTRIDER_SPELL);
    wizard.spells.push_back(DETECT_MAGIC_SPELL);
    wizard.spells.push_back(IDENTIFY_SPELL);
    wizard.spells.push_back(COMPREHEND_LANGUAGES_SPELL);

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

    druid.skills.push_back(PERCEPTION_SKILL);
    druid.skills.push_back(SURVIVAL_SKILL);
    druid.skills.push_back(MAGIC_SKILL);
    druid.skills.push_back(MEDICINE_SKILL);
    druid.skills.push_back(ANIMAL_CARE_SKILL);
    druid.skills.push_back(NATURE_SKILL);
    druid.skills.push_back(INSIGHT_SKILL);
    druid.skills.push_back(RELIGION_SKILL);

    druid.skillCount = 2;

    druid.spells.push_back(SHILLELAGH_SPELL);
    druid.spells.push_back(DRUIDCRAFT_SPELL);
    druid.spells.push_back(MENDING_SPELL);
    druid.spells.push_back(RESISTANCE_SPELL);
    druid.spells.push_back(PRODUCE_FLAME_SPELL);
    druid.spells.push_back(THORN_WHIP_SPELL);
    druid.spells.push_back(GUIDANCE_SPELL);
    druid.spells.push_back(POISON_SPRAY_SPELL);

    druid.spells.push_back(THUNDERWAVE_SPELL);
    druid.spells.push_back(HEALING_WORD_SPELL);
    druid.spells.push_back(CURE_WOUNDS_SPELL);
    druid.spells.push_back(FAIRIE_FIRE_SPELL);
    druid.spells.push_back(ENTANGLE_SPELL);
    druid.spells.push_back(FOG_CLOUD_SPELL);
    druid.spells.push_back(PROTECTION_FROM_EVIL_AND_GOOD_SPELL);
    druid.spells.push_back(ANIMAL_FRIENDSHIP_SPELL);
    druid.spells.push_back(CHARM_PERSON_SPELL);
    druid.spells.push_back(PURIFY_FOOD_AND_DRINK_SPELL);
    druid.spells.push_back(JUMP_SPELL);
    druid.spells.push_back(LONGSTRIDER_SPELL);
    druid.spells.push_back(CREATE_OR_DESTROY_WATER_SPELL);
    druid.spells.push_back(GOODBERRY_SPELL);
    druid.spells.push_back(DETECT_POISON_AND_DISEASE_SPELL);
    druid.spells.push_back(DETECT_MAGIC_SPELL);
    druid.spells.push_back(SPEAK_WITH_ANIMALS_SPELL);

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

    cleric.skills.push_back(HISTORY_SKILL);
    cleric.skills.push_back(MEDICINE_SKILL);
    cleric.skills.push_back(INSIGHT_SKILL);
    cleric.skills.push_back(RELIGION_SKILL);
    cleric.skills.push_back(PERSUASION_SKILL);

    cleric.skillCount = 2;

    cleric.spells.push_back(MENDING_SPELL);
    cleric.spells.push_back(LIGHT_SPELL);
    cleric.spells.push_back(SACRED_FLAME_SPELL);
    cleric.spells.push_back(RESISTANCE_SPELL);
    cleric.spells.push_back(GUIDANCE_SPELL);
    cleric.spells.push_back(SPARE_THE_DYING_SPELL);
    cleric.spells.push_back(THAUMATURGY_SPELL);

    cleric.spells.push_back(HEALING_WORD_SPELL);
    cleric.spells.push_back(CURE_WOUNDS_SPELL);
    cleric.spells.push_back(GUIDING_BOLT_SPELL);
    cleric.spells.push_back(INFLICT_WOUNDS_SPELL);
    cleric.spells.push_back(PROTECTION_FROM_EVIL_AND_GOOD_SPELL);
    cleric.spells.push_back(SANCTUAR_SPELL);
    cleric.spells.push_back(SHIELD_OF_FAITH_SPELL);
    cleric.spells.push_back(BLESS_SPELL);
    cleric.spells.push_back(BANE_SPELL);
    cleric.spells.push_back(COMMAND_SPELL);
    cleric.spells.push_back(PURIFY_FOOD_AND_DRINK_SPELL);
    cleric.spells.push_back(CREATE_OR_DESTROY_WATER_SPELL);
    cleric.spells.push_back(DETECT_POISON_AND_DISEASE_SPELL);
    cleric.spells.push_back(DETECT_EVIL_AND_GOOD_SPELL);
    cleric.spells.push_back(DETECT_MAGIC_SPELL);

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

    artificer.skills.push_back(MAGIC_SKILL);
    artificer.skills.push_back(HISTORY_SKILL);
    artificer.skills.push_back(INVESTIGATION_SKILL);
    artificer.skills.push_back(MEDICINE_SKILL);
    artificer.skills.push_back(NATURE_SKILL);
    artificer.skills.push_back(PERCEPTION_SKILL);
    artificer.skills.push_back(SLEIGHT_OF_HAND_SKILL);

    artificer.skillCount = 2;

    artificer.spells.push_back(ACID_SPLASH_SPELL);
    artificer.spells.push_back(MAGE_HAND_SPELL);
    artificer.spells.push_back(RAY_OF_FROST_SPELL);
    artificer.spells.push_back(FIRE_BOLT_SPELL);
    artificer.spells.push_back(DANCING_LIGHTS_SPELL);
    artificer.spells.push_back(MENDING_SPELL);
    artificer.spells.push_back(LIGHT_SPELL);
    artificer.spells.push_back(MESSAGE_SPELL);
    artificer.spells.push_back(RESISTANCE_SPELL);
    artificer.spells.push_back(THORN_WHIP_SPELL);
    artificer.spells.push_back(GUIDANCE_SPELL);
    artificer.spells.push_back(SPARE_THE_DYING_SPELL);
    artificer.spells.push_back(PRESTIDIGITATION_SPELL);
    artificer.spells.push_back(SHOCKING_GRASP_SPELL);
    artificer.spells.push_back(POISON_SPRAY_SPELL);

    artificer.spells.push_back(CURE_WOUNDS_SPELL);
    artificer.spells.push_back(FAIRIE_FIRE_SPELL);
    artificer.spells.push_back(GREASE_SPELL);
    artificer.spells.push_back(DISGUISE_SELF_SPELL);
    artificer.spells.push_back(FALSE_LIFE_SPELL);
    artificer.spells.push_back(ALARM_SPELL);
    artificer.spells.push_back(SANCTUAR_SPELL);
    artificer.spells.push_back(PURIFY_FOOD_AND_DRINK_SPELL);
    artificer.spells.push_back(FEATHER_FALL_SPELL);
    artificer.spells.push_back(EXPEDITIOUS_RETREAT_SPELL);
    artificer.spells.push_back(JUMP_SPELL);
    artificer.spells.push_back(LONGSTRIDER_SPELL);
    artificer.spells.push_back(DETECT_MAGIC_SPELL);
    artificer.spells.push_back(IDENTIFY_SPELL);

    Class warlock;
    warlock.name = WARLOCK_CLASS;
    warlock.hitPoints = 8;

    warlock.armorTypes.push_back(LIGHT_ARMOR_TYPE);

    warlock.weaponTypes.push_back(SIMPLE_MELEE_WEAPON_TYPE);
    warlock.weaponTypes.push_back(SIMPLE_RANGED_WEAPON_TYPE);

    warlock.savingThrows.push_back(CHARISMA_ATTRIBUTE);
    warlock.savingThrows.push_back(WISDOM_ATTRIBUTE);

    warlock.skills.push_back(INVESTIGATION_SKILL);
    warlock.skills.push_back(INTIMIDATION_SKILL);
    warlock.skills.push_back(HISTORY_SKILL);
    warlock.skills.push_back(MAGIC_SKILL);
    warlock.skills.push_back(DECEPTION_SKILL);
    warlock.skills.push_back(NATURE_SKILL);
    warlock.skills.push_back(RELIGION_SKILL);

    warlock.skillCount = 2;

    warlock.spells.push_back(MAGE_HAND_SPELL);
    warlock.spells.push_back(FRIENDS_SPELL);
    warlock.spells.push_back(BLADE_WARD_SPELL);
    warlock.spells.push_back(CHILL_TOUCH_SPELL);
    warlock.spells.push_back(MINOR_ILLUSION_SPELL);
    warlock.spells.push_back(TRUE_STRIKE_SPELL);
    warlock.spells.push_back(ELDRITCH_BLAST_SPELL);
    warlock.spells.push_back(PRESTIDIGITATION_SPELL);
    warlock.spells.push_back(POISON_SPRAY_SPELL);

    warlock.spells.push_back(HELLISH_REBUKE_SPELL);
    warlock.spells.push_back(WITCH_BOLT_SPELL);
    warlock.spells.push_back(UNSEEN_SERVANT_SPELL);
    warlock.spells.push_back(ARMS_OF_HADAR_SPELL);
    warlock.spells.push_back(ILLUSORY_SCRIPT_SPELL);
    warlock.spells.push_back(ARMOR_OF_AGATHYS_SPELL);
    warlock.spells.push_back(PROTECTION_FROM_EVIL_AND_GOOD_SPELL);
    warlock.spells.push_back(CHARM_PERSON_SPELL);
    warlock.spells.push_back(HEX_SPELL);
    warlock.spells.push_back(EXPEDITIOUS_RETREAT_SPELL);
    warlock.spells.push_back(COMPREHEND_LANGUAGES_SPELL);

    Class monk;
    monk.name = MONK_CLASS;
    monk.hitPoints = 8;

    monk.weaponTypes.push_back(SIMPLE_MELEE_WEAPON_TYPE);
    monk.weaponTypes.push_back(SIMPLE_RANGED_WEAPON_TYPE);

    monk.weapons.push_back(SHORTSWORD_WEAPON);

    monk.savingThrows.push_back(STRENGHT_ATTRIBUTE);
    monk.savingThrows.push_back(DEXTERITY_ATTRIBUTE);

    monk.skills.push_back(ACROBATICS_SKILL);
    monk.skills.push_back(ATLETICS_SKILL);
    monk.skills.push_back(HISTORY_SKILL);
    monk.skills.push_back(INSIGHT_SKILL);
    monk.skills.push_back(RELIGION_SKILL);
    monk.skills.push_back(STEALTH_SKILL);

    monk.skillCount = 2;

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

    paladin.skills.push_back(ATLETICS_SKILL);
    paladin.skills.push_back(INTIMIDATION_SKILL);
    paladin.skills.push_back(MEDICINE_SKILL);
    paladin.skills.push_back(INSIGHT_SKILL);
    paladin.skills.push_back(RELIGION_SKILL);
    paladin.skills.push_back(PERSUASION_SKILL);

    paladin.skillCount = 2;

    paladin.spells.push_back(DIVINE_FAVOR_SPELL);
    paladin.spells.push_back(WRATHFUL_SMITE_SPELL);
    paladin.spells.push_back(THUNDEROUS_SMITE_SPELL);
    paladin.spells.push_back(CURE_WOUNDS_SPELL);
    paladin.spells.push_back(SEARING_SMITE_SPELL);
    paladin.spells.push_back(PROTECTION_FROM_EVIL_AND_GOOD_SPELL);
    paladin.spells.push_back(SHIELD_OF_FAITH_SPELL);
    paladin.spells.push_back(BLESS_SPELL);
    paladin.spells.push_back(COMPELLED_DUEL_SPELL);
    paladin.spells.push_back(HEROISM_SPELL);
    paladin.spells.push_back(COMMAND_SPELL);
    paladin.spells.push_back(PURIFY_FOOD_AND_DRINK_SPELL);
    paladin.spells.push_back(DETECT_POISON_AND_DISEASE_SPELL);
    paladin.spells.push_back(DETECT_EVIL_AND_GOOD_SPELL);
    paladin.spells.push_back(DETECT_MAGIC_SPELL);

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

    rogue.skills.push_back(ACROBATICS_SKILL);
    rogue.skills.push_back(INVESTIGATION_SKILL);
    rogue.skills.push_back(ATLETICS_SKILL);
    rogue.skills.push_back(PERCEPTION_SKILL);
    rogue.skills.push_back(PERFOMANCE_SKILL);
    rogue.skills.push_back(INTIMIDATION_SKILL);
    rogue.skills.push_back(SLEIGHT_OF_HAND_SKILL);
    rogue.skills.push_back(DECEPTION_SKILL);
    rogue.skills.push_back(INSIGHT_SKILL);
    rogue.skills.push_back(STEALTH_SKILL);
    rogue.skills.push_back(PERSUASION_SKILL);

    rogue.skillCount = 4;

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

    ranger.skills.push_back(INVESTIGATION_SKILL);
    ranger.skills.push_back(ATLETICS_SKILL);
    ranger.skills.push_back(PERCEPTION_SKILL);
    ranger.skills.push_back(SURVIVAL_SKILL);
    ranger.skills.push_back(NATURE_SKILL);
    ranger.skills.push_back(INSIGHT_SKILL);
    ranger.skills.push_back(STEALTH_SKILL);
    ranger.skills.push_back(ANIMAL_CARE_SKILL);

    ranger.skillCount = 3;

    ranger.spells.push_back(CURE_WOUNDS_SPELL);
    ranger.spells.push_back(SEARING_SMITE_SPELL);
    ranger.spells.push_back(HAIL_OF_THORNS_SPELL);
    ranger.spells.push_back(ENTANGLE_SPELL);
    ranger.spells.push_back(ENSARING_STRIKE_SPELL);
    ranger.spells.push_back(FOG_CLOUD_SPELL);
    ranger.spells.push_back(ALARM_SPELL);
    ranger.spells.push_back(ANIMAL_FRIENDSHIP_SPELL);
    ranger.spells.push_back(JUMP_SPELL);
    ranger.spells.push_back(LONGSTRIDER_SPELL);
    ranger.spells.push_back(GOODBERRY_SPELL);
    ranger.spells.push_back(HUNTERS_MARK_SPELL);
    ranger.spells.push_back(DETECT_POISON_AND_DISEASE_SPELL);
    ranger.spells.push_back(DETECT_MAGIC_SPELL);
    ranger.spells.push_back(SPEAK_WITH_ANIMALS_SPELL);

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

    sorcerer.skills.push_back(INTIMIDATION_SKILL);
    sorcerer.skills.push_back(MAGIC_SKILL);
    sorcerer.skills.push_back(DECEPTION_SKILL);
    sorcerer.skills.push_back(INSIGHT_SKILL);
    sorcerer.skills.push_back(RELIGION_SKILL);
    sorcerer.skills.push_back(PERSUASION_SKILL);

    sorcerer.skillCount = 2;

    sorcerer.spells.push_back(ACID_SPLASH_SPELL);
    sorcerer.spells.push_back(MAGE_HAND_SPELL);
    sorcerer.spells.push_back(FRIENDS_SPELL);
    sorcerer.spells.push_back(BLADE_WARD_SPELL);
    sorcerer.spells.push_back(CHILL_TOUCH_SPELL);
    sorcerer.spells.push_back(RAY_OF_FROST_SPELL);
    sorcerer.spells.push_back(MINOR_ILLUSION_SPELL);
    sorcerer.spells.push_back(TRUE_STRIKE_SPELL);
    sorcerer.spells.push_back(FIRE_BOLT_SPELL);
    sorcerer.spells.push_back(DANCING_LIGHTS_SPELL);
    sorcerer.spells.push_back(MENDING_SPELL);
    sorcerer.spells.push_back(LIGHT_SPELL);
    sorcerer.spells.push_back(MESSAGE_SPELL);
    sorcerer.spells.push_back(PRESTIDIGITATION_SPELL);
    sorcerer.spells.push_back(SHOCKING_GRASP_SPELL);
    sorcerer.spells.push_back(POISON_SPRAY_SPELL);

    sorcerer.spells.push_back(WITCH_BOLT_SPELL);
    sorcerer.spells.push_back(THUNDERWAVE_SPELL);
    sorcerer.spells.push_back(MAGIC_MISSILE_SPELL);
    sorcerer.spells.push_back(SEARING_SMITE_SPELL);
    sorcerer.spells.push_back(CHROMATIC_ORB_SPELL);
    sorcerer.spells.push_back(GREASE_SPELL);
    sorcerer.spells.push_back(FOG_CLOUD_SPELL);
    sorcerer.spells.push_back(SILENT_IMAGE_SPELL);
    sorcerer.spells.push_back(DISGUISE_SELF_SPELL);
    sorcerer.spells.push_back(COLOR_SPRAY_SPELL);
    sorcerer.spells.push_back(RAY_OF_SICKNESS_SPELL);
    sorcerer.spells.push_back(FALSE_LIFE_SPELL);
    sorcerer.spells.push_back(MAGE_ARMOR_SPELL);
    sorcerer.spells.push_back(SHIELD_SPELL);
    sorcerer.spells.push_back(CHARM_PERSON_SPELL);
    sorcerer.spells.push_back(SLEEP_SPELL);
    sorcerer.spells.push_back(FEATHER_FALL_SPELL);
    sorcerer.spells.push_back(EXPEDITIOUS_RETREAT_SPELL);
    sorcerer.spells.push_back(JUMP_SPELL);
    sorcerer.spells.push_back(DETECT_MAGIC_SPELL);
    sorcerer.spells.push_back(COMPREHEND_LANGUAGES_SPELL);


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
