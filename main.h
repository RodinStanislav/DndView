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
        return data.value;
    }

    dnd::model::Attribute data;
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

        for (const auto& attribute : data.attributeModifiers) {
            attributeModifiers.emplace_back();
            attributeModifiers.back().data = attribute;
        }

        return attributeModifiers;
    }

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
            attributes.back().data = model::Attribute {attribute, 8};
        }

        return attributes;
    }

    Q_INVOKABLE void createCharacter(const QString& name, const QString& raceName) {
        dnd::model::Character newCharacter;
        auto allRaces = dnd::model::getDefaultRaces();
        newCharacter.name = name.toStdString();
        newCharacter.race = raceName.toStdString();

        for (auto& attributeName : project.attributes) {
            newCharacter.attributes.emplace_back(model::Attribute{attributeName, 8});
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
