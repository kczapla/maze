#include <iostream>
#include <string>
#include <vector>
#include "../include/coord.hpp"
#include "../include/field.hpp"
#include "../include/field_factory.hpp"

int main () {
    Coord x (1, 1);
    std::cout << x.get_x() << std::endl;
    Field f (x, "F");
    Coord y = f.get_position();
    std::cout << y.get_x() << y.get_y() << std::endl;
    Coord za = f.get_position();
    FieldFactory ff;
    std::vector<std::vector<Field> > board; 
    std::string s = "res/simple_map.txt";
    board = ff.convert_file_to_map(s);
    ff.convert_map_to_file(board, "res/exmp.txt");
    for (auto i: board) {
        for (auto j: i) {
            std::cout << j.get_symbol();
        }
        std::cout << std::endl;
    }
    return 0;
}
