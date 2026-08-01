import QtQuick
import QtQuick.Controls.Basic
import DndView

CheckBox {
    id: control

    implicitWidth: 16
    implicitHeight: 16

    indicator: Rectangle {
        implicitWidth: control.width
        implicitHeight: control.height
        x: control.leftPadding
        y: parent.height / 2 - height / 2
        color: Theme.activeBackgroundColor

        border.width: 2
        border.color: privateSection.getBorderColor()

        Rectangle {
            implicitWidth: (parent.width / 2)
            implicitHeight: (parent.height / 2)
            x: (parent.width - width) / 2
            y: (parent.height - height) / 2
            color: privateSection.getIndicatorColor()
            visible: control.checked
        }
    }

    QtObject {
        id: privateSection

        function getBackgroundColor() {
            if (control.hovered) {
                return Theme.hoveredBackgroundColor
            }

            return Theme.activeBackgroundColor
        }

        function getBorderColor() {
            if (!control.enabled) {
                return Theme.disabledAccentColor
            }

            if (control.hovered) {
                return Theme.hoveredAccentColor
            }

            return Theme.activeAccentColor
        }

        function getIndicatorColor() {
            if (!control.enabled) {
                return Theme.disabledAccentColor
            }

            if (control.hovered) {
                return Theme.hoveredAccentColor
            }

            return Theme.activeAccentColor
        }
    }
}
