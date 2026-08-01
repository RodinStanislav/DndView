import QtQuick
import QtQuick.Layouts
import DndView

Window {
    id: window
    width: 1280
    height: 900
    visible: true
    title: qsTr("Dnd View")

    color: "#202020"

    StackLayout {
        id: mainView

        anchors.fill: parent

        SelectCharacterPage {
            id: selectCharacterPage

            onCharacterSelected: (character) => {
                characterViewPage.character = backend.findCharacter(character)
                mainView.currentIndex = 2
            }
        }

        CreateCharacterPage {
            id: createCharacterPage

            onFinished: {
                mainView.currentIndex = 0
            }
        }

        CharacterViewPage {
            id: characterViewPage
        }
    }

    LeftSideBar {
        GhostButton {
            Layout.fillWidth: true

            text: "Character"
            enabled: characterViewPage.character

            onClicked: {
                mainView.currentIndex = 2
            }
        }

        HorizontalSeparator {}

        GhostButton {
            Layout.fillWidth: true

            text: "Select character"

            onClicked: {
                mainView.currentIndex = 0
            }
        }

        HorizontalSeparator {}

        GhostButton {
            Layout.fillWidth: true

            text: "Create character"

            onClicked: {
                mainView.currentIndex = 1
            }
        }

        HorizontalSeparator {}

        VerticalSpacer {}
    }
}
