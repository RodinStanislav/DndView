import QtQuick
import DndView as DndView

DndView.Button {
    id: control

    backgroundColor: privateSection.getBackgroundColor()
    borderColor: privateSection.getBorderColor()

    borderRadius: 2

    QtObject {
        id: privateSection

        function getBackgroundColor() {
            if (!control.enabled) {
                return Theme.activeBackgroundColor
            }

            if (control.pressed) {
                return Theme.pressedBackgroundColor
            }

            if (control.hovered) {
                return Theme.hoveredBackgroundColor
            }

            return "transparent"
        }

        function getBorderColor() {
            if (!control.enabled) {
                return Theme.activeBackgroundColor
            }

            if (control.pressed) {
                return Theme.pressedBackgroundColor
            }

            if (control.hovered) {
                return Theme.hoveredBackgroundColor
            }

            return "transparent"
        }
    }
}
