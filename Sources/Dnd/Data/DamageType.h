#ifndef DAMAGETYPE_H
#define DAMAGETYPE_H

#include <string>
#include <vector>

namespace dnd::model {

struct DamageType {
    std::string name;
};

inline const char* ACID_DAMAGE_TYPE = "Acid";
inline const char* BLUDGEONING_DAMAGE_TYPE = "Bludgeoning";
inline const char* COLD_DAMAGE_TYPE = "Cold";
inline const char* FIRE_DAMAGE_TYPE = "Fire";
inline const char* FORCE_DAMAGE_TYPE = "Force";
inline const char* LIGHTNING_DAMAGE_TYPE = "Lightning";
inline const char* NECROTIC_DAMAGE_TYPE = "Necrotic";
inline const char* PIERCING_DAMAGE_TYPE = "Piercing";
inline const char* POISON_DAMAGE_TYPE = "Poison";
inline const char* PHYSICS_DAMAGE_TYPE = "Physicg";
inline const char* RADIANT_DAMAGE_TYPE = "Radiant";
inline const char* SLASHING_DAMAGE_TYPE = "Slashing";
inline const char* THUNDER_DAMAGE_TYPE = "Thunde";

std::vector<DamageType> getDefaultDamageTypes();

}

#endif // DAMAGETYPE_H
