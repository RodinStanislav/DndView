#include "Spell.h"
#include "SpellSchool.h"

namespace RPEngine::dnd::model {
std::vector<Spell> getDefaultSpells() {
    std::vector<Spell> spells;

    spells.push_back(Spell{ACID_SPLASH_SPELL, EVOCATION_SPELL_SCHOOL, {}, 0});
    spells.push_back(Spell{RAY_OF_FROST_SPELL, EVOCATION_SPELL_SCHOOL, {}, 0});
    spells.push_back(Spell{ELDRITCH_BLAST_SPELL, EVOCATION_SPELL_SCHOOL, {}, 0});
    spells.push_back(Spell{FIRE_BOLT_SPELL, EVOCATION_SPELL_SCHOOL, {}, 0});
    spells.push_back(Spell{DANCING_LIGHTS_SPELL, EVOCATION_SPELL_SCHOOL, {}, 0});
    spells.push_back(Spell{LIGHT_SPELL, EVOCATION_SPELL_SCHOOL, {}, 0});
    spells.push_back(Spell{SACRED_FLAME_SPELL, EVOCATION_SPELL_SCHOOL, {}, 0});
    spells.push_back(Spell{SHOCKING_GRASP_SPELL, EVOCATION_SPELL_SCHOOL, {}, 0});
    spells.push_back(Spell{MAGE_HAND_SPELL, CONJURATION_SPELL_SCHOOL, {}, 0});
    spells.push_back(Spell{PRODUCE_FLAME_SPELL, CONJURATION_SPELL_SCHOOL, {}, 0});
    spells.push_back(Spell{POISON_SPRAY_SPELL, CONJURATION_SPELL_SCHOOL, {}, 0});
    spells.push_back(Spell{MINOR_ILLUSION_SPELL, ILLUSION_SPELL_SCHOOL, {}, 0});
    spells.push_back(Spell{CHILL_TOUCH_SPELL, NECROMANCY_SPELL_SCHOOL, {}, 0});
    spells.push_back(Spell{SPARE_THE_DYING_SPELL, NECROMANCY_SPELL_SCHOOL, {}, 0});
    spells.push_back(Spell{BLADE_WARD_SPELL, ABJURATION_SPELL_SCHOOL, {}, 0});
    spells.push_back(Spell{RESISTANCE_SPELL, ABJURATION_SPELL_SCHOOL, {}, 0});
    spells.push_back(Spell{FRIENDS_SPELL, ENCHANTMENT_SPELL_SCHOOL, {}, 0});
    spells.push_back(Spell{VICIOUS_MOCKERY_SPELL, ENCHANTMENT_SPELL_SCHOOL, {}, 0});
    spells.push_back(Spell{SHILLELAGH_SPELL, TRANSMUTATION_SPELL_SCHOOL, {}, 0});
    spells.push_back(Spell{DRUIDCRAFT_SPELL, TRANSMUTATION_SPELL_SCHOOL, {}, 0});
    spells.push_back(Spell{MENDING_SPELL, TRANSMUTATION_SPELL_SCHOOL, {}, 0});
    spells.push_back(Spell{MESSAGE_SPELL, TRANSMUTATION_SPELL_SCHOOL, {}, 0});
    spells.push_back(Spell{THORN_WHIP_SPELL, TRANSMUTATION_SPELL_SCHOOL, {}, 0});
    spells.push_back(Spell{PRESTIDIGITATION_SPELL, TRANSMUTATION_SPELL_SCHOOL, {}, 0});
    spells.push_back(Spell{THAUMATURGY_SPELL, TRANSMUTATION_SPELL_SCHOOL, {}, 0});
    spells.push_back(Spell{TRUE_STRIKE_SPELL, DIVINATION_SPELL_SCHOOL, {}, 0});
    spells.push_back(Spell{GUIDANCE_SPELL, DIVINATION_SPELL_SCHOOL, {}, 0});

    spells.push_back(Spell{HELLISH_REBUKE_SPELL, EVOCATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{DIVINE_FAVOR_SPELL, EVOCATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{WITCH_BOLT_SPELL, EVOCATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{THUNDERWAVE_SPELL, EVOCATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{MAGIC_MISSILE_SPELL, EVOCATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{WRATHFUL_SMITE_SPELL, EVOCATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{THUNDEROUS_SMITE_SPELL, EVOCATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{HEALING_WORD_SPELL, EVOCATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{CURE_WOUNDS_SPELL, EVOCATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{GUIDING_BOLT_SPELL, EVOCATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{BURNING_HANDS_SPELL, EVOCATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{FAIRIE_FIRE_SPELL, EVOCATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{SEARING_SMITE_SPELL, EVOCATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{CHROMATIC_ORB_SPELL, EVOCATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{HAIL_OF_THORNS_SPELL, CONJURATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{UNSEEN_SERVANT_SPELL, CONJURATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{ENTANGLE_SPELL, CONJURATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{ENSARING_STRIKE_SPELL, CONJURATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{FIND_FAMILIAR_SPELL, CONJURATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{ARMS_OF_HADAR_SPELL, CONJURATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{GREASE_SPELL, CONJURATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{TENSERS_FLOATING_DISK_SPELL, CONJURATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{FOG_CLOUD_SPELL, CONJURATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{SILENT_IMAGE_SPELL, ILLUSION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{DISGUISE_SELF_SPELL, ILLUSION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{ILLUSORY_SCRIPT_SPELL, ILLUSION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{COLOR_SPRAY_SPELL, ILLUSION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{RAY_OF_SICKNESS_SPELL, NECROMANCY_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{INFLICT_WOUNDS_SPELL, NECROMANCY_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{FALSE_LIFE_SPELL, NECROMANCY_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{ARMOR_OF_AGATHYS_SPELL, ABJURATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{MAGE_ARMOR_SPELL, ABJURATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{PROTECTION_FROM_EVIL_AND_GOOD_SPELL, ABJURATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{ALARM_SPELL, ABJURATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{SANCTUAR_SPELL, ABJURATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{SHIELD_SPELL, ABJURATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{SHIELD_OF_FAITH_SPELL, ABJURATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{BLESS_SPELL, ENCHANTMENT_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{COMPELLED_DUEL_SPELL, ENCHANTMENT_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{HEROISM_SPELL, ENCHANTMENT_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{DISSONANT_WHISPERS_SPELL, ENCHANTMENT_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{ANIMAL_FRIENDSHIP_SPELL, ENCHANTMENT_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{TASHAS_HIDEOUS_LAUGHTER_SPELL, ENCHANTMENT_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{CHARM_PERSON_SPELL, ENCHANTMENT_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{BANE_SPELL, ENCHANTMENT_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{COMMAND_SPELL, ENCHANTMENT_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{HEX_SPELL, ENCHANTMENT_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{SLEEP_SPELL, ENCHANTMENT_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{PURIFY_FOOD_AND_DRINK_SPELL, TRANSMUTATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{FEATHER_FALL_SPELL, TRANSMUTATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{EXPEDITIOUS_RETREAT_SPELL, TRANSMUTATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{JUMP_SPELL, TRANSMUTATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{LONGSTRIDER_SPELL, TRANSMUTATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{CREATE_OR_DESTROY_WATER_SPELL, TRANSMUTATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{GOODBERRY_SPELL, TRANSMUTATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{HUNTERS_MARK_SPELL, DIVINATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{DETECT_POISON_AND_DISEASE_SPELL, DIVINATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{DETECT_EVIL_AND_GOOD_SPELL, DIVINATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{DETECT_MAGIC_SPELL, DIVINATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{IDENTIFY_SPELL, DIVINATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{COMPREHEND_LANGUAGES_SPELL, DIVINATION_SPELL_SCHOOL, {}, 1});
    spells.push_back(Spell{SPEAK_WITH_ANIMALS_SPELL, DIVINATION_SPELL_SCHOOL, {}, 1});

    return spells;
}
}
