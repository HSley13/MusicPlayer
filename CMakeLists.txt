cmake_minimum_required(VERSION 3.29.3)

project(MusicPlayer LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Quick Multimedia)
qt_standard_project_setup()

qt_add_executable(app WIN32 MACOSX_BUNDLE main.cpp)

target_link_libraries(app PRIVATE 
                                Qt6::Quick 
                                Qt6::Multimedia)

qt6_policy(SET QTP0001 NEW)

qt_add_qml_module(app 
                    URI MusicPlayer
                    VERSION 1.0

                    RESOURCE_PREFIX "/QML_modules"

                    QML_FILES
                    customModules/Main.qml
                    customModules/AudioInfoBox.qml 
                    customModules/ImageButton.qml 
                    customModules/PlayListPanel.qml 
                    customModules/SearchField.qml 
                    customModules/SearchPanel.qml

                    SOURCES
                    AudioInfo.cpp AudioInfo.h
                    PlayerController.cpp PlayerController.h
                    AudioSearchModel.cpp AudioSearchModel.h
     
                    RESOURCES
                    images/add_icon.png
                    images/close_icon.png
                    images/menu_icon.png 
                    images/previous_icon.png 
                    images/next_icon.png
                    images/pause_icon.png 
                    images/play_icon.png 
                    images/search_icon.png
                    images/trash_icon.png)
