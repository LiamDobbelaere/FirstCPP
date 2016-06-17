cmake_minimum_required(VERSION 3.5)
project(FirstCPP)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -static-libgcc -static-libstdc++")

set(SOURCE_FILES main.cpp player.cpp player.h inventory.cpp inventory.h baseitem.cpp baseitem.h items/item_potion.cpp items/item_potion.h)
add_executable(FirstCPP ${SOURCE_FILES})