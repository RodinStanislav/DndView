import QtQuick
import QtQuick.Controls.Basic as QtQuickControls
import QtQuick.Layouts

CreateCharacterSubPage {
    property alias className: classSelector.currentText

    nextButtonEnabled: classSelector.currentIndex !== -1

    spacing: 24

    QtQuickControls.Label {
        text: "Class"
        color: window.textColor

        font.bold: true
        font.pixelSize: 32

        Layout.alignment: Qt.AlignHCenter | Qt.AlignTop
    }

    TitledComponent {
        title: "Class"
        color: window.textColor

        Layout.alignment: Qt.AlignHCenter

        ComboBox {
            id: classSelector
            implicitWidth: 300
            implicitHeight: 32

            model: ListModel {}

            Component.onCompleted: {
                fillModel()
            }

            function fillModel() {
                model.clear()
                let classes = backend.classes
                for (let classData of classes) {
                    model.append({data: classData.name});
                }
            }
        }
    }
}
