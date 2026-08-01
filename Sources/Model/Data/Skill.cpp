#include "Skill.h"
#include "Attribute.h"

namespace RPEngine::dnd::model {
std::vector<Skill> getDefaultSkills() {
    std::vector<Skill> skills;

    skills.push_back(Skill{ATLETICS_SKILL, STRENGHT_ATTRIBUTE});
    skills.push_back(Skill{ACROBATICS_SKILL, DEXTERITY_ATTRIBUTE});
    skills.push_back(Skill{SLEIGHT_OF_HAND_SKILL, DEXTERITY_ATTRIBUTE});
    skills.push_back(Skill{STEALTH_SKILL, DEXTERITY_ATTRIBUTE});
    skills.push_back(Skill{HISTORY_SKILL, INTELLIGENCE_ATTRIBUTE});
    skills.push_back(Skill{MAGIC_SKILL, INTELLIGENCE_ATTRIBUTE});
    skills.push_back(Skill{NATURE_SKILL, INTELLIGENCE_ATTRIBUTE});
    skills.push_back(Skill{INVESTIGATION_SKILL, INTELLIGENCE_ATTRIBUTE});
    skills.push_back(Skill{RELIGION_SKILL, INTELLIGENCE_ATTRIBUTE});
    skills.push_back(Skill{PERCEPTION_SKILL, WISDOM_ATTRIBUTE});
    skills.push_back(Skill{SURVIVAL_SKILL, WISDOM_ATTRIBUTE});
    skills.push_back(Skill{MEDICINE_SKILL, WISDOM_ATTRIBUTE});
    skills.push_back(Skill{INSIGHT_SKILL, WISDOM_ATTRIBUTE});
    skills.push_back(Skill{ANIMAL_CARE_SKILL, WISDOM_ATTRIBUTE});
    skills.push_back(Skill{PERFOMANCE_SKILL, CHARISMA_ATTRIBUTE});
    skills.push_back(Skill{INTIMIDATION_SKILL, CHARISMA_ATTRIBUTE});
    skills.push_back(Skill{DECEPTION_SKILL, CHARISMA_ATTRIBUTE});
    skills.push_back(Skill{PERSUASION_SKILL, CHARISMA_ATTRIBUTE});

    return skills;
}
}
