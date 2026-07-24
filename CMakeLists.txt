cmake_minimum_required(VERSION 3.16)

project(DndView VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Quick)

qt_standard_project_setup(REQUIRES 6.5)

qt_add_executable(appDndView
    main.cpp
)

set_source_files_properties(Sources/UIKit/Theme.qml
    PROPERTIES QT_QML_SINGLETON_TYPE TRUE)

qt_add_qml_module(appDndView
    URI DndView
    QML_FILES Main.qml
    QML_FILES Sources/UIKit/Theme.qml

        SOURCES Sources/Dnd/Data/Race.h
        SOURCES main.h
        SOURCES Sources/Dnd/Data/Race.cpp
        SOURCES Sources/Dnd/Data/Character.h
        SOURCES Sources/Dnd/Data/Serializer.h
        SOURCES Sources/Dnd/Data/Attribute.h
        SOURCES Sources/Dnd/Data/Attribute.cpp
        SOURCES Sources/Dnd/Data/Project.h
        SOURCES Sources/Dnd/Data/Skill.h
        SOURCES Sources/Dnd/Data/Spell.h
        SOURCES Sources/Dnd/Data/Skill.cpp
        SOURCES Sources/Dnd/Data/Class.h
        SOURCES Sources/Dnd/Data/Class.cpp
        SOURCES Sources/Dnd/Data/Weapon.h
        SOURCES Sources/Dnd/Data/ArmorType.h
        SOURCES Sources/Dnd/Data/ArmorType.cpp
        SOURCES Sources/Dnd/Data/WeaponType.h
        SOURCES Sources/Dnd/Data/WeaponType.cpp
        SOURCES Sources/Dnd/Data/Armor.h
        SOURCES Sources/Dnd/Data/Armor.cpp
        SOURCES Sources/Dnd/Data/Weapon.cpp
        SOURCES Sources/Dnd/Data/SpellSchool.h
        SOURCES Sources/Dnd/Data/SpellSchool.cpp
        SOURCES Sources/Dnd/Data/Spell.cpp
        SOURCES
        QML_FILES Sources/UIKit/ComboBox.qml
        QML_FILES Sources/UIKit/Button.qml
        QML_FILES Sources/UIKit/CheckBox.qml
        QML_FILES Sources/UIKit/TextField.qml
        QML_FILES Sources/UIKit/PrimaryButton.qml
        QML_FILES Sources/UIKit/SecondaryButton.qml
        QML_FILES Sources/UIKit/GhostButton.qml
        QML_FILES Sources/UIKit/OpenTextField.qml
        RESOURCES resources/icons/arrow.svg
        SOURCES Sources/Dnd/Data/DamageType.h
        SOURCES Sources/Dnd/Data/DamageType.cpp
        SOURCES Sources/Dnd/Data/Damage.h
        QML_FILES BiographyInfoSubPage.qml CreateCharacterPage.qml
        SOURCES Sources/Dnd/Data/Background.h
        SOURCES Sources/Dnd/Data/Background.cpp
        SOURCES Sources/Dnd/Data/Feat.h
        SOURCES Sources/Dnd/Data/Feat.cpp
        QML_FILES Sources/UIKit/Separator.qml
        QML_FILES Sources/UIKit/TextArea.qml
        QML_FILES Sources/UIKit/TitledComponent.qml
        QML_FILES CreateCharacterSubPage.qml
        SOURCES Sources/Dnd/Data/Trait.h
        SOURCES Sources/Dnd/Data/Feature.h
        QML_FILES RaceInfoSubPage.qml
        QML_FILES ClassInfoSubPage.qml
        QML_FILES AttributesAndSkillsSubPage.qml
        QML_FILES ConfirmButtonSubPage.qml
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
