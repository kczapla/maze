#pragma once
#include "pawn.hpp"

namespace maze
{
    class Player : public Pawn
    {
    public:
        virtual void set_room(std::shared_ptr<Room>);
    };
}