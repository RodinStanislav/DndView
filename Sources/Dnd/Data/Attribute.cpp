#include "Attribute.h"

namespace dnd::model {
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
