import QtQuick
import QtQuick.Controls.Basic as QtQuickControls
import QtQuick.Layouts

CreateCharacterSubPage {
    spacing: 32

    nextButtonEnabled: false

    Item {
        implicitWidth: 180
        implicitHeight: 300
    }

    PrimaryButton {
        implicitWidth: 180
        implicitHeight: 32

        text: "Create character"
    }

    Item {
        implicitWidth: 180
        implicitHeight: 300
    }
}
