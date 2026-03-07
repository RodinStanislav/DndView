import QtQuick
import QtQuick.Controls.Basic
import DndView

TextField {
    id: control

    color: "white"

    background: Rectangle {
        implicitWidth: control.width
        implicitHeight: control.height
        color: Theme.defaultBackgroundColor

        border.width: 2
        border.color: Theme.accentColor
    }
}
