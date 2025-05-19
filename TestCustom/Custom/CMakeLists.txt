cmake_minimum_required(VERSION 3.24)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(Custom LANGUAGES CXX)

find_package(Qt6 REQUIRED COMPONENTS Quick Qml)

# qt_standard_project_setup(REQUIRES 6.8 )

qt_add_qml_module (custom
    URI Custom
    VERSION 1.0
    SOURCES
        CustomElement.h
        CustomElement.cpp
)

target_link_libraries(custom
    PRIVATE
        Qt6::Quick
        Qt6::Qml
)
