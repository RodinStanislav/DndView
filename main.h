#ifndef MAIN_H
#define MAIN_H

#include "Serializer.h"

#include <QObject>
#include <QVector>
#include <QVariant>
#include <QMap>
#include <fstream>
#include <iostream>

namespace dnd::view {

class Attribute {
    Q_GADGET

    Q_PROPERTY(QString name READ getName CONSTANT FINAL)
    Q_PROPERTY(int value READ getValue CONSTANT FINAL)
public:
    Q_INVOKABLE QString getName() const {
        return QString::fromStdString(data.name);
    }

    Q_INVOKABLE int getValue() const {
        return value;
    }

    dnd::model::Attribute data;
    int value = 0;
};

class Skill {
    Q_GADGET

    Q_PROPERTY(QString name READ getName CONSTANT FINAL)
    Q_PROPERTY(QString dependentAttribute READ getDependentAttribute CONSTANT FINAL)
public:
    Q_INVOKABLE QString getName() const {
        return QString::fromStdString(data.name);
    }

    Q_INVOKABLE QString getDependentAttribute() const {
        return QString::fromStdString(data.dependentAttribute);
    }

    dnd::model::Skill data;
};

class Armor {
    Q_GADGET

    Q_PROPERTY(QString name READ getName CONSTANT FINAL)
public:
    Q_INVOKABLE QString getName() const {
        return QString::fromStdString(data.name);
    }

    dnd::model::Armor data;
};

class Weapon {
    Q_GADGET

    Q_PROPERTY(QString name READ getName CONSTANT FINAL)
public:
    Q_INVOKABLE QString getName() const {
        return QString::fromStdString(data.name);
    }

    dnd::model::Weapon data;
};

class Class {
    Q_GADGET

    Q_PROPERTY(QString name READ getName CONSTANT FINAL)
    Q_PROPERTY(QVector<dnd::view::Armor> armors READ getArmors CONSTANT FINAL)
    Q_PROPERTY(QVector<dnd::view::Weapon> weapons READ getWeapons CONSTANT FINAL)
    Q_PROPERTY(QVector<dnd::view::Attribute> savingThrows READ getSavingThrows CONSTANT FINAL)
    Q_PROPERTY(QVector<dnd::view::Skill> avaliableProficiencySkills READ getAvaliableProficiencySkills CONSTANT FINAL)
    Q_PROPERTY(int avaliableProficiencySkillCount READ getAvaliableProficiencySkillCount CONSTANT FINAL)

public:
    Q_INVOKABLE QString getName() const {
        return QString::fromStdString(data.name);
    }

    Q_INVOKABLE QVector<dnd::view::Armor> getArmors() const {
        QVector<dnd::view::Armor> armors;

        for (const auto& armorTypeName : data.armorTypes) {
            for (const auto& armor : project->armors) {
                if (armor.armorType == armorTypeName) {
                    armors.emplace_back();
                    armors.back().data = *std::find_if(project->armors.begin(), project->armors.end(), [&](const model::Armor& armorValue) {
                        return armor.name == armorValue.name;
                    });
                }
            }
        }

        for (const auto& armorName : data.armors) {
            armors.emplace_back();
            armors.back().data = *std::find_if(project->armors.begin(), project->armors.end(), [&](const model::Armor& armor) {
                return armor.name == armorName;
            });
        }

        return armors;
    }

    Q_INVOKABLE QVector<dnd::view::Weapon> getWeapons() const {
        QVector<dnd::view::Weapon> weapons;

        for (const auto& weaponTypeName : data.weaponTypes) {
            for (const auto& weapon : project->weapons) {
                if (weapon.weaponType == weaponTypeName) {
                    weapons.emplace_back();
                    weapons.back().data = *std::find_if(project->weapons.begin(), project->weapons.end(), [&](const model::Weapon& weaponValue) {
                        return weapon.name == weaponValue.name;
                    });
                }
            }
        }

        for (const auto& weaponName : data.weapons) {
            weapons.emplace_back();
            weapons.back().data = *std::find_if(project->weapons.begin(), project->weapons.end(), [&](const model::Weapon& weapon) {
                return weapon.name == weaponName;
            });
        }

        return weapons;
    }

    Q_INVOKABLE QVector<dnd::view::Attribute> getSavingThrows() const {
        QVector<dnd::view::Attribute> savingThrows;

        for (const auto& savingThrow : data.savingThrows) {
            savingThrows.emplace_back();
            savingThrows.back().data = *std::find_if(project->attributes.begin(), project->attributes.end(), [&](const model::Attribute& attribute) {
                return attribute.name == savingThrow;
            });
        }

        return savingThrows;
    }

    Q_INVOKABLE QVector<dnd::view::Skill> getAvaliableProficiencySkills() const {
        QVector<dnd::view::Skill> avaliableProficiencySkills;

        for (const auto& proficiencySkill : data.avaliableProficiencySkills) {
            avaliableProficiencySkills.emplace_back();
            avaliableProficiencySkills.back().data = *std::find_if(project->skills.begin(), project->skills.end(), [&](const model::Skill& skill) {
                return skill.name == proficiencySkill;
            });
        }

        return avaliableProficiencySkills;
    }

    Q_INVOKABLE int getAvaliableProficiencySkillCount() const {
        return data.avaliableProficiencySkillCount;
    }

    model::Project const* project;
    dnd::model::Class data;
};

class Race {
    Q_GADGET

    Q_PROPERTY(QString name READ getName CONSTANT FINAL)
    Q_PROPERTY(QVector<dnd::view::Attribute> attributeModifiers READ getAttributeModifiers CONSTANT FINAL)
public:
    Q_INVOKABLE QString getName() const {
        return QString::fromStdString(data.name);
    }

    Q_INVOKABLE QVector<dnd::view::Attribute> getAttributeModifiers() const {
        QVector<dnd::view::Attribute> attributeModifiers;

        for (const auto& [attributeName, value] : data.attributeModifiers) {
            attributeModifiers.emplace_back();
            attributeModifiers.back().data = *std::find_if(project->attributes.begin(), project->attributes.end(), [&](const model::Attribute& attribute) {
                return attribute.name == attributeName;
            });
            attributeModifiers.back().value = value;
        }

        return attributeModifiers;
    }

    model::Project const* project;
    dnd::model::Race data;
};

class Character {
    Q_GADGET

    Q_PROPERTY(QString name READ getName CONSTANT FINAL)
    Q_PROPERTY(dnd::view::Race race READ getRace CONSTANT FINAL)
public:
    Q_INVOKABLE QString getName() const {
        return QString::fromStdString(data.name);
    }

    Q_INVOKABLE dnd::view::Race getRace() const {
        dnd::view::Race race;

        race.data = *std::find_if(project->races.begin(), project->races.end(), [this](const model::Race& race) {
            return race.name == data.race;
        });

        return race;
    }


    model::Project const* project;
    dnd::model::Character data;
};

class Backend : public QObject {
    Q_OBJECT

    Q_PROPERTY(QVector<dnd::view::Race> races READ getAllRaces CONSTANT FINAL)
    Q_PROPERTY(QVector<dnd::view::Character> characters READ getAllCharacters CONSTANT FINAL)
    Q_PROPERTY(QVector<dnd::view::Attribute> attributes READ getAllAttributes CONSTANT FINAL)
    Q_PROPERTY(QVector<dnd::view::Skill> skills READ getAllSkills CONSTANT FINAL)
    Q_PROPERTY(QVector<dnd::view::Class> classes READ getAllClasses CONSTANT FINAL)
    Q_PROPERTY(QVector<dnd::view::Armor> armors READ getAllArmors CONSTANT FINAL)
    Q_PROPERTY(QVector<dnd::view::Weapon> weapons READ getAllWeapons CONSTANT FINAL)

public:

    ~Backend() {
        saveProject();
    }

public slots:
    Q_INVOKABLE QVector<dnd::view::Race> getAllRaces() const {
        QVector<dnd::view::Race> data(project.races.size());
        auto iterator = data.begin();
        for (const auto& race : project.races) {
            iterator->data = race;
            iterator->project = &project;
            iterator++;
        }

        return data;
    }

    Q_INVOKABLE QVector<dnd::view::Character> getAllCharacters() const {
        QVector<dnd::view::Character> data;
        for (const auto& character : project.characters) {
            data.emplace_back();
            data.back().data = character;
            data.back().project = &project;
        }

        return data;
    }

    Q_INVOKABLE QVector<dnd::view::Attribute> getAllAttributes() const {
        QVector<dnd::view::Attribute> attributes;

        for (auto& attribute : project.attributes) {
            attributes.emplace_back();
            attributes.back().data = attribute;
            attributes.back().value = 8;
        }

        return attributes;
    }

    Q_INVOKABLE QVector<dnd::view::Skill> getAllSkills() const {
        QVector<dnd::view::Skill> skills;

        for (auto& skill : project.skills) {
            skills.emplace_back();
            skills.back().data = skill;
        }

        return skills;
    }

    Q_INVOKABLE QVector<dnd::view::Class> getAllClasses() const {
        QVector<dnd::view::Class> classes;

        for (auto& classData : project.classes) {
            classes.emplace_back();
            classes.back().data = classData;
            classes.back().project = &project;
        }

        return classes;
    }

    Q_INVOKABLE QVector<dnd::view::Armor> getAllArmors() const {
        QVector<dnd::view::Armor> armors;

        for (auto& armor : project.armors) {
            armors.emplace_back();
            armors.back().data = armor;
        }

        return armors;
    }

    Q_INVOKABLE QVector<dnd::view::Weapon> getAllWeapons() const {
        QVector<dnd::view::Weapon> weapons;

        for (auto& weapon : project.weapons) {
            weapons.emplace_back();
            weapons.back().data = weapon;
        }

        return weapons;
    }

    Q_INVOKABLE void createCharacter(const QString& name, const QString& raceName) {
        dnd::model::Character newCharacter;
        auto allRaces = dnd::model::getDefaultRaces();
        newCharacter.name = name.toStdString();
        newCharacter.race = raceName.toStdString();

        for (auto& attributeName : project.attributes) {
            newCharacter.attributes[attributeName.name] = 8;
        }

        project.characters.push_back(newCharacter);
        emit characterListChanged();
    }

    void loadProject() {
        std::ifstream file("project.prj");
        if (!file.is_open()) {
            std::cout << "Can't load project" << std::endl;

            project.races = model::getDefaultRaces();
            project.attributes = model::getDefaultAttributes();
            project.skills = model::getDefaultSkills();
            project.classes = model::getDefaultClasses();
            project.armorTypes = model::getDefaultArmorTypes();
            project.weaponTypes = model::getDefaultWeaponTypes();
            project.armors = model::getDefaultArmors();
            project.weapons = model::getDefaultWeapons();

            return;
        }

        std::string jsonString;
        std::string line;
        while (std::getline(file, line)) {
            jsonString += line;
        }

        file.close();

        nlohmann::json json = nlohmann::json::parse(jsonString);
        json.get_to(project);
    }

    Q_INVOKABLE void saveProject() const {
        std::ofstream file("project.prj");

        if (!file.is_open()) {
            std::cout << "Can't save project" << std::endl;
            return;
        }

        nlohmann::json json = project;
        auto jsonString = json.dump(4);
        file.write(jsonString.c_str(), jsonString.size());
        file.close();
    }

signals:
    void characterListChanged();

public:
    dnd::model::Project project;
};

}

#endif // MAIN_H
