#include "DamageType.h"

namespace RPEngine::dnd::model {
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
