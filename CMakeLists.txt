cmake_minimum_required(VERSION 3.5)

project(ocr_qt LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
message("start")

find_package(Qt5 COMPONENTS Widgets Core Gui REQUIRED)
find_package(Qt5Network)

set(LIBs Qt5::Widgets Qt5::Core Qt5::Gui)
INCLUDE_DIRECTORIES(
   QHotkey
)

set(SRC_FILES  QHotkey/qhotkey.cpp)

MESSAGE(STSTUS "###################################")
MESSAGE(STATUS "operation system is ${CMAKE_SYSTEM}") 
IF (WIN32)
	MESSAGE(STATUS "Now is windows")
	set(SRC_FILES ${SRC_FILES} QHotkey/qhotkey_win.cpp)
ELSEIF (UNIX)
	MESSAGE(STATUS "Now is UNIX-like OS's.")
	find_package(X11 REQUIRED)
    find_package(Qt5X11Extras REQUIRED)
    include_directories(${X11_INCLUDE_DIR})
    set(LIBS ${LIBS} ${X11_LIBRARIES} Qt5::X11Extras)
    set(SRC_FILES ${SRC_FILES} QHotkey/qhotkey_x11.cpp)
ELSEIF (APPLE)
	MESSAGE(STATUS "Now is Apple systens.")
ENDIF ()

MESSAGE(STSTUS "###################################")



add_library(qtGlobalShotcut SHARED ${SRC_FILES})
target_link_libraries(qtGlobalShotcut  ${LIBS})

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

target_link_libraries(ocr_qt 
Qt5::Widgets 
Qt5::Core 
Qt5::Network 
Qt5::Gui
qtGlobalShotcut
)
