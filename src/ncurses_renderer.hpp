#pragma once

#include <vector>

namespace maze::engine
{
    class NcursesRenderer
    {
        public:
        void update_buffer(const std::vector<std::vector<char>>& content);
        char get_keyboard_input(void);
        void draw(void);

        private:
        std::vector<std::vector<char>> framebuffer;
    };
};