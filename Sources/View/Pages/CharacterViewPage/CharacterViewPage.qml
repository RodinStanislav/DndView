import QtQuick
import QtQuick.Layouts
import DndView

ColumnLayout {
    id: characterViewPage

    property var character: null

    spacing: 32

    onCharacterChanged: {
        baseInfoBlock.name = character.name
        baseInfoBlock.raceName = character.race.name
        baseInfoBlock.className = character.classData.name
        baseInfoBlock.background = character.background.name
        baseInfoBlock.level = character.level
        baseInfoBlock.experience = character.experience

        additionalInfoBlock.speed = character.race.speed
        additionalInfoBlock.proficiency = ((character.level - 1) / 4) + 2
        additionalInfoBlock.hitPoints = character.hitPoints;
        additionalInfoBlock.maximumHitPoints = character.maximumHitPoints
        additionalInfoBlock.additionalHitPoints = character.additionalHitPoints

        let initiative = 0
        let armorClass = 0
        let perception = 0

        let attributes = []
        let skills = []
        let savingThrows = character.classData.savingThrows

        for (let attribute of character.attributes) {
            if (attribute.name === "Dexterity") {
                initiative = Math.ceil(attribute.value / 2) - 5;
                armorClass = 10 + Math.ceil(attribute.value / 2) - 5;
            }

            if (attribute.name === "Wisdom") {
                perception = 10 + Math.ceil(attribute.value / 2) - 5;
            }

            let savingThrow = savingThrows.some(savingThrowAttribute => savingThrowAttribute.name === attribute.name)
            let modifier = Math.ceil(attribute.value / 2) - 5

            attributes.push({name: attribute.name, value: attribute.value, modifier: modifier, savingThrowBonus: savingThrow})
        }

        for (let skill of backend.skills) {
            let dependentAttribute = attributes.find(attribute => attribute.name === skill.dependentAttribute)
            let hasProficiency = character.skills.some(characterSkill => characterSkill.name === skill.name)

            if (skill.name === "Perception") {
                perception += hasProficiency ? 2 : 0
            }

            skills.push({name: skill.name, modifier: dependentAttribute.modifier, proficiency: hasProficiency})
        }

        additionalInfoBlock.initiative = initiative;
        additionalInfoBlock.armorClass = armorClass;
        additionalInfoBlock.perception = perception;

        attributesBlock.attributes = attributes
        skillsBlock.skills = skills
    }

    Label {
        id: mainTitle

        Layout.fillWidth: true

        horizontalAlignment: Qt.AlignHCenter

        text: qsTr("Character")

        font.bold: true
        font.pixelSize: 40
    }

    GridLayout {
        Layout.fillWidth: true
        Layout.alignment: Qt.AlignHCenter

        columns: 2
        rows: 2

        columnSpacing: 16
        rowSpacing: 16

        BaseInfoBlock {
            id: baseInfoBlock
            Layout.alignment: Qt.AlignTop
        }

        AdditionalInfoBlock {
            id: additionalInfoBlock
            Layout.alignment: Qt.AlignTop
        }

        AttributesInfoBlock {
            id: attributesBlock
            Layout.alignment: Qt.AlignTop
            implicitHeight: skillsBlock.implicitHeight
        }

        SkillsInfoBlock {
            id: skillsBlock
            Layout.alignment: Qt.AlignTop
        }
    }
}
