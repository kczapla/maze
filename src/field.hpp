#include "plane.hpp"


class Field {
    Coord coord;
    public:
       // Constructors 
       Field ();
       Field (Coord);

       Coord get_position();
       void set_position(Coord);
};
