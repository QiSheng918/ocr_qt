cmake_minimum_required(VERSION 3.5)

project(ocr_qt LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
message("start")

find_package(Qt5 COMPONENTS Widgets Core REQUIRED)
find_package(Qt5Network)

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
)

target_link_libraries(ocr_qt PRIVATE Qt5::Widgets Qt5::Core Qt5::Network)
