import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

Window {
    width: 640
    height: 480
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
                    id: delegate

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
                height: 100

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
            width: 100

            Layout.alignment: Qt.AlignTop

            Label {
                text: "Skills:"
                Layout.fillWidth: true
            }

            ListView {
                id: skillTable

                Layout.fillWidth: true
                height: 300

                model: ListModel {}
                delegate: Label {
                    required property var skill
                    required property int value

                    text: skill.name + ": " + value
                }

                function fillModel() {
                    skillTable.model.clear();

                    if (attributeTable.model.count === 0) {
                        return
                    }

                    let allSkills = backend.skills;

                    for (let i = 0; i < attributeTable.model.count; i++) {
                        var attribute = attributeTable.model.get(i)

                        for (let skill of allSkills) {
                            if (attribute.attribute.name === skill.dependentAttribute) {
                                let value = Math.floor((attribute.attribute.value + attribute.raceModifier + attribute.customModifier) / 2) - 5
                                skillTable.model.append({skill: skill, value: value})
                            }
                        }
                    }

                    currentIndex = 0;
                }

                Connections {
                    target: attributeTable

                    function onDataChanged() {
                        skillTable.fillModel();
                    }
                }

                Component.onCompleted: {
                    fillModel()
                }
            }
        }
    }

    Label {
        id: charactersListLabel
        text: "Characters:"
        anchors.top: parent.top
        anchors.right: parent.right
        width: 100
    }

    ListView {
        id: charactersList
        anchors.top: charactersListLabel.bottom
        anchors.right: parent.right

        width: 100
        height: 100
        model: ListModel {}
        delegate: Rectangle {

            required property string name
            required property var race

            width: 100
            height: 20
            color: "lightblue"

            Label {
                anchors.left: parent.left
                text: name + " (" + race.name +")"
            }
        }

        function fillModel() {
            charactersList.model.clear();

            let allCharacters = backend.characters;

            for (let character of allCharacters) {
                charactersList.model.append(character)
            }

            currentIndex = 0;
        }

        Component.onCompleted: {
            fillModel()
        }
    }

    Connections {
        target: backend

        function onCharacterListChanged() {
            charactersList.fillModel()
        }
    }
}
