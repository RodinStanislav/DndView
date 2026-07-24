import QtQuick

Window {
    id: window
    width: 1024
    height: 800
    visible: true
    title: qsTr("Dnd View")

    color: "#202020"

    property color textColor: "white"

    CreateCharacterPage {
        anchors.fill: parent
    }
}
