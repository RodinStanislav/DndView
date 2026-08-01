import QtQuick
import QtQuick.Controls.Basic as QtQuickControls
import QtQuick.Layouts
import DndView

Item {
    id: page

    property alias title: title.text
    property alias spacing: innerItem.spacing

    default property alias content: innerItem.children

    Layout.fillWidth: true
    Layout.fillHeight: true

    ColumnLayout {
        anchors.fill: parent

        Label {
           id: title

           Layout.alignment: Qt.AlignHCenter

           font.bold: true
           font.pixelSize: 32
        }

        ColumnLayout {
            id: innerItem

            Layout.fillWidth: true
            Layout.fillHeight: true

            Layout.alignment: Qt.AlignHCenter
        }
    }
}
