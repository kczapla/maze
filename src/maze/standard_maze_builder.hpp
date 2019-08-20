#pragma once

#include <memory>
#include <utility>
#include <sstream>
#include "maze_dimensions.hpp"
#include "maze_builder.hpp"

namespace maze
{
    class Maze2DBuilder : public MazeBuilder<Maze2D> {
    public:
        Maze2DBuilder(Size2D dimensions) : _dimensions(dimensions) {}

        virtual void build_maze();
        virtual void build_room(int);
        virtual void build_door(int, int);

        virtual std::shared_ptr<Maze2D> get_maze();
    
    private:
        std::map<int, std::pair<int, int>> _rooms_grid_position;
        Size2D _dimensions;
        std::shared_ptr<Maze2D> _current_maze;
        unsigned int _room_counter = 0;

        Direction common_wall(int room1_id, int room2_id);
    };
}