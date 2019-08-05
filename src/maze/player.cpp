#include "player.hpp"

namespace maze
{
    void Player::set_room(std::shared_ptr<Room> room)
    {
        _room = room;
    }
}