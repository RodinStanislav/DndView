#ifndef SPELLSCHOOL_H
#define SPELLSCHOOL_H

#include <string>
#include <vector>

namespace dnd::model {
struct SpellSchool {
    std::string name;
};

extern const char* EVOCATION_SPELL_SCHOOL;
extern const char* CONJURATION_SPELL_SCHOOL;
extern const char* ILLUSION_SPELL_SCHOOL;
extern const char* NECROMANCY_SPELL_SCHOOL;
extern const char* ABJURATION_SPELL_SCHOOL;
extern const char* ENCHANTMENT_SPELL_SCHOOL;
extern const char* TRANSMUTATION_SPELL_SCHOOL;
extern const char* DIVINATION_SPELL_SCHOOL;

std::vector<SpellSchool> getDefaultSpellSchools();
}

#endif // SPELLSCHOOL_H
