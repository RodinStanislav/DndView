#ifndef PROJECT_H
#define PROJECT_H

#include "Character.h"
#include "Skill.h"

namespace dnd::model {
struct Project {
    std::vector<std::string> attributes;
    std::vector<Race> races;
    std::vector<Skill> skills;
    std::vector<Character> characters;
};
}

#endif // PROJECT_H
