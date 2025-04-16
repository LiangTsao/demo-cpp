cmake_minimum_required(VERSION 3.12)

# Fetch Google Test
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
FetchContent_MakeAvailable(googletest)

# Create test executable
add_executable(Tests
  src/tests.cpp
)

target_link_libraries(Tests
  PRIVATE
    MathLib
    CoreLib
    UtilsLib
    GTest::GTest
    GTest::Main
)

target_include_directories(Tests
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/../math/include
    ${CMAKE_CURRENT_SOURCE_DIR}/../core/include
    ${CMAKE_CURRENT_SOURCE_DIR}/../utils/include
)

# Add test to CTest
include(GoogleTest)
gtest_discover_tests(Tests)