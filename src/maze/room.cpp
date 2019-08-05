#include "room.hpp"
#include "pawn.hpp"

namespace maze
{
    Room::Room(int room_no) : _room_number(room_no) {};

    std::shared_ptr<MapSite> Room::get_side(Direction direction) const
    {
        auto search = _sides.find(direction);
        if (search != _sides.end())
        {
            return search->second;
        }
        return nullptr;
    }
    
    void Room::set_side(std::shared_ptr<MapSite> side, Direction direction)
    {
        _sides[direction] = side;
    }
    
    void Room::enter(std::shared_ptr<Pawn> pawn)
    {
        _pawn = pawn;
    }
}