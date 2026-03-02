#ifndef CHARACTER_H
#define CHARACTER_H

#include "Race.h"
#include "Attribute.h"

namespace dnd::model {

struct Character {
    std::string name;
    std::string race;
    std::vector<Attribute> attributes;
};

}

#endif // CHARACTER_H
