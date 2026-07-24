import QtQuick
import QtQuick.Controls.Basic as QtQuickControls
import QtQuick.Layouts

CreateCharacterSubPage {
    property alias name: characterTextField.text
    property alias background: backgroundComboBox.currentText
    property alias description: descriptionTextArea.text

    previousButtonEnabled: false
    nextButtonEnabled: characterTextField.text.length > 0

    spacing: 24

    QtQuickControls.Label {
        text: "Biography"
        color: window.textColor

        font.bold: true
        font.pixelSize: 32

        Layout.alignment: Qt.AlignHCenter | Qt.AlignTop
    }

    TitledComponent {
        title: "Character name"
        color: window.textColor

        Layout.alignment: Qt.AlignHCenter

        TextField {
            id: characterTextField
            implicitWidth: 300
            implicitHeight: 32
        }
    }

    TitledComponent {
        title: "Background"
        color: window.textColor

        Layout.alignment: Qt.AlignHCenter

        ComboBox {
            id: backgroundComboBox
            implicitWidth: 300
            implicitHeight: 32

            model: ListModel {}

            Component.onCompleted: {
                for (let background of backend.backgrounds) {
                    model.append({data: background.name});
                }
            }
        }
    }

    TitledComponent {
        title: "History"
        color: window.textColor

        Layout.alignment: Qt.AlignHCenter

        TextArea {
            id: descriptionTextArea
            implicitWidth: 300
            implicitHeight: 450
        }
    }
}
