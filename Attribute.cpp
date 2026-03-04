#include "Attribute.h"

namespace dnd::model {
const char* STRENGHT_ATTRIBUTE = "Strenght";
const char* DEXTERITY_ATTRIBUTE = "Dexterity";
const char* CONSTITUTION_ATTRIBUTE = "Constitution";
const char* INTELLIGENCE_ATTRIBUTE = "Intelligence";
const char* WISDOM_ATTRIBUTE = "Wisdom";
const char* CHARISMA_ATTRIBUTE = "Charisma";

std::vector<Attribute> getDefaultAttributes() {
    std::vector<Attribute> attributes;

    attributes.emplace_back(Attribute{STRENGHT_ATTRIBUTE});
    attributes.emplace_back(Attribute{DEXTERITY_ATTRIBUTE});
    attributes.emplace_back(Attribute{CONSTITUTION_ATTRIBUTE});
    attributes.emplace_back(Attribute{INTELLIGENCE_ATTRIBUTE});
    attributes.emplace_back(Attribute{WISDOM_ATTRIBUTE});
    attributes.emplace_back(Attribute{CHARISMA_ATTRIBUTE});

    return attributes;
}
}
