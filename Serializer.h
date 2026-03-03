#ifndef SERIALIZER_H
#define SERIALIZER_H

#include "Project.h"
#include "nlohmann/json.hpp"

namespace dnd::model {
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Attribute, name, value);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Skill, name, dependentAttribute);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Race, name, attributeModifiers);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Character, name, race, attributes);
NLOHMANN_DEFINE_TYPE_NON_INTRUSIVE(Project, attributes, races, skills, characters);
}
#endif // SERIALIZER_H
