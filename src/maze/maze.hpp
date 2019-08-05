#pragma once
#include <memory>
#include <vector>
#include "room.hpp"


namespace maze
{
    class Maze
    {
    public:
        void add_room(std::shared_ptr<Room> room);
        std::shared_ptr<Room> room_no(int room_id) const;

    private:
        std::vector<std::shared_ptr<Room>> _maze;
        int room_counter = 0;
    };
}