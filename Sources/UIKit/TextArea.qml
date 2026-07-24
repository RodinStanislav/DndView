import QtQuick
import QtQuick.Controls.Basic
import DndView

TextArea {
    id: control

    implicitWidth: 180
    implicitHeight: 32

    color: "white"

    background: Rectangle {
        width: control.width
        height: control.height
        color: Theme.defaultBackgroundColor

        border.width: 2
        border.color: control.enabled ? Theme.activeAccentColor : Theme.disabledAccentColor
    }
}
