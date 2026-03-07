import QtQuick
import QtQuick.Controls.Basic
import DndView

ComboBox {
    id: control

    contentItem: Text {
        leftPadding: 8

        text: control.displayText
        font: control.font
        color: "white"
        verticalAlignment: Text.AlignVCenter
        elide: Text.ElideRight
    }

    background: Rectangle {
        width: control.width
        height: control.height
        color: Theme.defaultBackgroundColor

        border.width: 2
        border.color: Theme.accentColor
    }
}
