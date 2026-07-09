#ifndef DAMAGETYPE_H
#define DAMAGETYPE_H

#include <string>
#include <vector>

namespace dnd::model {

struct DamageType {
    std::string name;
};

extern const char* ACID_DAMAGE_TYPE;
extern const char* BLUDGEONING_DAMAGE_TYPE;
extern const char* COLD_DAMAGE_TYPE;
extern const char* FIRE_DAMAGE_TYPE;
extern const char* FORCE_DAMAGE_TYPE;
extern const char* LIGHTNING_DAMAGE_TYPE;
extern const char* NECROTIC_DAMAGE_TYPE;
extern const char* PIERCING_DAMAGE_TYPE;
extern const char* POISON_DAMAGE_TYPE;
extern const char* PHYSICS_DAMAGE_TYPE;
extern const char* RADIANT_DAMAGE_TYPE;
extern const char* SLASHING_DAMAGE_TYPE;
extern const char* THUNDER_DAMAGE_TYPE;

std::vector<DamageType> getDefaultDamageTypes();

}

#endif // DAMAGETYPE_H
