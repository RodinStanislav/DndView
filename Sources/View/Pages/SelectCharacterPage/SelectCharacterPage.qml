import QtQuick
import QtQuick.Layouts
import DndView

Item {
    id: selectCharacterPage

    signal characterSelected(string character)

    Label {
        id: mainTitle

        anchors.left: parent.left
        anchors.right: parent.right

        horizontalAlignment: Qt.AlignHCenter

        text: qsTr("Select character")

        font.bold: true
        font.pixelSize: 40
    }

    ColumnLayout {
        anchors.centerIn: parent

        TitledComponent {
            title: "Characters:"

            spacing: 4

            Rectangle {
                width: 300
                height: 500

                color: Theme.activeBackgroundColor

                border.width: 2
                border.color: Theme.activeAccentColor

                ListView {
                    id: characterList

                    anchors.fill: parent
                    anchors.margins: 8

                    boundsBehavior: Flickable.StopAtBounds

                    model: ListModel {}

                    delegate: Rectangle {
                        required property string name
                        required property int index

                        width: ListView.view.width
                        height: 32

                        color: ListView.isCurrentItem ? Theme.pressedBackgroundColor :
                               mouseArea.containsMouse ? Theme.hoveredBackgroundColor : "transparent"

                        Label {
                            text: parent.name
                            anchors.fill: parent
                            anchors.leftMargin: 8
                            verticalAlignment: Qt.AlignVCenter

                            font.pixelSize: 16
                        }

                        MouseArea {
                            id: mouseArea
                            anchors.fill: parent
                            hoverEnabled: true // Required for onEntered/onExited/containsMouse

                            onClicked: {
                                characterList.currentIndex = parent.index
                            }
                        }
                    }

                    function fillModel() {
                        model.clear()

                        currentIndex = -1

                        let characters = backend.characters

                        for (let character of characters) {
                            model.append({name: character.name})
                        }
                    }

                    Component.onCompleted: {
                        fillModel()
                    }
                }
            }
        }

        PrimaryButton {
            text: "Select"

            Layout.alignment: Qt.AlignHCenter
            Layout.topMargin: 16
            enabled: characterList.currentIndex !== -1

            onClicked: {
                selectCharacterPage.characterSelected(characterList.currentItem.name)
            }
        }
    }

    Connections {
        target: backend

        function onCharacterListChanged() {
            characterList.fillModel()
        }
    }
}
