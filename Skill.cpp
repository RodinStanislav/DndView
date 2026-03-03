#include "Skill.h"
#include "Attribute.h"

namespace dnd::model {
const char* ATLETICS_SKILL = "Atletics";
const char* ACROBATICS_SKILL = "Acrobatics";
const char* SLEIGHT_OF_HAND_SKILL = "Sleight of hand";
const char* STEALTH_SKILL = "Stealth";
const char* HISTORY_SKILL = "History";
const char* MAGIC_SKILL = "Magic";
const char* NATURE_SKILL = "Nature";
const char* INVESTIGATION_SKILL = "Investigatin";
const char* RELIGION_SKILL = "Religion";
const char* PERCEPTION_SKILL = "Perception";
const char* SURVIVAL_SKILL = "Survival";
const char* MEDICINE_SKILL = "Medicine";
const char* INSIGHT_SKILL = "Insight";
const char* ANIMAL_CARE_SKILL = "Animal care";
const char* PERFOMANCE_SKILL = "Perfomance";
const char* INTIMIDATION_SKILL = "Intimidation";
const char* DECEPTION_SKILL = "Deception";
const char* PERSUASION_SKILL = "Persuasion";

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
