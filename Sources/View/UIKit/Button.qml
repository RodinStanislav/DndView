import QtQuick
import QtQuick.Controls.Basic as QtQuickControls
import DndView

QtQuickControls.Button {
    id: control

    property color backgroundColor: privateSection.getBackgroundColor()
    property color borderColor: privateSection.getBorderColor()
    property int borderRadius: 0

    implicitWidth: 180
    implicitHeight: 32

    contentItem: Text {
        text: control.text
        font: control.font
        color: control.enabled ? Theme.activeTextColor : Theme.disabledTextColor
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        elide: Text.ElideRight
    }

    background: Rectangle {
        width: control.width
        height: control.height
        color: control.backgroundColor

        radius: control.borderRadius

        border.width: 2
        border.color: control.borderColor
    }

    QtObject {
        id: privateSection

        function getBackgroundColor() {
            if (!control.enabled) {
                return Theme.disabledAccentColor
            }

            if (control.hovered) {
                return Theme.hoveredAccentColor
            }

            return Theme.activeAccentColor
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
    }
}
