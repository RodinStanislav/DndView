import QtQuick
import QtQuick.Layouts
import DndView

Item {
    id: createCharacterPage

    property alias name: biographySubPage.name
    property alias background: biographySubPage.background
    property alias history: biographySubPage.history
    property alias raceName: raceInfoSubPage.raceName
    property alias className: classInfoSubPage.className
    property alias attributes: attributesAndSkills.attributes
    property alias skills: attributesAndSkills.skills

    signal finished()

    Label {
        id: mainTitle

        anchors.left: parent.left
        anchors.right: parent.right

        horizontalAlignment: Qt.AlignHCenter

        text: qsTr("Create character")

        font.bold: true
        font.pixelSize: 40
    }

    StackLayout {
        id: subPages

        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: mainTitle.bottom
        anchors.bottom: footer.top

        BiographyInfoSubPage {
            id: biographySubPage

            Layout.fillWidth: true

            title: "Biography"
        }

        RaceInfoSubPage {
            id: raceInfoSubPage

            title: "Race"
        }

        ClassInfoSubPage {
            id: classInfoSubPage

            title: "Class"
        }

        AttributesAndSkillsSubPage {
            id: attributesAndSkills
            title: "Attributes and skills"

            background: createCharacterPage.background
            raceName: createCharacterPage.raceName
            className: createCharacterPage.className
        }

        FinalSubPage {
            name: createCharacterPage.name
            background: createCharacterPage.background
            raceName: createCharacterPage.raceName
            className: createCharacterPage.className
            attributes: createCharacterPage.attributes
            skills: createCharacterPage.skills
        }

        onCurrentIndexChanged: {
            switch(currentIndex) {
                case 0: {
                    nextButton.enabled = Qt.binding(function() {return createCharacterPage.name.length > 0})
                    break;
                }

                case 1: {
                    nextButton.enabled = Qt.binding(function() {return createCharacterPage.raceName.length > 0})
                    break;
                }

                case 2: {
                    nextButton.enabled = Qt.binding(function() {return createCharacterPage.className.length > 0})
                    break;
                }

                case 3: {
                    nextButton.enabled =  Qt.binding(function() {return attributesAndSkills.isAttributesUsed && attributesAndSkills.isSkillsUsed})
                    break;
                }

                case 4: {
                    nextButton.enabled = true
                    break;
                }

                default: {
                    nextButton.enabled = false
                    previousButton.enabled = true
                }
            }
        }
    }

    RowLayout {
        id: footer

        anchors.left: parent.left
        anchors.right: parent.right
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 16

        spacing: 16

        HorizontalSpacer {}

        SecondaryButton {
            id: previousButton

            text: "Previous"
            Layout.alignment: Qt.AlignHCenter

            onClicked: {
                if (subPages.currentIndex === 0) {
                    finished()
                    return;
                }

                subPages.currentIndex--
            }
        }

        SecondaryButton {
            id: nextButton

            text: "Next"
            Layout.alignment: Qt.AlignHCenter

            onClicked: {
                if (subPages.currentIndex === 4) {
                    createCharacter()
                    finished()
                    return;
                }

                subPages.currentIndex++
            }
        }

        HorizontalSpacer {}
    }

    function createCharacter() {
        var characterData = {
            name: createCharacterPage.name,
            background: createCharacterPage.background,
            history: createCharacterPage.history,
            raceName: createCharacterPage.raceName,
            className: createCharacterPage.className,
            attributes: createCharacterPage.attributes,
            skills: createCharacterPage.skills
        }

        backend.createCharacter(JSON.stringify(characterData))
    }
}
