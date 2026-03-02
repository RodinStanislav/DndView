#ifndef RACE_H
#define RACE_H

#include <string>
#include <vector>

#include "Attribute.h"

namespace dnd::model {

struct Race {
    std::string name;
    std::vector<Attribute> attributeModifiers;
};

std::vector<Race> getDefaultRaces();

}

#endif // RACE_H
