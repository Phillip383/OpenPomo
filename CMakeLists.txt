cmake_minimum_required(VERSION 3.16)

project(OpenPomo VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)
qt_standard_project_setup()

set(UI_DIR ui/**)
set(SOURCE_DIR source/**)
include_directories(headers/**)

qt_add_executable(OpenPomo
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
)
target_link_libraries(OpenPomo PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

set_target_properties(OpenPomo PROPERTIES
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS OpenPomo
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
