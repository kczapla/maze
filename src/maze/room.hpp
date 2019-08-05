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

    private:
        std::unordered_map<Direction, std::shared_ptr<MapSite>> _sides;
        int _room_number;
        std::shared_ptr<Pawn> _pawn;
    };

    class Wall : public MapSite
    {
        Wall();
        
        virtual void enter();
    };

    class Door : public MapSite
    {
    public:
        Door(std::shared_ptr<Room> from = nullptr, std::shared_ptr<Room> to = nullptr);
        virtual void enter();
        std::shared_ptr<Room> other_side_from(std::shared_ptr<Room> other);

    private:
        std::shared_ptr<Room> _room1;
        std::shared_ptr<Room> _room2;
        bool isOpen;
    };
}