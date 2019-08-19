#pragma once
#include <memory>
#include <utility>
#include "maze_builder.hpp"

namespace maze
{
    class StandardMazeBuilder : public MazeBuilder {
    public:
        StandardMazeBuilder(int width, int height) : _width(width), _height(height) {}

        virtual void build_maze();
        virtual void build_room(int);
        virtual void build_door(int, int);

        virtual std::shared_ptr<Maze> get_maze();
    
    private:
        int _width, _height;
        int _room_id = 0;
        Direction common_wall(std::shared_ptr<Room>, std::shared_ptr<Room>);
        std::shared_ptr<Maze> _current_maze;
    };
}