#ifndef PROJECT_H
#define PROJECT_H

#include "Character.h"

namespace dnd::model {
struct Project {
    std::vector<std::string> attributes;
    std::vector<Race> races;
    std::vector<Character> characters;
};
}

#endif // PROJECT_H
