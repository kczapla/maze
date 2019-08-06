#pragma once
#include <memory>
#include <vector>
#include <utility>

#include "grid.hpp"
#include "room.hpp"


namespace maze
{
    class Maze
    {
    public:
        Maze(size_t size = default_maze_size) : _maze(default_maze_size, default_maze_size) {};
        void add_room(std::shared_ptr<Room> room);
        std::shared_ptr<Room> room_no(int room_id) const;

        static constexpr int default_maze_size = 10;

    private:
        std::pair<int, int> get_room_ords(int room_id);
        std::vector<std::shared_ptr<Room>> _rooms;
        Grid<std::shared_ptr<Room>> _maze;
        int _room_counter = 0;
    };
}