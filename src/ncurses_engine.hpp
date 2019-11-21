#pragma once
#include "ncurses_keyboard.hpp"
#include "ncurses_renderer.hpp"


namespace maze::engine
{
    class NcursesEngine
    {
        public:
        NcursesEngine(void);
        ~NcursesEngine();

        NcursesRenderer make_renderer(void);
        NcursesKeyboard make_keyboard(void);
    };
};