#include <iostream>
#include <ncurses.h>
#include <string>
#include <vector>
#include "../include/ncurses_window.hpp"
#include "../include/point.hpp"
#include "../include/field.hpp"
#include "../include/field_factory.hpp"

int main () {
    //Point x (1, 1);
    //std::cout << x.get_x() << std::endl;
    //Field f (x, "F");
    //Point y = f.get_position();
    //std::cout << y.get_x() << y.get_y() << std::endl;
    //Point za = f.get_position();
    //FieldFactory ff;
    //std::vector<std::vector<Field> > board; 
    //std::string s = "res/simple_map.txt";
    //board = ff.convert_file_to_map(s);
    //ff.convert_map_to_file(board, "res/exmp.txt");
    //for (auto i: board) {
    //    for (auto j: i) {
    //        std::cout << j.get_symbol();
    //    }
    //    std::cout << std::endl;
    //}
    initscr();
    cbreak();
    refresh();
    Point start {0, 0};
    Point size {3, 10};
    NcursesWindow w {start, size};
    w.init_window();
    std::string s = "A";
    w.print_symbol(s, Point {1,1});
    while (getch()) {
    };
    endwin();
    return 0;
}
