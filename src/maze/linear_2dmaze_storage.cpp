#include <sstream>
#include <algorithm>
#include "linear_2dmaze_storage.hpp"

namespace maze
{
    void Linear2dMazeStorage::add_room(std::shared_ptr<Room> room)
    {
        _rooms.push_back(room);
    }

    std::shared_ptr<Room> Linear2dMazeStorage::room_no(int room_id) const
    {
        auto room = std::find_if(_rooms.begin(), _rooms.end(), [room_id](const auto& room) { return room->get_id() == room_id; });
        return *room;
    }
}