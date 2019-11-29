add_subdirectory(renderer)

add_executable(game game.cpp)
target_link_libraries(game renderer)