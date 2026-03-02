#include "Race.h"

namespace dnd::model {
std::vector<Race> getDefaultRaces() {
    Race rockGnome;
    rockGnome.name = "Rock gnome";
    rockGnome.attributeModifiers.push_back(Attribute{INTELLIGENCE_ATTRIBUTE, 2});
    rockGnome.attributeModifiers.push_back(Attribute{CONSTITUTION_ATTRIBUTE, 1});

    Race forestGnome;
    forestGnome.name = "Forest gnome";
    forestGnome.attributeModifiers.push_back(Attribute{INTELLIGENCE_ATTRIBUTE, 2});
    forestGnome.attributeModifiers.push_back(Attribute{DEXTERITY_ATTRIBUTE, 1});

    Race highElf;
    highElf.name = "High elf";
    highElf.attributeModifiers.push_back(Attribute{DEXTERITY_ATTRIBUTE, 2});
    highElf.attributeModifiers.push_back(Attribute{INTELLIGENCE_ATTRIBUTE, 1});

    Race forestElf;
    forestElf.name = "Forest elf";
    forestElf.attributeModifiers.push_back(Attribute{DEXTERITY_ATTRIBUTE, 2});
    forestElf.attributeModifiers.push_back(Attribute{WISDOM_ATTRIBUTE, 1});

    std::vector<Race> races;
    races.push_back(rockGnome);
    races.push_back(forestGnome);
    races.push_back(highElf);
    races.push_back(forestElf);

    return races;
}
}
