#pragma once

#include <memory>
#include <utility>
#include <sstream>
#include "maze_dimensions.hpp"
#include "maze_builder.hpp"

namespace maze
{
    class StandardMazeBuilder : public MazeBuilder<Maze2D> {
    public:
        StandardMazeBuilder(Size2D dimensions) : _dimensions(dimensions) {}

        virtual void build_maze();
        virtual void build_room(int);
        virtual void build_door(int, int);

        virtual std::shared_ptr<Maze2D> get_maze();
    
    private:
        Size2D _dimensions;
        int _room_id = 0;
        std::shared_ptr<Maze2D> _current_maze;
    };
}