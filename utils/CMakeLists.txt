cmake_minimum_required(VERSION 3.12)
project(Utils)

file(GLOB SOURCES
    src/*.cpp
)

add_library(UtilsLib ${SOURCES})

target_include_directories(UtilsLib
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

if(TARGET CoreLib)
    target_link_libraries(UtilsLib PUBLIC CoreLib)
endif()