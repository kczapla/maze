#include <ncurses.h>

#include "ncurses_engine.hpp"


namespace maze::engine
{
    NcursesEngine::NcursesEngine(void)
    {
        initscr();
    }

    
    NcursesEngine::~NcursesEngine()
    {
        endwin();
    }

    NcursesRenderer NcursesEngine::make_renderer(void)
    {
        NcursesRenderer renderer;
        return renderer;
    }

    NcursesKeyboard NcursesEngine::make_keyboard(void)
    {
        NcursesKeyboard keyboard;
        return keyboard;
    }
}