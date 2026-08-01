cmake_minimum_required(VERSION 3.16)

project(DndView VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Quick)

qt_standard_project_setup(REQUIRES 6.5)

qt_add_executable(appDndView
    main.cpp
)

set_source_files_properties(Sources/View/UIKit/Theme.qml
    PROPERTIES QT_QML_SINGLETON_TYPE TRUE)

qt_add_qml_module(appDndView
    URI DndView
    QML_FILES Main.qml
    QML_FILES Sources/View/UIKit/Theme.qml

        SOURCES Sources/Model/Data/Race.h
        SOURCES main.h
        SOURCES Sources/Model/Data/Race.cpp
        SOURCES Sources/Model/Data/Character.h
        SOURCES Sources/Model/Data/Serializer.h
        SOURCES Sources/Model/Data/Attribute.h
        SOURCES Sources/Model/Data/Attribute.cpp
        SOURCES Sources/Model/Data/Project.h
        SOURCES Sources/Model/Data/Skill.h
        SOURCES Sources/Model/Data/Spell.h
        SOURCES Sources/Model/Data/Skill.cpp
        SOURCES Sources/Model/Data/Class.h
        SOURCES Sources/Model/Data/Class.cpp
        SOURCES Sources/Model/Data/Weapon.h
        SOURCES Sources/Model/Data/ArmorType.h
        SOURCES Sources/Model/Data/ArmorType.cpp
        SOURCES Sources/Model/Data/WeaponType.h
        SOURCES Sources/Model/Data/WeaponType.cpp
        SOURCES Sources/Model/Data/Armor.h
        SOURCES Sources/Model/Data/Armor.cpp
        SOURCES Sources/Model/Data/Weapon.cpp
        SOURCES Sources/Model/Data/SpellSchool.h
        SOURCES Sources/Model/Data/SpellSchool.cpp
        SOURCES Sources/Model/Data/Spell.cpp
        QML_FILES Sources/View/UIKit/ComboBox.qml
        QML_FILES Sources/View/UIKit/Button.qml
        QML_FILES Sources/View/UIKit/CheckBox.qml
        QML_FILES Sources/View/UIKit/TextField.qml
        QML_FILES Sources/View/UIKit/PrimaryButton.qml
        QML_FILES Sources/View/UIKit/SecondaryButton.qml
        QML_FILES Sources/View/UIKit/GhostButton.qml
        QML_FILES Sources/View/UIKit/OpenTextField.qml
        RESOURCES resources/icons/arrow.svg
        SOURCES Sources/Model/Data/DamageType.h
        SOURCES Sources/Model/Data/DamageType.cpp
        SOURCES Sources/Model/Data/Damage.h
        QML_FILES Sources/View/Pages/CreateCharacterPage/BiographyInfoSubPage.qml
        QML_FILES Sources/View/Pages/CreateCharacterPage/CreateCharacterPage.qml
        SOURCES Sources/Model/Data/Background.h
        SOURCES Sources/Model/Data/Background.cpp
        SOURCES Sources/Model/Data/Feat.h
        SOURCES Sources/Model/Data/Feat.cpp
        QML_FILES Sources/View/UIKit/HorizontalSeparator.qml
        QML_FILES Sources/View/UIKit/TextArea.qml
        QML_FILES Sources/View/UIKit/TitledComponent.qml
        QML_FILES Sources/View/Pages/CreateCharacterPage/CreateCharacterSubPage.qml
        SOURCES Sources/Model/Data/Trait.h
        SOURCES Sources/Model/Data/Feature.h
        QML_FILES Sources/View/Pages/CreateCharacterPage/RaceInfoSubPage.qml
        QML_FILES Sources/View/Pages/CreateCharacterPage/ClassInfoSubPage.qml
        QML_FILES Sources/View/Pages/CreateCharacterPage/AttributesAndSkillsSubPage.qml
        QML_FILES Sources/View/Pages/CreateCharacterPage/FinalSubPage.qml
        QML_FILES Sources/View/UIKit/Label.qml
        QML_FILES Sources/View/UIKit/HorizontalSpacer.qml
        QML_FILES Sources/View/UIKit/VerticalSpacer.qml
        QML_FILES Sources/View/UIKit/SingleLineBorder.qml
        QML_FILES Sources/View/Pages/SelectCharacterPage/SelectCharacterPage.qml
        QML_FILES Sources/View/Pages/CharacterViewPage/CharacterViewPage.qml
        QML_FILES Sources/View/LeftSideBar.qml
        QML_FILES Sources/View/Pages/CharacterViewPage/BaseInfoBlock.qml
        QML_FILES Sources/View/Pages/CharacterViewPage/AdditionalInfoBlock.qml
        QML_FILES Sources/View/Pages/CharacterViewPage/CharacterViewBlock.qml
        QML_FILES Sources/View/Pages/CharacterViewPage/AttributesInfoBlock.qml
        QML_FILES Sources/View/Pages/CharacterViewPage/SkillsInfoBlock.qml
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
