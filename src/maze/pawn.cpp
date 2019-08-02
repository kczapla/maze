#include "pawn.hpp"

namespace maze
{
    void Pawn::set_room(std::shared_ptr<Room> room)
    {
        _room = room;
    }
}