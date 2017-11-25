cmake_minimum_required(VERSION 3.7)
project(ZMPO3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Vehicle.cpp Vehicle.h Point.cpp Point.h Car.cpp Car.h Boat.cpp Boat.h Amphibian.cpp Amphibian.h)
add_executable(ZMPO3 ${SOURCE_FILES})