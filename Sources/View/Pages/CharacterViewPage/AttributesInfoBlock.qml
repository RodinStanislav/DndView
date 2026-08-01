import QtQuick
import QtQuick.Layouts
import DndView

CharacterViewBlock {
    id: attributesInfoBlock

    readonly property int prefferedWidth: 340

    property var attributes

    spacing: 16

    onAttributesChanged: {
        attributeRepeater.fillModel()
    }

    RowLayout {
        Layout.alignment: Qt.AlignTop

        spacing: 0

        Label {
            text: "Attributes:"
            font.pixelSize: 14
            Layout.preferredWidth: 70
        }

        Label {
            text: "Modifier:"
            font.pixelSize: 14

            Layout.leftMargin: 35
        }

        Label {
            text: "Saving throws:"
            font.pixelSize: 14

            Layout.leftMargin: 35
        }
    }

    ColumnLayout {
        Layout.alignment: Qt.AlignTop
        Layout.fillWidth: true
        Layout.preferredWidth: attributesInfoBlock.prefferedWidth

        Repeater {
            id: attributeRepeater
            model: ListModel {}

            delegate: RowLayout {
                id: delegate

                required property string name
                required property int value
                required property int modifier
                required property bool savingThrowBonus

                height: 16

                spacing: 0

                Label {
                    Layout.preferredWidth: 70
                    text: parent.name + ": " + parent.value
                }

                Label {
                    Layout.leftMargin: 50
                    text: "(+" + parent.modifier + ")"
                }

                RowLayout {
                    Layout.leftMargin: 60

                    CheckBox {
                        implicitWidth: 16
                        implicitHeight: 16
                        enabled: false
                        checked: delegate.savingThrowBonus
                    }

                    Label {
                        Layout.leftMargin: 20
                        text: "(+" + (delegate.modifier + (delegate.savingThrowBonus ? 2 : 0)) + ")"
                    }
                }

                SecondaryButton {
                    Layout.leftMargin: 30
                    Layout.alignment: Qt.AlignRight

                    implicitWidth: 48
                    implicitHeight: 16

                    text: "Check"
                }
            }

            function fillModel() {
                attributeRepeater.model.clear()
                for (let attribute of attributesInfoBlock.attributes) {
                    attributeRepeater.model.append(attribute)
                }
            }
        }
    }
}
