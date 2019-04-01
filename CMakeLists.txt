cmake_minimum_required(VERSION 3.0.0)

project(BullsAndCows VERSION 1.0 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt5Core)

add_executable(${PROJECT_NAME} "${PROJECT_NAME}/BullsAndCows.cpp" "${PROJECT_NAME}/pch.cpp")

target_link_libraries(${PROJECT_NAME} Qt5::Core)
