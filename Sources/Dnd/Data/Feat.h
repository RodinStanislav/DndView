#ifndef FEAT_H
#define FEAT_H

#include <string>
#include <vector>

namespace dnd::model {

// Уникальный редкий талант, выбранный игроком вместо прокачки характеристик (например, Внимательный).
struct Feat {
    std::string name;
};

inline const char* ACTOR_FEAT = "Actor";
inline const char* GRAPPLER_FEAT = "Grappler";
inline const char* MARTIAL_ADEPT_FEAT = "Martial adept";
inline const char* LIGHTLY_ARMORED_FEAT = "Lightly armored";
inline const char* DANGEON_DELVER_FEAT = "Dangeon delver";
inline const char* POLEARM_MASTER_FEAT = "Polearm master";
inline const char* SHIELD_MASTER_FEAT = "Shield master";
inline const char* DEFENSIVE_DUELIST_FEAT = "Defensive duelist";
inline const char* MAGIC_INITIATE_FEAT = "Magic initiate";
inline const char* DURABLE_FEAT = "Durable";
inline const char* CROSSBOW_EXPERT_FEAT = "Crossbow expert";
inline const char* ATHLETE_FEAT = "Athlete";
inline const char* LUCKY_FEAT = "Lucky";
inline const char* INSPIRING_LEADER_FEAT = "Inspiring leader";
inline const char* MODERATELY_ARMORED_FEAT = "Moderately armored";
inline const char* TOUGH_FEAT = "Tough";
inline const char* WEAPON_MASTER_FEAT = "Weapon master";
inline const char* SPELL_SNIPER_FEAT = "Spell sniper";
inline const char* SKILLED_FEAT = "Skilled";
inline const char* SKULKER_FEAT = "Skulker";
inline const char* SENTINEL_FEAT = "Sentinel";
inline const char* LINGUIST_FEAT = "Linguist";
inline const char* ALERT_FEAT = "Alert";
inline const char* MOUNTED_COMBATANT_FEAT = "Mounter combatant";
inline const char* SAVAGE_ATTACKER_FEAT = "Savage attacker";
inline const char* HEAVYLY_ARMORED_FEAT = "Heavyly armored";
inline const char* HEALER_FEAT = "Healer";
inline const char* MEDIUM_ARMOR_MASTER_FEAT = "Medium armor master";
inline const char* SHARPSHOOTER_FEAT = "Sharpshooter";
inline const char* KEEN_MIND_FEAT = "Keen mind";
inline const char* RITUAL_CASTER_FEAT = "Ritual caster";
inline const char* MAGE_SLAYER_FEAT = "Mage slayer";
inline const char* WAR_CASTER_FEAT = "War caster";
inline const char* OBSERVANT_FEAT = "Observant";
inline const char* TAVERN_BRAWLER_FEAT = "Tavern brawler";
inline const char* DUEL_WIELDER_FEAT = "Duel wielder";
inline const char* GREAT_WEAPON_MASTER_FEAT = "Great weapon master";
inline const char* HEAVY_ARMOR_MASTER_FEAT = "Heavy armor master";
inline const char* CHARGED_FEAT = "Charger";
inline const char* MOBILE_FEAT = "Mobile";
inline const char* ELEMENTAL_ADEPT_FEAT = "Elemental adept";
inline const char* RESILIENT_FEAT = "Resilient";

std::vector<Feat> getDefaultFeats();
}

#endif // FEAT_H
