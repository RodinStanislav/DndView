#include "Race.h"

namespace RPEngine::dnd::model {
std::vector<Race> getDefaultRaces() {
    Race gnome;
    gnome.name = "Gnome";
    gnome.speed = 25;
    gnome.attributeModifiers[INTELLIGENCE_ATTRIBUTE] = 2;

    Race rockGnome;
    rockGnome.name = "Rock gnome";
    rockGnome.inherits = gnome.name;
    rockGnome.attributeModifiers[CONSTITUTION_ATTRIBUTE] = 1;

    Race forestGnome;
    forestGnome.name = "Forest gnome";
    forestGnome.inherits = gnome.name;
    forestGnome.attributeModifiers[DEXTERITY_ATTRIBUTE] = 1;

    Race dwarf;
    dwarf.name = "Dwarf";
    dwarf.speed = 25;
    dwarf.attributeModifiers[CONSTITUTION_ATTRIBUTE] = 2;

    Race hillDwarf;
    hillDwarf.name = "Hill dwarf";
    hillDwarf.inherits = dwarf.name;
    hillDwarf.attributeModifiers[STRENGHT_ATTRIBUTE] = 2;

    Race rockDwarf;
    rockDwarf.name = "Rock dwarf";
    rockDwarf.inherits = dwarf.name;
    rockDwarf.attributeModifiers[WISDOM_ATTRIBUTE] = 1;

    Race dragonborn;
    dragonborn.name = "Dragonborn";
    dragonborn.speed = 30;
    dragonborn.attributeModifiers[STRENGHT_ATTRIBUTE] = 2;
    dragonborn.attributeModifiers[WISDOM_ATTRIBUTE] = 1;

    Race halfOrc;
    halfOrc.name = "Half-orc";
    halfOrc.speed = 30;
    halfOrc.attributeModifiers[STRENGHT_ATTRIBUTE] = 2;
    halfOrc.attributeModifiers[CONSTITUTION_ATTRIBUTE] = 1;

    Race halfElf;
    halfElf.name = "Half-elf";
    halfElf.speed = 30;
    halfElf.attributeModifiers[CHARISMA_ATTRIBUTE] = 2;
    halfElf.attributeModifiers[CONSTITUTION_ATTRIBUTE] = 1;

    Race halfling;
    halfling.name = "Halfling";
    halfling.speed = 25;
    halfling.attributeModifiers[DEXTERITY_ATTRIBUTE] = 2;

    Race stoutHalfling;
    stoutHalfling.name = "Stout halfing";
    stoutHalfling.inherits = halfling.name;
    stoutHalfling.attributeModifiers[CONSTITUTION_ATTRIBUTE] = 1;

    Race lightfootHalfling;
    lightfootHalfling.name = "Lightfoot halfing";
    lightfootHalfling.inherits = halfling.name;
    lightfootHalfling.attributeModifiers[CHARISMA_ATTRIBUTE] = 1;

    Race tiefling;
    tiefling.name = "Tiefling";
    tiefling.speed = 30;
    tiefling.attributeModifiers[CHARISMA_ATTRIBUTE] = 2;
    tiefling.attributeModifiers[INTELLIGENCE_ATTRIBUTE] = 1;

    Race human;
    human.name = "Human";
    human.speed = 30;
    human.attributeModifiers[STRENGHT_ATTRIBUTE] = 1;
    human.attributeModifiers[DEXTERITY_ATTRIBUTE] = 1;
    human.attributeModifiers[CONSTITUTION_ATTRIBUTE] = 1;
    human.attributeModifiers[INTELLIGENCE_ATTRIBUTE] = 1;
    human.attributeModifiers[CHARISMA_ATTRIBUTE] = 1;
    human.attributeModifiers[WISDOM_ATTRIBUTE] = 1;

    Race elf;
    elf.name = "Elf";
    elf.speed = 30;
    elf.attributeModifiers[DEXTERITY_ATTRIBUTE] = 2;

    Race highElf;
    highElf.name = "High elf";
    highElf.inherits = elf.name;
    highElf.attributeModifiers[INTELLIGENCE_ATTRIBUTE] = 1;

    Race forestElf;
    forestElf.name = "Forest elf";
    forestElf.inherits = elf.name;
    forestElf.attributeModifiers[WISDOM_ATTRIBUTE] = 1;

    Race drowElf;
    drowElf.name = "Drow elf";
    drowElf.inherits = elf.name;
    drowElf.attributeModifiers[CHARISMA_ATTRIBUTE] = 1;

    std::vector<Race> races;
    races.push_back(gnome);
    races.push_back(rockGnome);
    races.push_back(forestGnome);
    races.push_back(elf);
    races.push_back(highElf);
    races.push_back(forestElf);
    races.push_back(drowElf);
    races.push_back(dwarf);
    races.push_back(hillDwarf);
    races.push_back(rockDwarf);
    races.push_back(dragonborn);
    races.push_back(halfOrc);
    races.push_back(halfling);
    races.push_back(stoutHalfling);
    races.push_back(lightfootHalfling);
    races.push_back(tiefling);
    races.push_back(human);

    return races;
}
}
