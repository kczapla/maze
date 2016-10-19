#include <string>
#include "coord.hpp"


class Field {
    Coord coord;
    std::string symbol;
    public:
       // Constructors 
       Field ();
       Field (Coord);

       Coord get_position();
       std::string get_symbol();
       void set_position(Coord);
       
};
