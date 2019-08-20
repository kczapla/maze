#include <iostream>
#include <memory>
#include "standard_maze_builder.hpp"


int main(void)
{
    maze::Maze2DBuilder smb({ 2, 2 });
    smb.build_maze();
    smb.build_room(1);
    smb.build_room(2);
    smb.build_room(3);
    smb.build_room(4);
    smb.build_door(1, 2);
    
    auto maze = smb.get_maze();

    system("PAUSE");
    return 0;
}