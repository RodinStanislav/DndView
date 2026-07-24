import QtQuick
import QtQuick.Controls.Basic
import DndView

TextField {
    id: control

    implicitWidth: 180
    implicitHeight: 32

    color: "white"

    background: Rectangle {
        implicitWidth: control.width
        implicitHeight: control.height
        color: Theme.defaultBackgroundColor

        border.width: 2
        border.color: control.enabled ? Theme.activeAccentColor : Theme.disabledAccentColor
    }
}
