import QtQuick
import QtQuick.Layouts
import DndView

CreateCharacterSubPage {
    property alias name: characterTextField.text
    property alias background: backgroundComboBox.currentText
    property alias history: historyTextArea.text

    spacing: 16

    TitledComponent {
        title: "Character name"

        Layout.alignment: Qt.AlignTop | Qt.AlignHCenter

        TextField {
            id: characterTextField
            implicitWidth: 300
            implicitHeight: 32
        }
    }

    TitledComponent {
        title: "Background"

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
        color: Theme.activeTextColor

        Layout.alignment: Qt.AlignHCenter

        TextArea {
            id: historyTextArea
            implicitWidth: 300
            implicitHeight: 450
        }
    }
}
