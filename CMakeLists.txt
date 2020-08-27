cmake_minimum_required(VERSION 3.5)

project(ocr_qt LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
message("start")

find_package(Qt5 COMPONENTS Widgets Core Gui X11Extras REQUIRED)
find_package(Qt5Network)

INCLUDE_DIRECTORIES(
  QHotkey
)

set(qt_src
    QHotkey/qhotkey_x11.cpp
    QHotkey/qhotkey.cpp

)
set(qt_hdr
    QHotkey/qhotkey_p.h
    QHotkey/qhotkey.h
   )



add_library(qtGlobalShotcut SHARED ${qt_src} )
target_link_libraries(qtGlobalShotcut Qt5::Widgets Qt5::Core Qt5::Gui Qt5::X11Extras)
#foreach(p1ugin ${Qt5Network_PLUGINS})
#    get_target_property(1oc ${p1ugin} LOCATION)
#    message("P1ugin ${p1ugin} is at location ${1oc}")
#endforeach()
add_executable(ocr_qt
  main.cpp
  screen.h
  screen.cpp
  screen.ui
  mainwindow.cpp
  mainwindow.h
  mainwindow.ui
  setting.h
  setting.cpp
  setting.ui
  traymenu.h
  traymenu.cpp
  # QHotkey/qhotkey_x11.cpp
  # QHotkey/qhotkey.cpp
  # QHotkey/qhotkey_p.h
  # QHotkey/qhotkey.h
)

target_link_libraries(ocr_qt 
 
Qt5::Widgets Qt5::Core Qt5::Network Qt5::X11Extras Qt5::Gui
qtGlobalShotcut
)
