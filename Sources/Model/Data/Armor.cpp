#include "Armor.h"
#include "ArmorType.h"

namespace RPEngine::dnd::model {
std::vector<Armor> getDefaultArmors() {
    std::vector<Armor> armors;

    Armor quiltedArmor;
    quiltedArmor.name = QUILTED_ARMOR;
    quiltedArmor.armorType = LIGHT_ARMOR_TYPE;

    Armor leatherArmor;
    leatherArmor.name = LEATHER_ARMOR;
    leatherArmor.armorType = LIGHT_ARMOR_TYPE;

    Armor studdedLeatherArmor;
    studdedLeatherArmor.name = STUDDED_LEATHER_ARMOR;
    studdedLeatherArmor.armorType = LIGHT_ARMOR_TYPE;

    Armor hideArmor;
    hideArmor.name = HIDE_ARMOR;
    hideArmor.armorType = MEDIUM_ARMOR_TYPE;

    Armor chainmailShirtArmor;
    chainmailShirtArmor.name = CHAINMAIL_SHIRT_ARMOR;
    chainmailShirtArmor.armorType = MEDIUM_ARMOR_TYPE;

    Armor scalyArmor;
    scalyArmor.name = SCALY_ARMOR;
    scalyArmor.armorType = MEDIUM_ARMOR_TYPE;

    Armor cuirassArmor;
    cuirassArmor.name = CUIRASS_ARMOR;
    cuirassArmor.armorType = MEDIUM_ARMOR_TYPE;

    Armor halfArmor;
    halfArmor.name = HALF_ARMOR;
    halfArmor.armorType = MEDIUM_ARMOR_TYPE;

    Armor ringArmor;
    ringArmor.name = RING_ARMOR;
    ringArmor.armorType = HEAVY_ARMOR_TYPE;

    Armor chainmailArmor;
    chainmailArmor.name = CHAINMAIL_ARMOR;
    chainmailArmor.armorType = HEAVY_ARMOR_TYPE;

    Armor stackedArmor;
    stackedArmor.name = STACKED_ARMOR;
    stackedArmor.armorType = HEAVY_ARMOR_TYPE;

    Armor armorArmor;
    armorArmor.name = ARMOR_ARMOR;
    armorArmor.armorType = HEAVY_ARMOR_TYPE;

    Armor shieldArmor;
    shieldArmor.name = SHIELD_ARMOR;
    shieldArmor.armorType = SHIELD_ARMOR_TYPE;

    armors.push_back(quiltedArmor);
    armors.push_back(leatherArmor);
    armors.push_back(studdedLeatherArmor);
    armors.push_back(hideArmor);
    armors.push_back(chainmailShirtArmor);
    armors.push_back(scalyArmor);
    armors.push_back(cuirassArmor);
    armors.push_back(halfArmor);
    armors.push_back(ringArmor);
    armors.push_back(chainmailArmor);
    armors.push_back(stackedArmor);
    armors.push_back(armorArmor);
    armors.push_back(shieldArmor);

    return armors;
}

std::vector<Armor> getDefaultArmors(const std::string& armorType) {
    auto allArmors = getDefaultArmors();
    std::vector<Armor> armorsByType;

    for (const auto& armor : allArmors) {
        if (armor.armorType == armorType) {
            armorsByType.push_back(armor);
        }
    }

    return armorsByType;
}
}
