#ifndef __WALL_H_INCLUDED__
#define __WALL_H_INCLUDED__
 
#include <string>
#include "field.hpp"
 
class Wall: public Field { 
    std::string symbol; 
}; 
 
#endif
