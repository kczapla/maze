#include <vector>
#include "ncurses_engine.hpp"
#include "ncurses_renderer.hpp"
#include "ncruses_window.hpp"
#include "window_properties.hpp"


int main(void)
{
    maze::engine::NcursesEngine engine;
    auto renderer = engine.make_renderer();
    WindowProperties win_prop {true, {10, 10}};
    auto window = maze::engine::NcursesWindow(win_prop); 

    // std::vector<std::vector<char>> buf {
    //     {' ', ' ', ' ', '\n'},
    //     {' ', 'x', 'x', '\n'},
    //     {' ', 'x', 'x', '\n'}, 
    //     {' ', ' ', ' ', '\n'}
    // };
    // renderer.update_buffer(buf);
    // renderer.draw();

    // buf = {
    //     {' ', ' ', ' ', '\n'},
    //     {' ', 'x', ' ', '\n'},
    //     {' ', ' ', 'x', '\n'}, 
    //     {' ', ' ', ' ', '\n'}
    // };

    // renderer.update_buffer(buf);
    // renderer.draw();

    
    auto keyboard = engine.make_keyboard();
    auto x = keyboard.get_input();
    return 0;
}