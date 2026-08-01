import QtQuick
import QtQuick.Controls.Basic as QtQuickControls
import DndView

QtQuickControls.ComboBox {
    id: control

    implicitWidth: 180
    implicitHeight: 32

    contentItem: Text {
        leftPadding: 8

        text: control.displayText
        font: control.font
        color: control.enabled ? Theme.activeTextColor : Theme.disabledTextColor
        verticalAlignment: Text.AlignVCenter
        elide: Text.ElideRight
    }

    background: Rectangle {
        width: control.width
        height: control.height
        color: Theme.activeBackgroundColor

        border.width: 2
        border.color: privateSection.getBorderColor()
    }

    indicator: Canvas {
        id: canvas
        x: control.width - width - control.rightPadding
        y: control.topPadding + (control.availableHeight - height) / 2
        width: 12
        height: 8
        contextType: "2d"

        Connections {
            target: control
            function onPressedChanged() { canvas.requestPaint(); }
        }

        onPaint: {
            context.reset();
            context.moveTo(0, 0);
            context.lineTo(width, 0);
            context.lineTo(width / 2, height);
            context.closePath();
            context.fillStyle = privateSection.getIndicatorColor()
            context.fill();
        }
    }

    delegate: QtQuickControls.ItemDelegate {
        id: delegate

        required property var model
        required property int index

        width: control.width
        height: control.height

        contentItem: Text {
            text: model.data
            color: control.enabled ? Theme.activeTextColor : Theme.disabledTextColor
            font: control.font
            elide: Text.ElideRight
            verticalAlignment: Text.AlignVCenter
        }

        background: Rectangle {
            width: control.width
            height: control.height
            color: highlighted ? Theme.hoveredBackgroundColor : Theme.activeBackgroundColor

            Rectangle {
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.bottom: parent.bottom

                height: index !== control.model.count - 1 ? 2 : 0

                color: {
                    if (!control.enabled) {
                        return Theme.disabledAccentColor
                    }

                    if (highlighted) {
                        return Theme.hoveredAccentColor
                    }

                    return Theme.activeAccentColor
                }
            }
        }

        highlighted: control.highlightedIndex === index
    }

    popup: QtQuickControls.Popup {
        y: control.height - 2
        width: control.width
        height: Math.min(contentHeight, control.height * 5)
        padding: 2

        contentItem: ListView {
            implicitHeight: contentHeight

            spacing: 0
            clip: true

            model: control.popup.visible ? control.delegateModel : null
            currentIndex: control.highlightedIndex

            boundsBehavior: Flickable.StopAtBounds
            QtQuickControls.ScrollIndicator.vertical: QtQuickControls.ScrollIndicator { }
        }

        background: Rectangle {
            border.width: 2
            border.color: privateSection.getBorderColor()
        }
    }

    QtObject {
        id: privateSection

        function getBorderColor() {
            if (!control.enabled) {
                return Theme.disabledAccentColor
            }

            if (control.pressed || control.popup.visible) {
                return Theme.pressedAccentColor
            }

            return Theme.activeAccentColor
        }

        function getIndicatorColor() {
            return getBorderColor()
        }
    }
}
