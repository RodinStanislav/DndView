import QtQuick
import DndView

TextField {
    id: control

    color: "white"
    horizontalAlignment: TextInput.AlignHCenter

    background: Rectangle {
        implicitWidth: control.width
        implicitHeight: control.height
        color: "transparent"
    }

    Rectangle {
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.bottom: parent.bottom
        height: 2

        color: Theme.accentColor
    }
}
