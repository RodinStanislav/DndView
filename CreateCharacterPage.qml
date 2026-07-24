import QtQuick
import QtQuick.Controls.Basic as QtQuickControls
import QtQuick.Layouts

ColumnLayout {
    id: createCharacterPage

    property alias name: biographySubPage.name
    property alias background: biographySubPage.background
    property alias description: biographySubPage.description
    property alias raceName: raceInfoSubPage.raceName
    property alias className: classInfoSubPage.className

    QtQuickControls.Label {
        text: qsTr("Create character")
        color: window.textColor

        font.bold: true
        font.pixelSize: 40

        Layout.alignment: Qt.AlignHCenter
    }

    StackLayout {
        id: subPages
        Layout.fillWidth: false
        Layout.alignment: Qt.AlignHCenter

        BiographyInfoSubPage {
            id: biographySubPage
            onNextButtonClicked: () => { subPages.currentIndex++ }
        }

        RaceInfoSubPage {
            id: raceInfoSubPage
            onNextButtonClicked: () => { subPages.currentIndex++ }
            onPreviousButtonClicked: () => { subPages.currentIndex-- }
        }

        ClassInfoSubPage {
            id: classInfoSubPage
            onNextButtonClicked: () => { subPages.currentIndex++ }
            onPreviousButtonClicked: () => { subPages.currentIndex-- }
        }

        AttributesAndSkillsSubPage {
            background: createCharacterPage.background
            raceName: createCharacterPage.raceName
            className: createCharacterPage.className

            onNextButtonClicked: () => { subPages.currentIndex++ }
            onPreviousButtonClicked: () => { subPages.currentIndex-- }
        }

        ConfirmButtonSubPage {
            onPreviousButtonClicked: () => { subPages.currentIndex-- }
        }
    }
}
