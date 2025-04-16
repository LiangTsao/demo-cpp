add_library(CoreLib STATIC
  include/core/core.hpp
  src/core.cpp
)

target_include_directories(CoreLib
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(CoreLib
  PRIVATE
    MathLib
)