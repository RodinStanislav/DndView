#include "Race.h"

namespace dnd::model {
std::vector<Race> getDefaultRaces() {
    Race rockGnome;
    rockGnome.name = "Rock gnome";
    rockGnome.attributeModifiers[INTELLIGENCE_ATTRIBUTE] = 2;
    rockGnome.attributeModifiers[CONSTITUTION_ATTRIBUTE] = 1;

    Race forestGnome;
    forestGnome.name = "Forest gnome";
    forestGnome.attributeModifiers[INTELLIGENCE_ATTRIBUTE] = 2;
    forestGnome.attributeModifiers[DEXTERITY_ATTRIBUTE] = 1;

    Race hillDwarf;
    hillDwarf.name = "Hill dwarf";
    hillDwarf.attributeModifiers[CONSTITUTION_ATTRIBUTE] = 2;
    hillDwarf.attributeModifiers[STRENGHT_ATTRIBUTE] = 2;

    Race rockDwarf;
    rockDwarf.name = "Rock dwarf";
    rockDwarf.attributeModifiers[CONSTITUTION_ATTRIBUTE] = 2;
    rockDwarf.attributeModifiers[WISDOM_ATTRIBUTE] = 1;

    Race dragonborn;
    dragonborn.name = "Dragonborn";
    dragonborn.attributeModifiers[STRENGHT_ATTRIBUTE] = 2;
    dragonborn.attributeModifiers[WISDOM_ATTRIBUTE] = 1;

    Race halfOrc;
    halfOrc.name = "Half-orc";
    halfOrc.attributeModifiers[STRENGHT_ATTRIBUTE] = 2;
    halfOrc.attributeModifiers[CONSTITUTION_ATTRIBUTE] = 1;

    Race halfElf;
    halfElf.name = "Half-elf";
    halfElf.attributeModifiers[CHARISMA_ATTRIBUTE] = 2;
    halfElf.attributeModifiers[CONSTITUTION_ATTRIBUTE] = 1;

    Race stoutHalfling;
    stoutHalfling.name = "Stout halfing";
    stoutHalfling.attributeModifiers[DEXTERITY_ATTRIBUTE] = 2;
    stoutHalfling.attributeModifiers[CONSTITUTION_ATTRIBUTE] = 1;

    Race lightfootHalfling;
    lightfootHalfling.name = "Lightfoot halfing";
    lightfootHalfling.attributeModifiers[DEXTERITY_ATTRIBUTE] = 2;
    lightfootHalfling.attributeModifiers[CHARISMA_ATTRIBUTE] = 1;

    Race tiefling;
    tiefling.name = "Tiefling";
    tiefling.attributeModifiers[CHARISMA_ATTRIBUTE] = 2;
    tiefling.attributeModifiers[INTELLIGENCE_ATTRIBUTE] = 1;

    Race human;
    human.name = "Human";
    human.attributeModifiers[STRENGHT_ATTRIBUTE] = 1;
    human.attributeModifiers[DEXTERITY_ATTRIBUTE] = 1;
    human.attributeModifiers[CONSTITUTION_ATTRIBUTE] = 1;
    human.attributeModifiers[INTELLIGENCE_ATTRIBUTE] = 1;
    human.attributeModifiers[CHARISMA_ATTRIBUTE] = 1;
    human.attributeModifiers[WISDOM_ATTRIBUTE] = 1;

    Race highElf;
    highElf.name = "High elf";
    highElf.attributeModifiers[DEXTERITY_ATTRIBUTE] = 2;
    highElf.attributeModifiers[INTELLIGENCE_ATTRIBUTE] = 1;

    Race forestElf;
    forestElf.name = "Forest elf";
    forestElf.attributeModifiers[DEXTERITY_ATTRIBUTE] = 2;
    forestElf.attributeModifiers[WISDOM_ATTRIBUTE] = 1;

    std::vector<Race> races;
    races.push_back(rockGnome);
    races.push_back(forestGnome);
    races.push_back(highElf);
    races.push_back(forestElf);
    races.push_back(hillDwarf);
    races.push_back(rockDwarf);
    races.push_back(dragonborn);
    races.push_back(halfOrc);
    races.push_back(stoutHalfling);
    races.push_back(lightfootHalfling);
    races.push_back(tiefling);
    races.push_back(human);

    return races;
}
}
