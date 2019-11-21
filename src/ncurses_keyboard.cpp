#include <ncurses.h>
#include "ncurses_keyboard.hpp"

namespace maze::engine
{
    char NcursesKeyboard::get_input(void)
    {
        return getch();
    }
}