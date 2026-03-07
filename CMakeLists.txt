cmake_minimum_required(VERSION 3.16)

project(DndView VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Quick)

qt_standard_project_setup(REQUIRES 6.5)

qt_add_executable(appDndView
    main.cpp
)

set_source_files_properties(uikit/Theme.qml
    PROPERTIES QT_QML_SINGLETON_TYPE TRUE)

qt_add_qml_module(appDndView
    URI DndView
    QML_FILES Main.qml
    QML_FILES uikit/Theme.qml

        SOURCES dnd/model/Race.h
        SOURCES main.h
        SOURCES dnd/model/Race.cpp
        SOURCES dnd/model/Character.h
        SOURCES dnd/model/Serializer.h
        SOURCES dnd/model/Attribute.h
        SOURCES dnd/model/Attribute.cpp
        SOURCES dnd/model/Project.h
        SOURCES dnd/model/Skill.h
        SOURCES dnd/model/Spell.h
        SOURCES dnd/model/Skill.cpp
        SOURCES dnd/model/Class.h
        SOURCES dnd/model/Class.cpp
        SOURCES dnd/model/Weapon.h
        SOURCES dnd/model/ArmorType.h
        SOURCES dnd/model/ArmorType.cpp
        SOURCES dnd/model/WeaponType.h
        SOURCES dnd/model/WeaponType.cpp
        SOURCES dnd/model/Armor.h
        SOURCES dnd/model/Armor.cpp
        SOURCES dnd/model/Weapon.cpp
        SOURCES dnd/model/SpellSchool.h
        SOURCES dnd/model/SpellSchool.cpp
        SOURCES dnd/model/Spell.cpp
        SOURCES dnd/model/Ability.h
        QML_FILES uikit/ComboBox.qml
        QML_FILES uikit/Button.qml
        QML_FILES uikit/CheckBox.qml
        QML_FILES uikit/TextField.qml
        QML_FILES uikit/PrimaryButton.qml
        QML_FILES uikit/SecondaryButton.qml
        QML_FILES uikit/GhostButton.qml
        QML_FILES uikit/OpenTextField.qml
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appDndView PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appDndView
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appDndView
    PRIVATE Qt6::Quick
)

include(GNUInstallDirs)
install(TARGETS appDndView
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
