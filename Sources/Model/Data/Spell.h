#ifndef SPELL_H
#define SPELL_H

#include <string>
#include <vector>

namespace RPEngine::dnd::model {
struct SpellComponents {
    bool verbal = false;
    bool somatic = false;
    bool material = false;
};

struct Spell {
    std::string name;
    std::string spellSchool;
    SpellComponents components;
    uint32_t level = 0;
};

// level 0
inline const char* ACID_SPLASH_SPELL = "Acid splash";
inline const char* MAGE_HAND_SPELL = "Magic hand";
inline const char* FRIENDS_SPELL = "Friends";
inline const char* SHILLELAGH_SPELL = "Shillelagh";
inline const char* BLADE_WARD_SPELL = "Blade ward";
inline const char* VICIOUS_MOCKERY_SPELL = "Vicious mockery";
inline const char* DRUIDCRAFT_SPELL = "Druidcraft";
inline const char* CHILL_TOUCH_SPELL = "Chill touch";
inline const char* RAY_OF_FROST_SPELL = "Ray of frost";
inline const char* MINOR_ILLUSION_SPELL = "Minor illusion";
inline const char* TRUE_STRIKE_SPELL = "True strike";
inline const char* ELDRITCH_BLAST_SPELL = "Eldritch blast";
inline const char* FIRE_BOLT_SPELL = "Fire bold";
inline const char* DANCING_LIGHTS_SPELL = "Dancing lights";
inline const char* MENDING_SPELL = "Mending";
inline const char* LIGHT_SPELL = "Light";
inline const char* SACRED_FLAME_SPELL = "Sacred flame";
inline const char* MESSAGE_SPELL = "Message";
inline const char* RESISTANCE_SPELL = "Resistance";
inline const char* PRODUCE_FLAME_SPELL = "Produce flame";
inline const char* THORN_WHIP_SPELL = "Thorn whip";
inline const char* GUIDANCE_SPELL = "Guidance";
inline const char* SPARE_THE_DYING_SPELL = "Spare the dying";
inline const char* PRESTIDIGITATION_SPELL = "Prestidigitation";
inline const char* THAUMATURGY_SPELL = "Thaumaturgy";
inline const char* SHOCKING_GRASP_SPELL = "Shocking grasp";
inline const char* POISON_SPRAY_SPELL = "Poison spray";

// level 1
inline const char* HELLISH_REBUKE_SPELL = "Hellish rebuke";
inline const char* DIVINE_FAVOR_SPELL = "Divine favor";
inline const char* WITCH_BOLT_SPELL = "Witch bolt";
inline const char* THUNDERWAVE_SPELL = "Thunderwave";
inline const char* MAGIC_MISSILE_SPELL = "Magic missile";
inline const char* WRATHFUL_SMITE_SPELL = "Wrathful smite";
inline const char* THUNDEROUS_SMITE_SPELL = "Thunderous smite";
inline const char* HEALING_WORD_SPELL = "Healing word";
inline const char* CURE_WOUNDS_SPELL = "Cure wounds";
inline const char* GUIDING_BOLT_SPELL = "Guiding bolt";
inline const char* BURNING_HANDS_SPELL = "Burning hands";
inline const char* FAIRIE_FIRE_SPELL = "Faerie fire";
inline const char* SEARING_SMITE_SPELL = "Searing smite";
inline const char* CHROMATIC_ORB_SPELL = "Chromatic orb";
inline const char* HAIL_OF_THORNS_SPELL = "Hail of thorns";
inline const char* UNSEEN_SERVANT_SPELL = "Unseen servant";
inline const char* ENTANGLE_SPELL = "Entangle";
inline const char* ENSARING_STRIKE_SPELL = "Ensnaring strike";
inline const char* FIND_FAMILIAR_SPELL = "Find familiar";
inline const char* ARMS_OF_HADAR_SPELL = "Arms of Hadar";
inline const char* GREASE_SPELL = "Grease";
inline const char* TENSERS_FLOATING_DISK_SPELL = "Tenser’s floating disk";
inline const char* FOG_CLOUD_SPELL = "Fog cloud";
inline const char* SILENT_IMAGE_SPELL = "Silent image";
inline const char* DISGUISE_SELF_SPELL = "Disguise self";
inline const char* ILLUSORY_SCRIPT_SPELL = "Illusory script";
inline const char* COLOR_SPRAY_SPELL = "Color spray";
inline const char* RAY_OF_SICKNESS_SPELL = "Ray of sickness";
inline const char* INFLICT_WOUNDS_SPELL = "Inflict wounds";
inline const char* FALSE_LIFE_SPELL = "False life";
inline const char* ARMOR_OF_AGATHYS_SPELL = "Armor of Agathys";
inline const char* MAGE_ARMOR_SPELL = "Mage armor";
inline const char* PROTECTION_FROM_EVIL_AND_GOOD_SPELL = "Protection from evil and good";
inline const char* ALARM_SPELL = "Alarm";
inline const char* SANCTUAR_SPELL = "Sanctuar";
inline const char* SHIELD_SPELL = "Shield";
inline const char* SHIELD_OF_FAITH_SPELL = "Shield of faith";
inline const char* BLESS_SPELL = "Bless";
inline const char* COMPELLED_DUEL_SPELL = "Compelled duel";
inline const char* HEROISM_SPELL = "Heroism";
inline const char* DISSONANT_WHISPERS_SPELL = "Dissonant whispers";
inline const char* ANIMAL_FRIENDSHIP_SPELL = "Animal friendship";
inline const char* TASHAS_HIDEOUS_LAUGHTER_SPELL = "Tasha's hideous laughter";
inline const char* CHARM_PERSON_SPELL = "Charm person";
inline const char* BANE_SPELL = "Bane";
inline const char* COMMAND_SPELL = "Command";
inline const char* HEX_SPELL = "Hex";
inline const char* SLEEP_SPELL = "Sleep";
inline const char* PURIFY_FOOD_AND_DRINK_SPELL = "Purify food and drink";
inline const char* FEATHER_FALL_SPELL = "Feather fall";
inline const char* EXPEDITIOUS_RETREAT_SPELL = "Expeditious retreat";
inline const char* JUMP_SPELL = "Jump";
inline const char* LONGSTRIDER_SPELL = "Longstrider";
inline const char* CREATE_OR_DESTROY_WATER_SPELL = "Create or destroy water";
inline const char* GOODBERRY_SPELL = "Goodberry";
inline const char* HUNTERS_MARK_SPELL = "Hunter's mark";
inline const char* DETECT_POISON_AND_DISEASE_SPELL = "Detect poison and disease";
inline const char* DETECT_EVIL_AND_GOOD_SPELL = "Detect evil and good";
inline const char* DETECT_MAGIC_SPELL = "Detect magic";
inline const char* IDENTIFY_SPELL = "Identify";
inline const char* COMPREHEND_LANGUAGES_SPELL = "Comprehend languages";
inline const char* SPEAK_WITH_ANIMALS_SPELL = "Speak with animals";

std::vector<Spell> getDefaultSpells();
}

#endif // SPELL_H
