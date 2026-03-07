import QtQuick
import QtQuick.Controls.Basic as QtQuickControls
import QtQuick.Layouts

Window {
    id: window
    width: 1024
    height: 800
    visible: true
    title: qsTr("Dnd View")

    color: "#202020"

    property color textColor: "white"

    RowLayout {
        anchors.left: parent.left
        anchors.leftMargin: 20

        spacing: 20

        Layout.alignment: Qt.AlignTop

        ColumnLayout {
            id: createCharacterLayout
            width: 200

            Layout.alignment: Qt.AlignTop

            QtQuickControls.Label {
                id: nameLabel
                text: "Character name:"
                color: window.textColor
            }

            OpenTextField {
                id: nameEdit

                Layout.fillWidth: true

                verticalAlignment: Qt.AlignVCenter

                height: 24;
            }

            ComboBox {
                id: baseRaceSelector

                property var currentRace: {
                    if (model.count === 0 || currentIndex === -1) {
                        return undefined
                    }

                    return model.get(currentIndex).race
                }

                Layout.fillWidth: true

                displayText: currentRace ? currentRace.name : ""

                model: ListModel {}
                delegate: Rectangle {
                    required property var race
                    required property int index

                    width: baseRaceSelector.width
                    height: 20
                    color: index % 2 == 0 ? "lightgray" : "white" // Use index for alternating colors

                    Text {
                        text: race.name
                        anchors.left: parent.left
                    }

                    MouseArea {
                        anchors.fill: parent
                        onClicked: {
                            baseRaceSelector.currentIndex = index;
                            baseRaceSelector.popup.close()
                        }
                    }
                }

                function fillModel() {
                    baseRaceSelector.model.clear();

                    let baseRaces = backend.getBaseRaces();

                    for (let raceId in baseRaces) {
                        let race = baseRaces[raceId]
                        baseRaceSelector.model.append({race: race, index: raceId})
                    }

                    currentIndex = 0;
                }

                Component.onCompleted: {
                    fillModel()
                }
            }

            ComboBox {
                id: inheritedRaceSelector

                property var currentRace: {
                    if (model.count === 0 || currentIndex === -1) {
                        return undefined
                    }

                    return model.get(currentIndex).race
                }

                Layout.fillWidth: true

                displayText: currentRace ? currentRace.name : ""

                model: ListModel {}

                enabled: model.count > 0

                delegate: Rectangle {
                    required property var race
                    required property int index

                    width: inheritedRaceSelector.width
                    height: 20
                    color: index % 2 == 0 ? "lightgray" : "white" // Use index for alternating colors

                    Text {
                        text: race.name
                        anchors.left: parent.left
                    }

                    MouseArea {
                        anchors.fill: parent
                        onClicked: {
                            inheritedRaceSelector.currentIndex = index;
                            inheritedRaceSelector.popup.close()
                        }
                    }
                }

                function fillModel() {
                    inheritedRaceSelector.model.clear();

                    if (baseRaceSelector.currentRace === undefined) {
                        return
                    }

                    let inheritedRaces = backend.getInheritedRaces(baseRaceSelector.currentRace.name);

                    for (let raceId in inheritedRaces) {
                        let race = inheritedRaces[raceId]
                        inheritedRaceSelector.model.append({race: race, index: raceId})
                    }

                    currentIndex = 0;
                }


                Connections {
                    target: baseRaceSelector

                    function onCurrentRaceChanged() {
                        inheritedRaceSelector.fillModel()
                    }
                }

                Component.onCompleted: {
                    fillModel()
                }
            }

            QtObject {
                id: raceSelector

                property var currentRace: {
                    return inheritedRaceSelector.model.count > 0 ? inheritedRaceSelector.currentRace :
                                                                   baseRaceSelector.currentRace
                }
            }

            ComboBox {
                id: classSelector

                property var currentClass: {
                    return model.get(currentIndex).classData
                }

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

            PrimaryButton {
                id: createCharacterButton

                Layout.fillWidth: true

                text: "Create character"

                onPressed: {
                    backend.createCharacter(nameEdit.text, raceSelector.currentRace.name)
                }
            }
        }

        ColumnLayout {
            id: attributesPreview
            Layout.preferredWidth: 150

            Layout.alignment: Qt.AlignTop

            QtQuickControls.Label {
                text: "Atrributes:"
                Layout.fillWidth: true
                color: window.textColor
            }

            ListView {
                id: attributeTable

                signal dataChanged

                Layout.fillWidth: true
                height: 170

                model: ListModel {}
                delegate: Rectangle {
                    width: 160
                    height: 24
                    color: window.color

                    required property var attribute
                    required property int raceModifier
                    required property int customModifier
                    required property int index

                    QtQuickControls.Label {
                        anchors.left: parent.left
                        height: 24
                        color: window.textColor
                        verticalAlignment: Qt.AlignVCenter
                        text: {
                            let strValue = attribute.name + ": " + (attribute.value + customModifier)
                            if (raceModifier > 0) {
                                strValue += " + " + raceModifier
                            }

                            return strValue
                        }
                    }

                    GhostButton {
                        id: minusAttributeButton
                        anchors.right: plusAttributeButton.left
                        width: 24
                        height: 24
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

                    GhostButton {
                        id: plusAttributeButton
                        anchors.right: parent.right
                        width: 24
                        height: 24
                        text: "+"

                        onPressed: {
                            attributeTable.model.setProperty(index, "customModifier", customModifier + 1)
                            attributeTable.dataChanged()
                        }
                    }
                }

                function fillModel() {
                    attributeTable.model.clear();

                    if (raceSelector.currentRace === undefined) {
                        return
                    }

                    let allAttributes = backend.attributes;
                    let race = raceSelector.currentRace
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

                    function onCurrentRaceChanged() {
                        attributeTable.fillModel();
                    }
                }

                Component.onCompleted: {
                    fillModel()
                }
            }

            QtQuickControls.Label {
                text: "Saving throws:"
                Layout.fillWidth: true
                color: window.textColor
            }

            ListView {
                id: savingThrowsTable

                Layout.fillWidth: true
                height: 55

                model: ListModel {}
                delegate: QtQuickControls.Label {
                    required property string name

                    text: name
                    color: window.textColor
                }

                function fillModel() {
                    savingThrowsTable.model.clear();

                    if (classSelector.model.count === 0 || classSelector.currentIndex === -1) {
                        return
                    }

                    let classData = classSelector.currentClass
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

        ColumnLayout {
            id: skillsPreview
            Layout.preferredWidth: 150

            Layout.alignment: Qt.AlignTop

            QtQuickControls.Label {
                text: "Skills:"
                Layout.fillWidth: true
                color: window.textColor
            }

            QtQuickControls.Label {
                id: proficiencyBonusLabel
                readonly property int proficiencyBonus: 2

                text: "Proficiency bonus: " + proficiencyBonus
                color: window.textColor
            }

            ListView {
                id: skillTable

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
                    color: window.color

                    QtQuickControls.Label {
                        width: skillTable.width
                        height: 24
                        color: window.textColor

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

                        onCheckedChanged: {
                            skillTable.model.setProperty(parent.index, "isProficiencySelected", checked)
                        }
                    }
                }

                function fillModel() {
                    skillTable.model.clear();

                    if (attributeTable.model.count === 0 ||
                        classSelector.model.count === 0 || classSelector.currentIndex === -1) {
                        return
                    }

                    let allSkills = backend.skills;
                    let classData = classSelector.currentClass
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
            Layout.preferredWidth: 150
            Layout.alignment: Qt.AlignTop

            QtQuickControls.Label {
                text: "Properties:"
                Layout.fillWidth: true
                color: window.textColor
            }

            QtQuickControls.Label {
                text: "Avaliable weapons:"
                Layout.fillWidth: true
                color: window.textColor
            }

            ListView {
                id: weaponsTable

                Layout.fillWidth: true
                height: 600

                model: ListModel {}
                delegate: QtQuickControls.Label {
                    required property string name

                    text: name
                    color: window.textColor
                }

                function fillModel() {
                    weaponsTable.model.clear();

                    if (classSelector.model.count === 0 || classSelector.currentIndex === -1) {
                        return
                    }

                    let classData = classSelector.currentClass
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
            Layout.preferredWidth: 150
            Layout.alignment: Qt.AlignTop

            QtQuickControls.Label {
                text: ""
                Layout.fillWidth: true
                color: window.textColor
            }

            QtQuickControls.Label {
                text: "Avaliable armors:"
                Layout.fillWidth: true
                color: window.textColor
            }

            ListView {
                id: armorsTable

                Layout.fillWidth: true
                height: 230

                model: ListModel {}
                delegate: QtQuickControls.Label {
                    required property string name

                    text: name
                    color: window.textColor
                }

                function fillModel() {
                    armorsTable.model.clear();

                    if (classSelector.model.count === 0 || classSelector.currentIndex === -1) {
                        return
                    }

                    let classData = classSelector.currentClass
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
        }

        ColumnLayout {
            Layout.preferredWidth: 150
            Layout.alignment: Qt.AlignTop

            QtQuickControls.Label {
                text: "Spells:"
                Layout.fillWidth: true
                color: window.textColor
            }

            ListView {
                id: spellsTable

                Layout.fillWidth: true
                height: 400

                model: ListModel {}
                delegate: Rectangle {
                    required property var spell
                    required property bool isSelected
                    required property int index

                    width: spellsTable.width
                    height: 24
                    color: window.color

                    QtQuickControls.Label {
                        width: parent.width
                        height: parent.height

                        text: spell.name
                        color: window.textColor
                    }

                    CheckBox {
                        anchors.right: parent.right

                        width: height
                        height: parent.height
                        checked: parent.isSelected

                        onCheckedChanged: {
                            spellsTable.model.setProperty(index, "isSelected", checked)
                        }
                    }
                }

                function fillModel() {
                    spellsTable.model.clear();

                    if (classSelector.model.count === 0 || classSelector.currentIndex === -1) {
                        return
                    }

                    let classData = classSelector.currentClass
                    let spells = classData.spells;

                    for (let spellId in spells) {
                        let spell = spells[spellId]
                        spellsTable.model.append({spell: spell, isSelected: false, index: spellId})
                    }

                    currentIndex = 0;
                }

                Connections {
                    target: classSelector

                    function onCurrentIndexChanged() {
                        spellsTable.fillModel();
                    }
                }

                Component.onCompleted: {
                    fillModel()
                }
            }
        }
    }
}
