import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

Window {
    width: 800
    height: 650
    visible: true
    title: qsTr("Dnd View")

    RowLayout {
        anchors.left: parent.left
        anchors.leftMargin: 20

        spacing: 20

        Layout.alignment: Qt.AlignTop

        ColumnLayout {
            id: createCharacterLayout
            width: 100

            Layout.alignment: Qt.AlignTop

            Label {
                id: nameLabel
                text: "Character name:"
            }

            TextField {
                id: nameEdit

                Layout.fillWidth: true

                verticalAlignment: Qt.AlignVCenter

                height: 24;
            }

            ComboBox {
                id: raceSelector

                Layout.fillWidth: true

                displayText: model.get(currentIndex).race.name

                model: ListModel {}
                delegate: Rectangle {
                    required property var race
                    required property int index

                    width: raceSelector.width
                    height: 20
                    color: index % 2 == 0 ? "lightgray" : "white" // Use index for alternating colors

                    Text {
                        text: race.name
                        anchors.left: parent.left
                    }

                    MouseArea {
                        anchors.fill: parent
                        onClicked: {
                            raceSelector.currentIndex = index;
                            raceSelector.popup.close()
                        }
                    }
                }

                function fillModel() {
                    raceSelector.model.clear();

                    let allRaces = backend.races;

                    for (let raceId in allRaces) {
                        let race = allRaces[raceId]
                        raceSelector.model.append({race: race, index: raceId})
                    }

                    currentIndex = 0;
                }

                Component.onCompleted: {
                    fillModel()
                }
            }

            ComboBox {
                id: classSelector

                Layout.fillWidth: true

                displayText: model.get(currentIndex).classData.name

                model: ListModel {}
                delegate: Rectangle {
                    required property var classData
                    required property int index

                    width: classSelector.width
                    height: 20
                    color: index % 2 == 0 ? "lightgray" : "white" // Use index for alternating colors

                    Text {
                        text: classData.name
                        anchors.left: parent.left
                    }

                    MouseArea {
                        anchors.fill: parent
                        onClicked: {
                            classSelector.currentIndex = index;
                            classSelector.popup.close()
                        }
                    }
                }

                function fillModel() {
                    classSelector.model.clear();

                    let allClasses = backend.classes;

                    for (let classId in allClasses) {
                        let classData = allClasses[classId]
                        classSelector.model.append({classData: classData, index: classId})
                    }

                    currentIndex = 0;
                }

                Component.onCompleted: {
                    fillModel()
                }
            }

            Button {
                id: createCharacterButton

                Layout.fillWidth: true

                text: "Create character"

                onPressed: {
                    backend.createCharacter(nameEdit.text, raceSelector.model.get(raceSelector.currentIndex).race.name)
                }
            }
        }

        ColumnLayout {
            id: attributesPreview
            Layout.preferredWidth: 150

            Layout.alignment: Qt.AlignTop

            Label {
                text: "Atrributes:"
                Layout.fillWidth: true
            }

            ListView {
                id: attributeTable

                signal dataChanged

                Layout.fillWidth: true
                height: 170

                model: ListModel {}
                delegate: Rectangle {
                    width: 140
                    height: 24

                    required property var attribute
                    required property int raceModifier
                    required property int customModifier
                    required property int index

                    Label {
                        anchors.left: parent.left
                        height: 24
                        verticalAlignment: Qt.AlignVCenter
                        text: {
                            let strValue = attribute.name + ": " + (attribute.value + customModifier)
                            if (raceModifier > 0) {
                                strValue += " + " + raceModifier
                            }

                            return strValue
                        }
                    }

                    Button {
                        id: minusAttributeButton
                        anchors.right: plusAttributeButton.left
                        text: "-"

                        enabled: {
                            let value = attribute.value + raceModifier + customModifier
                            return value > 0
                        }

                        onPressed: {
                            attributeTable.model.setProperty(index, "customModifier", customModifier - 1)
                            attributeTable.dataChanged()
                        }
                    }

                    Button {
                        id: plusAttributeButton
                        anchors.right: parent.right
                        text: "+"

                        enabled: {
                            let value = attribute.value + raceModifier + customModifier
                            return value < 30
                        }

                        onPressed: {
                            attributeTable.model.setProperty(index, "customModifier", customModifier + 1)
                            attributeTable.dataChanged()
                        }
                    }
                }

                function fillModel() {
                    attributeTable.model.clear();

                    if (raceSelector.model.empty || raceSelector.currentIndex === -1) {
                        return
                    }

                    let allAttributes = backend.attributes;
                    let race = raceSelector.model.get(raceSelector.currentIndex).race
                    let attributeModifiers = race.attributeModifiers

                    for (let attributeIndex in allAttributes) {
                        let attribute = allAttributes[attributeIndex]
                        let attributeModifierValue = 0;
                        let attributeModifier = attributeModifiers.find(
                                function(modifier) {
                                    return attribute.name === modifier.name
                                }
                            )

                        if (attributeModifier !== undefined) {
                            attributeModifierValue = attributeModifier.value
                        }

                        attributeTable.model.append(
                            {
                                attribute: attribute,
                                raceModifier: attributeModifierValue,
                                customModifier: 0,
                                index: attributeIndex
                            }
                        )
                    }

                    currentIndex = 0;
                    dataChanged()
                }

                Connections {
                    target: raceSelector

                    function onCurrentIndexChanged() {
                        attributeTable.fillModel();
                    }
                }

                Component.onCompleted: {
                    fillModel()
                }
            }        
        }

        ColumnLayout {
            id: skillsPreview
            Layout.preferredWidth: 150

            Layout.alignment: Qt.AlignTop

            Label {
                text: "Skills:"
                Layout.fillWidth: true
            }

            Label {
                id: proficiencyBonusLabel
                readonly property int proficiencyBonus: 2

                text: "Proficiency bonus: " + proficiencyBonus
            }

            ListView {
                id: skillTable

                property int avaliableProficiencySkillCount: 0
                property int selectedProficiencySkillCount: 0

                Layout.fillWidth: true
                height: 450

                model: ListModel {}
                delegate: Rectangle {
                    required property var skill
                    required property int value
                    required property bool isAvaliableProficiency
                    required property bool isProficiencySelected
                    required property int index

                    width: skillTable.width
                    height: 24

                    Label {
                        width: skillTable.width
                        height: 24

                        text: {
                            let strValue = skill.name + ": " + value
                            if (parent.isProficiencySelected) {
                                strValue += " + " + proficiencyBonusLabel.proficiencyBonus
                            }

                            return strValue
                        }
                    }

                    CheckBox {
                        anchors.right: parent.right
                        width: 24
                        height: 24
                        checked: parent.isProficiencySelected
                        visible: parent.isAvaliableProficiency
                        enabled: parent.isProficiencySelected || skillTable.selectedProficiencySkillCount < skillTable.avaliableProficiencySkillCount

                        onCheckedChanged: {
                            skillTable.selectedProficiencySkillCount += checked ? 1 : -1
                            skillTable.model.setProperty(parent.index, "isProficiencySelected", checked)
                        }
                    }
                }

                function fillModel() {
                    skillTable.model.clear();
                    skillTable.avaliableProficiencySkillCount = 0;
                    skillTable.selectedProficiencySkillCount = 0;

                    if (attributeTable.model.count === 0 ||
                        classSelector.model.empty || classSelector.currentIndex === -1) {
                        return
                    }

                    let allSkills = backend.skills;
                    let classData = classSelector.model.get(classSelector.currentIndex).classData
                    skillTable.avaliableProficiencySkillCount = classData.avaliableProficiencySkillCount
                    let avaliableProficiencySkills = classData.avaliableProficiencySkills

                    for (let skillId in allSkills) {
                        let skill = allSkills[skillId]

                        let value = undefined
                        let isAvaliableProficiency = false

                        for (let i = 0; i < attributeTable.model.count; i++) {
                            var attribute = attributeTable.model.get(i)

                            if (attribute.attribute.name === skill.dependentAttribute) {
                                value = Math.floor((attribute.attribute.value + attribute.raceModifier + attribute.customModifier) / 2) - 5
                            }
                        }

                        for (let proficiencySkill of avaliableProficiencySkills) {
                            if (proficiencySkill.name === skill.name) {
                                isAvaliableProficiency = true
                                break
                            }
                        }

                        skillTable.model.append(
                            {
                                skill: skill,
                                value: value,
                                isAvaliableProficiency: isAvaliableProficiency,
                                isProficiencySelected: false,
                                index: skillId
                            }
                        )
                    }

                    currentIndex = 0;
                }

                Connections {
                    target: attributeTable

                    function onDataChanged() {
                        skillTable.fillModel();
                    }
                }

                Connections {
                    target: classSelector

                    function onCurrentIndexChanged() {
                        skillTable.fillModel();
                    }
                }

                Component.onCompleted: {
                    fillModel()
                }
            }
        }

        ColumnLayout {
            Layout.fillWidth: true
            Layout.alignment: Qt.AlignTop

            Label {
                text: "Properties:"
                Layout.fillWidth: true
            }

            Label {
                text: "Avaliable weapons:"
                Layout.fillWidth: true
            }

            ListView {
                id: weaponsTable

                Layout.fillWidth: true
                height: 600

                model: ListModel {}
                delegate: Label {
                    required property string name

                    text: name
                }

                function fillModel() {
                    weaponsTable.model.clear();

                    if (classSelector.model.empty || classSelector.currentIndex === -1) {
                        return
                    }

                    let classData = classSelector.model.get(classSelector.currentIndex).classData
                    let weapons = classData.weapons;

                    for (let weapon of weapons) {
                        weaponsTable.model.append(weapon)
                    }

                    currentIndex = 0;
                }

                Connections {
                    target: classSelector

                    function onCurrentIndexChanged() {
                        weaponsTable.fillModel();
                    }
                }

                Component.onCompleted: {
                    fillModel()
                }
            }
        }

        ColumnLayout {
            Layout.fillWidth: true
            Layout.alignment: Qt.AlignTop

            Label {
                text: ""
                Layout.fillWidth: true
            }

            Label {
                text: "Avaliable armors:"
                Layout.fillWidth: true
            }

            ListView {
                id: armorsTable

                Layout.fillWidth: true
                height: 230

                model: ListModel {}
                delegate: Label {
                    required property string name

                    text: name
                }

                function fillModel() {
                    armorsTable.model.clear();

                    if (classSelector.model.empty || classSelector.currentIndex === -1) {
                        return
                    }

                    let classData = classSelector.model.get(classSelector.currentIndex).classData
                    let armors = classData.armors;

                    for (let armor of armors) {
                        armorsTable.model.append(armor)
                    }

                    currentIndex = 0;
                }

                Connections {
                    target: classSelector

                    function onCurrentIndexChanged() {
                        armorsTable.fillModel();
                    }
                }

                Component.onCompleted: {
                    fillModel()
                }
            }

            Label {
                text: "Saving throws:"
                Layout.fillWidth: true
            }

            ListView {
                id: savingThrowsTable

                Layout.fillWidth: true
                height: 200

                model: ListModel {}
                delegate: Label {
                    required property string name

                    text: name
                }

                function fillModel() {
                    savingThrowsTable.model.clear();

                    if (classSelector.model.empty || classSelector.currentIndex === -1) {
                        return
                    }

                    let classData = classSelector.model.get(classSelector.currentIndex).classData
                    let savingThrows = classData.savingThrows;

                    for (let savingThrow of savingThrows) {
                        savingThrowsTable.model.append(savingThrow)
                    }

                    currentIndex = 0;
                }

                Connections {
                    target: classSelector

                    function onCurrentIndexChanged() {
                        savingThrowsTable.fillModel();
                    }
                }

                Component.onCompleted: {
                    fillModel()
                }
            }
        }
    }
}
