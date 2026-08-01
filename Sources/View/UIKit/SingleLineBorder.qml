import QtQuick
import DndView

Rectangle {
    enum Side {
        Left = 0, Top = 1, Right = 2, Bottom = 3
    }

    property int side: Qt.enumStringToValue(SingleLineBorder.Side, "Left")

    color: Theme.activeAccentColor

    x: side === SingleLineBorder.Right ? parent.width - 2 : 0
    y: side === SingleLineBorder.Bottom ? parent.height - 2 : 0

    width: (side === SingleLineBorder.Top || side === SingleLineBorder.Bottom) ? parent.width : 2
    height: (side === SingleLineBorder.Left || side === SingleLineBorder.Right) ? parent.height : 2
}
