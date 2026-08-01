#ifndef ATTRIBUTE_H
#define ATTRIBUTE_H

#include <string>
#include <vector>

namespace RPEngine::dnd::model {

// Врожденный физический или ментальный ресурс (например, высокий Интеллект).
struct Attribute {
    std::string name;
};

inline const char* STRENGHT_ATTRIBUTE = "Strenght";
inline const char* DEXTERITY_ATTRIBUTE = "Dexterity";
inline const char* CONSTITUTION_ATTRIBUTE = "Constitution";
inline const char* INTELLIGENCE_ATTRIBUTE = "Intelligence";
inline const char* WISDOM_ATTRIBUTE = "Wisdom";
inline const char* CHARISMA_ATTRIBUTE = "Charisma";

std::vector<Attribute> getDefaultAttributes();
}

#endif // ATTRIBUTE_H
