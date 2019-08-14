#include <map>
#include "maze_storage.hpp"

namespace maze
{
    class Linear2dMazeStorage
    {
    public:
        Linear2dMazeStorage(int width, int height) : _width(width), _height(height) {};

        void add_room(std::shared_ptr<Room> room);
        std::shared_ptr<Room> room_no(int room_id) const;
        Direction neighbouring_wall_direction(std::shared_ptr<Room> room1, std::shared_ptr<Room> room2);

    private:
        size_t _width;
        size_t _height;
        unsigned int _room_counter = 0;
        std::map<int, std::pair<int, int>> _rooms_grid_position;
        std::vector<std::shared_ptr<Room>> _rooms;
    };
}