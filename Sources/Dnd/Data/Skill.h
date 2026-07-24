#ifndef SKILL_H
#define SKILL_H

#include <string>
#include <vector>

namespace dnd::model {

//  Специализация аттрибута через практику (например, навык Магия, помогающий вспомнить свойства древнего свитка).
struct Skill {
    std::string name;
    std::string attribute;
};

inline const char* ATLETICS_SKILL = "Atletics";
inline const char* ACROBATICS_SKILL = "Acrobatics";
inline const char* SLEIGHT_OF_HAND_SKILL = "Sleight of hand";
inline const char* STEALTH_SKILL = "Stealth";
inline const char* HISTORY_SKILL = "History";
inline const char* MAGIC_SKILL = "Magic";
inline const char* NATURE_SKILL = "Nature";
inline const char* INVESTIGATION_SKILL = "Investigatin";
inline const char* RELIGION_SKILL = "Religion";
inline const char* PERCEPTION_SKILL = "Perception";
inline const char* SURVIVAL_SKILL = "Survival";
inline const char* MEDICINE_SKILL = "Medicine";
inline const char* INSIGHT_SKILL = "Insight";
inline const char* ANIMAL_CARE_SKILL = "Animal care";
inline const char* PERFOMANCE_SKILL = "Perfomance";
inline const char* INTIMIDATION_SKILL = "Intimidation";
inline const char* DECEPTION_SKILL = "Deception";
inline const char* PERSUASION_SKILL = "Persuasion";


std::vector<Skill> getDefaultSkills();
}

#endif // SKILL_H
