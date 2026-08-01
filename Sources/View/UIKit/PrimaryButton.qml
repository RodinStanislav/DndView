import QtQuick
import DndView

Button {
    id: control

    backgroundColor: privateSection.getBackgroundColor()
    borderColor: privateSection.getBorderColor()

    QtObject {
        id: privateSection

        function getBackgroundColor() {
            if (!control.enabled) {
                return Theme.disabledAccentColor
            }

            if (control.pressed) {
                return Theme.pressedAccentColor
            }

            if (control.hovered) {
                return Theme.hoveredAccentColor
            }

            return Theme.activeAccentColor
        }

        function getBorderColor() {
            return getBackgroundColor()
        }
    }
}
