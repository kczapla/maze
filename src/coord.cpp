#include "../include/coord.hpp"

Coord::Coord (){
    x = 0;
    y = 0;
}

Coord::Coord(int x_axis, int y_axis){
    x = x_axis;
    y = y_axis;
}

int Coord::get_x(){
    return x;
}

int Coord::get_y(){
    return y;
}

void Coord::set_x(int x_axis){
    x = x_axis;
}

void Coord::set_y(int y_axis){
    y = y_axis;
}
