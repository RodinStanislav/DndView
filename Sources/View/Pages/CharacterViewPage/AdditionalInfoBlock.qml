import QtQuick
import QtQuick.Layouts
import DndView

CharacterViewBlock {
    id: additionalInfoBlock

    readonly property int prefferedWidth: 340

    property int initiative: 0
    property int speed: 0
    property int armorClass: 0
    property bool inspiration: false
    property int proficiency: 0
    property int perception: 0
    property int hitPoints: 0
    property int maximumHitPoints: 0
    property int additionalHitPoints: 0

    spacing: 16

    Label {
        text: "Additional information:"
        font.pixelSize: 14

        Layout.fillWidth: true
    }

    GridLayout {
        Layout.fillWidth: true

        rows: 3
        columns: 3

        rowSpacing: 16
        columnSpacing: 16

        Layout.preferredWidth: additionalInfoBlock.prefferedWidth

        Label {
            id: initiativeLabel
            text: "Initiative: " + additionalInfoBlock.initiative
            font.pixelSize: 12
        }

        Label {
            id: speedLabel
            text: "Speed: " + additionalInfoBlock.speed
            font.pixelSize: 12
        }

        Label {
            id: armorClassLabel
            text: "Armor class: " + additionalInfoBlock.armorClass
            font.pixelSize: 12
        }

        Label {
            id: inspirationLabel
            text: "Inspiration: " + additionalInfoBlock.inspiration
            font.pixelSize: 12
        }

        Label {
            id: proficiencyLabel
            text: "Proficiency: " + additionalInfoBlock.proficiency
            font.pixelSize: 12
        }

        Label {
            id: percenptionLabel
            text: "Perception: " + additionalInfoBlock.perception
            font.pixelSize: 12
        }

        Label {
            id: hitPointsLabel
            text: "Hit points: " + additionalInfoBlock.hitPoints
            font.pixelSize: 12
        }

        Label {
            id: maxHitPointsLabel
            text: "Max hit points: " + additionalInfoBlock.maximumHitPoints
            font.pixelSize: 12
        }

        Label {
            id: additionalHitPointsLabel
            text: "Additional hit points: " + additionalInfoBlock.additionalHitPoints
            font.pixelSize: 12
        }
    }

    Label {
        text: "Death saving throws:"
        font.pixelSize: 14

        Layout.fillWidth: true
    }

    GridLayout {
        Layout.fillWidth: true

        rows: 2
        columns: 5

        rowSpacing: 0
        columnSpacing: 52

        Label {
            text: "Death"
            font.pixelSize: 14
        }

        CheckBox {
            id: successSavingThrow1
            enabled: false
        }

        CheckBox {
            id: successSavingThrow2
            enabled: false
        }

        CheckBox {
            id: successSavingThrow3
            enabled: false
        }

        SecondaryButton {
            Layout.alignment: Qt.AlignRight

            implicitWidth: 48
            implicitHeight: 16

            text: "Check"
        }

        Label {
            text: "Life"
            font.pixelSize: 14
        }

        CheckBox {
            id: failureSavingThrow1
            enabled: false
        }

        CheckBox {
            id: failureSavingThrow2
            enabled: false
        }

        CheckBox {
            id: failureSavingThrow3
            enabled: false
        }

        SecondaryButton {
            Layout.alignment: Qt.AlignRight

            implicitWidth: 48
            implicitHeight: 16

            text: "Check"
        }
    }
}
