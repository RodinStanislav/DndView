import QtQuick
import QtQuick.Controls.Basic as QtQuickControls
import QtQuick.Layouts
import DndView

ColumnLayout {
    id: page

    property alias nextButtonEnabled: nextButton.enabled
    property alias previousButtonEnabled: previousButton.enabled

    signal previousButtonClicked()
    signal nextButtonClicked()

    default property alias content: innerItem.children

    ColumnLayout {
        spacing: 32

        ColumnLayout {
            id: innerItem
            Layout.alignment: Qt.AlignTop | Qt.AlignHCenter
        }

        RowLayout {
            Layout.fillWidth: true
            Layout.alignment: Qt.AlignHCenter | Qt.AlignBottom

            spacing: 16

            SecondaryButton {
                id: previousButton

                text: "Previous"
                Layout.alignment: Qt.AlignHCenter

                onClicked: {
                    page.previousButtonClicked()
                }
            }

            SecondaryButton {
                id: nextButton

                text: "Next"
                Layout.alignment: Qt.AlignHCenter

                onClicked: {
                    page.nextButtonClicked()
                }
            }
        }
    }
}
