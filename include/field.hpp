#ifndef __FIELD_H_INCLUDED__
#define __FIELD_H_INCLUDED__

#include <string>
#include "coord.hpp"


class Field {
    Coord coord;
    std::string symbol;
    public:
       // Constructors 
       Field ();
       Field (std::string);
       Field (Coord, std::string);

       Coord get_position();
       std::string get_symbol();
       void set_position(Coord);
       
};
#endif /* __FIELD_H_INCLUDED__  */
