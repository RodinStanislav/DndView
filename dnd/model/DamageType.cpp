#include "DamageType.h"

namespace dnd::model {
const char* ACID_DAMAGE_TYPE = "Acid damage type";
const char* BLUDGEONING_DAMAGE_TYPE = "Bludgeoning damage type";
const char* COLD_DAMAGE_TYPE = "Cold damage type";
const char* FIRE_DAMAGE_TYPE = "Fire damage type";
const char* FORCE_DAMAGE_TYPE = "Force damage type";
const char* LIGHTNING_DAMAGE_TYPE = "Lightning damage type";
const char* NECROTIC_DAMAGE_TYPE = "Necrotic damage type";
const char* PIERCING_DAMAGE_TYPE = "Piercing damage type";
const char* POISON_DAMAGE_TYPE = "Poison damage type";
const char* PHYSICS_DAMAGE_TYPE = "Physicg damage type";
const char* RADIANT_DAMAGE_TYPE = "Radiant damage type";
const char* SLASHING_DAMAGE_TYPE = "Slashing damage type";
const char* THUNDER_DAMAGE_TYPE = "Thunder damage type";

std::vector<DamageType> getDefaultDamageTypes() {
    std::vector<DamageType> damageTypes;

    damageTypes.push_back(DamageType{ACID_DAMAGE_TYPE});
    damageTypes.push_back(DamageType{BLUDGEONING_DAMAGE_TYPE});
    damageTypes.push_back(DamageType{COLD_DAMAGE_TYPE});
    damageTypes.push_back(DamageType{FIRE_DAMAGE_TYPE});
    damageTypes.push_back(DamageType{FORCE_DAMAGE_TYPE});
    damageTypes.push_back(DamageType{LIGHTNING_DAMAGE_TYPE});
    damageTypes.push_back(DamageType{NECROTIC_DAMAGE_TYPE});
    damageTypes.push_back(DamageType{PIERCING_DAMAGE_TYPE});
    damageTypes.push_back(DamageType{POISON_DAMAGE_TYPE});
    damageTypes.push_back(DamageType{PHYSICS_DAMAGE_TYPE});
    damageTypes.push_back(DamageType{RADIANT_DAMAGE_TYPE});
    damageTypes.push_back(DamageType{SLASHING_DAMAGE_TYPE});
    damageTypes.push_back(DamageType{THUNDER_DAMAGE_TYPE});

    return damageTypes;
}
}
