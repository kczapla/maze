#ifndef __FIELD_H_INCLUDED__
#define __FIELD_H_INCLUDED__

#include <string>
#include "point.hpp"


class Field {
    Point coord;
    std::string symbol;
    public:
       // Constructors 
       Field (): coord {Point {0, 0}}, symbol {"F"} {}
       Field (Point c, std::string s) : coord{c}, symbol{s} {}

       Point get_position();
       std::string get_symbol();
       void set_position(Point);
       
};
#endif /* __FIELD_H_INCLUDED__  */
