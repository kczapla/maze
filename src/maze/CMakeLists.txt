add_executable(maze
    "${CMAKE_CURRENT_SOURCE_DIR}/main.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/linear_2dmaze_storage.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/room.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/pawn.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/player.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/wall.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/door.cpp"
    # "${CMAKE_CURRENT_SOURCE_DIR}/maze_builder.cpp"
    # "${CMAKE_CURRENT_SOURCE_DIR}/standard_maze_builder.cpp"
)

target_sources(maze
    PUBLIC 
    "${CMAKE_CURRENT_SOURCE_DIR}/maze.hpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/maze_dimensions.hpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/maze_storage.hpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/linear_2dmaze_storage.hpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/map_site.hpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/room.hpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/pawn.hpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/player.hpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/wall.hpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/door.hpp"
    # "${CMAKE_CURRENT_SOURCE_DIR}/maze_builder.hpp"
    # "${CMAKE_CURRENT_SOURCE_DIR}/standard_maze_builder.hpp"
)

target_include_directories(maze PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
set_target_properties(maze PROPERTIES
    LINKER_LANGUAGE CXX
    CXX_STANDARD 17)