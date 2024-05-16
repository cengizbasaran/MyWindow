cmake_minimum_required(VERSION 3.10)

project(
  MyWindow
  LANGUAGES CXX)

include_directories(Wnd/inc DC/ncurses/inc)

file(GLOB SOURCES "Wnd/src/*.cpp" "DC/ncurses/src")
add_executable(MyWindow ${SOURCES})