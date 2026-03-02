#include "Attribute.h"

namespace dnd::model {
const char* STRENGHT_ATTRIBUTE = "Strenght";
const char* DEXTERITY_ATTRIBUTE = "Dexterity";
const char* CONSTITUTION_ATTRIBUTE = "Constitution";
const char* INTELLIGENCE_ATTRIBUTE = "Intelligence";
const char* WISDOM_ATTRIBUTE = "Wisdom";
const char* CHARISMA_ATTRIBUTE = "Charisma";

std::vector<std::string> getDefaultAttributes() {
    std::vector<std::string> attributes;

    attributes.emplace_back(STRENGHT_ATTRIBUTE);
    attributes.emplace_back(DEXTERITY_ATTRIBUTE);
    attributes.emplace_back(CONSTITUTION_ATTRIBUTE);
    attributes.emplace_back(INTELLIGENCE_ATTRIBUTE);
    attributes.emplace_back(WISDOM_ATTRIBUTE);
    attributes.emplace_back(CHARISMA_ATTRIBUTE);

    return attributes;
}
}
