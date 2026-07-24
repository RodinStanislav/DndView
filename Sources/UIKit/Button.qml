import QtQuick
import QtQuick.Controls.Basic
import DndView

Button {
    id: control

    property color backgroundColor: control.enabled ? Theme.activeAccentColor : Theme.disabledAccentColor
    property color borderColor: control.enabled ? Theme.activeAccentColor : Theme.disabledAccentColor
    property int borderRadius: 0

    implicitWidth: 180
    implicitHeight: 32

    contentItem: Text {
        text: control.text
        font: control.font
        color: control.enabled ? Theme.textColor : Theme.disabledTextColor
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
}
