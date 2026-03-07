#include "SpellSchool.h"

namespace dnd::model {
const char* EVOCATION_SPELL_SCHOOL = "Evocation";
const char* CONJURATION_SPELL_SCHOOL = "Conjuration";
const char* ILLUSION_SPELL_SCHOOL = "Illusion";
const char* NECROMANCY_SPELL_SCHOOL = "Necromancy";
const char* ABJURATION_SPELL_SCHOOL = "Abjuration";
const char* ENCHANTMENT_SPELL_SCHOOL = "Enchantment";
const char* TRANSMUTATION_SPELL_SCHOOL = "Transmutation";
const char* DIVINATION_SPELL_SCHOOL = "Divination";

std::vector<SpellSchool> getDefaultSpellSchools() {
    std::vector<SpellSchool> spellSchools;

    spellSchools.push_back(SpellSchool{EVOCATION_SPELL_SCHOOL});
    spellSchools.push_back(SpellSchool{CONJURATION_SPELL_SCHOOL});
    spellSchools.push_back(SpellSchool{ILLUSION_SPELL_SCHOOL});
    spellSchools.push_back(SpellSchool{NECROMANCY_SPELL_SCHOOL});
    spellSchools.push_back(SpellSchool{ABJURATION_SPELL_SCHOOL});
    spellSchools.push_back(SpellSchool{ENCHANTMENT_SPELL_SCHOOL});
    spellSchools.push_back(SpellSchool{TRANSMUTATION_SPELL_SCHOOL});
    spellSchools.push_back(SpellSchool{DIVINATION_SPELL_SCHOOL});

    return spellSchools;
}
}
