#include "standard_maze_builder.hpp"
#include "door.hpp"

namespace maze
{
    void Maze2DBuilder::build_maze()
    {
        _current_maze = std::make_shared<Maze2D>(_dimensions);
    }
    
    void Maze2DBuilder::build_room(int room_id)
    {
        _current_maze->add_room(std::make_shared<Room>(room_id));
        auto x = _room_counter % _dimensions.width;
        auto y = _room_counter / _dimensions.height;
        _rooms_grid_position[room_id] = std::make_pair(x, y);
        ++_room_counter;
    }
    
    void Maze2DBuilder::build_door(int from, int to)
    {
        auto from_room = _current_maze->room_no(from);
        auto to_room = _current_maze->room_no(to);
        auto door = std::make_shared<Door>(from_room, to_room);

        from_room->set_side(door, common_wall(from, to));
        to_room->set_side(door, common_wall(to, from));
    }
    
    std::shared_ptr<Maze2D> Maze2DBuilder::get_maze()
    {
        return _current_maze;
    }

    Direction Maze2DBuilder::common_wall(int room1_id, int room2_id)
    {
        auto room1_pos = _rooms_grid_position[room1_id];
        auto room2_pos = _rooms_grid_position[room2_id];

        Direction direction;
        if ((room1_pos.first + 1 == room2_pos.first) && (room1_pos.second == room2_pos.second)) direction = Direction::East;
        else if ((room1_pos.first - 1 == room2_pos.first) && (room1_pos.second == room2_pos.second)) direction = Direction::West;
        else if ((room1_pos.first == room2_pos.first) && (room1_pos.second + 1 == room2_pos.second)) direction = Direction::South;
        else if ((room1_pos.first == room2_pos.first) && (room1_pos.second - 1 == room2_pos.second)) direction = Direction::North;
        else {
            std::stringstream msg;
            msg << "Room " << room1_id << " and " << room2_id << " are not neighbours";
            throw StorageException(msg.str());
        }
        return direction;
    }
}