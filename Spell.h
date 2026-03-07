#ifndef SPELL_H
#define SPELL_H

#include <string>
#include <vector>

namespace dnd::model {
struct Spell {
    std::string name;
    std::string spellSchool;
    uint32_t level = 0;
};

extern const char* ACID_SPLASH_SPELL;
extern const char* MAGE_HAND_SPELL;
extern const char* FRIENDS_SPELL;
extern const char* SHILLELAGH_SPELL;
extern const char* BLADE_WARD_SPELL;
extern const char* VICIOUS_MOCKERY_SPELL;
extern const char* DRUIDCRAFT_SPELL;
extern const char* CHILL_TOUCH_SPELL;
extern const char* RAY_OF_FROST_SPELL;
extern const char* MINOR_ILLUSION_SPELL;
extern const char* TRUE_STRIKE_SPELL;
extern const char* ELDRITCH_BLAST_SPELL;
extern const char* FIRE_BOLT_SPELL;
extern const char* DANCING_LIGHTS_SPELL;
extern const char* MENDING_SPELL;
extern const char* LIGHT_SPELL;
extern const char* SACRED_FLAME_SPELL;
extern const char* MESSAGE_SPELL;
extern const char* RESISTANCE_SPELL;
extern const char* PRODUCE_FLAME_SPELL;
extern const char* THORN_WHIP_SPELL;
extern const char* GUIDANCE_SPELL;
extern const char* SPARE_THE_DYING_SPELL;
extern const char* PRESTIDIGITATION_SPELL;
extern const char* THAUMATURGY_SPELL;
extern const char* SHOCKING_GRASP_SPELL;
extern const char* POISON_SPRAY_SPELL;


std::vector<Spell> getDefaultSpells();
}

#endif // SPELL_H
