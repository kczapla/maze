#include <algorithm>
#include "maze.hpp"


namespace maze
{
    void Maze::add_room(std::shared_ptr<Room> room)
    {
        _maze.push_back(room);
    }

    std::shared_ptr<Room> Maze::room_no(int room_id) const
    {
        auto room = std::find_if(_maze.begin(), _maze.end(), [room_id](const auto& room) { return room->get_id() == room_id; });
        return *room;
    }
}