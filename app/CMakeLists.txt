add_executable(DemoApp
  src/main.cpp
)

target_link_libraries(DemoApp
  PRIVATE
    CoreLib
    MathLib
)

target_include_directories(DemoApp
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/../core/include
    ${CMAKE_CURRENT_SOURCE_DIR}/../math/include
)