#ifndef __CURSOR_WINDOW_H_INCLUDED__
#define __CURSOR_WINDOW_H_INCLUDED__
#include <string>
#include "point.hpp"
 

class CursorWindow { 
    protected:
        // Fields
        Point size;  // Size of the the window
        Point start;  // Start point of the window
    public: 
        CursorWindow(Point start, Point size) : start {start}, size {size} {} 
        virtual void change_window_position(Point new_position) = 0;
        virtual void change_window_size(Point new_size) = 0;
        virtual void init_window() = 0;
        virtual void print_symbol(std::string symbol, Point crd) = 0; // Points relative to the window
}; 
 
#endif
