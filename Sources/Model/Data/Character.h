#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <vector>
#include <unordered_map>

namespace RPEngine::dnd::model {

struct Character {
    std::string name;
    std::string background;
    std::string history;
    std::string race;
    std::unordered_map<std::string, uint32_t> classes;
    std::unordered_map<std::string, uint32_t> attributes;
    std::vector<std::string> skills;
    uint32_t level = 1;
    uint32_t experience = 0;
    uint32_t hitPoints = 0;
    uint32_t maximumHitPoints = 0;
    uint32_t additionalHitPoints = 0;
};

}

#endif // CHARACTER_H
