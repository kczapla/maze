#include <iostream>
#include <memory>

#include "room.hpp"
#include "wall.hpp"
#include "door.hpp"
#include "linear_2dmaze_storage.hpp"
#include "maze.hpp"


int main(void)
{
    std::shared_ptr<maze::Room> r1 = std::make_shared <maze::Room>(1);
    std::shared_ptr<maze::Room> r2 = std::make_shared <maze::Room>(2);
    std::shared_ptr<maze::Room> r3 = std::make_shared <maze::Room>(3);
    std::shared_ptr<maze::Room> r4 = std::make_shared <maze::Room>(4);
    std::shared_ptr<maze::Door> d = std::make_shared<maze::Door>(r1, r2);
    r1->set_side(d, maze::Direction::East);
    r1->set_side(std::make_shared<maze::Wall>(), maze::Direction::West);
    r1->set_side(std::make_shared<maze::Wall>(), maze::Direction::North);
    r1->set_side(std::make_shared<maze::Wall>(), maze::Direction::South);

    r2->set_side(std::make_shared<maze::Wall>(), maze::Direction::East);
    r2->set_side(d, maze::Direction::West);
    r2->set_side(std::make_shared<maze::Wall>(), maze::Direction::North);
    r2->set_side(std::make_shared<maze::Wall>(), maze::Direction::South);

    r3->set_side(std::make_shared<maze::Wall>(), maze::Direction::East);
    r3->set_side(std::make_shared<maze::Wall>(), maze::Direction::West);
    r3->set_side(std::make_shared<maze::Wall>(), maze::Direction::North);
    r3->set_side(std::make_shared<maze::Wall>(), maze::Direction::South);

    r4->set_side(std::make_shared<maze::Wall>(), maze::Direction::East);
    r4->set_side(std::make_shared<maze::Wall>(), maze::Direction::West);
    r4->set_side(std::make_shared<maze::Wall>(), maze::Direction::North);
    r4->set_side(std::make_shared<maze::Wall>(), maze::Direction::South);

    /*maze::Linear2dMazeStorage storage({ 2,2 });
    storage.add_room(r1);
    storage.add_room(r2);
    storage.add_room(r3);
    storage.add_room(r4);*/
    maze::Maze<maze::Size2D, maze::Linear2dMazeStorage> maze({ 2, 2 });
    maze.add_room(r1);
    maze.add_room(r2);
    maze.add_room(r3);
    maze.add_room(r4);

    system("PAUSE");
    return 0;
}