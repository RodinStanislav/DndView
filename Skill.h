#ifndef SKILL_H
#define SKILL_H

#include <string>
#include <vector>

namespace dnd::model {
struct Skill {
    std::string name;
    std::string dependentAttribute;
};

extern const char* ATLETICS_SKILL;
extern const char* ACROBATICS_SKILL;
extern const char* SLEIGHT_OF_HAND_SKILL;
extern const char* STEALTH_SKILL;
extern const char* HISTORY_SKILL;
extern const char* MAGIC_SKILL;
extern const char* NATURE_SKILL;
extern const char* INVESTIGATION_SKILL;
extern const char* RELIGION_SKILL;
extern const char* PERCEPTION_SKILL;
extern const char* SURVIVAL_SKILL;
extern const char* MEDICINE_SKILL;
extern const char* INSIGHT_SKILL;
extern const char* ANIMAL_CARE_SKILL;
extern const char* PERFOMANCE_SKILL;
extern const char* INTIMIDATION_SKILL;
extern const char* DECEPTION_SKILL;
extern const char* PERSUASION_SKILL;


std::vector<Skill> getDefaultSkills();
}

#endif // SKILL_H
