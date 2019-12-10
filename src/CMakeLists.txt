add_subdirectory(renderer)

add_executable(game game.cpp)
target_link_libraries(game renderer)
set_property(TARGET game PROPERTY CXX_STANDARD 17)