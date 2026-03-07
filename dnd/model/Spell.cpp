#include "Spell.h"
#include "SpellSchool.h"

namespace dnd::model {
const char* ACID_SPLASH_SPELL = "Acid splash";
const char* MAGE_HAND_SPELL = "Magic hand";
const char* FRIENDS_SPELL = "Friends";
const char* SHILLELAGH_SPELL = "Shillelagh";
const char* BLADE_WARD_SPELL = "Blade ward";
const char* VICIOUS_MOCKERY_SPELL = "Vicious mockery";
const char* DRUIDCRAFT_SPELL = "Druidcraft";
const char* CHILL_TOUCH_SPELL = "Chill touch";
const char* RAY_OF_FROST_SPELL = "Ray of frost";
const char* MINOR_ILLUSION_SPELL = "Minor illusion";
const char* TRUE_STRIKE_SPELL = "True strike";
const char* ELDRITCH_BLAST_SPELL = "Eldritch blast";
const char* FIRE_BOLT_SPELL = "Fire bold";
const char* DANCING_LIGHTS_SPELL = "Dancing lights";
const char* MENDING_SPELL = "Mending";
const char* LIGHT_SPELL = "Light";
const char* SACRED_FLAME_SPELL = "Sacred flame";
const char* MESSAGE_SPELL = "Message";
const char* RESISTANCE_SPELL = "Resistance";
const char* PRODUCE_FLAME_SPELL = "Produce flame";
const char* THORN_WHIP_SPELL = "Thorn whip";
const char* GUIDANCE_SPELL = "Guidance";
const char* SPARE_THE_DYING_SPELL = "Spare the dying";
const char* PRESTIDIGITATION_SPELL = "Prestidigitation";
const char* THAUMATURGY_SPELL = "Thaumaturgy";
const char* SHOCKING_GRASP_SPELL = "Shocking grasp";
const char* POISON_SPRAY_SPELL = "Poison spray";

std::vector<Spell> getDefaultSpells() {
    std::vector<Spell> spells;

    spells.push_back(Spell{MAGE_HAND_SPELL, CONJURATION_SPELL_SCHOOL, 0});
    spells.push_back(Spell{PRODUCE_FLAME_SPELL, CONJURATION_SPELL_SCHOOL, 0});
    spells.push_back(Spell{POISON_SPRAY_SPELL, CONJURATION_SPELL_SCHOOL, 0});
    spells.push_back(Spell{ACID_SPLASH_SPELL, EVOCATION_SPELL_SCHOOL, 0});
    spells.push_back(Spell{RAY_OF_FROST_SPELL, EVOCATION_SPELL_SCHOOL, 0});
    spells.push_back(Spell{ELDRITCH_BLAST_SPELL, EVOCATION_SPELL_SCHOOL, 0});
    spells.push_back(Spell{FIRE_BOLT_SPELL, EVOCATION_SPELL_SCHOOL, 0});
    spells.push_back(Spell{DANCING_LIGHTS_SPELL, EVOCATION_SPELL_SCHOOL, 0});
    spells.push_back(Spell{LIGHT_SPELL, EVOCATION_SPELL_SCHOOL, 0});
    spells.push_back(Spell{SACRED_FLAME_SPELL, EVOCATION_SPELL_SCHOOL, 0});
    spells.push_back(Spell{SHOCKING_GRASP_SPELL, EVOCATION_SPELL_SCHOOL, 0});
    spells.push_back(Spell{MINOR_ILLUSION_SPELL, ILLUSION_SPELL_SCHOOL, 0});
    spells.push_back(Spell{CHILL_TOUCH_SPELL, NECROMANCY_SPELL_SCHOOL, 0});
    spells.push_back(Spell{SPARE_THE_DYING_SPELL, NECROMANCY_SPELL_SCHOOL, 0});
    spells.push_back(Spell{BLADE_WARD_SPELL, ABJURATION_SPELL_SCHOOL, 0});
    spells.push_back(Spell{RESISTANCE_SPELL, ABJURATION_SPELL_SCHOOL, 0});
    spells.push_back(Spell{FRIENDS_SPELL, ENCHANTMENT_SPELL_SCHOOL, 0});
    spells.push_back(Spell{VICIOUS_MOCKERY_SPELL, ENCHANTMENT_SPELL_SCHOOL, 0});
    spells.push_back(Spell{SHILLELAGH_SPELL, TRANSMUTATION_SPELL_SCHOOL, 0});
    spells.push_back(Spell{DRUIDCRAFT_SPELL, TRANSMUTATION_SPELL_SCHOOL, 0});
    spells.push_back(Spell{MENDING_SPELL, TRANSMUTATION_SPELL_SCHOOL, 0});
    spells.push_back(Spell{MESSAGE_SPELL, TRANSMUTATION_SPELL_SCHOOL, 0});
    spells.push_back(Spell{THORN_WHIP_SPELL, TRANSMUTATION_SPELL_SCHOOL, 0});
    spells.push_back(Spell{PRESTIDIGITATION_SPELL, TRANSMUTATION_SPELL_SCHOOL, 0});
    spells.push_back(Spell{THAUMATURGY_SPELL, TRANSMUTATION_SPELL_SCHOOL, 0});
    spells.push_back(Spell{TRUE_STRIKE_SPELL, DIVINATION_SPELL_SCHOOL, 0});
    spells.push_back(Spell{GUIDANCE_SPELL, DIVINATION_SPELL_SCHOOL, 0});

    return spells;
}
}
