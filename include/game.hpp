#ifndef __INCLUDE/GAME_H_INCLUDED__
#define __INCLUDE/GAME_H_INCLUDED__
#include <vector>
#include "field.hpp"

 
class Game { 
    std::vector<std::vector<Field> > board;
    

    void init_board_from_file();
    public: 
        Game(); 
        menu_loop();
        game_loop();
        render();
        update();
}; 
 
#endif
