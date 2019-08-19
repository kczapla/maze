#include "standard_maze_builder.hpp"
#include "door.hpp"

namespace maze
{
    void StandardMazeBuilder::build_maze()
    {
        _current_maze = std::make_shared<Maze2D>(_dimensions);
    }
    
    void StandardMazeBuilder::build_room(int room_id)
    {
        _current_maze->add_room(std::make_shared<Room>(room_id));
    }
    
    void StandardMazeBuilder::build_door(int from, int to)
    {
        auto from_room = _current_maze->room_no(from);
        auto to_room = _current_maze->room_no(to);
        auto door = std::make_shared<Door>(from_room, to_room);

        from_room->set_side(door, _current_maze->common_wall(from, to));
        to_room->set_side(door, _current_maze->common_wall(to, from));
    }
    
    std::shared_ptr<Maze2D> StandardMazeBuilder::get_maze()
    {
        return _current_maze;
    }
}