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
        color: Theme.activeBackgroundColor

        border.width: 2
        border.color: privateSection.getBorderColor()
    }

    QtObject {
        id: privateSection

        function getBorderColor() {
            if (!control.enabled) {
                return Theme.disabledAccentColor
            }

            if (control.activeFocus) {
                return Theme.pressedAccentColor
            }

            return Theme.activeAccentColor
        }
    }
}
