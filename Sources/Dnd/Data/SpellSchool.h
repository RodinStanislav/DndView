#ifndef SPELLSCHOOL_H
#define SPELLSCHOOL_H

#include <string>
#include <vector>

namespace dnd::model {
struct SpellSchool {
    std::string name;
};

inline const char* EVOCATION_SPELL_SCHOOL = "Evocation";
inline const char* CONJURATION_SPELL_SCHOOL = "Conjuration";
inline const char* ILLUSION_SPELL_SCHOOL = "Illusion";
inline const char* NECROMANCY_SPELL_SCHOOL = "Necromancy";
inline const char* ABJURATION_SPELL_SCHOOL = "Abjuration";
inline const char* ENCHANTMENT_SPELL_SCHOOL = "Enchantment";
inline const char* TRANSMUTATION_SPELL_SCHOOL = "Transmutation";
inline const char* DIVINATION_SPELL_SCHOOL = "Divination";

std::vector<SpellSchool> getDefaultSpellSchools();
}

#endif // SPELLSCHOOL_H
