cmake_minimum_required(VERSION 3.12)
project(DemoCpp LANGUAGES CXX)

# Enforce Ninja generator
if(NOT "${CMAKE_GENERATOR}" STREQUAL "Ninja")
    message(FATAL_ERROR "This project requires Ninja generator. Configure with: cmake -G Ninja -B build")
endif()

# MinGW toolchain configuration

# Ninja generator settings
set(CMAKE_GENERATOR "Ninja" CACHE INTERNAL "")
set(CMAKE_BUILD_PARALLEL_LEVEL 4 CACHE STRING "Number of parallel jobs for builds")
set(CMAKE_NINJA_FORCE_RESPONSE_FILE 0)


# Core project configuration
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE Release CACHE STRING "Choose build type" FORCE)
set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release")

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Add subdirectories for modules
add_subdirectory(math)
add_subdirectory(core)
add_subdirectory(app)
add_subdirectory(utils)
#add_subdirectory(tests)