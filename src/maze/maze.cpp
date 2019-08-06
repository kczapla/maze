#include <algorithm>
#include "maze.hpp"


namespace maze
{
    void Maze::add_room(std::shared_ptr<Room> room)
    {
        _rooms.push_back(room);
        auto ords = get_room_ords(room->get_id());
        _maze.at(ords.first, ords.second) = room;
    }

    std::shared_ptr<Room> Maze::room_no(int room_id) const
    {
        auto room = std::find_if(_rooms.begin(), _rooms.end(), [room_id](const auto& room) { return room->get_id() == room_id; });
        return *room;
    }

    std::pair<int, int> Maze::get_room_ords(int room_id)
    {
        int row = _room_counter / default_maze_size;
        int col = _room_counter % default_maze_size;
        return std::make_pair(row, col);
    }
}