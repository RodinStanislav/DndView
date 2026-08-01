import QtQuick
import DndView

Button {
    id: control

    backgroundColor: Theme.activeBackgroundColor
    borderColor: privateSection.getBorderColor()

    QtObject {
        id: privateSection

        function getBorderColor() {
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
    }
}
