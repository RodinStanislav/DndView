import QtQuick
import DndView

Button {
    id: control

    function getColor() {
        if (control.pressed) {
            return Theme.activeBackgroundColor
        }

        if (control.hovered) {
            return Theme.defaultBackgroundColor
        }

        return "transparent"
    }

    backgroundColor: getColor()
    borderColor: getColor()

    borderRadius: 2
}
