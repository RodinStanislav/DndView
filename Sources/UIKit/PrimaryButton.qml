import QtQuick
import DndView

Button {
    id: control

    backgroundColor: control.enabled ? Theme.activeAccentColor : Theme.disabledAccentColor
    borderColor: control.enabled ? Theme.activeAccentColor : Theme.disabledAccentColor
}
