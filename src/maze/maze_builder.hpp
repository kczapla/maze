#pragma once
#include <memory>
#include "maze.hpp"

namespace maze
{
    template <typename MazeType>
    class MazeBuilder {
    public:
        virtual void build_maze() { }
        virtual void build_room(int room) { }
        virtual void build_door(int from_room, int to_room) { }

        virtual std::shared_ptr<MazeType> get_maze() { return 0; }
    
    protected:
        MazeBuilder() = default;
    };
}