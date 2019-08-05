#pragma once
#include "room.hpp"

namespace maze
{
    class Door : public MapSite
    {
    public:
        Door(std::shared_ptr<Room> from = nullptr, std::shared_ptr<Room> to = nullptr);
        virtual void enter(std::shared_ptr<Pawn>);
        std::shared_ptr<Room> other_side_from(std::shared_ptr<Room> here);

    private:
        std::shared_ptr<Room> _room1;
        std::shared_ptr<Room> _room2;
        bool isOpen;
    };
}