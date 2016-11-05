#include <ncurses.h>
#include "../include/ncurses_window.hpp"


void NcursesWindow::init_window() {
    WINDOW *win;
    win = newwin(size.get_y(), size.get_x(),
                 start.get_y(), start.get_x());
    box(win, 0, 0);
    wrefresh(win);
    local_win = win;
}
