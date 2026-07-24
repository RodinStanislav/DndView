import QtQuick
import DndView

Button {
    id: control

    backgroundColor: Theme.defaultBackgroundColor
    borderColor: control.enabled ? Theme.activeAccentColor : Theme.disabledAccentColor
}
