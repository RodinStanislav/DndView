#ifndef CHARACTER_H
#define CHARACTER_H

#include "Race.h"
#include "Attribute.h"
#include <unordered_map>

namespace dnd::model {

struct Character {
    std::string name;
    std::string race;
    std::unordered_map<std::string, uint32_t> classes;
    std::unordered_map<std::string, uint32_t> attributes;
};

}

#endif // CHARACTER_H
