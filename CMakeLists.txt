cmake_minimum_required(VERSION 3.10)

project(
  MyWindow
  LANGUAGES CXX)

include_directories(Wnd/inc Utility/inc DeviceContext/ncurses/inc)

file(GLOB SOURCES "Wnd/src/*.cpp" "Utility/src" "DeviceContext/ncurses/src")
add_executable(MyWindow ${SOURCES})
target_link_libraries(MyWindow ncurses)