#include "SpellSchool.h"

namespace dnd::model {
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
