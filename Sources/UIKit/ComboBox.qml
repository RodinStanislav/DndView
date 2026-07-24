import QtQuick
import QtQuick.Controls.Basic as QtQuickControls
import DndView

QtQuickControls.ComboBox {
    id: control

    implicitWidth: 180
    implicitHeight: 32

    contentItem: Text {
        leftPadding: 8

        text: control.displayText
        font: control.font
        color: control.enabled ? Theme.textColor : Theme.disabledTextColor
        verticalAlignment: Text.AlignVCenter
        elide: Text.ElideRight
    }

    background: Rectangle {
        width: control.width
        height: control.height
        color: Theme.defaultBackgroundColor

        border.width: 2
        border.color: control.enabled ? Theme.activeAccentColor : Theme.disabledAccentColor
    }
}
