#include "Background.h"
#include "Skill.h"

namespace dnd::model {
std::vector<Background> getDefaultBackgrounds() {
    std::vector<Background> backgrounds;

    Background entertainer;
    entertainer.name = ENTERTAINER_BACKGROUND;
    entertainer.skills.push_back(ACROBATICS_SKILL);
    entertainer.skills.push_back(PERFOMANCE_SKILL);

    Background sailor;
    sailor.name = SAILOR_BACKGROUND;
    sailor.skills.push_back(ATLETICS_SKILL);
    sailor.skills.push_back(PERCEPTION_SKILL);

    Background pirate;
    pirate.name = PIRATE_BACKGROUND;
    pirate.skills.push_back(ATLETICS_SKILL);
    pirate.skills.push_back(PERCEPTION_SKILL);

    Background outlander;
    outlander.name = OUTLANDER_BACKGROUND;
    outlander.skills.push_back(ATLETICS_SKILL);
    outlander.skills.push_back(SURVIVAL_SKILL);

    Background urchin;
    urchin.name = URCHIN_BACKGROUND;
    urchin.skills.push_back(SLEIGHT_OF_HAND_SKILL);
    urchin.skills.push_back(STEALTH_SKILL);

    Background sage;
    sage.name = SAGE_BACKGROUND;
    sage.skills.push_back(HISTORY_SKILL);
    sage.skills.push_back(MAGIC_SKILL);

    Background criminal;
    criminal.name = CRIMINAL_BACKGROUND;
    criminal.skills.push_back(DECEPTION_SKILL);
    criminal.skills.push_back(STEALTH_SKILL);

    Background charlatan;
    charlatan.name = CHARLATAN_BACKGROUND;
    charlatan.skills.push_back(DECEPTION_SKILL);
    charlatan.skills.push_back(SLEIGHT_OF_HAND_SKILL);

    Background noble;
    noble.name = NOBLE_BACKGROUND;
    noble.skills.push_back(HISTORY_SKILL);
    noble.skills.push_back(PERSUASION_SKILL);

    Background folkHero;
    folkHero.name = FOLK_HERO_BACKGROUND;
    folkHero.skills.push_back(SURVIVAL_SKILL);
    folkHero.skills.push_back(ANIMAL_CARE_SKILL);

    Background acolyte;
    acolyte.name = ACOLYTE_BACKGROUND;
    acolyte.skills.push_back(INSIGHT_SKILL);
    acolyte.skills.push_back(RELIGION_SKILL);

    Background guildArtisan;
    guildArtisan.name = GUILD_ARTISAN_BACKGROUND;
    guildArtisan.skills.push_back(INSIGHT_SKILL);
    guildArtisan.skills.push_back(PERSUASION_SKILL);

    Background hermit;
    hermit.name = HERMIT_BACKGROUND;
    hermit.skills.push_back(MEDICINE_SKILL);
    hermit.skills.push_back(RELIGION_SKILL);

    Background soldier;
    soldier.name = SOLDIER_BACKGROUND;
    soldier.skills.push_back(ATLETICS_SKILL);
    soldier.skills.push_back(INTIMIDATION_SKILL);

    backgrounds.push_back(entertainer);
    backgrounds.push_back(sailor);
    backgrounds.push_back(pirate);
    backgrounds.push_back(outlander);
    backgrounds.push_back(urchin);
    backgrounds.push_back(sage);
    backgrounds.push_back(criminal);
    backgrounds.push_back(charlatan);
    backgrounds.push_back(noble);
    backgrounds.push_back(folkHero);
    backgrounds.push_back(acolyte);
    backgrounds.push_back(guildArtisan);
    backgrounds.push_back(hermit);
    backgrounds.push_back(soldier);

    return backgrounds;
}
}
