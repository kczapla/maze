#include "door.hpp"

namespace maze
{
    Door::Door(std::shared_ptr<Room> from, std::shared_ptr<Room> to)
    {
        _room1 = from;
        _room2 = to;
    }

    void enter(std::shared_ptr<Pawn>)
    {

    }

    std::shared_ptr<Room> Door::other_side_from(std::shared_ptr<Room> here)
    {
        if (_room1 == here) {
            return _room2;
        }
        else if (_room2 == here) {
            return _room1;
        }
        else {
            return nullptr;
        }
    }
}
