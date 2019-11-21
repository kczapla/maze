#include <vector>
#include "ncurses_engine.hpp"
#include "ncurses_renderer.hpp"


int main(void)
{
    maze::engine::NcursesEngine engine;
    auto renderer = engine.make_renderer();

    std::vector<std::vector<char>> buf {
        {' ', ' ', ' ', '\n'},
        {' ', 'x', 'x', '\n'},
        {' ', 'x', 'x', '\n'}, 
        {' ', ' ', ' ', '\n'}
    };
    renderer.update_buffer(buf);
    renderer.draw();

    auto keyboard = engine.make_keyboard();
    auto x = keyboard.get_input();
    return 0;
}