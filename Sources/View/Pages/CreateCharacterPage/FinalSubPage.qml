import QtQuick
import QtQuick.Layouts
import DndView

CreateCharacterSubPage {
    id: finalPage

    property string name
    property string background
    property string raceName
    property string className

    property var attributes: []
    property var skills: []

    onAttributesChanged: {
        attributesBlock.fillModel()
    }

    onSkillsChanged: {
        skillsBlock.fillModel()
    }

    ColumnLayout {
        Layout.alignment: Qt.AlignHCenter

        Label {
            text: "Name: " + name
            font.pixelSize: 18
            font.bold: true
            Layout.alignment: Qt.AlignHCenter
        }

        Label {
            text: "Background: " + (finalPage.background.length > 0 ? finalPage.background : "Not selected")
            font.pixelSize: 18
            font.bold: true
            Layout.alignment: Qt.AlignHCenter
            color: finalPage.background.length > 0 ? Theme.activeTextColor : "red"
        }

        Label {
            text: "Race: " + raceName
            font.pixelSize: 18
            font.bold: true
            Layout.alignment: Qt.AlignHCenter
        }

        Label {
            text: "Class: " + className
            font.pixelSize: 18
            font.bold: true
            Layout.alignment: Qt.AlignHCenter
        }

        RowLayout {
            Layout.topMargin: 32
            spacing: 64

            ColumnLayout {
                spacing: 16
                Layout.alignment: Qt.AlignTop | Qt.AlignLeft

                Label {
                    text: "Attributes:"
                    font.pixelSize: 18
                    font.bold: true
                }

                ColumnLayout {
                    Repeater {
                        id: attributesBlock

                        model: ListModel {}

                        Label {
                            required property string name
                            required property int value

                            text: name + ": " + value

                            width: 80
                            height: 16

                            verticalAlignment: Qt.AlignVCenter
                        }

                        function fillModel() {
                            model.clear()

                            if (finalPage.attributes === undefined) {
                                return;
                            }

                            for (let i = 0; i < finalPage.attributes.length; i++) {
                                model.append(finalPage.attributes[i])
                            }
                        }
                    }
                }
            }

            ColumnLayout {
                Layout.alignment: Qt.AlignTop | Qt.AlignRight
                spacing: 16

                Label {
                    text: "Skills:"
                    font.pixelSize: 18
                    font.bold: true
                }

                ColumnLayout {
                    Repeater {
                        id: skillsBlock

                        model: ListModel {}

                        Label {
                            required property string name

                            text: name
                            width: 80
                            height: 16

                            verticalAlignment: Qt.AlignVCenter
                        }

                        function fillModel() {
                            model.clear()

                            if (finalPage.skills === undefined) {
                                return;
                            }

                            for (let skill of finalPage.skills) {
                                model.append(skill)
                            }
                        }
                    }
                }
            }
        }
    }

    VerticalSpacer {}
}
