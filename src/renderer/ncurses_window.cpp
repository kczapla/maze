#include "ncurses_window.hpp"

namespace maze::engine
{
    NcursesWindow::NcursesWindow(const WindowProperties& window_properties)
    {
        window = { newwin(window_properties.window_size.width, window_properties.window_size.height, 0, 0), delwin };
        box(window.get(), 0, 0);
        wrefresh(window.get());
        wgetch(window.get());
    }
}