


add_library(MatrixMath INTERFACE)

target_sources(MatrixMath INTERFACE
  ${CMAKE_CURRENT_LIST_DIR}/MatrixMath.cpp
)

target_include_directories(MatrixMath INTERFACE ${CMAKE_CURRENT_LIST_DIR})

# Pull in pico libraries that we need
target_link_libraries(MatrixMath INTERFACE pico_stdlib)
