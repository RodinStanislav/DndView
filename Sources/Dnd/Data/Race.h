#ifndef RACE_H
#define RACE_H

#include <string>
#include <vector>
#include <optional>
#include <unordered_map>

#include "Attribute.h"

namespace dnd::model {

struct Race {
    std::string name;
    std::optional<std::string> inherits;
    std::unordered_map<std::string, uint32_t> attributeModifiers;
};

std::vector<Race> getDefaultRaces();
}

#endif // RACE_H
