#include "standard_maze_builder.hpp"
#include "door.hpp"

namespace maze
{
    void StandardMazeBuilder::build_maze()
    {
        _current_maze = std::make_shared<Maze>();
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

        from_room->set_side(door, common_wall(from_room, to_room));
        to_room->set_side(door, common_wall(to_room, from_room));
    }

    Direction StandardMazeBuilder::common_wall(std::shared_ptr<Room> room1, std::shared_ptr<Room> room2)
    {
        auto room1_id = room1->get_id();
        auto room2_id = room2->get_id();   
        
        auto room1_id_row = room1_id / _width;
        auto room1_id_col = room1_id % _height;

        auto room2_id_row = room2_id / _width;
        auto room2_id_col = room2_id % _height;

        if ((room1_id_row == room2_id_row + 1) && (room1_id_col == room2_id_col)) {
            return Direction::South;
        }
        else if ((room1_id_row == room2_id_row - 1) && (room1_id_col == room2_id_col)) {
            return Direction::North;
        }
        else if ((room1_id_row == room2_id_row) && (room1_id_col == room2_id_col + 1)) {
            return Direction::East;
        }
        else if ((room1_id_row == room2_id_row) && (room1_id_col == room2_id_col - 1)) {
            return Direction::West;
        }
        return Direction();
    }
}