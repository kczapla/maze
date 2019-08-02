
namespace maze
{
    enum class Direction {North, South, West, East};

    class MapSite
    {
    public:
        virtual void enter() = 0;
    };
}