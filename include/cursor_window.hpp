#ifndef __CURSOR_WINDOW_H_INCLUDED__
#define __CURSOR_WINDOW_H_INCLUDED__
#include <string>
#include "point.hpp"
 

class CursorWindow { 
    protected:
        // Fields
        Point size;  // Size of the the window
        Point start;  // Start point of the window
        
        // Methods
        virtual void init_window() = 0;

    public: 
        CursorWindow(Point se, Point st) : size {se}, start {st} {} 
        virtual void print_symbol(std::string symbol, Point crd) = 0; // Points relative to the window
}; 
 
#endif
