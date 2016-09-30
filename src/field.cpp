#include "field.hpp"


Field::Field() {
    coord = Coord(0,0);
}


Field::Field(Coord crd) {
    coord = crd;
}


Coord Field::get_position() {
    return coord;
}


void Field::set_position(Coord coord) {
    coord = coord;
}
