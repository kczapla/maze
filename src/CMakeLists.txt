find_package(Curses REQUIRED)

add_executable(maze
    "game.cpp"
)

#target_include_directories(maze ${CURSES_INCLUDE_DIR})
target_link_libraries(maze ${CURSES_LIBRARIES})