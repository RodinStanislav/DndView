import QtQuick
import QtQuick.Layouts
import DndView

ColumnLayout {
    property alias title : label.text
    property int titleAlignment: Qt.AlignTop | Qt.AlignLeft
    property alias font: label.font
    property alias color: label.color

    default property alias content: innerItem.children

    spacing: 0

    Label {
        id: label
        font.pixelSize: 14
        Layout.alignment: parent.titleAlignment
    }

    ColumnLayout {
        id: innerItem
    }
}
