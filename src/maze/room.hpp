#pragma once
#include <memory>
#include <unordered_map>

#include "map_site.hpp"

namespace maze
{
    class Room : public MapSite
    {
    public:
        Room(int);

        std::shared_ptr<MapSite> get_side(Direction) const;
        void set_side(std::shared_ptr<MapSite>, Direction);

        virtual void enter(std::shared_ptr<Pawn>);

        int get_id() const { return _room_number; }

    private:
        std::unordered_map<Direction, std::shared_ptr<MapSite>> _sides;
        int _room_number;
    };
}