#include <sstream>
#include <algorithm>
#include "linear_2dmaze_storage.hpp"

namespace maze
{
    void Linear2dMazeStorage::add_room(std::shared_ptr<Room> room)
    {
        _rooms.push_back(room);

        auto x = _room_counter % _dimensions.width;
        auto y = _room_counter / _dimensions.height;
        _rooms_grid_position[room->get_id()] = std::make_pair(x, y);
        ++_room_counter;
    }

    std::shared_ptr<Room> Linear2dMazeStorage::room_no(int room_id) const
    {
        auto room = std::find_if(_rooms.begin(), _rooms.end(), [room_id](const auto& room) { return room->get_id() == room_id; });
        return *room;
    }

    Direction Linear2dMazeStorage::common_wall(int room1_id, int room2_id)
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