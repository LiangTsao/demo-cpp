add_library(MathLib STATIC
  include/math/math.hpp
  src/math.cpp
)

target_include_directories(MathLib
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)