find_package(Curses REQUIRED)

add_library(renderer STATIC
    ${CMAKE_CURRENT_SOURCE_DIR}/ncurses_window.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ncurses_engine.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ncurses_keyboard.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ncurses_renderer.cpp
)

target_sources(renderer
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/ncurses_window.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ncurses_engine.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ncurses_keyboard.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ncurses_renderer.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/window_properties.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/window_size.hpp
)

target_link_libraries(renderer ${CURSES_LIBRARIES})
set_target_properties(renderer PROPERTIES
    CXX_STANDARD 17)