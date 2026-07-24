#include "Feat.h"

namespace dnd::model {
std::vector<Feat> getDefaultFeats() {
    std::vector<Feat> features;

    features.emplace_back(Feat{ACTOR_FEAT});
    features.emplace_back(Feat{GRAPPLER_FEAT});
    features.emplace_back(Feat{MARTIAL_ADEPT_FEAT});
    features.emplace_back(Feat{LIGHTLY_ARMORED_FEAT});
    features.emplace_back(Feat{DANGEON_DELVER_FEAT});
    features.emplace_back(Feat{POLEARM_MASTER_FEAT});
    features.emplace_back(Feat{SHIELD_MASTER_FEAT});
    features.emplace_back(Feat{DEFENSIVE_DUELIST_FEAT});
    features.emplace_back(Feat{MAGIC_INITIATE_FEAT});
    features.emplace_back(Feat{DURABLE_FEAT});
    features.emplace_back(Feat{CROSSBOW_EXPERT_FEAT});
    features.emplace_back(Feat{ATHLETE_FEAT});
    features.emplace_back(Feat{LUCKY_FEAT});
    features.emplace_back(Feat{INSPIRING_LEADER_FEAT});
    features.emplace_back(Feat{MODERATELY_ARMORED_FEAT});
    features.emplace_back(Feat{TOUGH_FEAT});
    features.emplace_back(Feat{WEAPON_MASTER_FEAT});
    features.emplace_back(Feat{SPELL_SNIPER_FEAT});
    features.emplace_back(Feat{SKILLED_FEAT});
    features.emplace_back(Feat{SKULKER_FEAT});
    features.emplace_back(Feat{SENTINEL_FEAT});
    features.emplace_back(Feat{LINGUIST_FEAT});
    features.emplace_back(Feat{ALERT_FEAT});
    features.emplace_back(Feat{MOUNTED_COMBATANT_FEAT});
    features.emplace_back(Feat{SAVAGE_ATTACKER_FEAT});
    features.emplace_back(Feat{HEAVYLY_ARMORED_FEAT});
    features.emplace_back(Feat{HEALER_FEAT});
    features.emplace_back(Feat{MEDIUM_ARMOR_MASTER_FEAT});
    features.emplace_back(Feat{SHARPSHOOTER_FEAT});
    features.emplace_back(Feat{KEEN_MIND_FEAT});
    features.emplace_back(Feat{RITUAL_CASTER_FEAT});
    features.emplace_back(Feat{MAGE_SLAYER_FEAT});
    features.emplace_back(Feat{WAR_CASTER_FEAT});
    features.emplace_back(Feat{OBSERVANT_FEAT});
    features.emplace_back(Feat{TAVERN_BRAWLER_FEAT});
    features.emplace_back(Feat{DUEL_WIELDER_FEAT});
    features.emplace_back(Feat{GREAT_WEAPON_MASTER_FEAT});
    features.emplace_back(Feat{HEAVY_ARMOR_MASTER_FEAT});
    features.emplace_back(Feat{CHARGED_FEAT});
    features.emplace_back(Feat{MOBILE_FEAT});
    features.emplace_back(Feat{ELEMENTAL_ADEPT_FEAT});
    features.emplace_back(Feat{RESILIENT_FEAT});

    return features;
}
}
