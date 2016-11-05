#ifndef __NCURSES_WINDOW_H_INCLUDED__
#define __NCURSES_WINDOW_H_INCLUDED__
#include <ncurses.h>
#include "cursor_window.hpp"
 
 
class NcursesWindow: public CursorWindow { 
    private:
        WINDOW *local_win;
        void init_window();
    public:
        NcursesWindow(Point se, Point st) : CursorWindow(se, st) {}
}; 
 
#endif
