import QtQuick
import QtQuick.Layouts
import DndView

CharacterViewBlock {
    id: baseInfoBlock

    readonly property int prefferedWidth: 340
    property alias name: characterNameTextField.text
    property alias raceName: raceNameTextField.text
    property alias className: classNameTextField.text
    property alias background: backgroundTextField.text
    property alias level: levelTextField.text
    property alias experience: experienceTextField.text

    Label {
        text: "Base information:"
        font.pixelSize: 14

        Layout.fillWidth: true
    }

    RowLayout {
        spacing: 8
        Layout.preferredWidth: baseInfoBlock.prefferedWidth

        Label {
            text: "Name:"
            font.pixelSize: 12
        }

        OpenTextField {
            id: characterNameTextField
            leftPadding: 0
            readOnly: true
            horizontalAlignment: Qt.AlignLeft

            Layout.fillWidth: true
        }
    }

    RowLayout {
        spacing: 8
        Layout.preferredWidth: baseInfoBlock.prefferedWidth

        Label {
            text: "Race:"
            font.pixelSize: 12
        }

        OpenTextField {
            id: raceNameTextField
            leftPadding: 0
            readOnly: true
            horizontalAlignment: Qt.AlignLeft

            Layout.fillWidth: true
        }
    }

    RowLayout {
        spacing: 8
        Layout.preferredWidth: baseInfoBlock.prefferedWidth

        Label {
            text: "Class:"
            font.pixelSize: 12
        }

        OpenTextField {
            id: classNameTextField
            leftPadding: 0
            readOnly: true
            horizontalAlignment: Qt.AlignLeft

            Layout.fillWidth: true
        }
    }

    RowLayout {
        spacing: 8
        Layout.preferredWidth: baseInfoBlock.prefferedWidth

        Label {
            text: "Background:"
            font.pixelSize: 12
        }

        OpenTextField {
            id: backgroundTextField
            leftPadding: 0
            readOnly: true
            horizontalAlignment: Qt.AlignLeft

            Layout.fillWidth: true
        }
    }

    RowLayout {
        spacing: 8
        Layout.preferredWidth: baseInfoBlock.prefferedWidth

        RowLayout {
            Label {
                text: "Level:"
                font.pixelSize: 12
            }

            OpenTextField {
                id: levelTextField
                leftPadding: 0
                implicitWidth: 24
                readOnly: true
            }
        }

        RowLayout {
            Label {
                text: "Experience:"
                font.pixelSize: 12
            }

            OpenTextField {
                id: experienceTextField
                readOnly: true

                Layout.fillWidth: true
            }
        }
    }
}
