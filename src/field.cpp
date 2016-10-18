#include "../include/field.hpp"


Field::Field() {
    coord = Coord(0,0);
}


Field::Field(Coord crd) {
    coord = crd;
}


Coord Field::get_position() {
    return coord;
}

std::string Field::get_symbol() {
    return symbol;
}

void Field::set_position(Coord coord) {
    coord = coord;
}
