import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Dnd View")

    ColumnLayout {
        id: createCharacterLayout
        width: 100

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
        anchors.left: createCharacterLayout.right
        anchors.leftMargin: 20
        width: 100

        Label {
            text: "Atrributes:"
            Layout.fillWidth: true
        }

        ListView {
            id: attributeTable

            Layout.fillWidth: true
            height: 100

            model: ListModel {}
            delegate: Label {
                required property var attribute
                required property int raceModifier

                text: {
                    let strValue = attribute.name + ": " + attribute.value
                    if (raceModifier > 0) {
                        strValue += " + " + raceModifier
                    }

                    return strValue
                }
            }

            function fillModel() {
                if (raceSelector.model.empty || raceSelector.currentIndex === -1) {
                    return
                }

                attributeTable.model.clear();

                let allAttributes = backend.attributes;
                let race = raceSelector.model.get(raceSelector.currentIndex).race
                let attributeModifiers = race.attributeModifiers

                for (let attribute of allAttributes) {
                    let attributeModifierValue = 0;
                    let attributeModifier = attributeModifiers.find(
                            function(modifier) {
                                return attribute.name === modifier.name
                            }
                        )

                    if (attributeModifier !== undefined) {
                        attributeModifierValue = attributeModifier.value
                    }

                    attributeTable.model.append({attribute: attribute, raceModifier: attributeModifierValue})
                }

                currentIndex = 0;
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
