#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <vector>
#include <unordered_map>

namespace dnd::model {

struct Character {
    std::string name;
    std::string race;
    std::unordered_map<std::string, uint32_t> classes;
    std::unordered_map<std::string, uint32_t> attributes;
    std::vector<std::string> proficiencies;
};

}

#endif // CHARACTER_H
