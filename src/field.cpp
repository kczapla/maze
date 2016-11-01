#include <iostream>
#include "../include/field.hpp"


Field::Field() {
    symbol = "F";
    coord = Coord(0,0);
}


Field::Field(std::string sym) {
    symbol = sym;
    coord = Coord(0,0);
}


Field::Field(Coord crd, std::string sym) {
    symbol = sym;
    coord = crd;
}


Coord Field::get_position() {
    return coord;
}

std::string Field::get_symbol() {
    return this->symbol;
}

void Field::set_position(Coord coord) {
    coord = coord;
}
