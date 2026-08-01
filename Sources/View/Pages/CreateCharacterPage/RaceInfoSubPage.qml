import QtQuick
import QtQuick.Layouts
import DndView

CreateCharacterSubPage {
    property string raceName: {
        if (subraceSelector.model.count > 0) {
            return subraceSelector.currentText
        }

        return raceSelector.currentText
    }

    spacing: 8

    TitledComponent {
        title: "Race"
        color: Theme.activeTextColor

        Layout.alignment: Qt.AlignTop | Qt.AlignHCenter

        ComboBox {
            id: raceSelector
            implicitWidth: 300

            model: ListModel {}

            Component.onCompleted: {
                fillModel()
            }

            function fillModel() {
                model.clear()
                let races = backend.getBaseRaces()
                for (let race of races) {
                    model.append({data: race.name});
                }
            }

            onCurrentIndexChanged: {
                let currentRace = model.get(raceSelector.currentIndex)
                if (currentRace === undefined) {
                    return
                }

                let subraces = backend.getInheritedRaces(currentRace.data)
                subraceSelector.model.clear()
                subraceSelector.enabled = subraces.length > 0

                if (subraces.length > 0) {
                    subraceSelector.fillModel(subraces)
                }
            }
        }
    }

    TitledComponent {
        title: "Sub race"

        Layout.alignment: Qt.AlignTop | Qt.AlignHCenter

        ComboBox {
            id: subraceSelector
            implicitWidth: 300
            implicitHeight: 32

            enabled: false

            model: ListModel {}

            function fillModel(subraces) {
                for (let race of subraces) {
                    model.append({data: race.name});
                }

                subraceSelector.currentIndex = 0
            }
        }
    }

    VerticalSpacer {}
}
