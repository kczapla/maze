#pragma once
#include <memory>
#include <vector>
#include <utility>
#include "room.hpp"


namespace maze
{
    template <typename MazeDimensions, typename MazeStorage>
    class Maze
    {
    public:
        Maze(MazeDimensions dimensions) : _dimensions(dimensions), _rooms(dimensions) {}

        void add_room(std::shared_ptr<Room> room);
        std::shared_ptr<Room> room_no(int room_id) const;

    protected:
        MazeDimensions _dimensions;
        MazeStorage _rooms;
    };
    
    template<typename MazeDimensions, typename MazeStorage>
    inline void Maze<MazeDimensions, MazeStorage>::add_room(std::shared_ptr<Room> room)
    {
        _rooms.add_room(room);
    }
    
    template<typename MazeDimensions, typename MazeStorage>
    inline std::shared_ptr<Room> Maze<MazeDimensions, MazeStorage>::room_no(int room_id) const
    {
        _rooms.room_no(room_id);
    }
}