import QtQuick
import QtQuick.Layouts
import DndView

Rectangle {
    id: menu

    property bool isOpen: true

    width: isOpen ? 225 : 0

    anchors.top: parent.top
    anchors.left: parent.left
    anchors.bottom: parent.bottom

    color: Theme.activeBackgroundColor

    default property alias content: innerItem.children

    SingleLineBorder {
        side: SingleLineBorder.Right
    }

    Rectangle {
        x: parent.x + parent.width
        y: (parent.height - height) / 2

        width: 20
        height: 40

        opacity: (menu.isOpen || menuMouseArea.containsMouse) ? 1 : 0.3

        color: Theme.activeAccentColor

        Canvas {
            id: canvas
            x: (parent.width - width) / 2
            y: (parent.height - height) / 2
            width: 8
            height: 12
            contextType: "2d"

            Connections {
                target: menu
                function onIsOpenChanged() {
                    canvas.requestPaint();
                }
            }

            onPaint: {
                menu.isOpen ? drawClosed(context) : drawOpened(context)
            }

            function drawOpened(context) {
                context.reset();
                context.moveTo(0, 0);
                context.lineTo(0, height);
                context.lineTo(width, height / 2);
                context.closePath();
                context.fillStyle = Theme.activeTextColor
                context.fill();
            }

            function drawClosed(context) {
                context.reset();
                context.moveTo(width, 0);
                context.lineTo(width, height);
                context.lineTo(0, height / 2);
                context.closePath();
                context.fillStyle = Theme.activeTextColor
                context.fill();
            }
        }

        MouseArea {
            id: menuMouseArea
            anchors.fill: parent
            hoverEnabled: true

            onClicked: {
                menu.isOpen = !menu.isOpen
            }
        }
    }

    ColumnLayout {
        id: innerItem
        anchors.fill: parent
        anchors.margins: 4
        visible: parent.width > 0
    }
}
