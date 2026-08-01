import QtQuick
import QtQuick.Layouts
import DndView

CharacterViewBlock {
    id: skillsInfoBlock

    readonly property int prefferedWidth: 340

    property var skills

    spacing: 16

    onSkillsChanged: {
        skillsRepeater.fillModel()
    }

    RowLayout {
        spacing: 0

        Label {
            text: "Skills:"
            font.pixelSize: 14
            Layout.preferredWidth: 60
        }

        Label {
            text: "Proficiency:"
            font.pixelSize: 14

            Layout.leftMargin: 35
        }

        Label {
            text: "Modifier:"
            font.pixelSize: 14

            Layout.leftMargin: 35
        }
    }

    ColumnLayout {
        Layout.fillWidth: true
        Layout.preferredWidth: skillsInfoBlock.prefferedWidth

        Repeater {
            id: skillsRepeater
            model: ListModel {}

            delegate: RowLayout {
                id: delegate

                required property string name
                required property int modifier
                required property bool proficiency

                height: 16

                spacing: 0

                Label {
                    Layout.preferredWidth: 100
                    text: parent.name
                }

                CheckBox {
                    Layout.leftMargin: 15
                    implicitWidth: 16
                    implicitHeight: 16
                    enabled: false
                    checked: delegate.proficiency
                }

                Label {
                    Layout.leftMargin: 80
                    text: "(+" + (delegate.modifier + (delegate.proficiency ? 2 : 0)) + ")"
                }

                SecondaryButton {
                    Layout.leftMargin: 60
                    Layout.alignment: Qt.AlignRight

                    implicitWidth: 48
                    implicitHeight: 16

                    text: "Check"
                }
            }

            function fillModel() {
                skillsRepeater.model.clear()
                for (let skill of skillsInfoBlock.skills) {
                    skillsRepeater.model.append(skill)
                }
            }
        }
    }
}
