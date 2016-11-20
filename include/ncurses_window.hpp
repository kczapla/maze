#ifndef __NCURSES_WINDOW_H_INCLUDED__
#define __NCURSES_WINDOW_H_INCLUDED__
#include <ncurses.h>
#include "cursor_window.hpp"
 
 
class NcursesWindow: public CursorWindow { 
    private:
        WINDOW *local_win;
    public:
        NcursesWindow(Point start, Point size) : CursorWindow(start, size) {}
        void init_window();
        void change_window_position(Point new_position);
        void change_window_size(Point new_size);
        void print_symbol(std::string symbol, Point crd);
        void delete_window();
}; 
 
#endif
