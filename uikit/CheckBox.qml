import QtQuick
import QtQuick.Controls.Basic
import DndView

CheckBox {
    id: control

    indicator: Rectangle {
        implicitWidth: control.width
        implicitHeight: control.height
        x: control.leftPadding
        y: parent.height / 2 - height / 2
        color: Theme.defaultBackgroundColor

        border.width: 2
        border.color: Theme.accentColor

        Rectangle {
            implicitWidth: (parent.width / 2)
            implicitHeight: (parent.height / 2)
            x: (parent.width - width) / 2
            y: (parent.height - height) / 2
            color: Theme.accentColor
            visible: control.checked
        }
    }
}
