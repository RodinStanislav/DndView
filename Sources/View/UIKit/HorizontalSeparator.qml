import QtQuick
import QtQuick.Controls.Basic as QtQuickControls
import QtQuick.Layouts

Rectangle {
    height: 1
    color: "white"

    Component.onCompleted: {
        if (parent && parent.toString().includes("Layout")) {
            Layout.fillWidth = true
        }
        else {
            anchors.left = Qt.binding(function() {return parent.left})
            anchors.right = Qt.binding(function() {return parent.right})
        }
    }
}
