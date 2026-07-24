#ifndef BACKGROUND_H
#define BACKGROUND_H

#include <string>
#include <vector>

namespace dnd::model {
struct Background {
    std::string name;
    std::vector<std::string> skills;
};

inline const char* ENTERTAINER_BACKGROUND = "Entertainer";
inline const char* SAILOR_BACKGROUND = "Sailor";
inline const char* PIRATE_BACKGROUND = "Pirate";
inline const char* OUTLANDER_BACKGROUND = "Outlander";
inline const char* URCHIN_BACKGROUND = "Urchin";
inline const char* SAGE_BACKGROUND = "Sage";
inline const char* CRIMINAL_BACKGROUND = "Criminal";
inline const char* CHARLATAN_BACKGROUND = "Charlatan";
inline const char* NOBLE_BACKGROUND = "Noble";
inline const char* FOLK_HERO_BACKGROUND = "Folk hero";
inline const char* ACOLYTE_BACKGROUND = "Acolyte";
inline const char* GUILD_ARTISAN_BACKGROUND = "Guild artisan";
inline const char* HERMIT_BACKGROUND = "Hermit";
inline const char* SOLDIER_BACKGROUND = "Soldier";

std::vector<Background> getDefaultBackgrounds();
}

#endif // BACKGROUND_H
