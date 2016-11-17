#include "../include/ncurses_window.hpp"


void NcursesWindow::delete_window() {
    delwin(local_win);
    refresh();
}

void NcursesWindow::init_window() {
    WINDOW *win;
    //win = newwin(start.get_y(), start.get_x(),
    //             size.get_y(), size.get_x());
    win = newwin(size.get_y(), size.get_x(),
                 start.get_y(), start.get_x());
    box(win, 0, 0);
    wrefresh(win);
    local_win = win;
}


void NcursesWindow::print_symbol(std::string symbol, Point crd) {
    char *a = "a";
    // mvwaddch(local_win, crd.get_y(), crd.get_x(), a);
}
