import QtQuick
import QtQuick.Controls.Basic as QtQuickControls
import QtQuick.Layouts

CreateCharacterSubPage {
    id: attributesAndSkillsSubPage

    property string background
    property string raceName
    property string className

    onBackgroundChanged: {
        skillsBlock.fillModel()
    }

    onClassNameChanged: {
        skillsBlock.fillModel()
    }

    onRaceNameChanged: {
        attributesBlock.fillModel()
    }

    spacing: 64

    QtQuickControls.Label {
        text: "Attributes and skills"
        color: window.textColor

        font.bold: true
        font.pixelSize: 32

        Layout.alignment: Qt.AlignHCenter | Qt.AlignTop
    }

    RowLayout {
        spacing: 64

        ColumnLayout {
            spacing: 16
            Layout.alignment: Qt.AlignTop | Qt.AlignLeft

            QtQuickControls.Label {
                text: "Attributes (Avaliabled points: " + (attributesBlock.maxUsedPoints - attributesBlock.usedPoints) + ")"
                color: window.textColor
            }

            ColumnLayout {
                spacing: 16

                Repeater {
                    id: attributesBlock

                    readonly property int minAttribute: 8
                    readonly property int maxAttribute: 15

                    readonly property int maxUsedPoints: 27

                    property int usedPoints: 0

                    model: ListModel {}

                    RowLayout {
                        required property string attributeName
                        required property int raceBonus

                        readonly property int increasePoint: attribute >= 13

                        property int attribute: attributesBlock.minAttribute


                        QtQuickControls.Label {
                            text: {
                                let text = parent.attributeName

                                if (parent.raceBonus > 0) {
                                    text += " (+" + parent.raceBonus + ")"
                                }

                                text += ": " + (parent.attribute + parent.raceBonus)

                                return text
                            }

                            Layout.preferredWidth: 130
                            Layout.preferredHeight: 24

                            color: Theme.textColor

                            verticalAlignment: Qt.AlignVCenter
                        }

                        SecondaryButton {
                            text: "+"
                            implicitWidth: 24
                            implicitHeight: 24

                            enabled: parent.attribute < attributesBlock.maxAttribute &&
                                     attributesBlock.usedPoints + parent.increasePoint < attributesBlock.maxUsedPoints

                            onClicked: {
                                attributesBlock.usedPoints += parent.increasePoint + 1
                                parent.attribute++
                            }
                        }

                        SecondaryButton {
                            text: "-"
                            implicitWidth: 24
                            implicitHeight: 24

                            enabled: parent.attribute > attributesBlock.minAttribute

                            onClicked: {
                                parent.attribute--
                                attributesBlock.usedPoints -= parent.increasePoint + 1
                            }
                        }
                    }

                    function fillModel() {
                        model.clear()
                        usedPoints = 0

                        let selectedRace = undefined

                        for (let race of backend.races) {
                            if (race.name === attributesAndSkillsSubPage.raceName) {
                                selectedRace = race
                                break
                            }
                        }

                        if (selectedRace == undefined) {
                            return
                        }

                        let attributeModifiers = selectedRace.attributeModifiers;

                        for (let attribute of backend.attributes) {
                            let attributeModifier = attributeModifiers.find(attributeModifier => attributeModifier.name === attribute.name)
                            let raceBonus = attributeModifier !== undefined ? attributeModifier.value : 0
                            model.append({attributeName: attribute.name, raceBonus: raceBonus});
                        }
                    }
                }
            }
        }

        ColumnLayout {
            Layout.alignment: Qt.AlignTop | Qt.AlignRight
            spacing: 16

            QtQuickControls.Label {
                text: "Skills (Avaliabled skills: " + (skillsBlock.maxSkillCount - skillsBlock.selectedSkillCount) + ")"
                color: window.textColor
            }

            ColumnLayout {
                Repeater {
                    id: skillsBlock

                    property int maxSkillCount: 0
                    property int selectedSkillCount: 0

                    model: ListModel {}

                    RowLayout {
                        required property string skillName

                        required property bool isChecked
                        required property bool isBackgroundSkill
                        required property bool isVisible

                        property bool isUserSelected: false

                        QtQuickControls.Label {
                            text: parent.skillName
                            Layout.preferredWidth: 150
                            Layout.preferredHeight: 16

                            color: Theme.textColor

                            verticalAlignment: Qt.AlignVCenter
                        }

                        CheckBox {
                            implicitWidth: 16
                            implicitHeight: 16

                            checked: parent.isChecked
                            visible: parent.isVisible

                            enabled: {
                                if (parent.isBackgroundSkill) {
                                    return false
                                }

                                if (parent.isUserSelected) {
                                    return true
                                }

                                return skillsBlock.selectedSkillCount < skillsBlock.maxSkillCount
                            }

                            onToggled: {
                                checked ? skillsBlock.selectedSkillCount++ : skillsBlock.selectedSkillCount--
                                parent.isUserSelected = checked
                            }
                        }
                    }

                    function fillModel() {
                        model.clear()
                        skillsBlock.maxSkillCount = 0

                        let selectedBackground = undefined;

                        if (attributesAndSkillsSubPage.background.length > 0) {
                            for (let background of backend.backgrounds) {
                                if (background.name === attributesAndSkillsSubPage.background) {
                                    selectedBackground = background
                                    break
                                }
                            }
                        }

                        let backgroundSkills = selectedBackground !== undefined ? selectedBackground.skills : []

                        let selectedClass = undefined

                        for (let className of backend.classes) {
                            if (className.name === attributesAndSkillsSubPage.className) {
                                selectedClass = className
                                break
                            }
                        }

                        if (selectedClass == undefined) {
                            return
                        }

                        skillsBlock.maxSkillCount = selectedClass.skillCount;
                        let classSkills = selectedClass.skills;

                        for (let skill of backend.skills) {
                            if (backgroundSkills.some(backgroundSkill => JSON.stringify(backgroundSkill) === JSON.stringify(skill))) {
                                model.append({skillName: skill.name, isChecked: true, isBackgroundSkill: true, isVisible: true});
                                continue
                            }

                            let canSelectSkill = classSkills.some(classSkill => JSON.stringify(classSkill) === JSON.stringify(skill))
                            model.append({skillName: skill.name, isChecked: false, isBackgroundSkill: false, isVisible: canSelectSkill});
                        }
                    }
                }
            }
        }
    }
}
