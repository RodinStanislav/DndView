import QtQuick
import QtQuick.Controls.Basic
import DndView

Button {
    id: control

    property color backgroundColor: Theme.accentColor
    property color borderColor: Theme.accentColor
    property int borderRadius: 0

    contentItem: Text {
        text: control.text
        font: control.font
        color: "white"
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
