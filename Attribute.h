#ifndef ATTRIBUTE_H
#define ATTRIBUTE_H

#include <string>
#include <unordered_map>

namespace dnd::model {
struct Attribute {
    std::string name;
    int value = 0;
};

extern const char* STRENGHT_ATTRIBUTE;
extern const char* DEXTERITY_ATTRIBUTE;
extern const char* CONSTITUTION_ATTRIBUTE;
extern const char* INTELLIGENCE_ATTRIBUTE;
extern const char* WISDOM_ATTRIBUTE;
extern const char* CHARISMA_ATTRIBUTE;

std::vector<std::string> getDefaultAttributes();
}

#endif // ATTRIBUTE_H
