import QtQuick
import QtQuick.Layouts
import DndView

CreateCharacterSubPage {
    property alias className: classSelector.currentText

    TitledComponent {
        title: "Class"

        Layout.alignment: Qt.AlignHCenter

        ComboBox {
            id: classSelector
            implicitWidth: 300
            implicitHeight: 32

            model: ListModel {}

            Component.onCompleted: {
                fillModel()
            }

            function fillModel() {
                model.clear()
                let classes = backend.classes
                for (let classData of classes) {
                    model.append({data: classData.name});
                }
            }
        }
    }

    VerticalSpacer {}
}
