#ifndef DAMAGE_H
#define DAMAGE_H

#include <string>

namespace dnd::model {

struct Damage {
    uint32_t baseHit = 1;
    uint32_t maxHit = 6;
    std::string damageType;
};

}

#endif // DAMAGE_H
