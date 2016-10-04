#include <iostream>
#include "../include/coord.hpp"
#include "../include/field.hpp"

int main () {
    Coord x (1, 1);
    std::cout << x.get_x() << std::endl;
    Field f (x);
    Coord y = f.get_position();
    std::cout << y.get_x() << y.get_y() << std::endl;
    return 0;
}
