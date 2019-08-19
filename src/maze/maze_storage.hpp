#pragma once

#include <memory>
#include <exception>
#include "room.hpp"
#include "maze_dimensions.hpp"


namespace maze
{
    struct StorageException : public std::exception
    {
    public:
        StorageException(std::string msg) : _msg(msg) {};

        const char* what() const throw ()
        {
            return _msg.c_str();
        }

    private:
        std::string _msg;
    };

    class MazeStorage
    {
    public:
        MazeStorage(Size2D);
        virtual void add_room(std::shared_ptr<Room> room) = 0;
        virtual std::shared_ptr<Room> room_no(int room_id) const = 0;
    };
}