import QtQuick
import QtQuick.Layouts
import DndView

CreateCharacterSubPage {
    id: attributesAndSkillsSubPage

    property bool isAttributesUsed: attributesBlock.usedPoints === attributesBlock.maxUsedPoints
    property bool isSkillsUsed: skillsBlock.selectedSkillCount === skillsBlock.maxSkillCount

    property string background
    property string raceName
    property string className

    property var attributes: []
    property var skills: []

    onBackgroundChanged: {
        skillsBlock.fillModel()
    }

    onClassNameChanged: {
        skillsBlock.fillModel()
    }

    onRaceNameChanged: {
        attributesBlock.fillModel()
    }

    function updateAttributes() {
        let newAttributes = []

        for (let i = 0; i < attributesBlock.model.count; i++) {
            let attribute = attributesBlock.model.get(i)
            newAttributes.push({name: attribute.attributeName, value: attribute.attribute + attribute.raceBonus})
        }

        attributes = newAttributes
    }

    function updateSkills() {
        let newSkills = []

        for (let i = 0; i < skillsBlock.model.count; i++) {
            let skill = skillsBlock.model.get(i)
            if (skill.isChecked) {
                newSkills.push({name: skill.skillName})
            }
        }

        skills = newSkills
    }

    RowLayout {
        spacing: 64

        ColumnLayout {
            spacing: 16
            Layout.alignment: Qt.AlignTop | Qt.AlignLeft

            Label {
                text: "Attributes (Avaliabled points: " + (attributesBlock.maxUsedPoints - attributesBlock.usedPoints) + ")"
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
                        required property int index

                        required property string attributeName
                        required property int raceBonus
                        required property int attribute

                        readonly property int increasePoint: attribute >= 13

                        Label {
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

                            verticalAlignment: Qt.AlignVCenter
                        }

                        SecondaryButton {
                            text: "-"
                            implicitWidth: 24
                            implicitHeight: 24

                            enabled: parent.attribute > attributesBlock.minAttribute

                            onClicked: {
                                attributesBlock.model.setProperty(parent.index, "attribute", parent.attribute - 1)
                                attributesBlock.usedPoints -= parent.increasePoint + 1
                                attributesAndSkillsSubPage.updateAttributes()
                            }
                        }

                        SecondaryButton {
                            text: "+"
                            implicitWidth: 24
                            implicitHeight: 24

                            enabled: parent.attribute < attributesBlock.maxAttribute &&
                                     attributesBlock.usedPoints + parent.increasePoint < attributesBlock.maxUsedPoints

                            onClicked: {
                                attributesBlock.usedPoints += parent.increasePoint + 1
                                attributesBlock.model.setProperty(parent.index, "attribute", parent.attribute + 1)
                                attributesAndSkillsSubPage.updateAttributes()
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
                            model.append({attributeName: attribute.name, attribute: attributesBlock.minAttribute, raceBonus: raceBonus});
                        }

                        attributesAndSkillsSubPage.updateAttributes()
                    }
                }
            }
        }

        ColumnLayout {
            Layout.alignment: Qt.AlignTop | Qt.AlignRight
            spacing: 16

            Label {
                text: "Skills (Avaliabled skills: " + (skillsBlock.maxSkillCount - skillsBlock.selectedSkillCount) + ")"
            }

            ColumnLayout {
                Repeater {
                    id: skillsBlock

                    property int maxSkillCount: 0
                    property int selectedSkillCount: 0

                    model: ListModel {}

                    RowLayout {
                        required property int index

                        required property string skillName

                        required property bool isChecked
                        required property bool isBackgroundSkill
                        required property bool isVisible

                        property bool isUserSelected: false

                        Label {
                            text: parent.skillName
                            Layout.preferredWidth: 150
                            Layout.preferredHeight: 16

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
                                skillsBlock.model.setProperty(parent.index, "isChecked", checked)
                                checked ? skillsBlock.selectedSkillCount++ : skillsBlock.selectedSkillCount--
                                parent.isUserSelected = checked
                                updateSkills()
                            }
                        }
                    }

                    function fillModel() {
                        model.clear()
                        skillsBlock.maxSkillCount = 0
                        skillsBlock.selectedSkillCount = 0

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

                        updateSkills()
                    }
                }

                Label {
                    visible: attributesAndSkillsSubPage.background.length === 0
                    text: "Background not selected!"
                    color: "red"

                    Layout.topMargin: 8

                    font.pixelSize: 16
                }
            }
        }
    }

    VerticalSpacer {}
}
