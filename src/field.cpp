#include <iostream>
#include "../include/field.hpp"


// Field::Field() {
//     symbol = "F";
//     coord = Point(0,0);
// }


Point Field::get_position() {
    return coord;
}

std::string Field::get_symbol() {
    return this->symbol;
}

void Field::set_position(Point coord) {
    coord = coord;
}
