#pragma once
#include <map_site.hpp>


namespace maze
{
    class Wall : public MapSite
    {
    public:
        virtual void enter(std::shared_ptr<Pawn>);
    
    private:
        int _wall_id;
    };
}