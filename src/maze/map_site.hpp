#include <memory>


namespace maze
{
    enum class Direction {North, South, West, East};

    class Pawn;

    class MapSite
    {
    public:
        virtual void enter(std::shared_ptr<Pawn>) = 0;
    };
}