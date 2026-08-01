import QtQuick
import QtQuick.Layouts
import DndView

Rectangle {
    readonly property int padding: 32
    property alias spacing: innerItem.spacing

    default property alias content: innerItem.children

    implicitWidth: innerItem.implicitWidth + padding
    implicitHeight: innerItem.implicitHeight + padding

    color: Theme.activeBackgroundColor

    border.width: 2
    border.color: Theme.activeAccentColor

    ColumnLayout {
        id: innerItem
        anchors.left: parent.left
        anchors.top: parent.top
        anchors.right: parent.right

        anchors.margins: padding / 2
    }
}
