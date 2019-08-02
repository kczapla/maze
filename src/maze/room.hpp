#include <memory>
#include <unordered_map>

#include "map_site.hpp"

namespace maze
{
    class Room : public MapSite
    {
        Room(int roomNo);

        std::shared_ptr<MapSite> get_side(Direction) const;
        void set_side(std::shared_ptr<MapSite> side);

        virtual void enter();

    private:
        std::unordered_map<Direction, std::shared_ptr<MapSite>> _sides;
        int _room_number;
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