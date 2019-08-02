#include <memory>

namespace maze
{
    class Room;

    class Pawn
    {
    public:
        Pawn(int id) : _pawn_id(id) {};
        virtual void set_room(std::shared_ptr<Room>) = 0;

    private:
        int _pawn_id;
        std::shared_ptr<Room> _room;
    };
}