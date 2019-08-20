#pragma once
#include <map>
#include "maze_storage.hpp"

namespace maze
{
    class Linear2dMazeStorage
    {
    public:
        Linear2dMazeStorage(Size2D dimensions) : _dimensions(dimensions) {};

        void add_room(std::shared_ptr<Room> room);
        std::shared_ptr<Room> room_no(int room_id) const;

    private:
        Size2D _dimensions;
        std::vector<std::shared_ptr<Room>> _rooms;
    };
}